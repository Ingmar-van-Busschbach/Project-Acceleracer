// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSNotificationId;
struct FEOSAuthCopyUserAuthTokenOptions;
struct FEOSEpicAccountId;
struct FEOSAuthToken;
enum class EOSResult : uint8;
enum class EOSELoginStatus : uint8;
struct FEOSAuthVerifyUserAuthOptions;
struct FEOSAuthDeletePersistentAuthOptions;
struct FEOSAuthLinkAccountOptions;
struct FEOSAuthLogoutOptions;
struct FEOSAuthLoginOptions;
class UCoreAuthentication;
#ifdef EOSCORE_EOSAuthentication_generated_h
#error "EOSAuthentication.generated.h already included, missing '#pragma once' in EOSAuthentication.h"
#endif
#define EOSCORE_EOSAuthentication_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSAuthRemoveNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEOSAuthAddNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEOSAuthCopyUserAuthToken); \
	DECLARE_FUNCTION(execEOSAuthGetLoginStatusPure); \
	DECLARE_FUNCTION(execEOSAuthGetLoginStatus); \
	DECLARE_FUNCTION(execEOSAuthGetLoggedInAccountByIndex); \
	DECLARE_FUNCTION(execEOSAuthGetLoggedInAccountsCount); \
	DECLARE_FUNCTION(execEOSAuthVerifyUserAuth); \
	DECLARE_FUNCTION(execEOSAuthDeletePersistentAuth); \
	DECLARE_FUNCTION(execEOSAuthLinkAccount); \
	DECLARE_FUNCTION(execEOSAuthLogout); \
	DECLARE_FUNCTION(execEOSAuthLogin); \
	DECLARE_FUNCTION(execGetAuthentication);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSAuthRemoveNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEOSAuthAddNotifyLoginStatusChanged); \
	DECLARE_FUNCTION(execEOSAuthCopyUserAuthToken); \
	DECLARE_FUNCTION(execEOSAuthGetLoginStatusPure); \
	DECLARE_FUNCTION(execEOSAuthGetLoginStatus); \
	DECLARE_FUNCTION(execEOSAuthGetLoggedInAccountByIndex); \
	DECLARE_FUNCTION(execEOSAuthGetLoggedInAccountsCount); \
	DECLARE_FUNCTION(execEOSAuthVerifyUserAuth); \
	DECLARE_FUNCTION(execEOSAuthDeletePersistentAuth); \
	DECLARE_FUNCTION(execEOSAuthLinkAccount); \
	DECLARE_FUNCTION(execEOSAuthLogout); \
	DECLARE_FUNCTION(execEOSAuthLogin); \
	DECLARE_FUNCTION(execGetAuthentication);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreAuthentication(); \
	friend struct Z_Construct_UClass_UCoreAuthentication_Statics; \
public: \
	DECLARE_CLASS(UCoreAuthentication, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreAuthentication)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCoreAuthentication(); \
	friend struct Z_Construct_UClass_UCoreAuthentication_Statics; \
public: \
	DECLARE_CLASS(UCoreAuthentication, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreAuthentication)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreAuthentication(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreAuthentication) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAuthentication); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAuthentication); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreAuthentication(UCoreAuthentication&&); \
	NO_API UCoreAuthentication(const UCoreAuthentication&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreAuthentication(UCoreAuthentication&&); \
	NO_API UCoreAuthentication(const UCoreAuthentication&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAuthentication); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAuthentication); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreAuthentication)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_25_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreAuthentication>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Auth_EOSAuthentication_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
