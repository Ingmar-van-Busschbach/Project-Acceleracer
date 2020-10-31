/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "EOSCoreOnlinesubsystemTypes.h"
#include "eos_common.h"
#include "eos_p2p_types.h"
#include "P2P/EOSP2PTypes.h"
#include "Core/EOSTypes.h"
#include "EOSCoreNetDriver.generated.h"

class FEOSSocket;

/**
 * FPacketItrator
 *
 * Encapsulates the NetDriver TickDispatch code required for executing all variations of packet receives
 * (FSocket::RecvFrom, FSocket::RecvMulti, and the Receive Thread),
 * as well as implementing/abstracting-away some of the outermost (non-NetConnection-related) parts of the DDoS detection code.
 */
class FCorePacketIterator
{
	friend class UEOSNetDriver;

private:
	struct FCachedPacket
	{
		/** Whether or not socket receive succeeded. Don't rely on the Error field for this, due to implementation/platform uncertainties. */
		bool bRecvSuccess;

		/** Pre-allocated Data field, for storing packets of any expected size */
		TArray<uint8, TFixedAllocator<MAX_PACKET_SIZE>> Data;

		/** Receive address for the packet */
		TSharedPtr<FInternetAddr> Address;

		/** OS-level timestamp for the packet receive, if applicable */
		double PacketTimestamp;

		/** Error if receiving a packet failed */
		ESocketErrors Error;

		/* Chanel */
		int32 Channel;
		FEOSProductUserId OutPeerId;
		FEOSP2PSocketId OutSocketId;
	};

private:
	FCorePacketIterator(UIpNetDriver* InDriver);

	FORCEINLINE FCorePacketIterator& operator++()
	{
		AdvanceCurrentPacket();

		return *this;
	}

	FORCEINLINE explicit operator bool() const
	{
		return !bBreak;
	}


	/**
	 * Retrieves the packet information from the current iteration. Avoid calling more than once, per iteration.
	 *
	 * @param OutData		Returns a pointer to the packet data
	 * @param OutBytesRead	Returns the number of bytes read
	 * @param OutError		Returns the socket error, if receiving failed
	 * @param OutAddr		Returns the address the packet was received from
	 * @return				Returns whether or not receiving was successful for the current packet
	 */
	bool GetCurrentPacket(const uint8*& OutData, uint32& OutBytesRead, ESocketErrors& OutError, TSharedPtr<FInternetAddr>& OutAddr)
	{
		bool bRecvSuccess = false;

		OutData = CurrentPacket.Data.GetData();
		OutBytesRead = CurrentPacket.Data.Num();
		OutError = CurrentPacket.Error;
		OutAddr = CurrentPacket.Address;
		bRecvSuccess = CurrentPacket.bRecvSuccess;

		return bRecvSuccess;
	}

	/**
	 * Advances the current packet to the next iteration
	 */
	void AdvanceCurrentPacket()
	{
		bBreak = !ReceiveSinglePacket();
	}

	/**
	 * Receives a single packet from the network socket, outputting to the CurrentPacket buffer.
	 *
	 * @return				Whether or not a packet or an error was successfully received
	 */
	bool ReceiveSinglePacket();


private:
	/** Specified internally, when the packet iterator should break/stop (no packets, DDoS limits triggered, etc.) */
	bool bBreak;

	UIpNetDriver* Driver;
	FDDoSDetection& DDoS;
	ISocketSubsystem* SocketSubsystem;
	FSocket* Socket;
	FCachedPacket CurrentPacket;
};

UCLASS(transient, config = Engine)
class ONLINESUBSYSTEMEOSCORE_API UEOSNetDriver : public UIpNetDriver
{
	GENERATED_BODY()
public:
	//TArray<FSocket*> Connections;
	static UEOSNetDriver* NetDriver;
public:
	virtual bool InitBase(bool bInitAsClient, FNetworkNotify* InNotify, const FURL& URL, bool bReuseAddressAndPort, FString& Error) override;
	virtual bool InitConnect(FNetworkNotify* InNotify, const FURL& ConnectURL, FString& Error) override;
	virtual bool InitListen(FNetworkNotify* InNotify, FURL& ListenURL, bool bReuseAddressAndPort, FString& Error) override;
	virtual void TickDispatch(float DeltaTime) override;
	virtual void LowLevelSend(TSharedPtr<const FInternetAddr> Address, void* Data, int32 CountBits, FOutPacketTraits& Traits) override;
	static bool IsRecvFailBlocking(ESocketErrors Error)
	{
		// SE_ECONNABORTED is for PS4 LAN cable pulls, SE_ENETDOWN is for a Switch hang
		return Error == SE_NO_ERROR || Error == SE_EWOULDBLOCK || Error == SE_ECONNABORTED || Error == SE_ENETDOWN;
	};
private:
	static void OnIncomingConnectionRequest(const EOS_P2P_OnIncomingConnectionRequestInfo* data);
	static void OnRemoteConnectionClosed(const EOS_P2P_OnRemoteConnectionClosedInfo* Data);
private:
	bool bUsingRelays;
};