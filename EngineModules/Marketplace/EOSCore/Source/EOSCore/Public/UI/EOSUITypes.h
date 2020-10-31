/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Core/EOSHelpers.h"
#include "eos_ui_types.h"
#include "EOSUITypes.generated.h"

class UCoreUI;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class EEOSUIENotificationLocation : uint8
{
	EOS_UNL_TopLeft,
	EOS_UNL_TopRight,
	EOS_UNL_BottomLeft,
	EOS_UNL_BottomRight
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/**
 * Input parameters for the EOS_UI_ShowFriends Function.
 */
USTRUCT(BlueprintType)
struct FEOSUIShowFriendsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the user whose friend list is being shown. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSUIShowFriendsOptions()
		: ApiVersion(EOS_UI_SHOWFRIENDS_API_LATEST) { }
	FEOSUIShowFriendsOptions(const EOS_UI_ShowFriendsOptions& data)
		: ApiVersion(EOS_UI_SHOWFRIENDS_API_LATEST)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Output parameters for the EOS_UI_ShowFriends function.
 */
USTRUCT(BlueprintType)
struct FEOSUIShowFriendsCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		EOSResult ResultCode;
	/** Context that was passed into EOS_UI_ShowFriends */
		void* ClientData;
	/** Account ID of the user whose friend list is being shown. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSUIShowFriendsCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure) { }
	FEOSUIShowFriendsCallbackInfo(const EOS_UI_ShowFriendsCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Input parameters for the EOS_UI_HideFriends Function.
 */
USTRUCT(BlueprintType)
struct FEOSUIHideFriendsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the user whose friend list is being shown. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSUIHideFriendsOptions()
		: ApiVersion(EOS_UI_HIDEFRIENDS_API_LATEST) { }
	FEOSUIHideFriendsOptions(const EOS_UI_HideFriendsOptions& data)
		: ApiVersion(EOS_UI_HIDEFRIENDS_API_LATEST)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Output parameters for the EOS_UI_HideFriends function.
 */
USTRUCT(BlueprintType)
struct FEOSUIHideFriendsCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		EOSResult ResultCode;
	/** Context that was passed into EOS_UI_HideFriends */
		void* ClientData;
	/** Account ID of the user whose friend list is being shown. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSUIHideFriendsCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure) { }
	FEOSUIHideFriendsCallbackInfo(const EOS_UI_HideFriendsCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Input parameters for the EOS_UI_GetFriendsVisible Function.
 */
USTRUCT(BlueprintType)
struct FEOSUIGetFriendsVisibleOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the user whose overlay is being updated. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSUIGetFriendsVisibleOptions()
		: ApiVersion(EOS_UI_GETFRIENDSVISIBLE_API_LATEST) { }
	FEOSUIGetFriendsVisibleOptions(const EOS_UI_GetFriendsVisibleOptions& data)
		: ApiVersion(EOS_UI_GETFRIENDSVISIBLE_API_LATEST)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Input parameters for the EOS_UI_SetToggleFriendsKey Function.
 */
USTRUCT(BlueprintType)
struct FEOSUISetToggleFriendsKeyOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/**
	 * The new key combination which will be used to toggle the friends overlay.
	 * The combination can be any set of modifiers and one key.
	 * A value of EOS_UIK_None will cause the key to revert to the default.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		int32 keyCombination;
public:
	explicit FEOSUISetToggleFriendsKeyOptions()
		: ApiVersion(EOS_UI_SETTOGGLEFRIENDSKEY_API_LATEST) 
		, keyCombination(0) {}
	FEOSUISetToggleFriendsKeyOptions(const EOS_UI_SetToggleFriendsKeyOptions& data)
		: ApiVersion(EOS_UI_SETTOGGLEFRIENDSKEY_API_LATEST)
	{}
};

/**
 * Input parameters for the EOS_UI_GetToggleFriendsKey Function.
 */
USTRUCT(BlueprintType)
struct FEOSUIGetToggleFriendsKeyOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSUIGetToggleFriendsKeyOptions()
		: ApiVersion(EOS_UI_GETTOGGLEFRIENDSKEY_API_LATEST) { }
	FEOSUIGetToggleFriendsKeyOptions(const EOS_UI_GetToggleFriendsKeyOptions& data)
		: ApiVersion(EOS_UI_GETTOGGLEFRIENDSKEY_API_LATEST)
	{}
};

