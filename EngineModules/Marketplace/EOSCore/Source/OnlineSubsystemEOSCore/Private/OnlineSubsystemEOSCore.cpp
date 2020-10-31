/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlineSubsystemEOSCore.h"
#include "Interfaces/OnlineIdentityInterfaceEOSCore.h"
#include "Interfaces/OnlineSessionInterfaceEOSCore.h"
#include "Interfaces/OnlinePresenceInterfaceEOSCore.h"
#include "Interfaces/OnlineUserInterfaceEOSCore.h"
#include "Interfaces/OnlineFriendsInterfaceEOSCore.h"
#include "Interfaces/OnlineAchievementsInterfaceEOSCore.h"
#include "EOSPlatform.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"

FOnlineSubsystemEOSCore::FOnlineSubsystemEOSCore(FName InInstanceName)
	:FOnlineSubsystemImpl(EOSCORE_SUBSYSTEM, InInstanceName)
	, bAttemptedAutoLogin(false)
{}

void FOnlineSubsystemEOSCore::ReInit()
{
	StartTicker();
}

bool FOnlineSubsystemEOSCore::Tick(float DeltaTime)
{
	if (!FOnlineSubsystemImpl::Tick(DeltaTime))
	{
		return false;
	}

	if (SessionInterface)
		SessionInterface->Tick(DeltaTime);

	if (IdentityInterface)
		IdentityInterface->Tick(DeltaTime);

	return true;
}

FString FOnlineSubsystemEOSCore::GetAppId() const
{
	FString m_ProductId;
	GConfig->GetString(TEXT("EOSCORE"), TEXT("ProductID"), m_ProductId, GEngineIni);
	return m_ProductId;
}

bool FOnlineSubsystemEOSCore::Init()
{
	if (!SessionInterface)
		SessionInterface = MakeShareable(new FOnlineSessionEOSCore(this));
	if (!IdentityInterface)
		IdentityInterface = MakeShareable(new FOnlineIdentityEOSCore(this));
	if (!PresenceInterface)
		PresenceInterface = MakeShareable(new FOnlinePresenceEOSCore(this));
	if (!UserInterface)
		UserInterface = MakeShareable(new FOnlineUserEOSCore(this));
	if (!FriendsInterface)
		FriendsInterface = MakeShareable(new FOnlineFriendsEOSCore(this));
	if (!AchievementsInterface)
		AchievementsInterface = MakeShareable(new FOnlineAchievementsEOSCore(this));

	if (!AutoLoginHandle.IsValid())
	{
		AutoLoginHandle = FPlatform::OnEOSCoreInitialized.AddRaw(this, &FOnlineSubsystemEOSCore::TryAutoLogin);
	}

	if (FPlatform::IsInitialized() && !bAttemptedAutoLogin)
	{
		TryAutoLogin();
	}

	return true;
}

bool FOnlineSubsystemEOSCore::Shutdown()
{
	FPlatform::OnEOSCoreInitialized.Remove(AutoLoginHandle);
	AutoLoginHandle.Reset();
	bAttemptedAutoLogin = false;

	FOnlineSubsystemImpl::Shutdown();

#define DESTRUCT_INTERFACE(Interface) \
	if (Interface.IsValid()) \
	{ \
		Interface.Reset(); \
		Interface = nullptr; \
	}

	// Destruct the interfaces
	DESTRUCT_INTERFACE(IdentityInterface);
	DESTRUCT_INTERFACE(SessionInterface);
	DESTRUCT_INTERFACE(PresenceInterface);
	DESTRUCT_INTERFACE(UserInterface);
	DESTRUCT_INTERFACE(FriendsInterface);
	DESTRUCT_INTERFACE(AchievementsInterface);

#undef DESTRUCT_INTERFACE

	return true;
}


FText FOnlineSubsystemEOSCore::GetOnlineServiceName() const
{
	return NSLOCTEXT("OnlineSubsystemEOSCore", "OnlineServiceName", "EOSCORE");
}

IOnlineAchievementsPtr FOnlineSubsystemEOSCore::GetAchievementsInterface() const
{
	return AchievementsInterface;
}

IOnlineFriendsPtr FOnlineSubsystemEOSCore::GetFriendsInterface() const
{
	return FriendsInterface;
}

IOnlineIdentityPtr FOnlineSubsystemEOSCore::GetIdentityInterface() const
{
	return IdentityInterface;
}

IOnlinePresencePtr FOnlineSubsystemEOSCore::GetPresenceInterface() const
{
	return PresenceInterface;
}

IOnlineSessionPtr FOnlineSubsystemEOSCore::GetSessionInterface() const
{
	return SessionInterface;
}

IOnlineUserPtr FOnlineSubsystemEOSCore::GetUserInterface() const
{
	return UserInterface;
}

static bool bAutoLogin = false;
void FOnlineSubsystemEOSCore::TryAutoLogin()
{
	bAttemptedAutoLogin = true;
	
	GConfig->GetBool(TEXT("EOSCORE"), TEXT("bAutoLogin"), bAutoLogin, GEngineIni);

	if (!bAutoLogin)
	{
		bAutoLogin = FParse::Param(FCommandLine::Get(), TEXT("AUTO_LOGIN"));
	}

	FParse::Value(FCommandLine::Get(), TEXT("AUTH_LOGIN="), AuthLogin);
	FParse::Value(FCommandLine::Get(), TEXT("AUTH_TOKEN="), AuthToken);
	FParse::Value(FCommandLine::Get(), TEXT("AUTH_TYPE="), AuthType);

	if (bAutoLogin || AuthLogin.Len() > 0 || AuthToken.Len() > 0 || AuthType.Len() > 0)
	{
		IdentityInterface->Login(0, FOnlineAccountCredentials(FString::Printf(TEXT("AutoLogin:%s"), *AuthType), AuthLogin, AuthToken));
	}
}
