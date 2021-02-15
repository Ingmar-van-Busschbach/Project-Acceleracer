/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/OnlineIdentityInterface.h"

class FOnlineSubsystemEOSCore;

enum EIdentityLoginType
{
	EAS, CONNECT
};

struct FAuthAutoLoginData
{
	IOnlineIdentityPtr IdentityInterface;
	int32 LocalUserNum;
	FOnlineAccountCredentials AccountCredentials;
};

class FOnlineIdentityEOSCore : public IOnlineIdentity
{
protected:
	FOnlineSubsystemEOSCore* Subsystem;
	EOS_NotificationId AuthExpirationId;
	EOS_NotificationId LoginStatusChangedId;
	bool bInitialized;
public:
	FOnlineIdentityEOSCore(FOnlineSubsystemEOSCore* subsystem);
	virtual ~FOnlineIdentityEOSCore();
public:
	virtual bool Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials) override;
	virtual bool Logout(int32 LocalUserNum) override;
	virtual bool AutoLogin(int32 LocalUserNum) override;
	virtual TSharedPtr<FUserOnlineAccount> GetUserAccount(const FUniqueNetId& UserId) const override;
	virtual TArray<TSharedPtr<FUserOnlineAccount> > GetAllUserAccounts() const override;
	virtual TSharedPtr<const FUniqueNetId> GetUniquePlayerId(int32 LocalUserNum) const override;
	virtual TSharedPtr<const FUniqueNetId> CreateUniquePlayerId(uint8* Bytes, int32 Size) override;
	virtual TSharedPtr<const FUniqueNetId> CreateUniquePlayerId(const FString& Str) override;
	virtual ELoginStatus::Type GetLoginStatus(int32 LocalUserNum) const override;
	virtual ELoginStatus::Type GetLoginStatus(const FUniqueNetId& UserId) const override;
	virtual FString GetPlayerNickname(int32 LocalUserNum) const override;
	virtual FString GetPlayerNickname(const FUniqueNetId& UserId) const override;
	virtual FString GetAuthToken(int32 LocalUserNum) const override;
	virtual void RevokeAuthToken(const FUniqueNetId& LocalUserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate) override;
	virtual void GetUserPrivilege(const FUniqueNetId& LocalUserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate) override;
	virtual FPlatformUserId GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const override;
	virtual FString GetAuthType() const override;

	void Tick(float deltaTime);
private:
	static void OnAuthLoginComplete(const EOS_Auth_LoginCallbackInfo* data);
	static void OnConnectLoginComplete(const EOS_Connect_LoginCallbackInfo* data);
	static void OnLoginStatusChanged(const EOS_Connect_LoginStatusChangedCallbackInfo* data);
	static void OnLogoutComplete(const EOS_Auth_LogoutCallbackInfo* data);
	static void OnAuthExpiration(const EOS_Connect_AuthExpirationCallbackInfo* data);
	static void OnAuthAutoLoginCallback(const EOS_Auth_LoginCallbackInfo* data);
	static void OnConnectCreateDeviceIdCallback(const EOS_Connect_CreateDeviceIdCallbackInfo* data);
};