/**
 * Input parameters for the EOS_UI_SetDisplayPreference function.
 */
USTRUCT(BlueprintType)
struct FEOSUISetDisplayPreferenceOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Preference for notification pop-up locations. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		EEOSUIENotificationLocation NotificationLocation;
public:
	explicit FEOSUISetDisplayPreferenceOptions()
		: ApiVersion(EOS_UI_SETDISPLAYPREFERENCE_API_LATEST)
		, NotificationLocation(EEOSUIENotificationLocation::EOS_UNL_TopRight) {}
	FEOSUISetDisplayPreferenceOptions(const EOS_UI_SetDisplayPreferenceOptions& data)
		: ApiVersion(EOS_UI_SETDISPLAYPREFERENCE_API_LATEST)
		, NotificationLocation(static_cast<EEOSUIENotificationLocation>(data.NotificationLocation))
	{}
};

/**
 * Input parameters for the EOS_UI_AcknowledgeEventId.
 */
USTRUCT(BlueprintType)
struct FEOSUIAcknowledgeEventIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The ID being acknowledged. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		FEOSUIEventId UiEventId;
	/**
	 * The result to use for the acknowledgment.
	 * When acknowledging EOS_Presence_JoinGameAcceptedCallbackInfo this should be the
	 * result code from the JoinSession call.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		EOSResult Result;
public:
	explicit FEOSUIAcknowledgeEventIdOptions()
		: ApiVersion(EOS_UI_ACKNOWLEDGECORRELATIONID_API_LATEST)
		, Result(EOSResult::EOS_ServiceFailure) {}
	FEOSUIAcknowledgeEventIdOptions(const EOS_UI_AcknowledgeEventIdOptions& data)
		: ApiVersion(EOS_UI_ACKNOWLEDGECORRELATIONID_API_LATEST)
		, UiEventId(data.UiEventId)
		, Result(EOSHelpers::ToEOSCoreResult(data.Result))
	{}
};

USTRUCT(BlueprintType)
struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSUIAddNotifyDisplaySettingsUpdatedOptions()
		: ApiVersion(1) { }
};

USTRUCT(BlueprintType)
struct FEOSUIOnDisplaySettingsUpdatedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_UI_AddNotifyDisplaySettingsUpdated */
	void* ClientData;
	/** True when any portion of the overlay is visible. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		bool bIsVisible;
	/**
	 * True when the overlay has switched to exclusive input mode.
	 * While in exclusive input mode, no keyboard or mouse input will be sent to the game.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		bool bIsExclusiveInput;
public:
	explicit FEOSUIOnDisplaySettingsUpdatedCallbackInfo()
		: ClientData(nullptr)
		, bIsVisible(false)
		, bIsExclusiveInput(false) {}
	FEOSUIOnDisplaySettingsUpdatedCallbackInfo(const EOS_UI_OnDisplaySettingsUpdatedCallbackInfo& data) 
		: ClientData(data.ClientData)
		, bIsVisible(data.bIsVisible > 0)
		, bIsExclusiveInput(data.bIsExclusiveInput > 0)
	{}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnShowFriendsCallback, const FEOSUIShowFriendsCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnHideFriendsCallback, const FEOSUIHideFriendsCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDisplaySettingsUpdatedCallback, const FEOSUIOnDisplaySettingsUpdatedCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowFriendsCallbackDelegate, const FEOSUIShowFriendsCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHideFriendsCallbackDelegate, const FEOSUIHideFriendsCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisplaySettingsUpdatedCallbackDelegate, const FEOSUIOnDisplaySettingsUpdatedCallbackInfo&, data);

struct FShowFriendsCallback
{
public:
	UCoreUI* UIObject;
	FOnShowFriendsCallback Callback;
public:
	FShowFriendsCallback(UCoreUI* obj, const FOnShowFriendsCallback& callback)
		: UIObject(obj)
		, Callback(callback) {}
};

struct FHideFriendsCallback
{
public:
	UCoreUI* UIObject;
	FOnHideFriendsCallback Callback;
public:
	FHideFriendsCallback(UCoreUI* obj, const FOnHideFriendsCallback& callback)
		: UIObject(obj)
		, Callback(callback) {}
};