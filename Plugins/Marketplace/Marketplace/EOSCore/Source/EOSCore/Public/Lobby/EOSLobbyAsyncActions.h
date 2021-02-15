/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Lobby/EOSLobbyTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSLobbyAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbyCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbyCreateLobby : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnLobbyCreateLobbyCallbackDelegate OnCallback;
private:
    FOnLobbyCreateLobbyCallback Callback;
public:
    UEOSCoreLobbyCreateLobby() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbyCreateLobby() { Callback.Unbind(); }
public:
    /**
     * Creates a lobby and adds the user to the lobby membership.  There is no data associated with the lobby at the start and can be added vis EOS_Lobby_UpdateLobbyModification
     *
     * @param Options Required fields for the creation of a lobby such as a user count and its starting advertised state
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the create operation completes, either successfully or in error
     *
     * @return EOS_Success if the creation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     *         EOS_LimitExceeded if the number of allowed lobbies is exceeded
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
		static UEOSCoreLobbyCreateLobby* EOSLobbyCreateLobbyAsync(UObject* WorldContextObject, FEOSLobbyCreateLobbyOptions options);
protected:
    FEOSLobbyCreateLobbyOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSLobbyCreateLobbyCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbyDestroyLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbyDestroyLobby : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnLobbyDestroyLobbyCallbackDelegate OnCallback;
private:
    FOnLobbyDestroyLobbyCallback Callback;
public:
    UEOSCoreLobbyDestroyLobby() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbyDestroyLobby() { Callback.Unbind(); }
public:
    /**
     * Destroy a lobby given a lobby id
     *
     * @param Options Structure containing information about the lobby to be destroyed
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the destroy operation completes, either successfully or in error
     *
     * @return EOS_Success if the destroy completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     *         EOS_AlreadyPending if the lobby is already marked for destroy
     *         EOS_NotFound if the lobby to be destroyed does not exist
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
		static UEOSCoreLobbyDestroyLobby* EOSLobbyDestroyLobbyAsync(UObject* WorldContextObject, FEOSLobbyDestroyLobbyOptions options);
protected:
    FEOSLobbyDestroyLobbyOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSLobbyDestroyLobbyCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbyJoinLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbyJoinLobby : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnLobbyJoinLobbyCallbackDelegate OnCallback;
private:
    FOnLobbyJoinLobbyCallback Callback;
public:
    UEOSCoreLobbyJoinLobby() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbyJoinLobby() { Callback.Unbind(); }
public:
    /**
     * Join a lobby, creating a local instance under a given lobby id.  Backend will validate various conditions to make sure it is possible to join the lobby.
     *
     * @param Options Structure containing information about the lobby to be joined
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the join operation completes, either successfully or in error
     *
     * @return EOS_Success if the destroy completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
		static UEOSCoreLobbyJoinLobby* EOSLobbyJoinLobbyAsync(UObject* WorldContextObject, FEOSLobbyJoinLobbyOptions options);
protected:
    FEOSLobbyJoinLobbyOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSLobbyJoinLobbyCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbyLeaveLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbyLeaveLobby : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnLobbyLeaveLobbyCallbackDelegate OnCallback;
private:
    FOnLobbyLeaveLobbyCallback Callback;
public:
    UEOSCoreLobbyLeaveLobby() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbyLeaveLobby() { Callback.Unbind(); }
public:
    /**
     * Leave a lobby given a lobby id
     *
     * @param Options Structure containing information about the lobby to be left
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the leave operation completes, either successfully or in error
     *
     * @return EOS_Success if the leave completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     *         EOS_AlreadyPending if the lobby is already marked for leave
     *         EOS_NotFound if a lobby to be left does not exist
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
		static UEOSCoreLobbyLeaveLobby* EOSLobbyLeaveLobbyAsync(UObject* WorldContextObject, FEOSLobbyLeaveLobbyOptions options);
protected:
    FEOSLobbyLeaveLobbyOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSLobbyLeaveLobbyCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbyUpdateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbyUpdateLobby : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnLobbyUpdateLobbyCallbackDelegate OnCallback;
private:
    FOnLobbyUpdateLobbyCallback Callback;
public:
    UEOSCoreLobbyUpdateLobby() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbyUpdateLobby() { Callback.Unbind(); }
public:
    /**
     * Update a lobby given a lobby modification handle created via EOS_Lobby_UpdateLobbyModification
     *
     * @param Options Structure containing information about the lobby to be updated
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the update operation completes, either successfully or in error
     *
     * @return EOS_Success if the update completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     *         EOS_Lobby_NotOwner if the lobby modification contains modifications that are only allowed by the owner
     *         EOS_NotFound if the lobby to update does not exist
     */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
        static UEOSCoreLobbyUpdateLobby* EOSLobbyUpdateLobbyAsync(UObject* WorldContextObject, FEOSLobbyUpdateLobbyOptions options);
protected:
    FEOSLobbyUpdateLobbyOptions Options;
private:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSLobbyUpdateLobbyCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbyPromoteMember
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbyPromoteMember : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnLobbyPromoteMemberCallbackDelegate OnCallback;
private:
    FOnLobbyPromoteMemberCallback Callback;
public:
    UEOSCoreLobbyPromoteMember() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbyPromoteMember() { Callback.Unbind(); }
