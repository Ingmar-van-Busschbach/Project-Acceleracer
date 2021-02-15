/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "eos_friends_types.h"
#include "Friends/EOSFriendsTypes.h"
#include "EOSFriends.generated.h"

/**
 * The Friends Interface is used to manage a user's friends list, by interacting with the backend services, and to retrieve the cached list of friends and pending invitations.
 * All Friends Interface calls take a handle of type EOS_HFriends as the first parameter.
 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetFriendsInterface function.
 *
 * @see EOS_Platform_GetFriendsInterface
 */

 static TMap<FEOSNotificationId, FOnFriendsUpdateCallback> OnFriendsUpdateCallbacks;

UCLASS()
class EOSCORE_API UCoreFriends : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
	UCoreFriends();
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	/**
	 * The Friends Interface is used to manage a user's friends list, by interacting with the backend services, and to retrieve the cached list of friends and pending invitations.
	 * All Friends Interface calls take a handle of type EOS_HFriends as the first parameter.
	 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetFriendsInterface function.
	 *
	 * @see EOS_Platform_GetFriendsInterface
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreFriends* GetFriends() { return FriendsObject; }
public:
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Friends|Delegates")
		FOnFriendsQueryFriendsCallbackDelegate OnFriendsQueryFriendsCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Friends|Delegates")
		FOnFriendsSendInviteCallbackDelegate OnFriendsSendInviteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Friends|Delegates")
		FOnFriendsAcceptInviteCallbackDelegate OnFriendsAcceptInviteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Friends|Delegates")
		FOnFriendsRejectInviteCallbackDelegate OnFriendsRejectInviteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Friends|Delegates")
		FOnFriendsDeleteFriendCallbackDelegate OnFriendsDeleteFriendCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Friends|Delegates")
		FOnFriendsUpdateCallbackDelegate OnFriendsUpdateCallbackDelegate;
public:
	/**
	* Starts an asynchronous task that reads the user's friends list from the backend service, caching it for future use.
	*
	* @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).
	*
	* @param Options structure containing the account for which to retrieve the friends list
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Friends")
		void EOSFriendsQueryFriends(FEOSFriendsQueryFriendsOptions options, const FOnFriendsQueryFriendsCallback& callback);

	/**
	* Starts an asynchronous task that sends a friend invitation to another user. The completion delegate is executed after the backend response has been received.
	* It does not indicate that the target user has responded to the friend invitation.
	*
	* @param Options structure containing the account to send the invite from and the account to send the invite to
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Friends")
		void EOSFriendsSendInvite(FEOSFriendsSendInviteOptions options, const FOnFriendsSendInviteCallback& callback);

	/**
	* Starts an asynchronous task that accepts a friend invitation from another user. The completion delegate is executed after the backend response has been received.
	*
	* @param Options structure containing the logged in account and the inviting account
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Friends")
		void EOSFriendsAcceptInvite(FEOSFriendsAcceptInviteOptions options, const FOnFriendsAcceptInviteCallback& callback);

	/**
	* Starts an asynchronous task that rejects a friend invitation from another user. The completion delegate is executed after the backend response has been received.
	*
	* @param Options structure containing the logged in account and the inviting account
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Friends")
		void EOSFriendsRejectInvite(FEOSFriendsRejectInviteOptions options, const FOnFriendsRejectInviteCallback& callback);

	/**
	* Retrieves the number of friends on the friends list that has already been retrieved by the EOS_Friends_QueryFriends API.
	*
	* @param Options structure containing the account id of the friends list
	* @return the number of friends on the list
	*
	* @see EOS_Friends_GetFriendAtIndex
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Friends")
		static int32 EOSFriendsGetFriendsCount(FEOSFriendsGetFriendsCountOptions options);

	/**
	* Retrieves the account id of an entry from the friends list that has already been retrieved by the EOS_Friends_QueryFriends API.
	* The account id returned by this function may belong to an account that has been invited to be a friend or that has invited the local user to be a friend.
	* To determine if the account id returned by this function is a friend or a pending friend invitation, use the EOS_Friends_GetStatus function.
	*
	* @param Options structure containing the account id of the friends list and the index into the list
	* @return the account id of the friend. Note that if the index provided is out of bounds, the returned account id will be a "null" account id.
	*
	* @see EOS_Friends_GetFriendsCount
	* @see EOS_Friends_GetStatus
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Friends")
		static FEOSEpicAccountId EOSFriendsGetFriendAtIndex(FEOSFriendsGetFriendAtIndexOptions options);

	/**
	* Retrieve the friendship status between the local user and another user.
	*
	* @param Options structure containing the account id of the friend list to check and the account of the user to test friendship status
	* @return A value indicating whether the two accounts have a friendship, pending invites in either direction, or no relationship
	*         EOS_FS_Friends is returned for two users that have confirmed friendship
	*         EOS_FS_InviteSent is returned when the local user has sent a friend invitation but the other user has not accepted or rejected it
	*         EOS_FS_InviteReceived is returned when the other user has sent a friend invitation to the local user
	*         EOS_FS_NotFriends is returned when there is no known relationship
	*
	* @see EOS_EFriendsStatus
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Friends")
		static EEOSEFriendsStatus EOSFriendsGetStatus(FEOSFriendsGetStatusOptions options);

	/**
	* Listen for changes to friends for a particular account.
	*
	* @param Options Information about who would like notifications.
	* @param ClientData This value is returned to the caller when FriendsUpdateHandler is invoked.
	* @param FriendsUpdateHandler The callback to be invoked when a change to any friend status changes.
	* @return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Friends")
		FEOSNotificationId EOSFriendsAddNotifyFriendsUpdate(const FOnFriendsUpdateCallback& callback);

	/**
	* Stop listening for friends changes on a previously bound handler.
	*
	* @param NotificationId The previously bound notification ID.
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Friends")
		static void EOSFriendsRemoveNotifyFriendsUpdate(FEOSNotificationId id);
private:
	static void Internal_OnFriendsQueryFriendsCallback(const EOS_Friends_QueryFriendsCallbackInfo* data);
	static void Internal_OnFriendsSendInviteCallback(const EOS_Friends_SendInviteCallbackInfo* data);
	static void Internal_OnFriendsAcceptInviteCallback(const EOS_Friends_AcceptInviteCallbackInfo* data);
	static void Internal_OnFriendsRejectInviteCallback(const EOS_Friends_RejectInviteCallbackInfo* data);
private:
	static UCoreFriends* FriendsObject;
};
