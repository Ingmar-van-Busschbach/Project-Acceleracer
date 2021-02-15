/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "IPAddress.h"
#include "EOSCoreOnlinesubsystemTypes.h"
#include "Network/EOSCoreUniqueNetId.h"

class FUniqueNetIdEOSCore;

class FEOSInternetAddr : public FInternetAddr
{
public:
	FUniqueNetIdEOSCore NetIdEOSCore;
	int32 Channel;
	FString AccountId;
public:
	FEOSInternetAddr() {}
	FEOSInternetAddr(int32 channel, FString accountId)
		: NetIdEOSCore(accountId)
		, Channel(channel)
		, AccountId(accountId)
	{}
	FEOSInternetAddr(const FEOSInternetAddr& Src)
		: NetIdEOSCore(Src.NetIdEOSCore)
		, Channel(Src.Channel)
		, AccountId(Src.AccountId)
	{}
public:
	virtual TArray<uint8> GetRawIp() const override;
	virtual void SetRawIp(const TArray<uint8>& RawAddr) override;
	virtual void SetIp(uint32 InAddr) override {}
	virtual void SetIp(const TCHAR* InAddr, bool& bIsValid) override;
	virtual void GetIp(uint32& OutAddr) const override { OutAddr = 0; }
	virtual void SetPort(int32 InPort) override;
	virtual void GetPort(int32& OutPort) const override { OutPort = Channel; }
	virtual int32 GetPort() const override { return Channel; }
	virtual void SetAnyAddress() override {}
	virtual void SetBroadcastAddress() override {}
	virtual void SetLoopbackAddress() override {}
	virtual FString ToString(bool bAppendPort) const override;
	virtual bool IsValid() const override;
	virtual TSharedRef<FInternetAddr> Clone() const override;
public:
	virtual bool operator==(const FInternetAddr& Other) const override
	{
		FEOSInternetAddr& SteamOther = (FEOSInternetAddr&)Other;
		return AccountId == SteamOther.AccountId;
	}
	bool operator!=(const FEOSInternetAddr& Other) const
	{
		return !(FEOSInternetAddr::operator==(Other));
	}
	virtual FName GetProtocolType() const override
	{
		return FNetworkProtocolTypes::EOSCore;
	}
	virtual uint32 GetTypeHash() const override
	{
		return ::GetTypeHash(ToString(true));
	}

	friend uint32 GetTypeHash(const FEOSInternetAddr& A)
	{
		return A.GetTypeHash();
	}
};
