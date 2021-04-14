// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions;
struct FEOSUserInfoExternalUserInfo;
enum class EOSResult : uint8;
struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions;
struct FEOSUserInfoCopyExternalUserInfoByIndexOptions;
struct FEOSUserInfoGetExternalUserInfoCountOptions;
struct FEOSUserInfoCopyUserInfoOptions;
struct FEOSUserInfo;
struct FEOSUserInfoQueryUserInfoByExternalAccountOptions;
struct FEOSUserInfoQueryUserInfoByDisplayNameOptions;
struct FEOSUserInfoQueryUserInfoOptions;
class UCoreUserInfo;
#ifdef EOSCORE_EOSUserInfo_generated_h
#error "EOSUserInfo.generated.h already included, missing '#pragma once' in EOSUserInfo.h"
#endif
#define EOSCORE_EOSUserInfo_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSUserInfoCopyExternalUserInfoByAccountId); \
	DECLARE_FUNCTION(execEOSUserInfoCopyExternalUserInfoByAccountType); \
	DECLARE_FUNCTION(execEOSUserInfoCopyExternalUserInfoByIndex); \
	DECLARE_FUNCTION(execEOSUserInfoGetExternalUserInfoCount); \
	DECLARE_FUNCTION(execEOSUserInfoCopyUserInfo); \
	DECLARE_FUNCTION(execEOSUserInfoQueryUserInfoByExternalAccount); \
	DECLARE_FUNCTION(execEOSUserInfoQueryUserInfoByDisplayName); \
	DECLARE_FUNCTION(execEOSUserInfoQueryUserInfo); \
	DECLARE_FUNCTION(execGetUserInfo);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSUserInfoCopyExternalUserInfoByAccountId); \
	DECLARE_FUNCTION(execEOSUserInfoCopyExternalUserInfoByAccountType); \
	DECLARE_FUNCTION(execEOSUserInfoCopyExternalUserInfoByIndex); \
	DECLARE_FUNCTION(execEOSUserInfoGetExternalUserInfoCount); \
	DECLARE_FUNCTION(execEOSUserInfoCopyUserInfo); \
	DECLARE_FUNCTION(execEOSUserInfoQueryUserInfoByExternalAccount); \
	DECLARE_FUNCTION(execEOSUserInfoQueryUserInfoByDisplayName); \
	DECLARE_FUNCTION(execEOSUserInfoQueryUserInfo); \
	DECLARE_FUNCTION(execGetUserInfo);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreUserInfo(); \
	friend struct Z_Construct_UClass_UCoreUserInfo_Statics; \
public: \
	DECLARE_CLASS(UCoreUserInfo, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreUserInfo)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCoreUserInfo(); \
	friend struct Z_Construct_UClass_UCoreUserInfo_Statics; \
public: \
	DECLARE_CLASS(UCoreUserInfo, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreUserInfo)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreUserInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreUserInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreUserInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreUserInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreUserInfo(UCoreUserInfo&&); \
	NO_API UCoreUserInfo(const UCoreUserInfo&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreUserInfo(UCoreUserInfo&&); \
	NO_API UCoreUserInfo(const UCoreUserInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreUserInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreUserInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreUserInfo)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_25_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreUserInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_UserInfo_EOSUserInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
