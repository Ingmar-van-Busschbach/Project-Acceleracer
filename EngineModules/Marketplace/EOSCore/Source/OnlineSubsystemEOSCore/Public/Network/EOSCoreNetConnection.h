/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemTypes.h"
#include "IpConnection.h"
#include "EOSCoreOnlinesubsystemTypes.h"
#include "EOSCoreNetConnection.generated.h"

UCLASS(transient, config = Engine)
class ONLINESUBSYSTEMEOSCORE_API UEOSNetConnection : public UIpConnection
{
	GENERATED_BODY()
public:
	UEOSNetConnection();
public:
	virtual void InitBase(UNetDriver* InDriver, class FSocket* InSocket, const FURL& InURL, EConnectionState InState, int32 InMaxPacket /* = 0 */, int32 InPacketOverhead /* = 0 */) override;
	virtual void InitRemoteConnection(class UNetDriver* InDriver, class FSocket* InSocket, const FURL& InURL, const class FInternetAddr& InRemoteAddr, EConnectionState InState, int32 InMaxPacket = 0, int32 InPacketOverhead = 0) override;
	virtual void InitLocalConnection(class UNetDriver* InDriver, class FSocket* InSocket, const FURL& InURL, EConnectionState InState, int32 InMaxPacket = 0, int32 InPacketOverhead = 0) override;
	virtual void LowLevelSend(void* Data, int32 CountBits, FOutPacketTraits& Traits) override;
	virtual void CleanUp() override;
private:
	bool bUsingRelays;
};
