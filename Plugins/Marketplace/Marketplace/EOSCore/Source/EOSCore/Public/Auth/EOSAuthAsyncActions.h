/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Auth/EOSAuthTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSAuthAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthLogin
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreAuthLogin: public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnAuthLoginCallbackDelegate OnCallback;
private:
    FOnAuthLoginCallback Callback;
public:
    UEOSCoreAuthLogin() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreAuthLogin() { Callback.Unbind(); }
public:
    /**
     * Login/Authenticate with user credentials.
     *
     * @param options               structure containing the account credentials to use during the login operation
     * @param clientData            arbitrary data that is passed back to you in the CompletionDelegate
     * @param callback              a callback that is fired when the login operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Auth|Async"))
		static UEOSCoreAuthLogin* EOSAuthLoginAsync(UObject* WorldContextObject, FEOSAuthLoginOptions options);
protected:
    FEOSAuthLoginOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSAuthLoginCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthLogout
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreAuthLogout : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnAuthLogoutCallbackDelegate OnCallback;
private:
    FOnAuthLogoutCallback Callback;
public:
    UEOSCoreAuthLogout() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreAuthLogout() { Callback.Unbind(); }
public:
    /**
     * Signs the player out of the online service.
     *
     * @param options        structure containing information about which account to log out.
     * @param clientData     arbitrary data that is passed back to you in the CompletionDelegate
     * @param callback       a callback that is fired when the logout operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Auth|Async"))
		static UEOSCoreAuthLogout* EOSAuthLogoutAsync(UObject* WorldContextObject, FEOSAuthLogoutOptions options);
protected:
    FEOSAuthLogoutOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSAuthLogoutCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthLinkAccount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreAuthLinkAccount : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnAuthLinkAccountCallbackDelegate OnCallback;
private:
    FOnAuthLinkAccountCallback Callback;
public:
    UEOSCoreAuthLinkAccount() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreAuthLinkAccount() { Callback.Unbind(); }
public:
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
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Auth|Async"))
		static UEOSCoreAuthLinkAccount* EOSAuthLinkAccount(UObject* WorldContextObject, FEOSAuthLinkAccountOptions options);
protected:
	FEOSAuthLinkAccountOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSAuthLinkAccountCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthDeletePersistentAuth
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreAuthDeletePersistentAuth : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnAuthDeletePersistentAuthCallbackDelegate OnCallback;
private:
    FOnAuthDeletePersistentAuthCallback Callback;
public:
    UEOSCoreAuthDeletePersistentAuth() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreAuthDeletePersistentAuth() { Callback.Unbind(); }
public:
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
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Auth|Async"))
		static UEOSCoreAuthDeletePersistentAuth* EOSAuthDeletePersistentAuthAsync(UObject* WorldContextObject, const FEOSAuthDeletePersistentAuthOptions& options);
protected:
    FEOSAuthDeletePersistentAuthOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSAuthDeletePersistentAuthCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthVerifyUserAuth
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreAuthVerifyUserAuth : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnAuthVerifyUserAuthCallbackDelegate OnCallback;
private:
    FOnAuthVerifyUserAuthCallback Callback;
public:
    UEOSCoreAuthVerifyUserAuth() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreAuthVerifyUserAuth() { Callback.Unbind(); }
public:
    /**
     * Contact the backend service to verify validity of an existing user auth token.
     * This function is intended for server-side use only.
     *
     * @param options       structure containing information about the auth token being verified
     * @param clientData    arbitrary data that is passed back to you in the CompletionDelegate
     * @param callback      a callback that is fired when the logout operation completes, either successfully or in error
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Auth|Async"))
		static UEOSCoreAuthVerifyUserAuth* EOSAuthVerifyUserAuthAsync(UObject* WorldContextObject, FEOSAuthVerifyUserAuthOptions options);
protected:
    FEOSAuthVerifyUserAuthOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSAuthVerifyUserAuthCallbackInfo& data, bool bWasSuccessful)
    {
        OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};