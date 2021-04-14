// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSNotificationId;
struct FEOSAchievementsUnlockAchievementsOptions;
struct FEOSAchievementsCopyPlayerAchievementByIndexOptions;
struct FEOSAchievementsPlayerAchievement;
enum class EOSResult : uint8;
struct FEOSAchievementsGetPlayerAchievementCountOptions;
struct FEOSAchievementsQueryPlayerAchievementsOptions;
struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions;
struct FEOSAchievementsDefinitionV2;
struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions;
struct FEOSAchievementsGetAchievementDefinitionCountOptions;
struct FEOSAchievementsQueryDefinitionsOptions;
class UCoreAchievements;
#ifdef EOSCORE_EOSAchievements_generated_h
#error "EOSAchievements.generated.h already included, missing '#pragma once' in EOSAchievements.h"
#endif
#define EOSCORE_EOSAchievements_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSAchievementsRemoveNotifyAchievementsUnlocked); \
	DECLARE_FUNCTION(execEOSAchievementsAddNotifyAchievementsUnlockedV2); \
	DECLARE_FUNCTION(execEOSAchievementsUnlockAchievements); \
	DECLARE_FUNCTION(execEOSAchievementsCopyPlayerAchievementByIndex); \
	DECLARE_FUNCTION(execEOSAchievementsGetPlayerAchievementCount); \
	DECLARE_FUNCTION(execEOSAchievementsQueryPlayerAchievements); \
	DECLARE_FUNCTION(execEOSAchievementsCopyAchievementDefinitionV2ByAchievementId); \
	DECLARE_FUNCTION(execEOSAchievementsCopyAchievementDefinitionV2ByIndex); \
	DECLARE_FUNCTION(execEOSAchievementsGetAchievementDefinitionCount); \
	DECLARE_FUNCTION(execEOSAchievementsQueryDefinitions); \
	DECLARE_FUNCTION(execGetAchievements);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSAchievementsRemoveNotifyAchievementsUnlocked); \
	DECLARE_FUNCTION(execEOSAchievementsAddNotifyAchievementsUnlockedV2); \
	DECLARE_FUNCTION(execEOSAchievementsUnlockAchievements); \
	DECLARE_FUNCTION(execEOSAchievementsCopyPlayerAchievementByIndex); \
	DECLARE_FUNCTION(execEOSAchievementsGetPlayerAchievementCount); \
	DECLARE_FUNCTION(execEOSAchievementsQueryPlayerAchievements); \
	DECLARE_FUNCTION(execEOSAchievementsCopyAchievementDefinitionV2ByAchievementId); \
	DECLARE_FUNCTION(execEOSAchievementsCopyAchievementDefinitionV2ByIndex); \
	DECLARE_FUNCTION(execEOSAchievementsGetAchievementDefinitionCount); \
	DECLARE_FUNCTION(execEOSAchievementsQueryDefinitions); \
	DECLARE_FUNCTION(execGetAchievements);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreAchievements(); \
	friend struct Z_Construct_UClass_UCoreAchievements_Statics; \
public: \
	DECLARE_CLASS(UCoreAchievements, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreAchievements)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCoreAchievements(); \
	friend struct Z_Construct_UClass_UCoreAchievements_Statics; \
public: \
	DECLARE_CLASS(UCoreAchievements, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreAchievements)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreAchievements(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreAchievements) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAchievements); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAchievements); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreAchievements(UCoreAchievements&&); \
	NO_API UCoreAchievements(const UCoreAchievements&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreAchievements(UCoreAchievements&&); \
	NO_API UCoreAchievements(const UCoreAchievements&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAchievements); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAchievements); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreAchievements)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_21_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreAchievements>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Achievements_EOSAchievements_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
