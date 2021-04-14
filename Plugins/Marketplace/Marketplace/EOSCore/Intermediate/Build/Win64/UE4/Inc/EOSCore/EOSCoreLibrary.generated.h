// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FContinuanceToken;
enum class EOSResult : uint8;
struct FEOSEpicAccountId;
struct FEOSProductUserId;
struct FSessionInviteId;
struct FBucketId;
struct FEOSLobbyAttributeData;
struct FEOSSessionsAttributeData;
struct FEOSLobbyId;
enum class ESuccessFail : uint8;
struct FEOSUIEventId;
struct FLobbyInviteId;
struct FAccessToken;
#ifdef EOSCORE_EOSCoreLibrary_generated_h
#error "EOSCoreLibrary.generated.h already included, missing '#pragma once' in EOSCoreLibrary.h"
#endif
#define EOSCORE_EOSCoreLibrary_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSContinuanceTokenToString); \
	DECLARE_FUNCTION(execGetCurrentAccountId); \
	DECLARE_FUNCTION(execGetCurrentProductId); \
	DECLARE_FUNCTION(execCoreBytesToString); \
	DECLARE_FUNCTION(execCoreStringToByte); \
	DECLARE_FUNCTION(execEOSProductUserIdFromString); \
	DECLARE_FUNCTION(execEOSProductUserIdToString); \
	DECLARE_FUNCTION(execEOSProductUserIdIsValidPure); \
	DECLARE_FUNCTION(execEOSProductUserIdIsValid); \
	DECLARE_FUNCTION(execEOSEpicAccountIdFromString); \
	DECLARE_FUNCTION(execEOSEpicAccountIdToString); \
	DECLARE_FUNCTION(execEOSEpicAccountIdIsValidPure); \
	DECLARE_FUNCTION(execEOSEpicAccountIdIsValid); \
	DECLARE_FUNCTION(execEOSByteArrayToString); \
	DECLARE_FUNCTION(execEOSEResultIsOperationComplete); \
	DECLARE_FUNCTION(execEOSEResultToString); \
	DECLARE_FUNCTION(execBreakSessionsInviteId); \
	DECLARE_FUNCTION(execMakeSessionsInviteId); \
	DECLARE_FUNCTION(execBreakBucketId); \
	DECLARE_FUNCTION(execMakeBucketId); \
	DECLARE_FUNCTION(execGetLobbyAttributeString); \
	DECLARE_FUNCTION(execGetLobbyAttributeDouble); \
	DECLARE_FUNCTION(execGetLobbyAttributeInt64); \
	DECLARE_FUNCTION(execGetLobbyAttributeBool); \
	DECLARE_FUNCTION(execGetSessionAttributeString); \
	DECLARE_FUNCTION(execGetSessionAttributeDouble); \
	DECLARE_FUNCTION(execGetSessionAttributeInt64); \
	DECLARE_FUNCTION(execGetSessionAttributeBool); \
	DECLARE_FUNCTION(execIsLobbyIdIdenticalWith); \
	DECLARE_FUNCTION(execIsEpicAccountIdIdenticalWith); \
	DECLARE_FUNCTION(execIsProductUserIdIdenticalWith); \
	DECLARE_FUNCTION(execEOS_Success); \
	DECLARE_FUNCTION(execIsLobbyIdValid); \
	DECLARE_FUNCTION(execBreakUIEventIdStruct); \
	DECLARE_FUNCTION(execMakeLobbyInviteIdStruct); \
	DECLARE_FUNCTION(execBreakLobbyInviteIdStruct); \
	DECLARE_FUNCTION(execMakeAccessTokenStruct); \
	DECLARE_FUNCTION(execBreakAccessTokenStruct); \
	DECLARE_FUNCTION(execBreakLobbyIdStruct);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSContinuanceTokenToString); \
	DECLARE_FUNCTION(execGetCurrentAccountId); \
	DECLARE_FUNCTION(execGetCurrentProductId); \
	DECLARE_FUNCTION(execCoreBytesToString); \
	DECLARE_FUNCTION(execCoreStringToByte); \
	DECLARE_FUNCTION(execEOSProductUserIdFromString); \
	DECLARE_FUNCTION(execEOSProductUserIdToString); \
	DECLARE_FUNCTION(execEOSProductUserIdIsValidPure); \
	DECLARE_FUNCTION(execEOSProductUserIdIsValid); \
	DECLARE_FUNCTION(execEOSEpicAccountIdFromString); \
	DECLARE_FUNCTION(execEOSEpicAccountIdToString); \
	DECLARE_FUNCTION(execEOSEpicAccountIdIsValidPure); \
	DECLARE_FUNCTION(execEOSEpicAccountIdIsValid); \
	DECLARE_FUNCTION(execEOSByteArrayToString); \
	DECLARE_FUNCTION(execEOSEResultIsOperationComplete); \
	DECLARE_FUNCTION(execEOSEResultToString); \
	DECLARE_FUNCTION(execBreakSessionsInviteId); \
	DECLARE_FUNCTION(execMakeSessionsInviteId); \
	DECLARE_FUNCTION(execBreakBucketId); \
	DECLARE_FUNCTION(execMakeBucketId); \
	DECLARE_FUNCTION(execGetLobbyAttributeString); \
	DECLARE_FUNCTION(execGetLobbyAttributeDouble); \
	DECLARE_FUNCTION(execGetLobbyAttributeInt64); \
	DECLARE_FUNCTION(execGetLobbyAttributeBool); \
	DECLARE_FUNCTION(execGetSessionAttributeString); \
	DECLARE_FUNCTION(execGetSessionAttributeDouble); \
	DECLARE_FUNCTION(execGetSessionAttributeInt64); \
	DECLARE_FUNCTION(execGetSessionAttributeBool); \
	DECLARE_FUNCTION(execIsLobbyIdIdenticalWith); \
	DECLARE_FUNCTION(execIsEpicAccountIdIdenticalWith); \
	DECLARE_FUNCTION(execIsProductUserIdIdenticalWith); \
	DECLARE_FUNCTION(execEOS_Success); \
	DECLARE_FUNCTION(execIsLobbyIdValid); \
	DECLARE_FUNCTION(execBreakUIEventIdStruct); \
	DECLARE_FUNCTION(execMakeLobbyInviteIdStruct); \
	DECLARE_FUNCTION(execBreakLobbyInviteIdStruct); \
	DECLARE_FUNCTION(execMakeAccessTokenStruct); \
	DECLARE_FUNCTION(execBreakAccessTokenStruct); \
	DECLARE_FUNCTION(execBreakLobbyIdStruct);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSCoreLibrary(); \
	friend struct Z_Construct_UClass_UEOSCoreLibrary_Statics; \
public: \
	DECLARE_CLASS(UEOSCoreLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UEOSCoreLibrary)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUEOSCoreLibrary(); \
	friend struct Z_Construct_UClass_UEOSCoreLibrary_Statics; \
public: \
	DECLARE_CLASS(UEOSCoreLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UEOSCoreLibrary)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSCoreLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSCoreLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSCoreLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSCoreLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSCoreLibrary(UEOSCoreLibrary&&); \
	NO_API UEOSCoreLibrary(const UEOSCoreLibrary&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSCoreLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSCoreLibrary(UEOSCoreLibrary&&); \
	NO_API UEOSCoreLibrary(const UEOSCoreLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSCoreLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSCoreLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSCoreLibrary)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_18_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UEOSCoreLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSCoreLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
