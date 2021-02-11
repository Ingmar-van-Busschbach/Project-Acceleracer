/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "Presence/EOSPresenceTypes.h"
#include "EOSPresence.generated.h"

/**
 * The Presence methods allow you to query, read other player's presence information, as well as to modify your own.
 *
 * QueryPresence must be called once per login, per remote user, before data will be available. It is currently only possible to query presence for
 * users that are on your friends list, all other queries will return no results.
 *
 * @see EOS_Platform_GetPresenceInterface
 */

 static TMap<FEOSNotificationId, FOnPresenceChangedCallback> OnPresenceChangedCallbacks;
 static TMap<FEOSNotificationId, FOnPresenceOnJoinGameAcceptedCallback> OnPresenceOnJoinGameAcceptedCallbacks;

UCLASS()
class EOSCORE_API UCorePresence : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
   UCorePresence();
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	/**
	 * The Presence methods allow you to query, read other player's presence information, as well as to modify your own.
	 *
	 * QueryPresence must be called once per login, per remote user, before data will be available. It is currently only possible to query presence for
	 * users that are on your friends list, all other queries will return no results.
	 *
	 * @see EOS_Platform_GetPresenceInterface
	 */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCorePresence* GetPresence() { return PresenceObject; }
public:
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Presence|Delegates")
		FOnPresenceQueryPresenceCompleteCallbackDelegate OnPresenceQueryPresenceCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Presence|Delegates")
		FOnPresenceSetPresenceCompleteCallbackDelegate OnPresenceSetPresenceCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Presence|Delegates")
		FOnPresenceOnJoinGameAcceptedCallbackDelegate OnPresenceOnJoinGameAcceptedCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Presence|Delegates")
		FOnPresenceChangedCallbackDelegate OnPresenceChangedCallbackDelegate;
