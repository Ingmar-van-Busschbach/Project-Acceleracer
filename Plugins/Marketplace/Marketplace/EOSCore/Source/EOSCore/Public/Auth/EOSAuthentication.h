/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "Auth/EOSAuthTypes.h"
#include "EOSAuthentication.generated.h"

/**
 * The Auth Interface is used to manage local user permissions and access to backend services through the verification of various forms of credentials.
 * All Auth Interface calls take a handle of type EOS_HAuth as the first parameter.
 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetAuthInterface function.
 *
 * @see EOS_Platform_GetAuthInterface
 */


 static TMap<FEOSNotificationId, FOnAuthLoginStatusChangedCallback> AuthLoginStatusChangedCallbacks;

UCLASS()
class EOSCORE_API UCoreAuthentication : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
    UCoreAuthentication();
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
    /**
     * The Auth Interface is used to manage local user permissions and access to backend services through the verification of various forms of credentials.
     * All Auth Interface calls take a handle of type EOS_HAuth as the first parameter.
     * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetAuthInterface function.
     *
     * @see EOS_Platform_GetAuthInterface
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
        static UCoreAuthentication* GetAuthentication() { return AuthObject; }
public:
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Authentication|Delegates")
        FOnAuthLoginCallbackDelegate OnAuthLoginCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Authentication|Delegates")
        FOnAuthLogoutCallbackDelegate OnAuthLogoutCallback;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Authentication|Delegates")
		FOnAuthLinkAccountCallbackDelegate OnAuthLinkAccountCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Authentication|Delegates")
        FOnAuthVerifyUserAuthCallbackDelegate OnAuthVerifyUserAuthCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Authentication|Delegates")
        FOnAuthDeletePersistentAuthCallbackDelegate OnAuthDeletePersistentAuthCallback;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Authentication|Delegates")
        FOnAuthLoginStatusChangedCallbackDelegate OnAuthLoginStatusChangedCallback;
public:
    /**
     * Login/Authenticate with user credentials.
     *
     * @param options               structure containing the account credentials to use during the login operation
     * @param clientData            arbitrary data that is passed back to you in the CompletionDelegate
     * @param callback              a callback that is fired when the login operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
		void EOSAuthLogin(FEOSAuthLoginOptions options, const FOnAuthLoginCallback& callback);

    /**
     * Signs the player out of the online service.
     *
     * @param options        structure containing information about which account to log out.
     * @param callback       a callback that is fired when the logout operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
		void EOSAuthLogout(FEOSAuthLogoutOptions options, const FOnAuthLogoutCallback& callback);

	/**
	 * Link external account by continuing previous login attempt with a continuance token.
	 *
	 * On Desktop and Mobile platforms, the user will be presented the Epic Account Portal to resolve their identity.
	 *
	 * On Console, the user will login to their Epic Account using an external device, e.g. a mobile device or a desktop PC,
	 * by browsing to the presented authentication URL and entering the device code presented by the game on the console.
	 *
	 * On success, the user will be logged in at the completion of this action.
	 * This will commit this external account to the Epic Account and cannot be undone in the SDK.
	 *
	 * @param Options structure containing the account credentials to use during the link account operation
	 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate
	 * @param CompletionDelegate a callback that is fired when the link account operation completes, either successfully or in error
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
		void EOSAuthLinkAccount(FEOSAuthLinkAccountOptions options, const FOnAuthLinkAccountCallback& callback);

    /**
    * Deletes a previously received and locally stored persistent auth access token for the currently logged in user of the local device.
    *
    * On Desktop and Mobile platforms, the access token is deleted from the keychain of the local user and a backend request is made to revoke the token on the authentication server.
    * On Console platforms, even though the caller is responsible for storing and deleting the access token on the local device,
    * this function should still be called with the access token before its deletion to make the best effort in attempting to also revoke it on the authentication server.
    * If the function would fail on Console, the caller should still proceed as normal to delete the access token locally as intended.
    *
    * @param options          structure containing operation input parameters
    * @param clientData       arbitrary data that is passed back to you in the CompletionDelegate
    * @param callback         a callback that is fired when the deletion operation completes, either successfully or in error
    */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
		void EOSAuthDeletePersistentAuth(const FEOSAuthDeletePersistentAuthOptions& options, const FOnAuthDeletePersistentAuthCallback& callback);

    /**
     * Contact the backend service to verify validity of an existing user auth token.
     * This function is intended for server-side use only.
     *
     * @param options       structure containing information about the auth token being verified
     * @param clientData    arbitrary data that is passed back to you in the CompletionDelegate
     * @param callback      a callback that is fired when the logout operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
		void EOSAuthVerifyUserAuth(const FEOSAuthVerifyUserAuthOptions& options, const FOnAuthVerifyUserAuthCallback& callback);

    /**
    * Fetch the number of accounts that are logged in.
    *
    * @return the number of accounts logged in.
    */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
        static int32 EOSAuthGetLoggedInAccountsCount();

    /**
    * Fetch an account id that is logged in.
    *
    * @param Index an index into the list of logged in accounts. If the index is out of bounds, the returned account id will be invalid.
    *
    * @return the account id associated with the index passed
    */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
        static FEOSEpicAccountId EOSAuthGetLoggedInAccountByIndex(int32 index);

    /**
    * Fetches the login status for an account id.
    *
    * @param LocalUserId the account id of the user being queried
    *
    * @return the enum value of a user's login status
    */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
        static EOSELoginStatus EOSAuthGetLoginStatus(FEOSEpicAccountId localUserId);

    /**
    * Fetches the login status for an account id.
    *
    * @param LocalUserId the account id of the user being queried
    *
    * @return the enum value of a user's login status
    */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Authentication", meta = (DisplayName = "EOSAuth Get Login Status (Pure)"))
        static EOSELoginStatus EOSAuthGetLoginStatusPure(FEOSEpicAccountId localUserId) { return EOSAuthGetLoginStatus(localUserId); }

    /**
    * Fetches a user auth token for an account id.
    *
    * @param options            structure containing the api version of CopyUserAuthToken to use
    * @param localUserId        the account id of the user being queried
    * @param outUserAuthToken   the auth token for the given user, if it exists and is valid, use EOS_Auth_Token_Release when finished
    *
    * @see EOS_Auth_Token_Release
    *
    * @return EOS_Success if the information is available and passed out in OutUserAuthToken
    *         EOS_InvalidParameters if you pass a null pointer for the out parameter
    *         EOS_NotFound if the auth token is not found or expired.
    *
    */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
        static EOSResult EOSAuthCopyUserAuthToken(FEOSAuthCopyUserAuthTokenOptions options, FEOSEpicAccountId localUserId, FEOSAuthToken& outUserAuthToken);

    /**
    * Register to receive login status updates.
    * @note must call RemoveNotifyLoginStatusChanged to remove the notification
    *
    * @param options        structure containing the api version of AddNotifyLoginStatusChanged to use
    * @param clientData     arbitrary data that is passed back to you in the callback
    * @param notification   a callback that is fired when the login status for a user changes
    *
    * @return handle representing the registered callback
    */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
        static FEOSNotificationId EOSAuthAddNotifyLoginStatusChanged(const FOnAuthLoginStatusChangedCallback& callback);

    /**
     * Unregister from receiving login status updates.
     *
     * @param id handle representing the registered callback
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Authentication")
        static void EOSAuthRemoveNotifyLoginStatusChanged(FEOSNotificationId id);
private:
    static void Internal_OnAuthLoginCallback(const EOS_Auth_LoginCallbackInfo* data);
    static void Internal_OnAuthLogoutCallback(const EOS_Auth_LogoutCallbackInfo* data);
    static void Internal_OnAuthOnLinkAccountCallback(const EOS_Auth_LinkAccountCallbackInfo* data);
    static void Internal_OnAuthDeletePersistentAuthCallback(const EOS_Auth_DeletePersistentAuthCallbackInfo* data);
    static void Internal_OnAuthVerifyUserAuthCallback(const EOS_Auth_VerifyUserAuthCallbackInfo* data);
private:
    static UCoreAuthentication* AuthObject;
};