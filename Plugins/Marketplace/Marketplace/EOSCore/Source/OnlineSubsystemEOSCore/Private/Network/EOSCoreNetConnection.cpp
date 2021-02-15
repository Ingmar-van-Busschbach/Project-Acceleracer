/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Network/EOSCoreNetConnection.h"
#include "Network/EOSCoreNetDriver.h"
#include "Network/EOSCoreInternetAddr.h"
#include "Utilities/EOSSubsystemHelpers.h"
#include "EOSPlatform.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
#include "OnlineSubsystemEOSCoreLogging.h"

static const int32 MAX_PACKET = 1024;

// Size of a UDP header.
#define IP_HEADER_SIZE     (20)
#define UDP_HEADER_SIZE    (IP_HEADER_SIZE+8)

UEOSNetConnection::UEOSNetConnection() 
	: bUsingRelays(false) 
	{
#if ENGINE_MINOR_VERSION > 24
		DisableAddressResolution();
#endif
	}

void UEOSNetConnection::InitBase(UNetDriver* InDriver, class FSocket* InSocket, const FURL& InURL, EConnectionState InState, int32 InMaxPacket /* = 0 */, int32 InPacketOverhead /* = 0 */)
{
	// Pass the call up the chain
	Super::InitBase(InDriver, InSocket, InURL, InState,
		// Use the default packet size/overhead unless overridden by a child class
		(InMaxPacket == 0 || InMaxPacket > MAX_PACKET_SIZE) ? MAX_PACKET_SIZE : InMaxPacket,
		InPacketOverhead == 0 ? UDP_HEADER_SIZE : InPacketOverhead);

	Socket = InSocket;
}

void UEOSNetConnection::InitLocalConnection(UNetDriver* InDriver, FSocket* InSocket, const FURL& InURL, EConnectionState InState, int32 InMaxPacket, int32 InPacketOverhead)
{
	if (!InURL.ToString(false).Contains(TEXT("eoscore.")))
	{
		bUsingRelays = false;

		return Super::InitLocalConnection(InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead);
	}

	bUsingRelays = true;

	InitBase(InDriver, InSocket, InURL, InState,
		// Use the default packet size/overhead unless overridden by a child class
		(InMaxPacket == 0 || InMaxPacket > MAX_PACKET_SIZE) ? MAX_PACKET_SIZE : InMaxPacket,
		InPacketOverhead == 0 ? UDP_HEADER_SIZE : InPacketOverhead);

	RemoteAddr = MakeShareable(new FEOSInternetAddr(InURL.Port, *InURL.Host.RightChop(8)));

	InitSendBuffer();
}

void UEOSNetConnection::LowLevelSend(void* Data, int32 CountBits, FOutPacketTraits& Traits)
{
	if (!bUsingRelays) 
	{ 
		return Super::LowLevelSend(Data, CountBits, Traits);
	}

	const uint8* SendData = reinterpret_cast<const uint8*>(Data);

	if (Handler.IsValid() && !Handler->GetRawSend())
	{
		const ProcessedPacket ProcessedData = Handler->Outgoing(reinterpret_cast<uint8*>(Data), CountBits, Traits);

		if (!ProcessedData.bError)
		{
			SendData = ProcessedData.Data;
			CountBits = ProcessedData.CountBits;
		}
		else
		{
			CountBits = 0;
		}
	}

	int32 BytesSent = 0;
	int32 BytesToSend = FMath::DivideAndRoundUp(CountBits, 8);

	bool bBlockSend = false;

#if !UE_BUILD_SHIPPING
	LowLevelSendDel.ExecuteIfBound((void*)SendData, BytesToSend, bBlockSend);
#endif

	if (!bBlockSend)
	{
		FPacketAudit::NotifyLowLevelSend((uint8*)SendData, BytesToSend, CountBits);
	}

	if (BytesToSend > 0 && !bBlockSend)
	{
		EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
		FCStringAnsi::Strncpy(m_SocketId.SocketName, "EOSCORE", 8);
		BytesSent = BytesToSend;
		
		EOS_P2P_SendPacketOptions m_Options = { EOS_P2P_SENDPACKET_API_LATEST, EOSSubsystemHelpers::GetLoggedInUserByIndex(0), EOSSubsystemHelpers::ProductIdFromString(RemoteAddr->ToString(false)), &m_SocketId, (int32)EEOSChannelType::DATA_SUBSYSTEM, static_cast<uint32_t>(BytesToSend), SendData, true, EOS_EPacketReliability::EOS_PR_UnreliableUnordered };

		EOS_P2P_SendPacket(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options);

		LogVeryVerbose("%d bytes sent to: %s", BytesToSend, *RemoteAddr->ToString(false));
	}
}

void UEOSNetConnection::CleanUp()
{
	EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
	FCStringAnsi::Strncpy(m_SocketId.SocketName, "EOSCORE", 8);

	EOS_ProductUserId m_RemoteUserId = EOSSubsystemHelpers::ProductIdFromString(RemoteAddr->ToString(false));

	EOS_P2P_CloseConnectionOptions m_Options = { EOS_P2P_CLOSECONNECTION_API_LATEST, FPlatform::GetLocalProductId(), m_RemoteUserId, &m_SocketId };
	EOS_EResult m_CloseConnectionResult = EOS_P2P_CloseConnection(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options);

	LogVeryVerbose("Closed Connection with: %s, Result: %s", *RemoteAddr->ToString(false), *FString(EOS_EResult_ToString(m_CloseConnectionResult)));

	Super::CleanUp();
}

void UEOSNetConnection::InitRemoteConnection(UNetDriver* InDriver, FSocket* InSocket, const FURL& InURL, const FInternetAddr& InRemoteAddr, EConnectionState InState, int32 InMaxPacket, int32 InPacketOverhead)
{
	bUsingRelays = InRemoteAddr.ToString(false).Len() > 25;

	if (!bUsingRelays)
	{
		return Super::InitRemoteConnection(InDriver, InSocket, InURL, InRemoteAddr, InState, InMaxPacket, InPacketOverhead);
	}

	LogVeryVerbose("Host: %s | Remote Addr: %s", *InURL.Host, *InRemoteAddr.ToString(false));

	InitBase(InDriver, InSocket, InURL, InState,
		// Use the default packet size/overhead unless overridden by a child class
		(InMaxPacket == 0 || InMaxPacket > MAX_PACKET_SIZE) ? MAX_PACKET_SIZE : InMaxPacket,
		InPacketOverhead == 0 ? UDP_HEADER_SIZE : InPacketOverhead);

	RemoteAddr = InRemoteAddr.Clone();

	// Initialize our send bunch
	InitSendBuffer();

	// This is for a client that needs to log in, setup ClientLoginState and ExpectedClientLoginMsgType to reflect that
	SetClientLoginState(EClientLoginState::LoggingIn);
	SetExpectedClientLoginMsgType(NMT_Hello);
}