public:
	/**
	* Query a user's presence. This must complete successfully before CopyPresence will have valid results. If HasPresence returns true for a remote
	* user, this does not need to be called.
	*
	* @param Options Object containing properties related to who is querying presence and for what user
	* @param callback Pointer to a function that handles receiving the completion information
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		void EOSPresenceQueryPresence(FEOSPresenceQueryPresenceOptions options, const FOnPresenceQueryPresenceCompleteCallback& callback);

	/**
	* Check if we already have presence for a user
	*
	* @param Options Object containing properties related to who is requesting presence and for what user
	* @return EOS_TRUE if we have presence for the requested user, or EOS_FALSE if the request was invalid or we do not have cached data
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static bool EOSPresenceHasPresence(FEOSPresenceHasPresenceOptions options);

	/**
	* Get a user's cached presence object. If successful, this data must be released by calling EOS_Presence_Info_Release
	*
	* @param Options Object containing properties related to who is requesting presence and for what user
	* @param OutPresence A pointer to a pointer of Presence Info. If the returned result is success, this will be set to data that must be later released, otherwise this will be set to NULL
	* @return Success if we have cached data, or an error result if the request was invalid or we do not have cached data.
	*
	* @see EOS_Presence_Info_Release
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static EOSResult EOSPresenceCopyPresence(FEOSPresenceCopyPresenceOptions options, FEOSPresenceInfo& outPresence);

	/**
	* Creates a presence modification handle. This handle can used to add multiple changes to your presence that can be applied with EOS_Presence_SetPresence.
	* The resulting handle must be released by calling EOS_PresenceModification_Release once it has been passed to EOS_Presence_SetPresence.
	*
	* @param Options Object containing properties related to the user modifying their presence
	* @param OutPresenceModificationHandle Pointer to a Presence Modification Handle to be set if successful
	* @return Success if we successfully created the Presence Modification Handle pointed at in OutPresenceModificationHandle, or an error result if the input data was invalid
	*
	* @see EOS_PresenceModification_Release
	* @see EOS_Presence_SetPresence
	* @see EOS_PresenceModification_SetStatus
	* @see EOS_PresenceModification_SetRawRichText
	* @see EOS_PresenceModification_SetData
	* @see EOS_PresenceModification_DeleteData
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static EOSResult EOSPresenceCreatePresenceModification(FEOSPresenceCreatePresenceModificationOptions options, FEOSHPresenceModification& handle);

	/**
	* Sets your new presence with the data applied to a PresenceModificationHandle. The PresenceModificationHandle can be released safely after calling this function.
	*
	* @param Options Object containing a PresenceModificationHandle and associated user data
	
	* @param callback Pointer to a function that handles receiving the completion information
	*
	* @see EOS_Presence_CreatePresenceModification
	* @see EOS_PresenceModification_Release
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		void EOSPresenceSetPresence(FEOSPresenceSetPresenceOptions options, const FOnPresenceSetPresenceCompleteCallback& callback);

	/**
	* Register to receive notifications when presence changes. If the returned NotificationId is valid, you must call RemoveNotifyOnPresenceChanged when you no longer wish to
	* have your NotificationHandler called
	*
	* @param ClientData Data the is returned to when NotificationHandler is invoked
	* @param NotificationHandler The callback to be fired when a presence change occurs
	* @return Notification ID representing the registered callback if successful, an invalid NotificationId if not
	*
	* @see EOS_INVALID_NOTIFICATIONID
	* @see EOS_Presence_RemoveNotifyOnPresenceChanged
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence", meta = (AutoCreateRefTerm = "callback"))
		static FEOSNotificationId EOSPresenceAddNotifyOnPresenceChanged(const FOnPresenceChangedCallback& callback);

	/**
	* Unregister a previously bound notification handler from receiving presence update notifications
	*
	* @param NotificationId The Notification ID representing the registered callback
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static void EOSPresenceRemoveNotifyOnPresenceChanged(FEOSNotificationId id);

	/**
	* Register to receive notifications when a user accepts a join game option via the social overlay.
	* @note must call RemoveNotifyJoinGameAccepted to remove the notification
	*
	* @param Options Structure containing information about the request.
	* @param ClientData Arbitrary data that is passed back to you in the callback.
	* @param Notification A callback that is fired when a a notification is received.
	*
	* @return handle representing the registered callback
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence", meta = (AutoCreateRefTerm = "callback"))
		static FEOSNotificationId EOSPresenceAddNotifyJoinGameAccepted(const FOnPresenceOnJoinGameAcceptedCallback& callback);

	/**
	* Unregister from receiving notifications when a user accepts a join game option via the social overlay.
	*
	* @param InId Handle representing the registered callback
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static void EOSPresenceRemoveNotifyJoinGameAccepted(FEOSNotificationId id);

	/**
	* Gets a join info custom game-data string for a specific user. This is a helper function for reading the presence data related to how a user can be joined.
	* Its meaning is entirely application dependent.
	*
	* This value will be valid only after a QueryPresence call has successfully completed.
	*
	* @param Options Object containing an associated user
	* @param OutBuffer The buffer into which the character data should be written.  The buffer must be long enough to hold a string of EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH.
	* @param InOutBufferLength Used as an input to define the OutBuffer length.
	*                          The input buffer should include enough space to be null-terminated.
	*                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.
	*
	* @return An EOSResult that indicates whether the location string was copied into the OutBuffer.
	*         EOS_Success if the information is available and passed out in OutBuffer
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if there is user or the location string was not found.
	*         EOS_LimitExceeded - The OutBuffer is not large enough to receive the location string. InOutBufferLength contains the required minimum length to perform the operation successfully.
	*
	* @see EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static EOSResult EOSPresenceGetJoinInfo(FEOSPresenceGetJoinInfoOptions options, FString& outInfo);

	/**
	* To modify your own presence, you must call EOS_Presence_CreatePresenceModification to create a Presence Modification handle. To modify that handle, call
	* EOS_PresenceModification_* methods. Once you are finished, call EOS_Presence_SetPresence with your handle. You must then release your Presence Modification
	* handle by calling EOS_PresenceModification_Release.
	*/

	/**
	* Modifies a user's online status to be the new state.
	*
	* @param Options Object containing properties related to setting a user's Status
	* @return Success if modification was added successfully, otherwise an error code related to the problem
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static EOSResult EOSPresenceModificationSetStatus(const FEOSHPresenceModification& handle, FEOSPresenceModificationSetStatusOptions options);

	/**
	* Modifies a user's Rich Presence string to a new state. This is the exact value other users will see
	* when they query the local user's presence.
	*
	* @param Options Object containing properties related to setting a user's RichText string
	* @return Success if modification was added successfully, otherwise an error code related to the problem
	*
	* @see EOS_PRESENCE_RICH_TEXT_MAX_VALUE_LENGTH
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static EOSResult EOSPresenceModificationSetRawRichText(const FEOSHPresenceModification& handle, FEOSPresenceModificationSetRawRichTextOptions options);

	/**
	* Modifies one or more rows of user-defined presence data for a local user. At least one InfoData object
	* must be specified.
	*
	* @param Options Object containing an array of new presence data.
	* @return Success if modification was added successfully, otherwise an error code related to the problem
	*
	* @see EOS_PRESENCE_DATA_MAX_KEYS
	* @see EOS_PRESENCE_DATA_MAX_KEY_LENGTH
	* @see EOS_PRESENCE_DATA_MAX_VALUE_LENGTH
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static EOSResult EOSPresenceModificationSetData(const FEOSHPresenceModification& handle, FEOSPresenceModificationSetDataOptions options);

	/**
	* Removes one or more rows of user-defined presence data for a local user. At least one DeleteDataInfo object
	* must be specified.
	*
	* @param Options Object containing an array of new presence data.
	* @return Success if modification was added successfully, otherwise an error code related to the problem
	*
	* @see EOS_PRESENCE_DATA_MAX_KEYS
	* @see EOS_PRESENCE_DATA_MAX_KEY_LENGTH
	* @see EOS_PRESENCE_DATA_MAX_VALUE_LENGTH
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static EOSResult EOSPresenceModificationDeleteData(const FEOSHPresenceModification& handle, FEOSPresenceModificationDeleteDataOptions options);

	/**
	* Sets your new join info custom game-data string. This is a helper function for reading the presence data related to how a user can be joined.
	* Its meaning is entirely application dependent.
	*
	* @param Options Object containing a join info string and associated user data
	* @return Success if modification was added successfully, otherwise an error code related to the problem
	*
	* @see EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static EOSResult EOSPresenceModificationSetJoinInfo(const FEOSHPresenceModification& handle, FEOSPresenceModificationSetJoinInfoOptions options);

	/**
	 * Release the memory associated with an EOS_HPresenceModification handle. This must be called on Handles retrieved from EOS_Presence_CreatePresenceModification.
	 * This can be safely called on a NULL presence modification handle. This also may be safely called while a call to SetPresence is still pending.
	 *
	 * @param PresenceModificationHandle The presence modification handle to release
	 *
	 * @see EOS_Presence_CreatePresenceModification
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Presence")
		static void EOSPresenceModificationRelease(const FEOSHPresenceModification& handle);
private:
	static void Internal_OnPresenceQueryPresenceCallback(const EOS_Presence_QueryPresenceCallbackInfo* data);
	static void Internal_OnPresenceSetPresenceCallback(const EOS_Presence_SetPresenceCallbackInfo* data);
private:
    static UCorePresence* PresenceObject;
};
