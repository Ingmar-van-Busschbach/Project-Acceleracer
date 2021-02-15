/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemTypes.h"

#ifndef EOSCORE_SUBSYSTEM
#define EOSCORE_SUBSYSTEM FName(TEXT("EOSCORE"))
#endif

namespace FNetworkProtocolTypes
{
	ONLINESUBSYSTEMEOSCORE_API extern const FName EOSCore;
}

DECLARE_LOG_CATEGORY_EXTERN(LogEOSSubsystem, Log, All);

typedef TSharedPtr<class FOnlineSubsystemEOSCore, ESPMode::ThreadSafe> FOnlineSubsystemEOSCorePtr;
class FOnlineSessionEOSCore;

class FOnlineSessionInfoEOSCore : public FOnlineSessionInfo
{
protected:
	FOnlineSessionInfoEOSCore(const FOnlineSessionInfoEOSCore& Src){}
	FOnlineSessionInfoEOSCore& operator=(const FOnlineSessionInfoEOSCore& Src) { return *this; }

PACKAGE_SCOPE:
	FOnlineSessionInfoEOSCore();
	TSharedPtr<class FInternetAddr> HostAddr;
	TSharedPtr<FUniqueNetId const> SessionId;
public:
	virtual ~FOnlineSessionInfoEOSCore() {}

	bool operator==(const FOnlineSessionInfoEOSCore& Other) const {return false;}

	virtual const uint8* GetBytes() const override
	{
		return nullptr;
	}

	virtual int32 GetSize() const override
	{
		return sizeof(uint64) + sizeof(TSharedPtr<class FInternetAddr>);
	}

	virtual bool IsValid() const override
	{
		return HostAddr.IsValid() && HostAddr->IsValid();
	}

	virtual FString ToString() const override
	{
		return SessionId->ToString();
	}

	virtual FString ToDebugString() const override
	{
		return FString::Printf(TEXT("HostIP: %s SessionId: %s"),
			HostAddr.IsValid() ? *HostAddr->ToString(true) : TEXT("INVALID"),
			*SessionId->ToDebugString());
	}

	virtual const FUniqueNetId& GetSessionId() const override
	{
		return *SessionId;
	}
};

struct FSessionsStartSessionCallbackInfo
{
	FSessionsStartSessionCallbackInfo(FOnlineSubsystemEOSCore* subsystem, FOnlineSessionEOSCore* interface, FName sessionName)
		: Subsystem(subsystem), SessionInterface(interface), SessionName(sessionName) {}

	FOnlineSubsystemEOSCore* Subsystem;
	FOnlineSessionEOSCore* SessionInterface;
	FName SessionName;
};

struct FSessionsUpdateSessionCallbackInfo
{
	FSessionsUpdateSessionCallbackInfo(FOnlineSubsystemEOSCore* subsystem, FOnlineSessionEOSCore* interface, FName sessionName)
		: Subsystem(subsystem), SessionInterface(interface), SessionName(sessionName) {}

	FOnlineSubsystemEOSCore* Subsystem;
	FOnlineSessionEOSCore* SessionInterface;
	FName SessionName;
};

struct FSessionsEndSessionCallbackInfo
{
	FSessionsEndSessionCallbackInfo(FOnlineSubsystemEOSCore* subsystem, FOnlineSessionEOSCore* interface, FName sessionName)
		: Subsystem(subsystem), SessionInterface(interface), SessionName(sessionName) {}

	FOnlineSubsystemEOSCore* Subsystem;
	FOnlineSessionEOSCore* SessionInterface;
	FName SessionName;
};

struct FSessionSearchFindCallbackInfo
{
	FSessionSearchFindCallbackInfo(FOnlineSubsystemEOSCore* subsystem, FOnlineSessionEOSCore* interface)
		: Subsystem(subsystem), SessionInterface(interface) {}

	FOnlineSubsystemEOSCore* Subsystem;
	FOnlineSessionEOSCore* SessionInterface;
};

struct FSessionsRegisterPlayersCallbackInfo
{
	FSessionsRegisterPlayersCallbackInfo(FOnlineSubsystemEOSCore* subsystem, FOnlineSessionEOSCore* interface, FName sessionName, TArray<TSharedRef<const FUniqueNetId>> arr)
		: Subsystem(subsystem), SessionInterface(interface), SessionName(sessionName), RegisteredPlayers(arr)
	{}

	FOnlineSubsystemEOSCore* Subsystem;
	FOnlineSessionEOSCore* SessionInterface;
	FName SessionName;
	TArray<TSharedRef<const FUniqueNetId>> RegisteredPlayers;
};

struct FSessionsJoinSessionCallbackInfo
{
	FSessionsJoinSessionCallbackInfo(FOnlineSubsystemEOSCore* subsystem, FOnlineSessionEOSCore* interface, FName sessionName, EOS_SessionDetails_Info* sessionInfo)
		: Subsystem(subsystem), SessionInterface(interface), SessionName(sessionName), SessionInfo(sessionInfo) {}

	FOnlineSubsystemEOSCore* Subsystem;
	FOnlineSessionEOSCore* SessionInterface;
	FName SessionName;
	EOS_SessionDetails_Info* SessionInfo;
};

struct FSessionsDestroySessionCallbackInfo
{
	FSessionsDestroySessionCallbackInfo(FOnlineSubsystemEOSCore* subsystem, FOnlineSessionEOSCore* interface, FName sessionName)
		: Subsystem(subsystem), SessionInterface(interface), SessionName(sessionName) {}

	FOnlineSubsystemEOSCore* Subsystem;
	FOnlineSessionEOSCore* SessionInterface;
	FName SessionName;
};