/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Network/EOSCoreNetDriver.h"
#include "Network/EOSCoreInternetAddr.h"
#include "Network/EOSCoreNetConnection.h"
#include "Utilities/EOSSubsystemHelpers.h"
#include "EOSPlatform.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
#include "OnlineSubsystemEOSCoreLogging.h"

UEOSNetDriver* UEOSNetDriver::NetDriver = nullptr;

class FIpConnectionHelper
{
private:
	friend class UEOSNetDriver;
	static void HandleSocketRecvError(UIpNetDriver* Driver, UIpConnection* Connection, const FString& ErrorString)
	{
		Connection->HandleSocketRecvError(Driver, ErrorString);
	}
};

bool UEOSNetDriver::InitBase(bool bInitAsClient, FNetworkNotify* InNotify, const FURL& URL, bool bReuseAddressAndPort, FString& Error)
{
	bUsingRelays = false;

	NetDriver = this;

	if (!FPlatform::IsLoggedIn())
	{
		LogError("User is not logged in, defaulting to IPv4");

		return Super::InitBase(bInitAsClient, InNotify, URL, bReuseAddressAndPort, Error);
	}
	else
	{
		if (!Super::InitBase(bInitAsClient, InNotify, URL, bReuseAddressAndPort, Error))
		{
			return false;
		}

		if (bInitAsClient && !URL.ToString(true).Contains(TEXT("eoscore.")))
		{
			return true;
		}

		EOS_HP2P m_P2P = EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle());

		{
			EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
			FCStringAnsi::Strncpy(m_SocketId.SocketName, "EOSCORE", 8);

			EOS_P2P_AddNotifyPeerConnectionRequestOptions m_Options = { EOS_P2P_ADDNOTIFYPEERCONNECTIONREQUEST_API_LATEST, EOSSubsystemHelpers::GetLoggedInUserByIndex(0), &m_SocketId };
			EOS_P2P_AddNotifyPeerConnectionRequest(m_P2P, &m_Options, nullptr, OnIncomingConnectionRequest);
		}
		{
			EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
			FCStringAnsi::Strncpy(m_SocketId.SocketName, "EOSCORE", 8);

			EOS_P2P_AddNotifyPeerConnectionClosedOptions m_Options = { EOS_P2P_ADDNOTIFYPEERCONNECTIONCLOSED_API_LATEST, EOSSubsystemHelpers::GetLoggedInUserByIndex(0), &m_SocketId };
			EOS_P2P_AddNotifyPeerConnectionClosed(m_P2P, &m_Options, nullptr, OnRemoteConnectionClosed);
		}

		bUsingRelays = true;

		return true;
	}

	return false;
}

bool UEOSNetDriver::InitConnect(FNetworkNotify* InNotify, const FURL& ConnectURL, FString& Error)
{	
	if (!FPlatform::IsLoggedIn())
	{
		LogError("User is not logged in, defaulting to IPv4");

		return Super::InitConnect(InNotify, ConnectURL, Error);
	}

	NetDriver = this;

	if (!InitBase(true, InNotify, ConnectURL, false, Error))
	{
		LogError("UEOSNetDriver failed to initialize! %s", *Error);
		return false;
	}

	if (!ConnectURL.ToString(false).Contains(TEXT("eoscore.")))
	{
		return Super::InitConnect(InNotify, ConnectURL, Error);
	}

	const FString& m_RemoteHost = ConnectURL.Host.RightChop(8);

	if (m_RemoteHost.Contains(FPlatform::GetLocalProductIdString()))
	{
		LogError("Attempted to establish a connection to yourself!");

		return false;
	}

	bUsingRelays = true; 

	ServerConnection = NewObject<UEOSNetConnection>();
#if ENGINE_MINOR_VERSION >= 25
	ServerConnection->InitLocalConnection(this, GetSocket(), ConnectURL, USOCK_Pending);
#else
	ServerConnection->InitLocalConnection(this, Socket, ConnectURL, USOCK_Pending);
#endif
	CreateInitialClientChannels();

	return true;
}

bool UEOSNetDriver::InitListen(FNetworkNotify* InNotify, FURL& ListenURL, bool bReuseAddressAndPort, FString& Error)
{
	if (!FPlatform::IsLoggedIn())
	{
		LogError("User is not logged in, defaulting to IPv4");

		return Super::InitListen(InNotify, ListenURL, bReuseAddressAndPort, Error);
	}

	if (!InitBase(false, InNotify, ListenURL, bReuseAddressAndPort, Error))
	{
		LogError("InitListen failed while setting up base information");

		return false;
	}

	InitConnectionlessHandler();

	if (!Super::InitListen(InNotify, ListenURL, bReuseAddressAndPort, Error))
	{
		return false;
	}

	bUsingRelays = true;

	return true;
}

