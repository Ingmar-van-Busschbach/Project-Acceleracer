/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Connect/EOSConnectTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSConnectAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreConnectLogin
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreConnectLogin: public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnLoginCallbackDelegate OnCallback;
private:
    FOnLoginCallback Callback;
public:
    UEOSCoreConnectLogin() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreConnectLogin() { Callback.Unbind(); }
public:
    /**
    * Login/Authenticate given a valid set of external auth credentials.
    *
    * @param Options structure containing the external account credentials and type to use during the login operation
    * @param ClientData arbitrary data that is passed back to you in the callback
    * @param callback a callback that is fired when the login operation completes, either successfully or in error
    */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Connect|Async"))
		static UEOSCoreConnectLogin* EOSConnectLoginAsync(UObject* WorldContextObject, FEOSConnectLoginOptions options);
protected:
    FEOSConnectLoginOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSConnectLoginCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreConnectCreateUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreConnectCreateUser : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnCreateUserCallbackDelegate OnCallback;
private:
    FOnCreateUserCallback Callback;
public:
    UEOSCoreConnectCreateUser() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreConnectCreateUser() { Callback.Unbind(); }
public:
    /**
     * Create an account association with the Epic Online Service as a product user given their external auth credentials
     *
     * @param Options structure containing a continuance token from a "user not found" response during Login (always try login first)
     * @param ClientData arbitrary data that is passed back to you in the callback
     * @param callback a callback that is fired when the create operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Connect|Async"))
		static UEOSCoreConnectCreateUser* EOSConnectCreateUserAsync(UObject* WorldContextObject, FEOSConnectCreateUserOptions options);
protected:
    FEOSConnectCreateUserOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSConnectCreateUserCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreConnectLinkAccount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreConnectLinkAccount : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnLinkAccountCallbackDelegate OnCallback;
private:
    FOnLinkAccountCallback Callback;
public:
    UEOSCoreConnectLinkAccount() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreConnectLinkAccount() { Callback.Unbind(); }
public:
    /**
     * Link a set of external auth credentials with an existing product user on the Epic Online Service
     *
     * @param Options structure containing a continuance token from a "user not found" response during Login (always try login first) and a currently logged in user not already associated with this external auth provider
     * @param ClientData arbitrary data that is passed back to you in the callback
     * @param callback a callback that is fired when the link operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Connect|Async"))
		static UEOSCoreConnectLinkAccount* EOSConnectLinkAccountAsync(UObject* WorldContextObject, FEOSConnectLinkAccountOptions options);
protected:
    FEOSConnectLinkAccountOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSConnectLinkAccountCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreConnectUnlinkAccount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreConnectUnlinkAccount : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnUnlinkAccountCallbackDelegate OnCallback;
private:
    FOnUnlinkAccountCallback Callback;
public:
    UEOSCoreConnectUnlinkAccount() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreConnectUnlinkAccount() { Callback.Unbind(); }
public:
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
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Connect|Async"))
		static UEOSCoreConnectUnlinkAccount* EOSConnectUnlinkAccountAsync(UObject* WorldContextObject, FEOSConnectUnlinkAccountOptions options);
protected:
    FEOSConnectUnlinkAccountOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSConnectUnlinkAccountCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreConnectCreateDeviceId
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreConnectCreateDeviceId : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnCreateDeviceIdCallbackDelegate OnCallback;
private:
    FOnCreateDeviceIdCallback Callback;
public:
    UEOSCoreConnectCreateDeviceId() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreConnectCreateDeviceId() { Callback.Unbind(); }
public:
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
     * @param ClientData arbitrary data that is passed back to you in the callback
     * @param callback a callback that is fired when the create operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Connect|Async"))
		static UEOSCoreConnectCreateDeviceId* EOSConnectCreateDeviceIdAsync(UObject* WorldContextObject, FEOSConnectCreateDeviceIdOptions options);
protected:
    FEOSConnectCreateDeviceIdOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSConnectCreateDeviceIdCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreConnectDeleteDeviceId
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreConnectDeleteDeviceId : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnDeleteDeviceIdCallbackDelegate OnCallback;
private:
    FOnDeleteDeviceIdCallback Callback;
public:
    UEOSCoreConnectDeleteDeviceId() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreConnectDeleteDeviceId() { Callback.Unbind(); }
public:
    /**
     * Delete any existing Device ID access credentials for the current user profile on the local device.
     *
     * The deletion is permanent and it is not possible to recover lost game data and progression
     * if the Device ID had not been linked with at least one real external user account.
     *
     * @param Options structure containing operation input parameters
     * @param ClientData arbitrary data that is passed back to you in the callback
     * @param callback a callback that is fired when the delete operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Connect|Async"))
		static UEOSCoreConnectDeleteDeviceId* EOSConnectDeleteDeviceIdAsync(UObject* WorldContextObject, FEOSConnectDeleteDeviceIdOptions options);
protected:
    FEOSConnectDeleteDeviceIdOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSConnectDeleteDeviceIdCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreConnectTransferDeviceIdAccount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreConnectTransferDeviceIdAccount : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnTransferDeviceIdAccountCallbackDelegate OnCallback;
private:
    FOnTransferDeviceIdAccountCallback Callback;
public:
    UEOSCoreConnectTransferDeviceIdAccount() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreConnectTransferDeviceIdAccount() { Callback.Unbind(); }
public:
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
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Connect|Async"))
		static UEOSCoreConnectTransferDeviceIdAccount* EOSConnectTransferDeviceIdAccountAsync(UObject* WorldContextObject, FEOSConnectTransferDeviceIdAccountOptions options);
protected:
    FEOSConnectTransferDeviceIdAccountOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSConnectTransferDeviceIdAccountCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreConnectQueryExternalAccountMappings
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreConnectQueryExternalAccountMappings : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnQueryExternalAccountMappingsCallbackDelegate OnCallback;
private:
    FOnQueryExternalAccountMappingsCallback Callback;
public:
    UEOSCoreConnectQueryExternalAccountMappings() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreConnectQueryExternalAccountMappings() { Callback.Unbind(); }
public:
    /**
     * Retrieve the equivalent product user ids from a list of external account ids from supported account providers.  The values will be cached and retrievable via EOS_Connect_GetExternalAccountMapping
     *
     * @param Options structure containing a list of external account ids, in string form, to query for the product user id representation
     * @param ClientData arbitrary data that is passed back to you in the callback
     * @param callback a callback that is fired when the query operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Connect|Async"))
		static UEOSCoreConnectQueryExternalAccountMappings* EOSConnectQueryExternalAccountMappingsAsync(UObject* WorldContextObject, FEOSConnectQueryExternalAccountMappingsOptions options);
protected:
    FEOSConnectQueryExternalAccountMappingsOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSConnectQueryExternalAccountMappingsCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreConnectQueryProductUserIdMappings
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreConnectQueryProductUserIdMappings : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnQueryProductUserIdMappingsCallbackDelegate OnCallback;
private:
    FOnQueryProductUserIdMappingsCallback Callback;
public:
    UEOSCoreConnectQueryProductUserIdMappings() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreConnectQueryProductUserIdMappings() { Callback.Unbind(); }
public:
    /**
     * Retrieve the equivalent product user ids from a list of external account ids from supported account providers.  The values will be cached and retrievable via EOS_Connect_GetExternalAccountMapping
     *
     * @param Options structure containing a list of external account ids, in string form, to query for the product user id representation
     * @param ClientData arbitrary data that is passed back to you in the callback
     * @param callback a callback that is fired when the query operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Connect|Async"))
		static UEOSCoreConnectQueryProductUserIdMappings* EOSConnectQueryProductUserIdMappingsAsync(UObject* WorldContextObject, FEOSConnectQueryProductUserIdMappingsOptions options);
protected:
    FEOSConnectQueryProductUserIdMappingsOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSConnectQueryProductUserIdMappingsCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};