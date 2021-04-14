// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSNotificationId;
struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions;
struct FEOSUIAcknowledgeEventIdOptions;
enum class EOSResult : uint8;
enum class EEOSUIENotificationLocation : uint8;
struct FEOSUISetDisplayPreferenceOptions;
struct FEOSUIGetToggleFriendsKeyOptions;
struct FEOSUISetToggleFriendsKeyOptions;
struct FEOSUIGetFriendsVisibleOptions;
struct FEOSUIHideFriendsOptions;
struct FEOSUIShowFriendsOptions;
class UCoreUI;
#ifdef EOSCORE_EOSUI_generated_h
#error "EOSUI.generated.h already included, missing '#pragma once' in EOSUI.h"
#endif
#define EOSCORE_EOSUI_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSUIRemoveNotifyDisplaySettingsUpdated); \
	DECLARE_FUNCTION(execEOSUIAddNotifyDisplaySettingsUpdated); \
	DECLARE_FUNCTION(execEOSUIAcknowledgeEventId); \
	DECLARE_FUNCTION(execEOSUIGetNotificationLocationPreference); \
	DECLARE_FUNCTION(execEOSUISetDisplayPreference); \
	DECLARE_FUNCTION(execEOSUIIsValidKeyCombination); \
	DECLARE_FUNCTION(execEOSUIGetToggleFriendsKey); \
	DECLARE_FUNCTION(execEOSUISetToggleFriendsKey); \
	DECLARE_FUNCTION(execEOSUIGetFriendsVisible); \
	DECLARE_FUNCTION(execEOSUIHideFriends); \
	DECLARE_FUNCTION(execEOSUIShowFriends); \
	DECLARE_FUNCTION(execGetUI);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSUIRemoveNotifyDisplaySettingsUpdated); \
	DECLARE_FUNCTION(execEOSUIAddNotifyDisplaySettingsUpdated); \
	DECLARE_FUNCTION(execEOSUIAcknowledgeEventId); \
	DECLARE_FUNCTION(execEOSUIGetNotificationLocationPreference); \
	DECLARE_FUNCTION(execEOSUISetDisplayPreference); \
	DECLARE_FUNCTION(execEOSUIIsValidKeyCombination); \
	DECLARE_FUNCTION(execEOSUIGetToggleFriendsKey); \
	DECLARE_FUNCTION(execEOSUISetToggleFriendsKey); \
	DECLARE_FUNCTION(execEOSUIGetFriendsVisible); \
	DECLARE_FUNCTION(execEOSUIHideFriends); \
	DECLARE_FUNCTION(execEOSUIShowFriends); \
	DECLARE_FUNCTION(execGetUI);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreUI(); \
	friend struct Z_Construct_UClass_UCoreUI_Statics; \
public: \
	DECLARE_CLASS(UCoreUI, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreUI)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCoreUI(); \
	friend struct Z_Construct_UClass_UCoreUI_Statics; \
public: \
	DECLARE_CLASS(UCoreUI, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreUI)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreUI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreUI(UCoreUI&&); \
	NO_API UCoreUI(const UCoreUI&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreUI(UCoreUI&&); \
	NO_API UCoreUI(const UCoreUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreUI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreUI)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_25_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UI_EOSUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
