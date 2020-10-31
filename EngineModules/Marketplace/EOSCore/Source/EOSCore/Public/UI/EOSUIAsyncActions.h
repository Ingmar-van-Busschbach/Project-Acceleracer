/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "UI/EOSUITypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSUIAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreUIShowFriends
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreUIShowFriends : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnShowFriendsCallbackDelegate OnCallback;
private:
    FOnShowFriendsCallback Callback;
public:
    UEOSCoreUIShowFriends() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreUIShowFriends() { Callback.Unbind(); }
public:
    /**
     * Opens the overlay with a request to show the friends list.
     *
     * @param Options Structure containing the account id of the friends list to show.
     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate.
     * @param CompletionDelegate A callback that is fired when the request to show the friends list has been sent to the overlay, or on an error.
     *
     * @return EOS_Success If the overlay has been notified about the request.
     *         EOS_InvalidParameters If any of the options are incorrect.
     *         EOS_NotConfigured If the overlay is not properly configured.
     *         EOS_NoChange If the overlay is already visible.
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|UI|Async"))
		static UEOSCoreUIShowFriends* EOSUIShowFriendsAsync(UObject* WorldContextObject, FEOSUIShowFriendsOptions options);
protected:
    FEOSUIShowFriendsOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSUIShowFriendsCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreUIHideFriends
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreUIHideFriends : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnHideFriendsCallbackDelegate OnCallback;
private:
    FOnHideFriendsCallback Callback;
public:
    UEOSCoreUIHideFriends() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreUIHideFriends() { Callback.Unbind(); }
public:
    /**
     * Hides the active overlay.
     *
     * @param Options Structure containing the account id of the browser to close.
     * @param ClientData Arbitrary data that is passed back to you in the callback.
     * @param callback A callback that is fired when the request to hide the friends list has been processed, or on an error.
     *
     * @return EOS_Success If the overlay has been notified about the request.
     *         EOS_InvalidParameters If any of the options are incorrect.
     *         EOS_NotConfigured If the overlay is not properly configured.
     *         EOS_NoChange If the overlay is already hidden.
     */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|UI|Async"))
        static UEOSCoreUIHideFriends* EOSUIHideFriendsAsync(UObject* WorldContextObject, FEOSUIHideFriendsOptions options);
protected:
    FEOSUIHideFriendsOptions Options;
public:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSUIHideFriendsCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};
