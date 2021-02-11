/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Sessions/EOSSessionsTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSSessionsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsUpdateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsUpdateSession : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnSessionUpdateSessionCallbackDelegate OnCallback;
private:
    FOnSessionUpdateSessionCallback Callback;
public:
    UEOSCoreSessionsUpdateSession() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsUpdateSession() { Callback.Unbind(); }
public:
	/**
	 * Update a session given a session modification handle created via EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification
	 *
	 * @param Options Structure containing information about the session to be updated
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the update operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the update completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to be updated does not exist
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsUpdateSession* EOSSessionsUpdateSessionAsync(UObject* WorldContextObject, FEOSSessionsUpdateSessionOptions options);
protected:
	FEOSSessionsUpdateSessionOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsUpdateSessionCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsDestroySession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsDestroySession : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionDestroySessionCallbackDelegate OnCallback;
private:
	FOnSessionDestroySessionCallback Callback;
public:
	UEOSCoreSessionsDestroySession() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsDestroySession() { Callback.Unbind(); }
public:
	/**
	 * Destroy a session given a session name
	 *
	 * @param Options Structure containing information about the session to be destroyed
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the destroy operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the destroy completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_AlreadyPending if the session is already marked for destroy
	 *         EOS_NotFound if a session to be destroyed does not exist
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsDestroySession* EOSSessionsDestroySessionAsync(UObject* WorldContextObject, FEOSSessionsDestroySessionOptions options);
protected:
	FEOSSessionsDestroySessionOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsDestroySessionCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsJoinSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsJoinSession : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionJoinSessionCallbackDelegate OnCallback;
private:
	FOnSessionJoinSessionCallback Callback;
public:
	UEOSCoreSessionsJoinSession() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsJoinSession() { Callback.Unbind(); }
public:
	/**
	 * Join a session, creating a local session under a given session name.  Backend will validate various conditions to make sure it is possible to join the session.
	 *
	 * @param Options Structure containing information about the session to be joined
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the join operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the join completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_SessionAlreadyExists if the session is already exists or is in the process of being joined
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsJoinSession* EOSSessionsJoinSessionAsync(UObject* WorldContextObject, FEOSSessionsJoinSessionOptions options);
protected:
	FEOSSessionsJoinSessionOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsJoinSessionCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsStartSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsStartSession : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionStartSessionCallbackDelegate OnCallback;
private:
	FOnSessionStartSessionCallback Callback;
public:
	UEOSCoreSessionsStartSession() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsStartSession() { Callback.Unbind(); }
public:
	/**
	 * Mark a session as started, making it unable to find if session properties indicate "join in progress" is not available
	 *
	 * @param Options Structure containing information about the session to be started
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the start operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the start completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to be started does not exist
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsStartSession* EOSSessionsStartSessionAsync(UObject* WorldContextObject, FEOSSessionsStartSessionOptions options);
protected:
	FEOSSessionsStartSessionOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsStartSessionCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsEndSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsEndSession : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionEndSessionCallbackDelegate OnCallback;
private:
	FOnSessionEndSessionCallback Callback;
public:
	UEOSCoreSessionsEndSession() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsEndSession() { Callback.Unbind(); }
public:
	/**
	 * Mark a session as ended, making it available to find if "join in progress" was disabled.  The session may be started again if desired
	 *
	 * @param Options Structure containing information about the session to be ended
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the end operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the end completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to be ended does not exist
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsEndSession* EOSSessionsEndSessionAsync(UObject* WorldContextObject, FEOSSessionsEndSessionOptions options);
protected:
	FEOSSessionsEndSessionOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsEndSessionCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsRegisterPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsRegisterPlayers : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionRegisterPlayersCallbackDelegate OnCallback;
private:
	FOnSessionRegisterPlayersCallback Callback;
public:
	UEOSCoreSessionsRegisterPlayers() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsRegisterPlayers() { Callback.Unbind(); }
public:
	/**
	 * Register a group of players with the session, allowing them to invite others or otherwise indicate they are part of the session for determining a full session
	 *
	 * @param Options Structure containing information about the session and players to be registered
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the registration operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the register completes successfully
	 *         EOS_NoChange if the players to register registered previously
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to register players does not exist
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsRegisterPlayers* EOSSessionsRegisterPlayersAsync(UObject* WorldContextObject, FEOSSessionsRegisterPlayersOptions options);
protected:
	FEOSSessionsRegisterPlayersOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsRegisterPlayersCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsUnregisterPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsUnregisterPlayers : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionUnregisterPlayersCallbackDelegate OnCallback;
private:
	FOnSessionUnregisterPlayersCallback Callback;
public:
	UEOSCoreSessionsUnregisterPlayers() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsUnregisterPlayers() { Callback.Unbind(); }
public:
	/**
	 * Unregister a group of players with the session, freeing up space for others to join
	 *
	 * @param Options Structure containing information about the session and players to be unregistered
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the unregistration operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the unregister completes successfully
	 *         EOS_NoChange if the players to unregister were not found
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to be unregister players does not exist
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsUnregisterPlayers* EOSSessionsUnregisterPlayersAsync(UObject* WorldContextObject, FEOSSessionsUnregisterPlayersOptions options);
protected:
	FEOSSessionsUnregisterPlayersOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsUnregisterPlayersCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsSendInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsSendInvite : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionSessionSendInviteCallbackDelegate OnCallback;
private:
	FOnSessionSessionSendInviteCallback Callback;
public:
	UEOSCoreSessionsSendInvite() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsSendInvite() { Callback.Unbind(); }
public:
	/**
	 * Send an invite to another player.  User must have created the session or be registered in the session or else the call will fail
	 *
	 * @param Options Structure containing information about the session and player to invite
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the send invite operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the send invite completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_NotFound if the session to send the invite from does not exist
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsSendInvite* EOSSessionsSendInviteAsync(UObject* WorldContextObject, FEOSSessionsSendInviteOptions options);
protected:
	FEOSSessionsSendInviteOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsSendInviteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsRejectInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsRejectInvite : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionRejectInviteCallbackDelegate OnCallback;
private:
	FOnSessionRejectInviteCallback Callback;
public:
	UEOSCoreSessionsRejectInvite() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsRejectInvite() { Callback.Unbind(); }
public:
	/**
	 * Reject an invite from another player.
	 *
	 * @param Options Structure containing information about the invite to reject
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the reject invite operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the invite rejection completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_NotFound if the invite does not exist
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsRejectInvite* EOSSessionsRejectInviteAsync(UObject* WorldContextObject, FEOSSessionsRejectInviteOptions options);
protected:
	FEOSSessionsRejectInviteOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsRejectInviteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsQueryInvites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsQueryInvites : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionQueryInvitesCallbackDelegate OnCallback;
private:
	FOnSessionQueryInvitesCallback Callback;
public:
	UEOSCoreSessionsQueryInvites() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsQueryInvites() { Callback.Unbind(); }
public:
	/**
	 * Retrieve all existing invites for a single user
	 *
	 * @param Options Structure containing information about the invites to query
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the query invites operation completes, either successfully or in error
	 *
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsQueryInvites* EOSSessionsQueryInvitesAsync(UObject* WorldContextObject, FEOSSessionsQueryInvitesOptions options);
protected:
	FEOSSessionsQueryInvitesOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionsQueryInvitesCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsSearchFind
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreSessionsSearchFind : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSessionFindCallbackDelegate OnCallback;
private:
	FOnSessionFindCallback Callback;
public:
	UEOSCoreSessionsSearchFind() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreSessionsSearchFind() { Callback.Unbind(); }
public:
	/**
	 * Find sessions matching the search criteria setup via this session search handle.
	 * When the operation completes, this handle will have the search results that can be parsed
	 *
	 * @param Options Structure containing information about the search criteria to use
	 * @param ClientData Arbitrary data that is passed back to you in the callback
	 * @param callback A callback that is fired when the search operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the find operation completes successfully
	 *         EOS_NotFound if searching for an individual session by sessionid or targetuserid returns no results
	 *         EOS_InvalidParameters if any of the options are incorrect
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Sessions|Async"))
		static UEOSCoreSessionsSearchFind* EOSSessionSearchFindAsync(UObject* WorldContextObject, FEOSHSessionSearch searchHandle, FEOSSessionSearchFindOptions options);
protected:
	FEOSSessionSearchFindOptions Options;
	FEOSHSessionSearch SearchHandle;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSSessionSearchFindCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};