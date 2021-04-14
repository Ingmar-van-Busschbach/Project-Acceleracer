// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSHPresenceModification;
struct FEOSPresenceModificationSetJoinInfoOptions;
enum class EOSResult : uint8;
struct FEOSPresenceModificationDeleteDataOptions;
struct FEOSPresenceModificationSetDataOptions;
struct FEOSPresenceModificationSetRawRichTextOptions;
struct FEOSPresenceModificationSetStatusOptions;
struct FEOSPresenceGetJoinInfoOptions;
struct FEOSNotificationId;
struct FEOSPresenceSetPresenceOptions;
struct FEOSPresenceCreatePresenceModificationOptions;
struct FEOSPresenceCopyPresenceOptions;
struct FEOSPresenceInfo;
struct FEOSPresenceHasPresenceOptions;
struct FEOSPresenceQueryPresenceOptions;
class UCorePresence;
#ifdef EOSCORE_EOSPresence_generated_h
#error "EOSPresence.generated.h already included, missing '#pragma once' in EOSPresence.h"
#endif
#define EOSCORE_EOSPresence_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSPresenceModificationRelease); \
	DECLARE_FUNCTION(execEOSPresenceModificationSetJoinInfo); \
	DECLARE_FUNCTION(execEOSPresenceModificationDeleteData); \
	DECLARE_FUNCTION(execEOSPresenceModificationSetData); \
	DECLARE_FUNCTION(execEOSPresenceModificationSetRawRichText); \
	DECLARE_FUNCTION(execEOSPresenceModificationSetStatus); \
	DECLARE_FUNCTION(execEOSPresenceGetJoinInfo); \
	DECLARE_FUNCTION(execEOSPresenceRemoveNotifyJoinGameAccepted); \
	DECLARE_FUNCTION(execEOSPresenceAddNotifyJoinGameAccepted); \
	DECLARE_FUNCTION(execEOSPresenceRemoveNotifyOnPresenceChanged); \
	DECLARE_FUNCTION(execEOSPresenceAddNotifyOnPresenceChanged); \
	DECLARE_FUNCTION(execEOSPresenceSetPresence); \
	DECLARE_FUNCTION(execEOSPresenceCreatePresenceModification); \
	DECLARE_FUNCTION(execEOSPresenceCopyPresence); \
	DECLARE_FUNCTION(execEOSPresenceHasPresence); \
	DECLARE_FUNCTION(execEOSPresenceQueryPresence); \
	DECLARE_FUNCTION(execGetPresence);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSPresenceModificationRelease); \
	DECLARE_FUNCTION(execEOSPresenceModificationSetJoinInfo); \
	DECLARE_FUNCTION(execEOSPresenceModificationDeleteData); \
	DECLARE_FUNCTION(execEOSPresenceModificationSetData); \
	DECLARE_FUNCTION(execEOSPresenceModificationSetRawRichText); \
	DECLARE_FUNCTION(execEOSPresenceModificationSetStatus); \
	DECLARE_FUNCTION(execEOSPresenceGetJoinInfo); \
	DECLARE_FUNCTION(execEOSPresenceRemoveNotifyJoinGameAccepted); \
	DECLARE_FUNCTION(execEOSPresenceAddNotifyJoinGameAccepted); \
	DECLARE_FUNCTION(execEOSPresenceRemoveNotifyOnPresenceChanged); \
	DECLARE_FUNCTION(execEOSPresenceAddNotifyOnPresenceChanged); \
	DECLARE_FUNCTION(execEOSPresenceSetPresence); \
	DECLARE_FUNCTION(execEOSPresenceCreatePresenceModification); \
	DECLARE_FUNCTION(execEOSPresenceCopyPresence); \
	DECLARE_FUNCTION(execEOSPresenceHasPresence); \
	DECLARE_FUNCTION(execEOSPresenceQueryPresence); \
	DECLARE_FUNCTION(execGetPresence);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorePresence(); \
	friend struct Z_Construct_UClass_UCorePresence_Statics; \
public: \
	DECLARE_CLASS(UCorePresence, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePresence)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUCorePresence(); \
	friend struct Z_Construct_UClass_UCorePresence_Statics; \
public: \
	DECLARE_CLASS(UCorePresence, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePresence)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCorePresence(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePresence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePresence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePresence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePresence(UCorePresence&&); \
	NO_API UCorePresence(const UCorePresence&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePresence(UCorePresence&&); \
	NO_API UCorePresence(const UCorePresence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePresence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePresence); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCorePresence)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_26_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCorePresence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Presence_EOSPresence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