void UEOSNetDriver::TickDispatch(float DeltaTime)
{
	if (!bUsingRelays)
	{
		return Super::TickDispatch(DeltaTime);
	}

	UNetDriver::TickDispatch(DeltaTime);

	LLM_SCOPE(ELLMTag::Networking);

#if !UE_BUILD_SHIPPING
	PauseReceiveEnd = (PauseReceiveEnd != 0.f && PauseReceiveEnd - (float)FPlatformTime::Seconds() > 0.f) ? PauseReceiveEnd : 0.f;

	if (PauseReceiveEnd != 0.f)
	{
		return;
	}
#endif

	const int32 FoundCollectionIndex = World ? World->GetLevelCollections().IndexOfByPredicate([this](const FLevelCollection& Collection)
		{
			return Collection.GetNetDriver() == this;
		}) : INDEX_NONE;

	FScopedLevelCollectionContextSwitch LCSwitch(FoundCollectionIndex, World);

	DDoS.PreFrameReceive(DeltaTime);

	bool bContinueProcessing(true);

	const double StartReceiveTime = FPlatformTime::Seconds();
	double AlarmTime = StartReceiveTime + 1.0f;
	const bool bSlowFrameChecks = OnNetworkProcessingCausingSlowFrame.IsBound();

	const bool bCheckReceiveTime = false;

	// Process all incoming packets
	for (FCorePacketIterator It(this); It && bContinueProcessing; ++It)
	{
		// @todo: Remove the slow frame checks, eventually - potential DDoS and Switch platform constraint
		if (bSlowFrameChecks)
		{
			const double CurrentTime = FPlatformTime::Seconds();
			if (CurrentTime > AlarmTime)
			{
				OnNetworkProcessingCausingSlowFrame.Broadcast();

				AlarmTime = CurrentTime + 1.0f;
			}
		}

		uint8* Data = nullptr;
		int32 BytesRead = 0;
		ESocketErrors Error = SE_NO_ERROR;
		TSharedPtr<FInternetAddr> FromAddrPtr;

		bool bOk = It.GetCurrentPacket((const uint8*&)Data, (uint32&)BytesRead, Error, FromAddrPtr);
		TSharedRef<FInternetAddr> FromAddr = FromAddrPtr.ToSharedRef();
		UNetConnection* Connection = nullptr;
		UIpConnection* const MyServerConnection = GetServerConnection();

		if (bOk)
		{
			// Immediately stop processing (continuing to next receive), for empty packets (usually a DDoS)
			if (BytesRead == 0)
			{
				DDoS.IncBadPacketCounter();
				continue;
			}

			FPacketAudit::NotifyLowLevelReceive(Data, BytesRead);
		}
		else
		{
			if (IsRecvFailBlocking(Error))
			{
				// No data or no error? (SE_ECONNABORTED is for PS4 LAN cable pulls)
				break;
			}
			else if (Error != SE_ECONNRESET && Error != SE_UDP_ERR_PORT_UNREACH)
			{
				// MalformedPacket: Client tried receiving a packet that exceeded the maximum packet limit
				// enforced by the server
				if (Error == SE_EMSGSIZE)
				{
					DDoS.IncBadPacketCounter();

					if (MyServerConnection)
					{
						if (MyServerConnection->RemoteAddr->CompareEndpoints(*FromAddr))
						{
							Connection = MyServerConnection;
						}
						else
						{
							UE_LOG(LogNet, Log, TEXT("Received packet with bytes > max MTU from an incoming IP address that doesn't match expected server address: Actual: %s Expected: %s"),
								*FromAddr->ToString(true),
								MyServerConnection->RemoteAddr.IsValid() ? *MyServerConnection->RemoteAddr->ToString(true) : TEXT("Invalid"));
							continue;
						}
					}

					if (Connection != nullptr)
					{
						UE_SECURITY_LOG(Connection, ESecurityEvent::Malformed_Packet, TEXT("Received Packet with bytes > max MTU"));
					}
				}
				else
				{
					DDoS.IncErrorPacketCounter();
				}

				FString ErrorString = FString::Printf(TEXT("UIpNetDriver::TickDispatch: Socket->RecvFrom: %i (%s) from %s"),
					static_cast<int32>(Error),
					GetSocketSubsystem()->GetSocketError(Error),
					*FromAddr->ToString(true));


				// This should only occur on clients - on servers it leaves the NetDriver in an invalid/vulnerable state
				if (MyServerConnection != nullptr)
				{
					// TODO: Maybe we should check to see whether or not the From address matches the server?
					// If not, we could forward errors incorrectly, causing the connection to shut down.

					FIpConnectionHelper::HandleSocketRecvError(this, MyServerConnection, ErrorString);
					break;
				}
				else
				{
					// TODO: Should we also forward errors to connections here?
					// If we did, instead of just shutting down the NetDriver completely we could instead
					// boot the given connection.
					// May be DDoS concerns with the cost of looking up the connections for malicious packets
					// from sources that won't have connections.
					UE_CLOG(!DDoS.CheckLogRestrictions(), LogNet, Warning, TEXT("%s"), *ErrorString);
				}

				// Unexpected packet errors should continue to the next iteration, rather than block all further receives this tick
				continue;
			}
		}

		// Figure out which socket the received data came from.
		if (MyServerConnection)
		{
			if (MyServerConnection->RemoteAddr->CompareEndpoints(*FromAddr))
			{
				Connection = MyServerConnection;
			}
			else
			{
				UE_LOG(LogNet, Warning, TEXT("Incoming ip address doesn't match expected server address: Actual: %s Expected: %s"),
					*FromAddr->ToString(true),
					MyServerConnection->RemoteAddr.IsValid() ? *MyServerConnection->RemoteAddr->ToString(true) : TEXT("Invalid"));
			}
		}

		bool bRecentlyDisconnectedClient = false;

		if (Connection == nullptr)
		{
			UNetConnection** Result = MappedClientConnections.Find(FromAddr);

			if (Result != nullptr)
			{
				UNetConnection* ConnVal = *Result;

				if (ConnVal != nullptr)
				{
					Connection = ConnVal;
				}
				else
				{
					bRecentlyDisconnectedClient = true;
				}
			}
			check(Connection == nullptr || CastChecked<UIpConnection>(Connection)->RemoteAddr->CompareEndpoints(*FromAddr));
		}

		if (bOk == false)
		{
			if (Connection)
			{
				if (Connection != GetServerConnection())
				{
					// We received an ICMP port unreachable from the client, meaning the client is no longer running the game
					// (or someone is trying to perform a DoS attack on the client)

					// rcg08182002 Some buggy firewalls get occasional ICMP port
					// unreachable messages from legitimate players. Still, this code
					// will drop them unceremoniously, so there's an option in the .INI
					// file for servers with such flakey connections to let these
					// players slide...which means if the client's game crashes, they
					// might get flooded to some degree with packets until they timeout.
					// Either way, this should close up the usual DoS attacks.
					if ((Connection->State != USOCK_Open) || (!AllowPlayerPortUnreach))
					{
						if (LogPortUnreach)
						{
							UE_LOG(LogNet, Log, TEXT("Received ICMP port unreachable from client %s.  Disconnecting."),
								*FromAddr->ToString(true));
						}
						Connection->CleanUp();
					}
				}
			}
			else
			{
				bRecentlyDisconnectedClient ? DDoS.IncDisconnPacketCounter() : DDoS.IncNonConnPacketCounter();

				if (LogPortUnreach && !DDoS.CheckLogRestrictions())
				{
					UE_LOG(LogNet, Log, TEXT("Received ICMP port unreachable from %s.  No matching connection found."),
						*FromAddr->ToString(true));
				}
			}
		}
		else
		{
			bool bIgnorePacket = false;

			// If we didn't find a client connection, maybe create a new one.
			if (Connection == nullptr)
			{
				if (DDoS.IsDDoSDetectionEnabled())
				{
					// If packet limits were reached, stop processing
					if (DDoS.ShouldBlockNonConnPackets())
					{
						DDoS.IncDroppedPacketCounter();
						continue;
					}


					bRecentlyDisconnectedClient ? DDoS.IncDisconnPacketCounter() : DDoS.IncNonConnPacketCounter();

					DDoS.CondCheckNonConnQuotasAndLimits();
				}

				// Determine if allowing for client/server connections
				const bool bAcceptingConnection = Notify != nullptr && Notify->NotifyAcceptingConnection() == EAcceptConnection::Accept;

				if (bAcceptingConnection)
				{
					UE_CLOG(!DDoS.CheckLogRestrictions(), LogNet, Log, TEXT("NotifyAcceptingConnection accepted from: %s"), *FromAddr->ToString(true));

					Connection = ProcessConnectionlessPacket(FromAddr, Data, BytesRead);

					bIgnorePacket = BytesRead == 0;
				}
				else
				{
					UE_LOG(LogNet, VeryVerbose, TEXT("NotifyAcceptingConnection denied from: %s"), *FromAddr->ToString(true));
				}
			}

			// Send the packet to the connection for processing.
			if (Connection != nullptr && !bIgnorePacket)
			{
				if (DDoS.IsDDoSDetectionEnabled())
				{
					DDoS.IncNetConnPacketCounter();
					DDoS.CondCheckNetConnLimits();
				}

				Connection->ReceivedRawPacket(Data, BytesRead);
			}
		}
	}

	DDoS.PostFrameReceive();

	const float DeltaReceiveTime = FPlatformTime::Seconds() - StartReceiveTime;

	if (DeltaReceiveTime > 10.f)
	{
		UE_LOG(LogNet, Warning, TEXT("UIpNetDriver::TickDispatch: Took too long to receive packets. Time: %2.2f %s"), DeltaReceiveTime, *GetName());
	}
}

