/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "UserInfo/EOSUserInfoTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSUserInfoAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreUserInfoQueryUserInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreUserInfoQueryUserInfo : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnQueryUserInfoCallbackDelegate OnCallback;
private:
    FOnQueryUserInfoCallback Callback;
public:
    UEOSCoreUserInfoQueryUserInfo() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreUserInfoQueryUserInfo() { Callback.Unbind(); }
public:
    /**
    * EOS_UserInfo_QueryUserInfo is used to start an asynchronous query to retrieve information, such as display name, about another account.
    * Once the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.
    *
    * @param Options structure containing the input parameters
    * @param ClientData arbitrary data that is passed back to you in the callback
    * @param callback a callback that is fired when the async operation completes, either successfully or in error
    *
    * @see EOS_UserInfo
    * @see EOS_UserInfo_CopyUserInfo
    * @see EOS_UserInfo_QueryUserInfoOptions
    * @see EOS_UserInfo_OnQueryUserInfoCallback
    */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|UserInfo|Async"))
		static UEOSCoreUserInfoQueryUserInfo* EOSUserInfoQueryUserInfoAsync(UObject* WorldContextObject, FEOSUserInfoQueryUserInfoOptions options);
protected:
    FEOSUserInfoQueryUserInfoOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSUserInfoQueryUserInfoCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreUserInfoQueryUserInfoByDisplayName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreUserInfoQueryUserInfoByDisplayName : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnQueryUserInfoByDisplayNameCallbackDelegate OnCallback;
private:
    FOnQueryUserInfoByDisplayNameCallback Callback;
public:
    UEOSCoreUserInfoQueryUserInfoByDisplayName() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreUserInfoQueryUserInfoByDisplayName() { Callback.Unbind(); }
public:
    /**
     * EOS_UserInfo_QueryUserInfoByDisplayName is used to start an asynchronous query to retrieve user information by display name. This can be useful for getting the EOS_EpicAccountId for a display name.
     * Once the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.
     *
     * @param Options structure containing the input parameters
     * @param ClientData arbitrary data that is passed back to you in the callback
     * @param callback a callback that is fired when the async operation completes, either successfully or in error
     *
     * @see EOS_UserInfo
     * @see EOS_UserInfo_CopyUserInfo
     * @see EOS_UserInfo_QueryUserInfoByDisplayNameOptions
     * @see EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback
     */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|UserInfo|Async"))
        static UEOSCoreUserInfoQueryUserInfoByDisplayName* EOSUserInfoQueryUserInfoByDisplayNameAsync(UObject* WorldContextObject, FEOSUserInfoQueryUserInfoByDisplayNameOptions options);
protected:
    FEOSUserInfoQueryUserInfoByDisplayNameOptions Options;
public:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreUserInfoByExternalAccount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreUserInfoByExternalAccount : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
		FOnQueryUserInfoByExternalAccountCallbackDelegate OnCallback;
private:
	FOnQueryUserInfoByExternalAccountCallback Callback;
public:
    UEOSCoreUserInfoByExternalAccount() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreUserInfoByExternalAccount() { Callback.Unbind(); }
public:
	/**
	 * EOS_UserInfo_QueryUserInfoByExternalAccount is used to start an asynchronous query to retrieve user information by external accounts.
	 * This can be useful for getting the EOS_EpicAccountIds for external accounts.
	 * Once the callback has been fired with a successful ResultCode, it is possible to call CopyUserInfo to receive an EOS_UserInfo containing the available information.
	 *
	 * @param Options structure containing the input parameters
	 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate
	 * @param CompletionDelegate a callback that is fired when the async operation completes, either successfully or in error
	 *
	 * @see EOS_UserInfo
	 * @see EOS_UserInfo_QueryUserInfoByExternalAccountOptions
	 * @see EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback
	 */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|UserInfo|Async"))
        static UEOSCoreUserInfoByExternalAccount* EOSUserInfoQueryUserInfoByExternalAccountAsync(UObject* WorldContextObject, FEOSUserInfoQueryUserInfoByExternalAccountOptions options);
protected:
	FEOSUserInfoQueryUserInfoByExternalAccountOptions Options;
public:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};