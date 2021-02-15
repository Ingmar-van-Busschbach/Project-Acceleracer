/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "eos_ui_types.h"
#include "UI/EOSUITypes.h"
#include "EOSUI.generated.h"

/**
 * The UI Interface is used to access the overlay UI.  Each UI component will have a function for
 * opening it.  All UI Interface calls take a handle of type EOS_HUI as the first parameter.
 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUIInterface function.
 *
 * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.
 *
 * @see EOS_Platform_GetUIInterface
 */

UCLASS()
class EOSCORE_API UCoreUI : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
    UCoreUI();
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
    /**
     * The UI Interface is used to access the overlay UI.  Each UI component will have a function for
     * opening it.  All UI Interface calls take a handle of type EOS_HUI as the first parameter.
     * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUIInterface function.
     *
     * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.
     *
     * @see EOS_Platform_GetUIInterface
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreUI* GetUI() { return UIObject; }
public:
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|UI|Delegates")
        FOnShowFriendsCallbackDelegate OnShowFriendsCallbackDelegate;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|UI|Delegates")
        FOnHideFriendsCallbackDelegate OnHideFriendsCallbackDelegate;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|UI|Delegates")
        FOnDisplaySettingsUpdatedCallbackDelegate OnDisplaySettingsUpdatedCallbackDelegate;
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
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        void EOSUIShowFriends(FEOSUIShowFriendsOptions options, const FOnShowFriendsCallback& callback);

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
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        void EOSUIHideFriends(FEOSUIHideFriendsOptions options, const FOnHideFriendsCallback& callback);

    /**
     * Gets the friends overlay visibility.
     *
     * @param Options Structure containing the account id of the overlay owner.
     *
     * @return EOS_TRUE If the overlay is visible.
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        static bool EOSUIGetFriendsVisible(FEOSUIGetFriendsVisibleOptions options);

    /**
     * Updates the current Toggle Friends Key.  This key can be used by the user to toggle the friends
      overlay when available. The default value represents `Shift + F3` as `((int32_t)EOS_UIK_Shift | (int32_t)EOS_UIK_F3)`.
     * The provided key should satisfy EOS_UI_IsValidKeyCombination. The value EOS_UIK_None is specially handled
     * by resetting the key binding to the system default.
     *
     * @param Options Structure containing the key combination to use.
     *
     * @return EOS_Success If the overlay has been notified about the request.
     *         EOS_InvalidParameters If any of the options are incorrect.
     *         EOS_NotConfigured If the overlay is not properly configured.
     *         EOS_NoChange If the key combination did not change.
     *
     * @see EOS_UI_IsValidKeyCombination
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        static EOSResult EOSUISetToggleFriendsKey(FEOSUISetToggleFriendsKeyOptions options);

    /**
     * Returns the current Toggle Friends Key.  This key can be used by the user to toggle the friends
      overlay when available. The default value represents `Shift + F3` as `((int32_t)EOS_UIK_Shift | (int32_t)EOS_UIK_F3)`.
     *
     * @param Options Structure containing any options that are needed to retrieve the key.
     * @return A valid key combination which represent a single key with zero or more modifier keys.
     *         EOS_UIK_None will be returned if any error occurs.
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        static int32 EOSUIGetToggleFriendsKey(FEOSUIGetToggleFriendsKeyOptions options);

    /**
     * Determine if a key combination is valid. A key combinations must have a single key and at least one modifier.
     * The single key must be one of the following: F1 through F12, Space, Backspace, Escape, or Tab.
     * The modifier key must be one or more of the following: Shift, Control, or Alt.
     *
     * @param KeyCombination The key to test.
     * @return  EOS_TRUE if the provided key combination is valid.
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        static bool EOSUIIsValidKeyCombination(int32 keyCombination);

    /**
     * Define any preferences for any display settings.
     *
     * @param Options Structure containing any options that are needed to set
     * @return EOS_Success If the overlay has been notified about the request.
     *         EOS_InvalidParameters If any of the options are incorrect.
     *         EOS_NotConfigured If the overlay is not properly configured.
     *         EOS_NoChange If the preferences did not change.
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        static EOSResult EOSUISetDisplayPreference(FEOSUISetDisplayPreferenceOptions options);

    /**
     * Returns the current notification location display preference.
     * @return The current notification location display preference.
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        static EEOSUIENotificationLocation EOSUIGetNotificationLocationPreference();

    /**
     * Lets the SDK know that the given UI event ID has been acknowledged and should be released.
     *
     * @return An EOSResult is returned to indicate success or an error.
     *
     * EOS_Success is returned if the UI event ID has been acknowledged.
     * EOS_NotFound is returned if the UI event ID does not exist.
     *
     * @see EOS_Presence_JoinGameAcceptedCallbackInfo
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        static EOSResult EOSUIAcknowledgeEventId(FEOSUIAcknowledgeEventIdOptions options);

    /**
    * Register to receive notifications when the overlay display settings are updated.
    * Newly registered handlers will always be called the next tick with the current state.
    * @note must call RemoveNotifyDisplaySettingsUpdated to remove the notification.
    *
    * @param Options Structure containing information about the request.
    * @param ClientData Arbitrary data that is passed back to you in the NotificationFn.
    * @param Notification A callback that is fired when the overlay display settings are updated.
    *
    * @return handle representing the registered callback
    */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        static FEOSNotificationId EOSUIAddNotifyDisplaySettingsUpdated(const FEOSUIAddNotifyDisplaySettingsUpdatedOptions options, const FOnDisplaySettingsUpdatedCallback& callback);

    /**
     * Unregister from receiving notifications when the overlay display settings are updated.
     *
     * @param InId Handle representing the registered callback
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|UI")
        static void EOSUIRemoveNotifyDisplaySettingsUpdated(FEOSNotificationId id);
private:
    static void Internal_OnUIShowFriendsCallback(const EOS_UI_ShowFriendsCallbackInfo* data);
    static void Internal_OnUIHideFriendsCallback(const EOS_UI_HideFriendsCallbackInfo* data);
private:
    static UCoreUI* UIObject;
};