void UEOSNetDriver::LowLevelSend(TSharedPtr<const FInternetAddr> Address, void* Data, int32 CountBits, FOutPacketTraits& Traits)
{
	if (!bUsingRelays)
	{ 
		return Super::LowLevelSend(Address, Data, CountBits, Traits);
	}
	
	const uint8* DataToSend = reinterpret_cast<uint8*>(Data);

	if (ConnectionlessHandler.IsValid())
	{
		const ProcessedPacket ProcessedData = ConnectionlessHandler->OutgoingConnectionless(Address, (uint8*)DataToSend, CountBits, Traits);

		if (!ProcessedData.bError)
		{
			DataToSend = ProcessedData.Data;
			CountBits = ProcessedData.CountBits;
		}
		else
		{
			CountBits = 0;
		}
	}

	int32 BytesSent = 0;

	if (CountBits > 0)
	{
		CLOCK_CYCLES(SendCycles);

		BytesSent = 0;

		EOS_HP2P m_P2P = EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle());

		if (m_P2P)
		{
			EOSResult m_Result = EOSResult::EOS_ServiceFailure;

			TArray<uint8> m_Data;
			m_Data.Append(DataToSend, FMath::DivideAndRoundUp(CountBits, 8));

			EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST, "EOSCORE" };
			EOS_P2P_SendPacketOptions m_Options = { EOS_P2P_SENDPACKET_API_LATEST, EOSSubsystemHelpers::GetLoggedInUserByIndex(0), EOSSubsystemHelpers::ProductIdFromString(Address->ToString(false)), &m_SocketId, static_cast<uint8_t>(Address->GetPort()), static_cast<uint32_t>(FMath::DivideAndRoundUp(CountBits, 8)), m_Data.GetData(), true, EOS_EPacketReliability::EOS_PR_UnreliableUnordered };

			EOS_P2P_SendPacket(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options);

			if (m_Result == EOSResult::EOS_Success)
			{
				BytesSent = FMath::DivideAndRoundUp(CountBits, 8);

				LogVeryVerbose("%i bytes sent to: %s", m_Data.Num(), *Address->ToString(false));
			}
		}

		UNCLOCK_CYCLES(SendCycles);
	}
}

