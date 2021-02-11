/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Friends/EOSFriendsTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSFriendsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreFriendsQueryFriends
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreFriendsQueryFriends : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnFriendsQueryFriendsCallbackDelegate OnCallback;
private:
    FOnFriendsQueryFriendsCallback Callback;
public:
    UEOSCoreFriendsQueryFriends() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreFriendsQueryFriends() { Callback.Unbind(); }
public:
	/**
	* Starts an asynchronous task that reads the user's friends list from the backend service, caching it for future use.
	*
	* @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).
	*
	* @param Options structure containing the account for which to retrieve the friends list
	* @param ClientData arbitrary data that is passed back to you in the callback
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Friends|Async"))
		static UEOSCoreFriendsQueryFriends* EOSFriendsQueryFriendsAsync(UObject* WorldContextObject, FEOSFriendsQueryFriendsOptions options);
protected:
	FEOSFriendsQueryFriendsOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSFriendsQueryFriendsCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreFriendsSendInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreFriendsSendInvite : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnFriendsSendInviteCallbackDelegate OnCallback;
private:
	FOnFriendsSendInviteCallback Callback;
public:
	UEOSCoreFriendsSendInvite() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreFriendsSendInvite() { Callback.Unbind(); }
public:
	/**
	* Starts an asynchronous task that sends a friend invitation to another user. The completion delegate is executed after the backend response has been received.
	* It does not indicate that the target user has responded to the friend invitation.
	*
	* @param Options structure containing the account to send the invite from and the account to send the invite to
	* @param ClientData arbitrary data that is passed back to you in the callback
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Friends|Async"))
		static UEOSCoreFriendsSendInvite* EOSFriendsSendInviteAsync(UObject* WorldContextObject, FEOSFriendsSendInviteOptions options);
protected:
	FEOSFriendsSendInviteOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSFriendsSendInviteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreFriendsAcceptInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreFriendsAcceptInvite : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnFriendsAcceptInviteCallbackDelegate OnCallback;
private:
	FOnFriendsAcceptInviteCallback Callback;
public:
	UEOSCoreFriendsAcceptInvite() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreFriendsAcceptInvite() { Callback.Unbind(); }
public:
	/**
	* Starts an asynchronous task that accepts a friend invitation from another user. The completion delegate is executed after the backend response has been received.
	*
	* @param Options structure containing the logged in account and the inviting account
	* @param ClientData arbitrary data that is passed back to you in the callback
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Friends|Async"))
		static UEOSCoreFriendsAcceptInvite* EOSFriendsAcceptInviteAsync(UObject* WorldContextObject, FEOSFriendsAcceptInviteOptions options);
protected:
	FEOSFriendsAcceptInviteOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSFriendsAcceptInviteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreFriendsRejectInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreFriendsRejectInvite : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnFriendsRejectInviteCallbackDelegate OnCallback;
private:
	FOnFriendsRejectInviteCallback Callback;
public:
	UEOSCoreFriendsRejectInvite() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreFriendsRejectInvite() { Callback.Unbind(); }
public:
	/**
	* Starts an asynchronous task that rejects a friend invitation from another user. The completion delegate is executed after the backend response has been received.
	*
	* @param Options structure containing the logged in account and the inviting account
	* @param ClientData arbitrary data that is passed back to you in the callback
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Friends|Async"))
		static UEOSCoreFriendsRejectInvite* EOSFriendsRejectInviteAsync(UObject* WorldContextObject, FEOSFriendsRejectInviteOptions options);
protected:
	FEOSFriendsRejectInviteOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSFriendsRejectInviteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};