public:
    /**
     * Promote an existing member of the lobby to owner, allowing them to make lobby data modifications
     *
     * @param Options Structure containing information about the lobby and member to be promoted
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the promotion operation completes, either successfully or in error
     *
     * @return EOS_Success if the promote completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     *         EOS_Lobby_NotOwner if the calling user is not the owner of the lobby
     *         EOS_NotFound if the lobby of interest does not exist
     */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
        static UEOSCoreLobbyPromoteMember* EOSLobbyPromoteMemberAsync(UObject* WorldContextObject, FEOSLobbyPromoteMemberOptions options);
protected:
    FEOSLobbyPromoteMemberOptions Options;
private:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSLobbyPromoteMemberCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbyKickMember
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbyKickMember : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnLobbyKickMemberCallbackDelegate OnCallback;
private:
    FOnLobbyKickMemberCallback Callback;
public:
    UEOSCoreLobbyKickMember() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbyKickMember() { Callback.Unbind(); }
public:
    /**
     * Kick an existing member from the lobby
     *
     * @param Options Structure containing information about the lobby and member to be kicked
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the kick operation completes, either successfully or in error
     *
     * @return EOS_Success if the kick completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     *         EOS_Lobby_NotOwner if the calling user is not the owner of the lobby
     *         EOS_NotFound if a lobby of interest does not exist
     */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
        static UEOSCoreLobbyKickMember* EOSLobbyKickMemberAsync(UObject* WorldContextObject, FEOSLobbyKickMemberOptions options);
protected:
    FEOSLobbyKickMemberOptions Options;
private:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSLobbyKickMemberCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbySendInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbySendInvite : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnLobbySendInviteCallbackDelegate OnCallback;
private:
    FOnLobbySendInviteCallback Callback;
public:
    UEOSCoreLobbySendInvite() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbySendInvite() { Callback.Unbind(); }
public:
    /**
     * Send an invite to another user.  User must be a member of the lobby or else the call will fail
     *
     * @param Options Structure containing information about the lobby and user to invite
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the send invite operation completes, either successfully or in error
     *
     * @return EOS_Success if the send invite completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     *         EOS_NotFound if the lobby to send the invite from does not exist
     */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
        static UEOSCoreLobbySendInvite* EOSLobbySendInviteAsync(UObject* WorldContextObject, FEOSLobbySendInviteOptions options);
protected:
    FEOSLobbySendInviteOptions Options;
private:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSLobbySendInviteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbyRejectInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbyRejectInvite : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnLobbyRejectInviteCallbacDelegatek OnCallback;
private:
    FOnLobbyRejectInviteCallback Callback;
public:
    UEOSCoreLobbyRejectInvite() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbyRejectInvite() { Callback.Unbind(); }
public:
    /**
     * Reject an invite from another user.
     *
     * @param Options Structure containing information about the invite to reject
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the reject invite operation completes, either successfully or in error
     *
     * @return EOS_Success if the invite rejection completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     *         EOS_NotFound if the invite does not exist
     */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
        static UEOSCoreLobbyRejectInvite* EOSLobbyRejectInviteAsync(UObject* WorldContextObject, FEOSLobbyRejectInviteOptions options);
protected:
    FEOSLobbyRejectInviteOptions Options;
private:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSLobbyRejectInviteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbyQueryInvites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbyQueryInvites : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnLobbyQueryInvitesCallbackDelegate OnCallback;
private:
    FOnLobbyQueryInvitesCallback Callback;
public:
    UEOSCoreLobbyQueryInvites() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbyQueryInvites() { Callback.Unbind(); }
public:
    /**
     * Retrieve all existing invites for a single user
     *
     * @param Options Structure containing information about the invites to query
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the query invites operation completes, either successfully or in error
     *
     */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
        static UEOSCoreLobbyQueryInvites* EOSLobbyQueryInvitesAsync(UObject* WorldContextObject, FEOSLobbyQueryInvitesOptions options);
protected:
    FEOSLobbyQueryInvitesOptions Options;
private:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSLobbyQueryInvitesCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLobbySearchFind
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLobbySearchFind : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnLobbyFindCallbackDelegate OnCallback;
private:
    FOnLobbyFindCallback Callback;
public:
    UEOSCoreLobbySearchFind() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLobbySearchFind() { Callback.Unbind(); }
public:
    /**
     * Find lobbies matching the search criteria setup via this lobby search handle.
     * When the operation completes, this handle will have the search results that can be parsed
     *
     * @param Options Structure containing information about the search criteria to use
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback A callback that is fired when the search operation completes, either successfully or in error
     *
     * @return EOS_Success if the find operation completes successfully
     *         EOS_NotFound if searching for an individual lobby by lobby id or target user id returns no results
     *         EOS_InvalidParameters if any of the options are incorrect
     */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Lobby|Async"))
        static UEOSCoreLobbySearchFind* EOSLobbySearchFindAsync(UObject* WorldContextObject, const FEOSHLobbySearch& handle, FEOSLobbySearchFindOptions options);
protected:
    FEOSLobbySearchFindOptions Options;
    FEOSHLobbySearch Handle;
private:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSLobbySearchFindCallbackInfo& data, bool bWasSuccessful)
    {
        OnCallback.Broadcast(data);
        Callback.Unbind();
        SetReadyToDestroy();
    }
};
