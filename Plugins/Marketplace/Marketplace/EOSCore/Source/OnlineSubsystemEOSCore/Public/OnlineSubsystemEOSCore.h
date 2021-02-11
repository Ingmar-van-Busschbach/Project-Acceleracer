/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/
#pragma once

#include "OnlineSubsystemImpl.h"
#include "EOSCoreOnlinesubsystemTypes.h"

/** Forward declarations of all interface classes */
using FOnlineSessionEOSCorePtr = TSharedPtr<class FOnlineSessionEOSCore, ESPMode::ThreadSafe>;
using FOnlineIdentityEOSCorePtr = TSharedPtr<class FOnlineIdentityEOSCore, ESPMode::ThreadSafe>;
using FOnlinePresenceEOSCorePtr = TSharedPtr<class FOnlinePresenceEOSCore, ESPMode::ThreadSafe>;
using FOnlineUserEOSCorePtr = TSharedPtr<class FOnlineUserEOSCore, ESPMode::ThreadSafe>;
using FOnlineFriendsEOSCorePtr = TSharedPtr<class FOnlineFriendsEOSCore, ESPMode::ThreadSafe>;
using FOnlineAchievementsEOSCorePtr = TSharedPtr<class FOnlineAchievementsEOSCore, ESPMode::ThreadSafe>;

class ONLINESUBSYSTEMEOSCORE_API FOnlineSubsystemEOSCore : public FOnlineSubsystemImpl
{
protected:
	/** Only the factory makes instances */
	FOnlineSubsystemEOSCore() = delete;
public:
	FOnlineSubsystemEOSCore(FName InInstanceName);
	virtual ~FOnlineSubsystemEOSCore() {}
public:
	void ReInit();
	virtual bool Tick(float DeltaTime) override;
	virtual FString GetAppId() const override;
	virtual bool Init() override;
	virtual bool Shutdown() override;
	virtual FText GetOnlineServiceName() const override;
public:
	virtual IOnlineAchievementsPtr GetAchievementsInterface() const override;
	virtual IOnlineFriendsPtr GetFriendsInterface() const override;
	virtual IOnlineIdentityPtr GetIdentityInterface() const override;
	virtual IOnlineLeaderboardsPtr GetLeaderboardsInterface() const override { return nullptr; }
	virtual IOnlineMessagePtr GetMessageInterface() const override { return nullptr; }
	virtual IOnlinePresencePtr GetPresenceInterface() const override;
	virtual IOnlineSessionPtr GetSessionInterface() const override;
	virtual IOnlineSharedCloudPtr GetSharedCloudInterface() const override { return nullptr; }
	virtual IOnlineUserCloudPtr GetUserCloudInterface() const override { return nullptr; }
	virtual IOnlineVoicePtr GetVoiceInterface() const override { return nullptr; }
	virtual IOnlineStatsPtr GetStatsInterface() const override { return nullptr; }
	virtual IOnlinePartyPtr GetPartyInterface() const override { return nullptr; }
	virtual IOnlineGroupsPtr GetGroupsInterface() const override { return nullptr; }
	virtual IOnlineExternalUIPtr GetExternalUIInterface() const override { return nullptr; }
	virtual IOnlineTimePtr GetTimeInterface() const override { return nullptr; }
	virtual IOnlineTitleFilePtr GetTitleFileInterface() const override { return nullptr; }
	virtual IOnlineEntitlementsPtr GetEntitlementsInterface() const override { return nullptr; }
	virtual IOnlineStorePtr GetStoreInterface() const override { return nullptr; }
	virtual IOnlineStoreV2Ptr GetStoreV2Interface() const override { return nullptr; }
	virtual IOnlinePurchasePtr GetPurchaseInterface() const override { return nullptr; }
	virtual IOnlineEventsPtr GetEventsInterface() const override { return nullptr; }
	virtual IOnlineSharingPtr GetSharingInterface() const override { return nullptr; }
	virtual IOnlineUserPtr GetUserInterface() const override;
	virtual IOnlineChatPtr GetChatInterface() const override { return nullptr; }
	virtual IOnlineTurnBasedPtr GetTurnBasedInterface() const override { return nullptr; }
	virtual IOnlineTournamentPtr GetTournamentInterface() const override { return nullptr; }
private:
	void TryAutoLogin();
protected:
	FOnlineIdentityEOSCorePtr IdentityInterface;
	FOnlineSessionEOSCorePtr SessionInterface;
	FOnlinePresenceEOSCorePtr PresenceInterface;
	FOnlineUserEOSCorePtr UserInterface;
	FOnlineFriendsEOSCorePtr FriendsInterface;
	FOnlineAchievementsEOSCorePtr AchievementsInterface;
	FDelegateHandle AutoLoginHandle;
private:
	bool bAttemptedAutoLogin;
	FString AuthLogin;
	FString AuthToken;
	FString AuthType;
};

typedef TSharedPtr<FOnlineSubsystemEOSCore, ESPMode::ThreadSafe> FOnlineSubsystemEOSCorePtr;