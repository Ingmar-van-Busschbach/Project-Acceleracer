// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSUIOnDisplaySettingsUpdatedCallbackInfo;
struct FEOSUIHideFriendsCallbackInfo;
struct FEOSUIShowFriendsCallbackInfo;
#ifdef EOSCORE_EOSUITypes_generated_h
#error "EOSUITypes.generated.h already included, missing '#pragma once' in EOSUITypes.h"
#endif
#define EOSCORE_EOSUITypes_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_270_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIOnDisplaySettingsUpdatedCallbackInfo_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIOnDisplaySettingsUpdatedCallbackInfo>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_258_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIAddNotifyDisplaySettingsUpdatedOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIAcknowledgeEventIdOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIAcknowledgeEventIdOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUISetDisplayPreferenceOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUISetDisplayPreferenceOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIGetToggleFriendsKeyOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIGetToggleFriendsKeyOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUISetToggleFriendsKeyOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUISetToggleFriendsKeyOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIGetFriendsVisibleOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIGetFriendsVisibleOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIHideFriendsCallbackInfo_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIHideFriendsCallbackInfo>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIHideFriendsOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIHideFriendsOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIShowFriendsCallbackInfo_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIShowFriendsCallbackInfo>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIShowFriendsOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIShowFriendsOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_301_DELEGATE \
struct _Script_EOSCore_eventOnDisplaySettingsUpdatedCallbackDelegate_Parms \
{ \
	FEOSUIOnDisplaySettingsUpdatedCallbackInfo data; \
}; \
static inline void FOnDisplaySettingsUpdatedCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDisplaySettingsUpdatedCallbackDelegate, FEOSUIOnDisplaySettingsUpdatedCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnDisplaySettingsUpdatedCallbackDelegate_Parms Parms; \
	Parms.data=data; \
	OnDisplaySettingsUpdatedCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_300_DELEGATE \
struct _Script_EOSCore_eventOnHideFriendsCallbackDelegate_Parms \
{ \
	FEOSUIHideFriendsCallbackInfo data; \
}; \
static inline void FOnHideFriendsCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHideFriendsCallbackDelegate, FEOSUIHideFriendsCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnHideFriendsCallbackDelegate_Parms Parms; \
	Parms.data=data; \
	OnHideFriendsCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_299_DELEGATE \
struct _Script_EOSCore_eventOnShowFriendsCallbackDelegate_Parms \
{ \
	FEOSUIShowFriendsCallbackInfo data; \
}; \
static inline void FOnShowFriendsCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnShowFriendsCallbackDelegate, FEOSUIShowFriendsCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnShowFriendsCallbackDelegate_Parms Parms; \
	Parms.data=data; \
	OnShowFriendsCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_297_DELEGATE \
struct _Script_EOSCore_eventOnDisplaySettingsUpdatedCallback_Parms \
{ \
	FEOSUIOnDisplaySettingsUpdatedCallbackInfo data; \
}; \
static inline void FOnDisplaySettingsUpdatedCallback_DelegateWrapper(const FScriptDelegate& OnDisplaySettingsUpdatedCallback, FEOSUIOnDisplaySettingsUpdatedCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnDisplaySettingsUpdatedCallback_Parms Parms; \
	Parms.data=data; \
	OnDisplaySettingsUpdatedCallback.ProcessDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_296_DELEGATE \
struct _Script_EOSCore_eventOnHideFriendsCallback_Parms \
{ \
	FEOSUIHideFriendsCallbackInfo data; \
}; \
static inline void FOnHideFriendsCallback_DelegateWrapper(const FScriptDelegate& OnHideFriendsCallback, FEOSUIHideFriendsCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnHideFriendsCallback_Parms Parms; \
	Parms.data=data; \
	OnHideFriendsCallback.ProcessDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h_295_DELEGATE \
struct _Script_EOSCore_eventOnShowFriendsCallback_Parms \
{ \
	FEOSUIShowFriendsCallbackInfo data; \
}; \
static inline void FOnShowFriendsCallback_DelegateWrapper(const FScriptDelegate& OnShowFriendsCallback, FEOSUIShowFriendsCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnShowFriendsCallback_Parms Parms; \
	Parms.data=data; \
	OnShowFriendsCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUITypes_h


#define FOREACH_ENUM_EEOSUIENOTIFICATIONLOCATION(op) \
	op(EEOSUIENotificationLocation::EOS_UNL_TopLeft) \
	op(EEOSUIENotificationLocation::EOS_UNL_TopRight) \
	op(EEOSUIENotificationLocation::EOS_UNL_BottomLeft) \
	op(EEOSUIENotificationLocation::EOS_UNL_BottomRight) 

enum class EEOSUIENotificationLocation : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EEOSUIENotificationLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
