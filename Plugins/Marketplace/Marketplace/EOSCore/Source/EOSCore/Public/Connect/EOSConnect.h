/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "Connect/EOSConnectTypes.h"
#include "eos_connect_types.h"
#include "EOSConnect.generated.h"

/**
 * The Connect Interface is used to manage local user permissions and access to backend services through the verification of various forms of credentials.
 * It creates an association between third party providers and an internal mapping that allows Epic Online Services to represent a user agnostically
 * All Connect Interface calls take a handle of type EOS_HConnect as the first parameter.
 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetConnectInterface function.
 *
 * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.
 *
 * @see EOS_Platform_GetConnectInterface
 */

 static TMap<FEOSNotificationId, FOnAuthExpirationCallback> OnAuthExpirationCallbacks;
 static TMap<FEOSNotificationId, FOnLoginStatusChangedCallback> OnLoginStatusChangedCallbacks;

UCLASS()
class EOSCORE_API UCoreConnect : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
    UCoreConnect();
protected:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
public:
    /**
     * The Connect Interface is used to manage local user permissions and access to backend services through the verification of various forms of credentials.
     * It creates an association between third party providers and an internal mapping that allows Epic Online Services to represent a user agnostically
     * All Connect Interface calls take a handle of type EOS_HConnect as the first parameter.
     * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetConnectInterface function.
     *
     * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.
     *
     * @see EOS_Platform_GetConnectInterface
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
        static UCoreConnect* GetConnect() { return ConnectObject; }
public:
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
        FOnLoginCallbackDelegate OnLoginCallbackDelegate;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnCreateUserCallbackDelegate OnCreateUserCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnLinkAccountCallbackDelegate OnLinkAccountCallback;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnUnlinkAccountCallbackDelegate OnUnlinkAccountCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnCreateDeviceIdCallbackDelegate OnCreateDeviceIdCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnDeleteDeviceIdCallbackDelegate OnDeleteDeviceIdCallback;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnTransferDeviceIdAccountCallbackDelegate OnTransferDeviceIdAccountCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnQueryExternalAccountMappingsCallbackDelegate OnQueryExternalAccountMappingsCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnQueryProductUserIdMappingsCallbackDelegate OnQueryProductUserIdMappingsCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnAuthExpirationCallbackDelegate OnAuthExpirationCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Connect|Delegates")
		FOnLoginStatusChangedCallbackDelegate OnLoginStatusChangedCallback;
public:
    /**
    * Login/Authenticate given a valid set of external auth credentials.
    *
    * @param Options structure containing the external account credentials and type to use during the login operation
    * @param callback a callback that is fired when the login operation completes, either successfully or in error
    */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        void EOSConnectLogin(FEOSConnectLoginOptions options, const FOnLoginCallback& callback);

    /**
     * Create an account association with the Epic Online Service as a product user given their external auth credentials
     *
     * @param Options structure containing a continuance token from a "user not found" response during Login (always try login first)
     * @param callback a callback that is fired when the create operation completes, either successfully or in error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        void EOSConnectCreateUser(FEOSConnectCreateUserOptions options, const FOnCreateUserCallback& callback);

    /**
     * Link a set of external auth credentials with an existing product user on the Epic Online Service
     *
     * @param Options structure containing a continuance token from a "user not found" response during Login (always try login first) and a currently logged in user not already associated with this external auth provider
     * @param callback a callback that is fired when the link operation completes, either successfully or in error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        void EOSConnectLinkAccount(FEOSConnectLinkAccountOptions options, const FOnLinkAccountCallback& callback);

	/**
	 * Unlink external auth credentials from the owning keychain of a logged in product user.
	 *
	 * This function allows recovering the user from scenarios where they have accidentally proceeded to creating
	 * a new product user for the local native user account, instead of linking it with an existing keychain that
	 * they have previously created by playing the game (or another game owned by the organization) on another platform.
	 *
	 * In such scenario, after the initial platform login and a new product user creation, the user wishes to re-login
	 * using other set of external auth credentials to connect with their existing game progression data. In order to
	 * allow automatic login also on the current platform, they will need to unlink the accidentally created new keychain
	 * and product user and then use the EOS_Connect_Login and EOS_Connect_LinkAccount APIs to link the local native platform
	 * account with that previously created existing product user and its owning keychain.
	 *
	 * In another secnario, the user may simply want to disassociate the account that they have logged in with from the current
	 * keychain that it is linked with, perhaps to link it against another keychain or to separate the game progressions again.
	 *
	 * In order to protect against account theft, it is only possible to unlink user accounts that have been authenticated
	 * and logged in to the product user in the current session. This prevents a malicious actor from gaining access to one
	 * of the linked accounts and using it to remove all other accounts linked with the keychain. This also prevents a malicious
	 * actor from replacing the unlinked account with their own corresponding account on the same platform, as the unlinking
	 * operation will ensure that any existing authentication session cannot be used to re-link and overwrite the entry without
	 * authenticating with one of the other linked accounts in the keychain. These restrictions limit the potential attack surface
	 * related to account theft scenarios.
	 *
	 * @param Options structure containing operation input parameters
	 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate
	 * @param CompletionDelegate a callback that is fired when the unlink operation completes, either successfully or in error
	 */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
		void EOSConnectUnlinkAccount(FEOSConnectUnlinkAccountOptions options, const FOnUnlinkAccountCallback& callback);

    /**
     * Create a new unique pseudo-account that can be used to identify the current user profile on the local device.
     *
     * This function is intended to be used by mobile games and PC games that wish to allow
     * a new user to start playing without requiring to login to the game using any user identity.
     * In addition to this, the Device ID feature is used to automatically login the local user
     * also when they have linked at least one external user account(s) with the local Device ID.
     *
     * It is possible to link many devices with the same user's account keyring using the Device ID feature.
     *
     * Linking a device later or immediately with a real user account will ensure that the player
     * will not lose their progress if they switch devices or lose the device at some point,
     * as they will be always able to login with one of their linked real accounts and also link
     * another new device with the user account associations keychain. Otherwise, without having
     * at least one permanent user account linked to the Device ID, the player would lose all of their
     * game data and progression permanently should something happen to their device or the local
     * user profile on the device.
     *
     * After a successful one-time CreateDeviceId operation, the game can login the local user
     * automatically on subsequent game starts with EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN
     * credentials type. If a Device ID already exists for the local user on the device then EOS_DuplicateNotAllowed
     * error result is returned and the caller should proceed to calling EOS_Connect_Login directly.
     *
     * @param Options structure containing operation input parameters
     * @param callback a callback that is fired when the create operation completes, either successfully or in error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        void EOSConnectCreateDeviceId(FEOSConnectCreateDeviceIdOptions options, const FOnCreateDeviceIdCallback& callback);

    /**
     * Delete any existing Device ID access credentials for the current user profile on the local device.
     *
     * The deletion is permanent and it is not possible to recover lost game data and progression
     * if the Device ID had not been linked with at least one real external user account.
     *
     * @param Options structure containing operation input parameters
     * @param callback a callback that is fired when the delete operation completes, either successfully or in error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        void EOSConnectDeleteDeviceId(FEOSConnectDeleteDeviceIdOptions options, const FOnDeleteDeviceIdCallback& callback);

	/**
	 * Transfer a Device ID pseudo-account and the product user associated with it into another
	 * keychain linked with real user accounts (such as Epic Games, Playstation, Xbox, and other).
	 *
	 * This function allows transferring a product user, i.e. the local user's game progression
	 * backend data from a Device ID owned keychain into a keychain with real user accounts
	 * linked to it. The transfer of Device ID owned product user into a keychain of real user
	 * accounts allows persisting the user's game data on the backend in the event that they
	 * would lose access to the local device or otherwise switch to another device or platform.
	 *
	 * This function is only applicable in the situation of where the local user first plays
	 * the game using the anonymous Device ID login, then later logs in using a real user
	 * account that they have also already used to play the same game or another game under the
	 * same organization within Epic Online Services. In such situation, while normally the login
	 * attempt with a real user account would return EOS_InvalidUser and an EOS_ContinuanceToken
	 * and allow calling the EOS_Connect_LinkAccount API to link it with the Device ID's keychain,
	 * instead the login operation succeeds and finds an existing user because the association
	 * already exists. Because the user cannot have two product users simultaneously to play with,
	 * the game should prompt the user to choose which profile to keep and which one to discard
	 * permanently. Based on the user choice, the game may then proceed to transfer the Device ID
	 * login into the keychain that is persistent and backed by real user accounts, and if the user
	 * chooses so, move the product user as well into the destination keychain and overwrite the
	 * existing previous product user with it. To clarify, moving the product user with the Device ID
	 * login in this way into a persisted keychain allows to preserve the so far only locally persisted
	 * game progression and thus protect the user against a case where they lose access to the device.
	 *
	 * On success, the completion callback will return the preserved EOS_ProductUserId that remains
	 * logged in while the discarded EOS_ProductUserId has been invalidated and deleted permanently.
	 * Consecutive logins using the existing Device ID login type or the external account will
	 * connect the user to the same backend data belonging to the preserved EOS_ProductUserId.
	 *
	 * Example walkthrough: Cross-platform mobile game using the anonymous Device ID login.
	 *
	 * For onboarding new users, the game will attempt to always automatically login the local user
	 * by calling EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN login type. If the local
	 * Device ID credentials are not found, and the game wants a frictionless entry for the first time
	 * user experience, the game will automatically call EOS_Connect_CreateDeviceId to create new
	 * Device ID pseudo-account and then login the local user into it. Consecutive game starts will
	 * thus automatically login the user to their locally persisted Device ID account.
	 *
	 * The user starts playing anonymously using the Device ID login type and makes significant game progress.
	 * Later, they login using an external account that they have already used previously for the
	 * same game perhaps on another platform, or another game owned by the same organization.
	 * In such case, EOS_Connect_Login will automatically login the user to their existing account
	 * linking keychain and create automatically a new empty product user for this product.
	 *
	 * In order for the user to use their existing previously created keychain and have the locally
	 * created Device ID login reference to that keychain instead, the user's current product user
	 * needs to be moved to be under that keychain so that their existing game progression will be
	 * preserved. To do so, the game can call EOS_Connect_TransferDeviceIdAccount to transfer the
	 * Device ID login and the product user associated with it into the other keychain that has real
	 * external user account(s) linked to it. Note that it is important that the game either automatically
	 * checks that the other product user does not have any meaningful progression data, or otherwise
	 * will prompt the user to make the choice on which game progression to preserve and which can
	 * be discarded permanently. The other product user will be discarded permanently and cannot be
	 * recovered, so it is very important that the user is guided to make the right choice to avoid
	 * accidental loss of all game progression.
	 *
	 * @see EOS_Connect_Login
	 * @see EOS_Connect_CreateDeviceId
	 *
	 * @param Options structure containing the logged in product users and specifying which one will be preserved
	 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate
	 * @param CompletionDelegate a callback that is fired when the transfer operation completes, either successfully or in error
	 */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
		void EOSConnectTransferDeviceIdAccount(FEOSConnectTransferDeviceIdAccountOptions options, const FOnTransferDeviceIdAccountCallback& callback);

    /**
     * Retrieve the equivalent product user ids from a list of external account ids from supported account providers.  The values will be cached and retrievable via EOS_Connect_GetExternalAccountMapping
     *
     * @param Options structure containing a list of external account ids, in string form, to query for the product user id representation
     * @param callback a callback that is fired when the query operation completes, either successfully or in error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        void EOSConnectQueryExternalAccountMappings(FEOSConnectQueryExternalAccountMappingsOptions options, const FOnQueryExternalAccountMappingsCallback& callback);

    /**
     * Retrieve the equivalent external account mappings from a list of product user ids.
     * This will include data for each external account info found for the linked product ids.
     *
     * The values will be cached and retrievable via EOS_Connect_GetProductUserIdMapping, EOS_Connect_CopyProductUserExternalAccountByIndex,
     * EOS_Connect_CopyProductUserExternalAccountByAccountType or EOS_Connect_CopyProductUserExternalAccountByAccountId.
     *
     * @see EOS_Connect_ExternalAccountInfo
     * @see EOS_Connect_GetProductUserExternalAccountCount
     * @see EOS_Connect_GetProductUserIdMapping
     * @see EOS_Connect_CopyProductUserExternalAccountByIndex
     * @see EOS_Connect_CopyProductUserExternalAccountByAccountType
     * @see EOS_Connect_CopyProductUserExternalAccountByAccountId
     * @see EOS_Connect_CopyProductUserInfo
     *
     * @param Options structure containing a list of product user ids to query for the external account representation
     
     * @param callback a callback that is fired when the query operation completes, either successfully or in error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        void EOSConnectQueryProductUserIdMappings(FEOSConnectQueryProductUserIdMappingsOptions options, const FOnQueryProductUserIdMappingsCallback& callback);

    /**
     * Fetch a product user id that maps to an external account id
     *
     * @param Options structure containing the local user and target external account id
     *
     * @return the product user id, previously retrieved from the backend service, for the given target external account
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static FEOSProductUserId EOSConnectGetExternalAccountMapping(FEOSConnectGetExternalAccountMappingsOptions options);

    /**
     * Fetch an external account id, in string form, that maps to a given product user id
     *
     * @param Options structure containing the local user and target product user id
     * @param OutBuffer The buffer into which the account id data should be written.  The buffer must be long enough to hold a string of EOS_CONNECT_EXTERNAL_ACCOUNT_ID_MAX_LENGTH.
     * @param InOutBufferLength The size of the OutBuffer in characters.
     *                          The input buffer should include enough space to be null-terminated.
     *                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.
     *
     * @return An EOS_EResult that indicates the external account id was copied into the OutBuffer
     *         EOS_Success if the information is available and passed out in OutUserInfo
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the mapping doesn't exist or hasn't been queried yet
     *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the external account id. InOutBufferLength contains the required minimum length to perform the operation successfully.
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static EOSResult EOSConnectGetProductUserIdMapping(FEOSConnectGetProductUserIdMappingOptions options, FString& outString);

    /**
     * Fetch the number of linked external accounts for a product user id.
     *
     * @param Options The Options associated with retrieving the external account info count.
     *
     * @see EOS_Connect_CopyProductUserExternalAccountByIndex
     *
     * @return Number of external accounts or 0 otherwise
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static int32 EOSConnectGetProductUserExternalAccountCount(FEOSConnectGetProductUserExternalAccountCountOptions options);

    /**
     * Fetch information about an external account linked to a product user id.
     * On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)
     *
     * @param Options Structure containing the target index.
     * @param OutExternalAccountInfo The external account info data for the user with given index.
     *
     * @see EOS_Connect_ExternalAccountInfo_Release
     *
     * @return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo
     *         EOS_Success if the information is available and passed out in OutExternalAccountInfo
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the account data doesn't exist or hasn't been queried yet
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static EOSResult EOSConnectCopyProductUserExternalAccountByIndex(FEOSConnectCopyProductUserExternalAccountByIndexOptions options, FEOSConnectExternalAccountInfo& outExternalAccountInfo);

    /**
     * Fetch information about an external account of a specific type linked to a product user id.
     * On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)
     *
     * @param Options Structure containing the target external account type.
     * @param OutExternalAccountInfo The external account info data for the user with given external account type.
     *
     * @see EOS_Connect_ExternalAccountInfo_Release
     *
     * @return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo
     *         EOS_Success if the information is available and passed out in OutExternalAccountInfo
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the account data doesn't exist or hasn't been queried yet
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static EOSResult EOSConnectCopyProductUserExternalAccountByAccountType(FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions options, FEOSConnectExternalAccountInfo& outExternalAccountInfo);

    /**
     * Fetch information about an external account linked to a product user id.
     * On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)
     *
     * @param Options Structure containing the target external account id.
     * @param OutExternalAccountInfo The external account info data for the user with given external account id.
     *
     * @see EOS_Connect_ExternalAccountInfo_Release
     *
     * @return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo
     *         EOS_Success if the information is available and passed out in OutExternalAccountInfo
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the account data doesn't exist or hasn't been queried yet
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static EOSResult EOSConnectCopyProductUserExternalAccountByAccountId(FEOSConnectCopyProductUserExternalAccountByAccountIdOptions options, FEOSConnectExternalAccountInfo& outExternalAccountInfo);

    /**
     * Fetch information about a Product User, using the external account that they most recently logged in with as the reference.
     * On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)
     *
     * @param Options Structure containing the target external account id.
     * @param OutExternalAccountInfo The external account info data last logged in for the user.
     *
     * @see EOS_Connect_ExternalAccountInfo_Release
     *
     * @return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo
     *         EOS_Success if the information is available and passed out in OutExternalAccountInfo
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the account data doesn't exist or hasn't been queried yet
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static EOSResult EOSConnectCopyProductUserInfo(FEOSConnectCopyProductUserInfoOptions options, FEOSConnectExternalAccountInfo& outExternalAccountInfo);

    /**
     * Fetch the number of product users that are logged in.
     *
     * @return the number of product users logged in.
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static int32 EOSConnectGetLoggedInUsersCount();

    /**
     * Fetch a product user id that is logged in. This product user id is in the Epic Online Services namespace
     *
     * @param Index an index into the list of logged in users. If the index is out of bounds, the returned product user id will be invalid.
     *
     * @return the product user id associated with the index passed
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static FEOSProductUserId EOSConnectGetLoggedInUserByIndex(int32 index);

    /**
     * Fetches the login status for an product user id.  This product user id is considered logged in as long as the underlying access token has not expired.
     *
     * @param LocalUserId the product user id of the user being queried
     *
     * @return the enum value of a user's login status
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static EEOSELoginStatus EOSConnectGetLoginStatus(FEOSProductUserId localUserId);

    /**
     * Fetches the login status for an product user id.  This product user id is considered logged in as long as the underlying access token has not expired.
     *
     * @param LocalUserId the product user id of the user being queried
     *
     * @return the enum value of a user's login status
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Connect", meta = (DisplayName = "EOSConnect Get Login Status (Pure)"))
        static EEOSELoginStatus EOSConnectGetLoginStatusPure(FEOSProductUserId localUserId) { return EOSConnectGetLoginStatus(localUserId); }

    /**
     * Register to receive upcoming authentication expiration notifications.
     * Notification is approximately 10 minutes prior to expiration.
     * Call EOS_Connect_Login again with valid third party credentials to refresh access
     *
     * @note must call RemoveNotifyAuthExpiration to remove the notification
     *
     * @param Options structure containing the API version of the callback to use
     
     * @param Notification a callback that is fired when the authentication is about to expire
     *
     * @return handle representing the registered callback
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static FEOSNotificationId EOSConnectAddNotifyAuthExpiration(const FOnAuthExpirationCallback& callback);

    /**
     * Unregister from receiving expiration notifications.
     *
     * @param InId handle representing the registered callback
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static void EOSConnectRemoveNotifyAuthExpiration(FEOSNotificationId id);

    /**
     * Register to receive user login status updates.
     * @note must call RemoveNotifyLoginStatusChanged to remove the notification
     *
     * @param Options structure containing the API version of the callback to use
     
     * @param Notification a callback that is fired when the login status for a user changes
     *
     * @return handle representing the registered callback
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static FEOSNotificationId EOSConnectAddNotifyLoginStatusChanged(const FOnLoginStatusChangedCallback& callback);

    /**
     * Unregister from receiving user login status updates.
     *
     * @param InId handle representing the registered callback
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Connect")
        static void EOSConnectRemoveNotifyLoginStatusChanged(FEOSNotificationId id);
private:
    static void Internal_OnConnectLoginCallback(const EOS_Connect_LoginCallbackInfo* data);
    static void Internal_OnConnectCreateUserCallback(const EOS_Connect_CreateUserCallbackInfo* data);
    static void Internal_OnConnectLinkAccountCallback(const EOS_Connect_LinkAccountCallbackInfo* data);
    static void Internal_OnConnectUnlinkAccountCallback(const EOS_Connect_UnlinkAccountCallbackInfo* data);
    static void Internal_OnConnectCreateDeviceIdCallback(const EOS_Connect_CreateDeviceIdCallbackInfo* data);
    static void Internal_OnConnectDeleteDeviceIdCallback(const EOS_Connect_DeleteDeviceIdCallbackInfo* data);
    static void Internal_OnConnectTransferDeviceIdAccount(const EOS_Connect_TransferDeviceIdAccountCallbackInfo* data);
    static void Internal_OnConnectQueryExternalAccountMappingsCallback(const EOS_Connect_QueryExternalAccountMappingsCallbackInfo* data);
    static void Internal_OnConnectQueryProductUserIdMappingsCallback(const EOS_Connect_QueryProductUserIdMappingsCallbackInfo* data);
private:
    static UCoreConnect* ConnectObject;
};
