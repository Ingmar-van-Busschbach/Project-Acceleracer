/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "Sessions/EOSSessionsTypes.h"
#include "EOSSessions.generated.h"

/**
 * The Session Interface is used to manage sessions that can be advertised with the backend service
 * All Session Interface calls take a handle of type EOS_HSessions as the first parameter.
 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetSessionsInterface function.
 *
 * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.
 *
 * @see EOS_Platform_GetSessionsInterface
 */
 
 static TMap<FEOSNotificationId, FOnSessionInviteReceivedCallback> OnSessionInviteReceivedCallbacks;
 static TMap<FEOSNotificationId, FOnSessionInviteAcceptedCallback> OnSessionInviteAcceptedCallbacks;
 static TMap<FEOSNotificationId, FOnSessionJoinSessionAcceptedCallback> OnSessionJoinSessionAcceptedCallbacks;

UCLASS()
class EOSCORE_API UCoreSessions : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
	UCoreSessions();
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	/**
	 * The Session Interface is used to manage sessions that can be advertised with the backend service
	 * All Session Interface calls take a handle of type EOS_HSessions as the first parameter.
	 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetSessionsInterface function.
	 *
	 * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.
	 *
	 * @see EOS_Platform_GetSessionsInterface
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreSessions* GetSessions() { return SessionsObject; }
public:
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionSessionSendInviteCallbackDelegate OnSessionSessionSendInviteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionRejectInviteCallbackDelegate OnSessionRejectInviteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionQueryInvitesCallbackDelegate OnSessionQueryInvitesCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionUpdateSessionCallbackDelegate OnSessionUpdateSessionCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionDestroySessionCallbackDelegate OnSessionDestroySessionCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionJoinSessionCallbackDelegate OnSessionJoinSessionCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionStartSessionCallbackDelegate OnSessionStartSessionCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionEndSessionCallbackDelegate OnSessionEndSessionCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionRegisterPlayersCallbackDelegate OnSessionRegisterPlayersCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionUnregisterPlayersCallbackDelegate OnSessionUnregisterPlayersCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionFindCallbackDelegate OnSessionFindCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionInviteReceivedCallbackDelegate OnSessionInviteReceivedCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionInviteAcceptedCallbackDelegate OnSessionInviteAcceptedCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Sessions|Delegates")
		FOnSessionJoinSessionAcceptedCallbackDelegate OnSessionJoinSessionAcceptedCallbackInfo;
public:
	/**
	* Creates a session modification handle (EOS_HSessionModification).  The session modification handle is used to build a new session and can be applied with EOS_Sessions_UpdateSession
	* The EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it no longer needed.
	*
	* @param Options Required fields for the creation of a session such as a name, bucketid, and max players
	* @param OutSessionModificationHandle Pointer to a Session Modification Handle only set if successful
	* @return EOS_Success if we successfully created the Session Modification Handle pointed at in OutSessionModificationHandle, or an error result if the input data was invalid
	*
	* @see EOS_SessionModification_Release
	* @see EOS_Sessions_UpdateSession
	* @see EOS_HSessionModification
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsCreateSessionModification(FEOSSessionsCreateSessionModificationOptions options, FEOSHSessionModification& outSessionModificationHandle);

	/**
	 * Creates a session modification handle (EOS_HSessionModification). The session modification handle is used to modify an existing session and can be applied with EOS_Sessions_UpdateSession.
	 * The EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it is no longer needed.
	 *
	 * @param Options Required fields such as session name
	 * @param OutSessionModificationHandle Pointer to a Session Modification Handle only set if successful
	 * @return EOS_Success if we successfully created the Session Modification Handle pointed at in OutSessionModificationHandle, or an error result if the input data was invalid
	 *
	 * @see EOS_SessionModification_Release
	 * @see EOS_Sessions_UpdateSession
	 * @see EOS_HSessionModification
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsUpdateSessionModification(FEOSSessionsUpdateSessionModificationOptions options, FEOSHSessionModification& outSessionModificationHandle);

	/**
	 * Update a session given a session modification handle created via EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification
	 *
	 * @param Options Structure containing information about the session to be updated
	 * @param callback A callback that is fired when the update operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the update completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to be updated does not exist
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsUpdateSession(const FEOSSessionsUpdateSessionOptions& options, const FOnSessionUpdateSessionCallback& callback);

	/**
	 * Destroy a session given a session name
	 *
	 * @param Options Structure containing information about the session to be destroyed
	 * @param callback A callback that is fired when the destroy operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the destroy completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_AlreadyPending if the session is already marked for destroy
	 *         EOS_NotFound if a session to be destroyed does not exist
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsDestroySession(FEOSSessionsDestroySessionOptions options, const FOnSessionDestroySessionCallback& callback);

	/**
	 * Join a session, creating a local session under a given session name.  Backend will validate various conditions to make sure it is possible to join the session.
	 *
	 * @param Options Structure containing information about the session to be joined
	 * @param callback A callback that is fired when the join operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the join completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_SessionAlreadyExists if the session is already exists or is in the process of being joined
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsJoinSession(FEOSSessionsJoinSessionOptions options, const FOnSessionJoinSessionCallback& callback);

	/**
	 * Mark a session as started, making it unable to find if session properties indicate "join in progress" is not available
	 *
	 * @param Options Structure containing information about the session to be started
	 * @param callback A callback that is fired when the start operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the start completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to be started does not exist
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsStartSession(FEOSSessionsStartSessionOptions options, const FOnSessionStartSessionCallback& callback);

	/**
	 * Mark a session as ended, making it available to find if "join in progress" was disabled.  The session may be started again if desired
	 *
	 * @param Options Structure containing information about the session to be ended
	 * @param callback A callback that is fired when the end operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the end completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to be ended does not exist
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsEndSession(FEOSSessionsEndSessionOptions options, const FOnSessionEndSessionCallback& callback);

	/**
	 * Register a group of players with the session, allowing them to invite others or otherwise indicate they are part of the session for determining a full session
	 *
	 * @param Options Structure containing information about the session and players to be registered
	 * @param callback A callback that is fired when the registration operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the register completes successfully
	 *         EOS_NoChange if the players to register registered previously
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to register players does not exist
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsRegisterPlayers(FEOSSessionsRegisterPlayersOptions options, const FOnSessionRegisterPlayersCallback& callback);

	/**
	 * Unregister a group of players with the session, freeing up space for others to join
	 *
	 * @param Options Structure containing information about the session and players to be unregistered
	 * @param callback A callback that is fired when the unregistration operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the unregister completes successfully
	 *         EOS_NoChange if the players to unregister were not found
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend
	 *         EOS_NotFound if a session to be unregister players does not exist
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsUnregisterPlayers(FEOSSessionsUnregisterPlayersOptions options, const FOnSessionUnregisterPlayersCallback& callback);

	/**
	 * Send an invite to another player.  User must have created the session or be registered in the session or else the call will fail
	 *
	 * @param Options Structure containing information about the session and player to invite
	 * @param callback A callback that is fired when the send invite operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the send invite completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_NotFound if the session to send the invite from does not exist
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsSendInvite(FEOSSessionsSendInviteOptions options, const FOnSessionSessionSendInviteCallback& callback);

	/**
	 * Reject an invite from another player.
	 *
	 * @param Options Structure containing information about the invite to reject
	 * @param callback A callback that is fired when the reject invite operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the invite rejection completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_NotFound if the invite does not exist
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsRejectInvite(FEOSSessionsRejectInviteOptions options, const FOnSessionRejectInviteCallback& callback);

	/**
	 * Retrieve all existing invites for a single user
	 *
	 * @param Options Structure containing information about the invites to query
	 * @param callback A callback that is fired when the query invites operation completes, either successfully or in error
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsQueryInvites(FEOSSessionsQueryInvitesOptions options, const FOnSessionQueryInvitesCallback& callback);

	/**
	 * Get the number of known invites for a given user
	 *
	 * @param Options the Options associated with retrieving the current invite count
	 *
	 * @return number of known invites for a given user or 0 if there is an error
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static int32 EOSSessionsGetInviteCount(FEOSSessionsGetInviteCountOptions options);

	/**
	 * Retrieve an invite id from a list of active invites for a given user
	 *
	 * @param Options Structure containing the input parameters
	 *
	 * @return EOS_Success if the input is valid and an invite id was returned
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_NotFound if the invite doesn't exist
	 *
	 * @see EOS_Sessions_GetInviteCount
	 * @see EOS_Sessions_CopySessionHandleByInviteId
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsGetInviteIdByIndex(FEOSSessionsGetInviteIdByIndexOptions options, FString& outBuffer);

	/**
	 * Create a session search handle.  This handle may be modified to include various search parameters.
	 * Searching is possible in three methods, all mutually exclusive
	 * - set the session id to find a specific session
	 * - set the target user id to find a specific user
	 * - set session parameters to find an array of sessions that match the search criteria
	 *
	 * @param Options Structure containing required parameters such as the maximum number of search results
	 * @param OutSessionSearchHandle The new search handle or null if there was an error creating the search handle
	 *
	 * @return EOS_Success if the search creation completes successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsCreateSessionSearch(FEOSSessionsCreateSessionSearchOptions options, FEOSHSessionSearch& outSessionSearchHandle);

	/**
	 * Create a handle to an existing active session.
	 *
	 * @param Options Structure containing information about the active session to retrieve
	 * @param OutSessionHandle The new active session handle or null if there was an error
	 *
	 * @return EOS_Success if the session handle was created successfully
	 *         EOS_InvalidParameters if any of the options are incorrect
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *         EOS_NotFound if the active session doesn't exist
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsCopyActiveSessionHandle(FEOSSessionsCopyActiveSessionHandleOptions options, FEOSHActiveSession& outSessionHandle);

	/**
	 * Register to receive session invites.
	 * @note must call RemoveNotifySessionInviteReceived to remove the notification
	 *
	 * @param Options Structure containing information about the session invite notification
	 * @param Notification A callback that is fired when a session invite for a user has been received
	 *
	 * @return handle representing the registered callback
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static FEOSNotificationId EOSSessionsAddNotifySessionInviteReceived(const FOnSessionInviteReceivedCallback& callback);

	/**
	 * Unregister from receiving session invites.
	 *
	 * @param InId Handle representing the registered callback
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionsRemoveNotifySessionInviteReceived(FEOSNotificationId id);

	/**
	 * Register to receive notifications when a user accepts a session invite via the social overlay.
	 * @note must call RemoveNotifySessionInviteAccepted to remove the notification
	 *
	 * @param Options Structure containing information about the request.
	 * @param Notification A callback that is fired when a a notification is received.
	 *
	 * @return handle representing the registered callback
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static FEOSNotificationId EOSSessionsAddNotifySessionInviteAccepted(const FOnSessionInviteAcceptedCallback& callback);

	/**
	 * Unregister from receiving notifications when a user accepts a session invite via the social overlay.
	 *
	 * @param InId Handle representing the registered callback
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static void EOSSessionsRemoveNotifySessionInviteAccepted(FEOSNotificationId id);

	/**
	 * Register to receive notifications when a user accepts a session join game via the social overlay.
	 * @note must call RemoveNotifyJoinSessionAccepted to remove the notification
	 *
	 * @param Options Structure containing information about the request.
	 * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate.
	 * @param Notification A callback that is fired when a a notification is received.
	 *
	 * @return handle representing the registered callback
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static FEOSNotificationId EOSSessionsAddNotifyJoinSessionAccepted(const FOnSessionJoinSessionAcceptedCallback& callback);

	/**
	 * Unregister from receiving notifications when a user accepts a session join game via the social overlay.
	 *
	 * @param InId Handle representing the registered callback
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static void EOSSessionsRemoveNotifyJoinSessionAccepted(FEOSNotificationId id);

	/**
	 * EOS_Sessions_CopySessionHandleByInviteId is used to immediately retrieve a handle to the session information from after notification of an invite
	 * If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.
	 *
	 * @param Options Structure containing the input parameters
	 * @param OutSessionHandle out parameter used to receive the session handle
	 *
	 * @return EOS_Success if the information is available and passed out in OutSessionHandle
	 *         EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *         EOS_NotFound if the invite id cannot be found
	 *
	 * @see EOS_Sessions_CopySessionHandleByInviteIdOptions
	 * @see EOS_SessionDetails_Release
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsCopySessionHandleByInviteId(FEOSSessionsCopySessionHandleByInviteIdOptions options, FEOSHSessionDetails& outSessionHandle);

	/**
	 * EOS_Sessions_CopySessionHandleByUiEventId is used to immediately retrieve a handle to the session information from after notification of a join game event.
	 * If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.
	 *
	 * @param Options Structure containing the input parameters
	 * @param OutSessionHandle out parameter used to receive the session handle
	 *
	 * @return EOS_Success if the information is available and passed out in OutSessionHandle
	 *         EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *         EOS_NotFound if the invite id cannot be found
	 *
	 * @see EOS_Sessions_CopySessionHandleByUiEventIdOptions
	 * @see EOS_SessionDetails_Release
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsCopySessionHandleByUiEventId(FEOSSessionsCopySessionHandleByUiEventIdOptions options, FEOSHSessionDetails& outSessionHandle);

	/**
	 * EOS_Sessions_CopySessionHandleForPresence is used to immediately retrieve a handle to the session information which was marked with bPresenceEnabled on create or join.
	 * If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.
	 *
	 * @param Options Structure containing the input parameters
	 * @param OutSessionHandle out parameter used to receive the session handle
	 *
	 * @return EOS_Success if the information is available and passed out in OutSessionHandle
	 *         EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *         EOS_NotFound if there is no session with bPresenceEnabled
	 *
	 * @see EOS_Sessions_CopySessionHandleForPresenceOptions
	 * @see EOS_SessionDetails_Release
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsCopySessionHandleForPresence(FEOSSessionsCopySessionHandleForPresenceOptions options, FEOSHSessionDetails& outSessionHandle);

	/**
	 * EOS_Sessions_IsUserInSession returns whether or not a given user can be found in a specified session
	 *
	 * @param Options Structure containing the input parameters
	 *
	 * @return EOS_Success if the user is found in the specified session
	 *		   EOS_NotFound if the user is not found in the specified session
	 *		   EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter
	 *		   EOS_IncompatibleVersion if the API version passed in is incorrect
	 *		   EOS_Invalid_ProductUserID if an invalid target user is specified
	 *		   EOS_Sessions_InvalidSession if the session specified is invalid
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsIsUserInSession(FEOSSessionsIsUserInSessionOptions options);

	/**
	 * Dump the contents of active sessions that exist locally to the log output, purely for debug purposes
	 *
	 * @param Options Options related to dumping session state such as the session name
	 *
	 * @return EOS_Success if the output operation completes successfully
	 *         EOS_NotFound if the session specified does not exist
	 *         EOS_InvalidParameters if any of the options are incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionsDumpSessionState(FEOSSessionsDumpSessionStateOptions options);

	/**
	 * To modify sessions, you must call EOS_Sessions_CreateSessionModification to create a Session Modification handle. To modify that handle, call
	 * EOS_HSessionModification methods. Once you are finished, call EOS_Sessions_UpdateSession with your handle. You must then release your Session Modification
	 * handle by calling EOS_SessionModification_Release.
	 */

	 /**
	  * Set the bucket id associated with this session.
	  * Values such as region, game mode, etc can be combined here depending on game need.
	  * Setting this is strongly recommended to improve search performance.
	  *
	  * @param Options Options associated with the bucket id of the session
	  *
	  * @return EOS_Success if setting this parameter was successful
	  *         EOS_InvalidParameters if the bucket id is invalid or null
	  *         EOS_IncompatibleVersion if the API version passed in is incorrect
	  */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationSetBucketId(const FEOSHSessionModification& handle, FEOSSessionModificationSetBucketIdOptions options);

	/**
	 * Set the host address associated with this session
	 * Setting this is optional, if the value is not set the SDK will fill the value in from the service.
	 * It is useful to set if other addressing mechanisms are desired or if LAN addresses are preferred during development
	 *
	 * NOTE: No validation of this value occurs to allow for flexibility in addressing methods
	 *
	 * @param Options Options associated with the host address of the session
	 *
	 * @return EOS_Success if setting this parameter was successful
	 *         EOS_InvalidParameters if the host id is an empty string
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationSetHostAddress(const FEOSHSessionModification& handle, FEOSSessionModificationSetHostAddressOptions options);

	/**
	 * Set the session permissions associated with this session.
	 * The permissions range from "public" to "invite only" and are described by EOS_EOnlineSessionPermissionLevel
	 *
	 * @param Options Options associated with the permission level of the session
	 *
	 * @return EOS_Success if setting this parameter was successful
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationSetPermissionLevel(const FEOSHSessionModification& handle, FEOSSessionModificationSetPermissionLevelOptions options);

	/**
	 * Set whether or not join in progress is allowed
	 * Once a session is started, it will no longer be visible to search queries unless this flag is set or the session returns to the pending or ended state
	 *
	 * @param Options Options associated with setting the join in progress state the session
	 *
	 * @return EOS_Success if setting this parameter was successful
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationSetJoinInProgressAllowed(const FEOSHSessionModification& handle, FEOSSessionModificationSetJoinInProgressAllowedOptions options);

	/**
	 * Set the maximum number of players allowed in this session.
	 * When updating the session, it is not possible to reduce this number below the current number of existing players
	 *
	 * @param Options Options associated with max number of players in this session
	 *
	 * @return EOS_Success if setting this parameter was successful
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationSetMaxPlayers(const FEOSHSessionModification& handle, FEOSSessionModificationSetMaxPlayersOptions options);

	/**
	 * Allows enabling or disabling invites for this session.
	 * The session will also need to have `bPresenceEnabled` true.
	 *
	 * @param Options Options associated with invites allowed flag for this session.
	 *
	 * @return EOS_Success if setting this parameter was successful
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationSetInvitesAllowed(const FEOSHSessionModification& handle, FEOSSessionModificationSetInvitesAllowedOptions options);

	/**
	 * Associate an attribute with this session
	 * An attribute is something that may or may not be advertised with the session.
	 * If advertised, it can be queried for in a search, otherwise the data remains local to the client
	 *
	 * @param Options Options to set the attribute and its advertised state
	 *
	 * @return EOS_Success if setting this parameter was successful
	 *		   EOS_InvalidParameters if the attribution is missing information or otherwise invalid
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	static EOSResult EOSSessionModificationAddAttribute(const FEOSHSessionModification& handle, const FEOSSessionModificationAddAttributeOptions& options);

	/**
	 * Associate an attribute with this session
	 * An attribute is something that may or may not be advertised with the session.
	 * If advertised, it can be queried for in a search, otherwise the data remains local to the client
	 *
	 * @param Options Options to set the attribute and its advertised state
	 *
	 * @return EOS_Success if setting this parameter was successful
	 *		   EOS_InvalidParameters if the attribution is missing information or otherwise invalid
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationAddAttributeBool(const FEOSHSessionModification& handle, EEOSESessionAttributeAdvertisementType advertisementType, const FString& key, bool bValue);

	/**
	* Associate an attribute with this session
	* An attribute is something that may or may not be advertised with the session.
	* If advertised, it can be queried for in a search, otherwise the data remains local to the client
	*
	* @param Options Options to set the attribute and its advertised state
	*
	* @return EOS_Success if setting this parameter was successful
	*		   EOS_InvalidParameters if the attribution is missing information or otherwise invalid
	*         EOS_IncompatibleVersion if the API version passed in is incorrect
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationAddAttributeDouble(const FEOSHSessionModification& handle, EEOSESessionAttributeAdvertisementType advertisementType, const FString& key, const FString& value);

	/**
	 * Associate an attribute with this session
	 * An attribute is something that may or may not be advertised with the session.
	 * If advertised, it can be queried for in a search, otherwise the data remains local to the client
	 *
	 * @param Options Options to set the attribute and its advertised state
	 *
	 * @return EOS_Success if setting this parameter was successful
	 *		   EOS_InvalidParameters if the attribution is missing information or otherwise invalid
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationAddAttributeInt64(const FEOSHSessionModification& handle, EEOSESessionAttributeAdvertisementType advertisementType, const FString& key, const FString& value);

	/**
	 * Associate an attribute with this session
	 * An attribute is something that may or may not be advertised with the session.
	 * If advertised, it can be queried for in a search, otherwise the data remains local to the client
	 *
	 * @param Options Options to set the attribute and its advertised state
	 *
	 * @return EOS_Success if setting this parameter was successful
	 *		   EOS_InvalidParameters if the attribution is missing information or otherwise invalid
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationAddAttributeString(const FEOSHSessionModification& handle, EEOSESessionAttributeAdvertisementType advertisementType, const FString& key, const FString& value);

	/**
	 * Remove an attribute from this session
	 *
	 * @param Options Specify the key of the attribute to remove
	 *
	 * @return EOS_Success if removing this parameter was successful
	 *		   EOS_InvalidParameters if the key is null or empty
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionModificationRemoveAttribute(const FEOSHSessionModification& handle, const FEOSSessionModificationRemoveAttributeOptions& options);

	/**
	 * Representation of an existing session some local players are actively involved in (via Create/Join)
	 */

	 /**
	  * EOS_ActiveSession_CopyInfo is used to immediately retrieve a copy of active session information
	  * If the call returns an EOS_Success result, the out parameter, OutActiveSessionInfo, must be passed to EOS_ActiveSession_Info_Release to release the memory associated with it.
	  *
	  * @param Options Structure containing the input parameters
	  * @param OutActiveSessionInfo Out parameter used to receive the EOS_ActiveSession_Info structure.
	  *
	  * @return EOS_Success if the information is available and passed out in OutActiveSessionInfo
	  *         EOS_InvalidParameters if you pass a null pointer for the out parameter
	  *         EOS_IncompatibleVersion if the API version passed in is incorrect
	  *
	  * @see EOS_ActiveSession_Info
	  * @see EOS_ActiveSession_CopyInfoOptions
	  * @see EOS_ActiveSession_Info_Release
	  */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSActiveSessionCopyInfo(const FEOSHActiveSession& handle, FEOSActiveSessionCopyInfoOptions options, FEOSActiveSessionInfo& outActiveSessionInfo);

	/**
	 * Get the number of registered players associated with this active session
	 *
	 * @param Options the Options associated with retrieving the registered player count
	 *
	 * @return number of registered players in the active session or 0 if there is an error
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static int32 EOSActiveSessionGetRegisteredPlayerCount(const FEOSHActiveSession& handle, FEOSActiveSessionGetRegisteredPlayerCountOptions options);

	/**
	 * EOS_ActiveSession_GetRegisteredPlayerByIndex is used to immediately retrieve individual players registered with the active session.
	 *
	 * @param Options Structure containing the input parameters
	 *
	 * @return the product user id for the registered player at a given index or null if that index is invalid
	 *
	 * @see EOS_ActiveSession_GetRegisteredPlayerCount
	 * @see EOS_ActiveSession_GetRegisteredPlayerByIndexOptions
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static FEOSProductUserId EOSActiveSessionGetRegisteredPlayerByIndex(const FEOSHActiveSession& handle, FEOSActiveSessionGetRegisteredPlayerByIndexOptions options);

	/**
	 * This class represents the details of a session, including its session properties and the attribution associated with it
	 * Locally created or joined active sessions will contain this information as will search results.
	 * A handle to a session is required to join a session via search or invite
	 */

	 /**
	  * EOS_SessionDetails_CopyInfo is used to immediately retrieve a copy of session information from a given source such as a active session or a search result.
	  * If the call returns an EOS_Success result, the out parameter, OutSessionInfo, must be passed to EOS_SessionDetails_Info_Release to release the memory associated with it.
	  *
	  * @param Options Structure containing the input parameters
	  * @param OutSessionInfo Out parameter used to receive the EOS_SessionDetails_Info structure.
	  *
	  * @return EOS_Success if the information is available and passed out in OutSessionInfo
	  *         EOS_InvalidParameters if you pass a null pointer for the out parameter
	  *         EOS_IncompatibleVersion if the API version passed in is incorrect
	  *
	  * @see EOS_SessionDetails_Info
	  * @see EOS_SessionDetails_CopyInfoOptions
	  * @see EOS_SessionDetails_Info_Release
	  */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionDetailsCopyInfo(const FEOSHSessionDetails& handle, FEOSSessionDetailsCopyInfoOptions options, FEOSSessionDetailsInfo& outSessionInfo);

	/**
	 * Get the number of attributes associated with this session
	 *
	 * @param Options the Options associated with retrieving the attribute count
	 *
	 * @return number of attributes on the session or 0 if there is an error
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static int32 EOSSessionDetailsGetSessionAttributeCount(const FEOSHSessionDetails& handle, FEOSSessionDetailsGetSessionAttributeCountOptions options);

	/**
	 * EOS_SessionDetails_CopySessionAttributeByIndex is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result.
	 * If the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it.
	 *
	 * @param Options Structure containing the input parameters
	 * @param OutSessionAttribute Out parameter used to receive the EOS_SessionDetails_Attribute structure.
	 *
	 * @return EOS_Success if the information is available and passed out in OutSessionAttribute
	 *         EOS_InvalidParameters if you pass a null pointer for the out parameter
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *
	 * @see EOS_SessionDetails_Attribute
	 * @see EOS_SessionDetails_CopySessionAttributeByIndexOptions
	 * @see EOS_SessionDetails_Attribute_Release
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionDetailsCopySessionAttributeByIndex(const FEOSHSessionDetails& handle, FEOSSessionDetailsCopySessionAttributeByIndexOptions options, FEOSSessionDetailsAttribute& outSessionAttribute);

	/**
	 * EOS_SessionDetails_CopySessionAttributeByKey is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result.
	 * If the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it.
	 *
	 * @param Options Structure containing the input parameters
	 * @param OutSessionAttribute Out parameter used to receive the EOS_SessionDetails_Attribute structure.
	 *
	 * @return EOS_Success if the information is available and passed out in OutSessionAttribute
	 *         EOS_InvalidParameters if you pass a null pointer for the out parameter
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *
	 * @see EOS_SessionDetails_Attribute
	 * @see EOS_SessionDetails_CopySessionAttributeByKeyOptions
	 * @see EOS_SessionDetails_Attribute_Release
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionDetailsCopySessionAttributeByKey(const FEOSHSessionDetails& handle, FEOSSessionDetailsCopySessionAttributeByKeyOptions options, FEOSSessionDetailsAttribute& outSessionAttribute);

	/**
	 * Class responsible for the creation, setup, and execution of a search query.
	 * Search parameters are defined, the query is executed and the search results are returned within this object
	 */

	 /**
	  * Set a session id to find and will return at most one search result.  Setting TargetUserId or SearchParameters will result in EOS_SessionSearch_Find failing
	  *
	  * @param Options A specific session id for which to search
	  *
	  * @return EOS_Success if setting this session id was successful
	  *         EOS_InvalidParameters if the session id is invalid or null
	  *         EOS_IncompatibleVersion if the API version passed in is incorrect
	  */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionSearchSetSessionId(const FEOSHSessionSearch& handle, FEOSSessionSearchSetSessionIdOptions options);

	/**
	 * Set a target user id to find and will return at most one search result.  Setting SessionId or SearchParameters will result in EOS_SessionSearch_Find failing
	 * NOTE: a search result will only be found if this user is in a public session
	 *
	 * @param Options a specific target user id to find
	 *
	 * @return EOS_Success if setting this target user id was successful
	 *         EOS_InvalidParameters if the target user id is invalid or null
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionSearchSetTargetUserId(const FEOSHSessionSearch& handle, FEOSSessionSearchSetTargetUserIdOptions options);

	/**
	 * Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing
	 *
	 * @param Options a search parameter and its comparison op
	 *
	 * @return EOS_Success if setting this search parameter was successful
	 *         EOS_InvalidParameters if the search criteria is invalid or null
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *
	 * @see EOS_Sessions_AttributeData
	 * @see EOS_EComparisonOp
	 */
	static EOSResult EOSSessionSearchSetParameter(const FEOSHSessionSearch& handle, const FEOSSessionSearchSetParameterOptions& options);

	/**
	 * Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing
	 *
	 * @param Options a search parameter and its comparison op
	 *
	 * @return EOS_Success if setting this search parameter was successful
	 *         EOS_InvalidParameters if the search criteria is invalid or null
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *
	 * @see EOS_Sessions_AttributeData
	 * @see EOS_EComparisonOp
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionSearchSetParameterBool(const FEOSHSessionSearch& handle, FString key, bool bValue, EEOSEComparisonOp comparisonOp);

	/**
	* Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing
	*
	* @param Options a search parameter and its comparison op
	*
	* @return EOS_Success if setting this search parameter was successful
	*         EOS_InvalidParameters if the search criteria is invalid or null
	*         EOS_IncompatibleVersion if the API version passed in is incorrect
	*
	* @see EOS_Sessions_AttributeData
	* @see EOS_EComparisonOp
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionSearchSetParameterDouble(const FEOSHSessionSearch& handle, FString key, FString value, EEOSEComparisonOp comparisonOp);

	/**
	 * Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing
	 *
	 * @param Options a search parameter and its comparison op
	 *
	 * @return EOS_Success if setting this search parameter was successful
	 *         EOS_InvalidParameters if the search criteria is invalid or null
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *
	 * @see EOS_Sessions_AttributeData
	 * @see EOS_EComparisonOp
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionSearchSetParameterInt64(const FEOSHSessionSearch& handle, FString key, FString value, EEOSEComparisonOp comparisonOp);

	/**
	 * Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing
	 *
	 * @param Options a search parameter and its comparison op
	 *
	 * @return EOS_Success if setting this search parameter was successful
	 *         EOS_InvalidParameters if the search criteria is invalid or null
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *
	 * @see EOS_Sessions_AttributeData
	 * @see EOS_EComparisonOp
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionSearchSetParameterString(const FEOSHSessionSearch& handle, FString key, FString value, EEOSEComparisonOp comparisonOp);

	/**
	 * Remove a parameter from the array of search criteria.
	 *
	 * @params Options a search parameter key name to remove
	 *
	 * @return EOS_Success if removing this search parameter was successful
	 *         EOS_InvalidParameters if the search key is invalid or null
	 *		   EOS_NotFound if the parameter was not a part of the search criteria
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionSearchRemoveParameter(const FEOSHSessionSearch& handle, FEOSSessionSearchRemoveParameterOptions options);

	/**
	 * Set the maximum number of search results to return in the query, can't be more than EOS_SESSIONS_MAX_SEARCH_RESULTS
	 *
	 * @param Options maximum number of search results to return in the query
	 *
	 * @return EOS_Success if setting the max results was successful
	 *         EOS_InvalidParameters if the number of results requested is invalid
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionSearchSetMaxResults(const FEOSHSessionSearch& handle, FEOSSessionSearchSetMaxResultsOptions options);

	/**
	 * Find sessions matching the search criteria setup via this session search handle.
	 * When the operation completes, this handle will have the search results that can be parsed
	 *
	 * @param Options Structure containing information about the search criteria to use
	 * @param callback A callback that is fired when the search operation completes, either successfully or in error
	 *
	 * @return EOS_Success if the find operation completes successfully
	 *         EOS_NotFound if searching for an individual session by sessionid or targetuserid returns no results
	 *         EOS_InvalidParameters if any of the options are incorrect
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		void EOSSessionSearchFind(const FEOSHSessionSearch& handle, FEOSSessionSearchFindOptions options, const FOnSessionFindCallback& callback);

	/**
	 * Get the number of search results found by the search parameters in this search
	 *
	 * @param Options Options associated with the search count
	 *
	 * @return return the number of search results found by the query or 0 if search is not complete
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static int32 EOSSessionSearchGetSearchResultCount(const FEOSHSessionSearch& handle, FEOSSessionSearchGetSearchResultCountOptions options);

	/**
	 * EOS_SessionSearch_CopySearchResultByIndex is used to immediately retrieve a handle to the session information from a given search result.
	 * If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.
	 *
	 * @param Options Structure containing the input parameters
	 * @param OutSessionHandle out parameter used to receive the session handle
	 *
	 * @return EOS_Success if the information is available and passed out in OutSessionHandle
	 *         EOS_InvalidParameters if you pass an invalid index or a null pointer for the out parameter
	 *         EOS_IncompatibleVersion if the API version passed in is incorrect
	 *
	 * @see EOS_SessionSearch_CopySearchResultByIndexOptions
	 * @see EOS_SessionDetails_Release
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions")
		static EOSResult EOSSessionSearchCopySearchResultByIndex(const FEOSHSessionSearch& handle, const FEOSSessionSearchCopySearchResultByIndexOptions& options, FEOSHSessionDetails& outSessionHandle);

	/**
	* Release the memory associated with session modification.
	* This must be called on data retrieved from EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification
	*
	* @param SessionModificationHandle - The session modification handle to release
	*
	* @see EOS_Sessions_CreateSessionModification
	* @see EOS_Sessions_UpdateSessionModification
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions|Memory")
		static void EOSSessionModificationRelease(const FEOSHSessionModification& handle);

	/**
	 * Release the memory associated with an active session.
	 * This must be called on data retrieved from EOS_Sessions_CopyActiveSessionHandle
	 *
	 * @param ActiveSessionHandle - The active session handle to release
	 *
	 * @see EOS_Sessions_CopyActiveSessionHandle
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions|Memory")
		static void EOSActiveSessionRelease(const FEOSHActiveSession& handle);

	/**
	 * Release the memory associated with a single session. This must be called on data retrieved from EOS_SessionSearch_CopySearchResultByIndex.
	 *
	 * @param SessionHandle - The session handle to release
	 *
	 * @see EOS_SessionSearch_CopySearchResultByIndex
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions|Memory")
		static void EOSSessionDetailsRelease(const FEOSHSessionDetails& handle);

	/**
	 * Release the memory associated with a session search. This must be called on data retrieved from EOS_Sessions_CreateSessionSearch.
	 *
	 * @param SessionSearchHandle - The session search handle to release
	 *
	 * @see EOS_Sessions_CreateSessionSearch
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Sessions|Memory")
		static void EOSSessionSearchRelease(const FEOSHSessionSearch& handle);
private:
	static void Internal_OnSessionsUpdateSessionCallback(const EOS_Sessions_UpdateSessionCallbackInfo* data);
	static void Internal_OnSessionsDestroySessionCallback(const EOS_Sessions_DestroySessionCallbackInfo* data);
	static void Internal_OnSessionsJoinSessionCallback(const EOS_Sessions_JoinSessionCallbackInfo* data);
	static void Internal_OnSessionsStartSessionCallback(const EOS_Sessions_StartSessionCallbackInfo* data);
	static void Internal_OnSessionsEndSessionCallback(const EOS_Sessions_EndSessionCallbackInfo* data);
	static void Internal_OnSessionRegisterPlayersCallback(const EOS_Sessions_RegisterPlayersCallbackInfo* data);
	static void Internal_OnSessionsUnregisterPlayersCallback(const EOS_Sessions_UnregisterPlayersCallbackInfo* data);
	static void Internal_OnSessionsSendInviteCallback(const EOS_Sessions_SendInviteCallbackInfo* data);
	static void Internal_OnSessionsRejectInviteCallback(const EOS_Sessions_RejectInviteCallbackInfo* data);
	static void Internal_OnSessionsQueryInvitesCallback(const EOS_Sessions_QueryInvitesCallbackInfo* data);
	static void Internal_OnSessionsFindCallback(const EOS_SessionSearch_FindCallbackInfo* data);

private:
	static UCoreSessions* SessionsObject;
};
