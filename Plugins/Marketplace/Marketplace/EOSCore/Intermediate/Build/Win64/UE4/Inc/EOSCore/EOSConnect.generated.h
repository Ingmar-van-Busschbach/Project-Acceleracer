// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSNotificationId;
struct FEOSProductUserId;
enum class EEOSELoginStatus : uint8;
struct FEOSConnectCopyProductUserInfoOptions;
struct FEOSConnectExternalAccountInfo;
enum class EOSResult : uint8;
struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions;
struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions;
struct FEOSConnectCopyProductUserExternalAccountByIndexOptions;
struct FEOSConnectGetProductUserExternalAccountCountOptions;
struct FEOSConnectGetProductUserIdMappingOptions;
struct FEOSConnectGetExternalAccountMappingsOptions;
struct FEOSConnectQueryProductUserIdMappingsOptions;
struct FEOSConnectQueryExternalAccountMappingsOptions;
struct FEOSConnectTransferDeviceIdAccountOptions;
struct FEOSConnectDeleteDeviceIdOptions;
struct FEOSConnectCreateDeviceIdOptions;
struct FEOSConnectUnlinkAccountOptions;
struct FEOSConnectLinkAccountOptions;
struct FEOSConnectCreateUserOptions;
struct FEOSConnectLoginOptions;
class UCoreConnect;
#ifdef EOSCORE_EOSConnect_generated_h
#error "EOSConnect.generated.h already included, missing '#pragma once' in EOSConnect.h"
#endif
#define EOSCORE_EOSConnect_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSConnectRemoveNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEOSConnectAddNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEOSConnectRemoveNotifyAuthExpiration); \
	DECLARE_FUNCTION(execEOSConnectAddNotifyAuthExpiration); \
	DECLARE_FUNCTION(execEOSConnectGetLoginStatusPure); \
	DECLARE_FUNCTION(execEOSConnectGetLoginStatus); \
	DECLARE_FUNCTION(execEOSConnectGetLoggedInUserByIndex); \
	DECLARE_FUNCTION(execEOSConnectGetLoggedInUsersCount); \
	DECLARE_FUNCTION(execEOSConnectCopyProductUserInfo); \
	DECLARE_FUNCTION(execEOSConnectCopyProductUserExternalAccountByAccountId); \
	DECLARE_FUNCTION(execEOSConnectCopyProductUserExternalAccountByAccountType); \
	DECLARE_FUNCTION(execEOSConnectCopyProductUserExternalAccountByIndex); \
	DECLARE_FUNCTION(execEOSConnectGetProductUserExternalAccountCount); \
	DECLARE_FUNCTION(execEOSConnectGetProductUserIdMapping); \
	DECLARE_FUNCTION(execEOSConnectGetExternalAccountMapping); \
	DECLARE_FUNCTION(execEOSConnectQueryProductUserIdMappings); \
	DECLARE_FUNCTION(execEOSConnectQueryExternalAccountMappings); \
	DECLARE_FUNCTION(execEOSConnectTransferDeviceIdAccount); \
	DECLARE_FUNCTION(execEOSConnectDeleteDeviceId); \
	DECLARE_FUNCTION(execEOSConnectCreateDeviceId); \
	DECLARE_FUNCTION(execEOSConnectUnlinkAccount); \
	DECLARE_FUNCTION(execEOSConnectLinkAccount); \
	DECLARE_FUNCTION(execEOSConnectCreateUser); \
	DECLARE_FUNCTION(execEOSConnectLogin); \
	DECLARE_FUNCTION(execGetConnect);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSConnectRemoveNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEOSConnectAddNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEOSConnectRemoveNotifyAuthExpiration); \
	DECLARE_FUNCTION(execEOSConnectAddNotifyAuthExpiration); \
	DECLARE_FUNCTION(execEOSConnectGetLoginStatusPure); \
	DECLARE_FUNCTION(execEOSConnectGetLoginStatus); \
	DECLARE_FUNCTION(execEOSConnectGetLoggedInUserByIndex); \
	DECLARE_FUNCTION(execEOSConnectGetLoggedInUsersCount); \
	DECLARE_FUNCTION(execEOSConnectCopyProductUserInfo); \
	DECLARE_FUNCTION(execEOSConnectCopyProductUserExternalAccountByAccountId); \
	DECLARE_FUNCTION(execEOSConnectCopyProductUserExternalAccountByAccountType); \
	DECLARE_FUNCTION(execEOSConnectCopyProductUserExternalAccountByIndex); \
	DECLARE_FUNCTION(execEOSConnectGetProductUserExternalAccountCount); \
	DECLARE_FUNCTION(execEOSConnectGetProductUserIdMapping); \
	DECLARE_FUNCTION(execEOSConnectGetExternalAccountMapping); \
	DECLARE_FUNCTION(execEOSConnectQueryProductUserIdMappings); \
	DECLARE_FUNCTION(execEOSConnectQueryExternalAccountMappings); \
	DECLARE_FUNCTION(execEOSConnectTransferDeviceIdAccount); \
	DECLARE_FUNCTION(execEOSConnectDeleteDeviceId); \
	DECLARE_FUNCTION(execEOSConnectCreateDeviceId); \
	DECLARE_FUNCTION(execEOSConnectUnlinkAccount); \
	DECLARE_FUNCTION(execEOSConnectLinkAccount); \
	DECLARE_FUNCTION(execEOSConnectCreateUser); \
	DECLARE_FUNCTION(execEOSConnectLogin); \
	DECLARE_FUNCTION(execGetConnect);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreConnect(); \
	friend struct Z_Construct_UClass_UCoreConnect_Statics; \
public: \
	DECLARE_CLASS(UCoreConnect, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreConnect)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCoreConnect(); \
	friend struct Z_Construct_UClass_UCoreConnect_Statics; \
public: \
	DECLARE_CLASS(UCoreConnect, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreConnect)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreConnect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreConnect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreConnect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreConnect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreConnect(UCoreConnect&&); \
	NO_API UCoreConnect(const UCoreConnect&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreConnect(UCoreConnect&&); \
	NO_API UCoreConnect(const UCoreConnect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreConnect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreConnect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreConnect)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_29_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreConnect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Connect_EOSConnect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