void UEOSNetDriver::OnIncomingConnectionRequest(const EOS_P2P_OnIncomingConnectionRequestInfo* data)
{
	EOS_HP2P m_P2P = EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle());

	EOS_P2P_AcceptConnectionOptions m_Options = { EOS_P2P_ACCEPTCONNECTION_API_LATEST, data->LocalUserId, data->RemoteUserId, data->SocketId };

	EOS_EResult m_Result = EOS_P2P_AcceptConnection(m_P2P, &m_Options);

	if (m_Result == EOS_EResult::EOS_Success)
	{
		FString m_RemotePeer;
		EOSSubsystemHelpers::ProductIdToString(data->RemoteUserId, m_RemotePeer);
		LogVerbose("Accepted new incoming connection from: %s, SocketId: %s", *m_RemotePeer, UTF8_TO_TCHAR(data->SocketId));
	}
}

void UEOSNetDriver::OnRemoteConnectionClosed(const EOS_P2P_OnRemoteConnectionClosedInfo* data)
{
	FString m_Local;
	FString m_Remote;

	EOSSubsystemHelpers::ProductIdToString(data->LocalUserId, m_Local);
	EOSSubsystemHelpers::ProductIdToString(data->RemoteUserId, m_Remote);

	for (int32 i = 0; i < NetDriver->ClientConnections.Num(); i++)
	{
		if (UIpConnection* m_Connection = (UIpConnection*)NetDriver->ClientConnections[i])
		{
			if (m_Connection->RemoteAddr->ToString(false) == m_Remote)
			{
				m_Connection->State = USOCK_Closed;

				LogVerbose("Closed connection with: %s", *m_Remote);
			}
		}
	}
}

FCorePacketIterator::FCorePacketIterator(UIpNetDriver* InDriver)
	: bBreak(false)
	, Driver(InDriver)
	, DDoS(Driver->DDoS)
	, SocketSubsystem(Driver->GetSocketSubsystem())
#if ENGINE_MINOR_VERSION >= 25
	, Socket(Driver->GetSocket())
#else
	, Socket(Driver->Socket)
#endif
	, CurrentPacket()
{
	if (SocketSubsystem != nullptr)
	{
		CurrentPacket.Address = MakeShareable(new FEOSInternetAddr());
	}

	AdvanceCurrentPacket();
}

bool FCorePacketIterator::ReceiveSinglePacket()
{
	bool bReceivedPacketOrError = false;

	CurrentPacket.bRecvSuccess = false;
	CurrentPacket.Data.SetNumUninitialized(0, false);

	if (CurrentPacket.Address.IsValid())
	{
		CurrentPacket.Address->SetAnyAddress();
	}

	CurrentPacket.PacketTimestamp = 0.0;
	CurrentPacket.Error = SE_NO_ERROR;

	while (true)
	{
		bReceivedPacketOrError = false;

		if (Socket != nullptr && SocketSubsystem != nullptr)
		{
			int32 BytesRead = 0;
			bool bReceivedPacket = false;
			uint32 m_PendingDataSize = EOSSubsystemHelpers::GetPendingDataSize((int32)EEOSChannelType::DATA_SUBSYSTEM, FPlatform::GetLocalProductIdString());

			if (m_PendingDataSize > 0)
			{
				if (EOS_HP2P m_P2P = EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()))
				{
					TArray<uint8> m_Data;

					m_Data.SetNum(m_PendingDataSize);

					EOS_EResult m_Result = EOS_EResult::EOS_ServiceFailure;

					const uint8_t m_Channel = (int32)EEOSChannelType::DATA_SUBSYSTEM;
					EOS_P2P_ReceivePacketOptions m_Options = { EOS_P2P_RECEIVEPACKET_API_LATEST, EOSSubsystemHelpers::GetLoggedInUserByIndex(0), m_PendingDataSize, &m_Channel };

					EOS_ProductUserId OutPeerId;
					EOS_P2P_SocketId OutSocketId;
					uint8_t OutChannel = 0;
					uint32_t OutBytesWritten = 0;

					if (EOS_P2P_ReceivePacket(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, &OutPeerId, &OutSocketId, &OutChannel, m_Data.GetData(), &OutBytesWritten) == EOS_EResult::EOS_Success)
					{
						CurrentPacket.OutPeerId = OutPeerId;
						CurrentPacket.OutSocketId = OutSocketId;

						m_Data.SetNum(OutBytesWritten);
						BytesRead = OutBytesWritten;

						FString m_PeerString;
						EOSSubsystemHelpers::ProductIdToString(OutPeerId, m_PeerString);
						
						bool bIsValid = false;
						CurrentPacket.Address->SetIp(*m_PeerString, bIsValid);
						CurrentPacket.Address->SetPort(OutChannel);

						FMemory::Memcpy(CurrentPacket.Data.GetData(), m_Data.GetData(), OutBytesWritten);

						LogVeryVerbose("%d/%d bytes received from: %s", OutBytesWritten, m_PendingDataSize, *m_PeerString);

						bReceivedPacket = true;
					}
				}
			}

			CurrentPacket.bRecvSuccess = bReceivedPacket;
			bReceivedPacketOrError = bReceivedPacket;

			if (bReceivedPacket)
			{
				// Fixed allocator, so no risk of realloc from copy-then-resize
				CurrentPacket.Data.SetNumUninitialized(BytesRead, false);
			}
			else
			{
				ESocketErrors CurError = SocketSubsystem->GetLastErrorCode();

				CurrentPacket.Error = CurError;
				CurrentPacket.Data.SetNumUninitialized(0, false);

				// Received an error
				if (!UEOSNetDriver::IsRecvFailBlocking(CurError))
				{
					bReceivedPacketOrError = true;
				}
			}

			// Very-early-out - the NetConnection per frame time limit, limits all packet processing
			if (bReceivedPacketOrError && DDoS.ShouldBlockNetConnPackets())
			{
				if (bReceivedPacket)
				{
					DDoS.IncDroppedPacketCounter();
				}

				continue;
			}
		}

		// While loop only exists to allow 'continue' for DDoS and invalid packet code, above
		break;
	}

	return bReceivedPacketOrError;
}