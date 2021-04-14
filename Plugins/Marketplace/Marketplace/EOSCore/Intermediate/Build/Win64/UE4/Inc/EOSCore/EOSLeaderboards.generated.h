// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions;
struct FEOSLeaderboardsLeaderboardUserScore;
enum class EOSResult : uint8;
struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions;
struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions;
struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions;
struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions;
struct FEOSLeaderboardsLeaderboardRecord;
struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions;
struct FEOSLeaderboardsGetLeaderboardRecordCountOptions;
struct FEOSLeaderboardsQueryLeaderboardRanksOptions;
struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions;
struct FEOSLeaderboardsDefinition;
struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions;
struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions;
struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions;
class UCoreLeaderboards;
#ifdef EOSCORE_EOSLeaderboards_generated_h
#error "EOSLeaderboards.generated.h already included, missing '#pragma once' in EOSLeaderboards.h"
#endif
#define EOSCORE_EOSLeaderboards_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardUserScoreByUserId); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardUserScoreByIndex); \
	DECLARE_FUNCTION(execEOSLeaderboardsGetLeaderboardUserScoreCount); \
	DECLARE_FUNCTION(execEOSLeaderboardsQueryLeaderboardUserScores); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardRecordByUserId); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardRecordByIndex); \
	DECLARE_FUNCTION(execEOSLeaderboardsGetLeaderboardRecordCount); \
	DECLARE_FUNCTION(execEOSLeaderboardsQueryLeaderboardRanks); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardDefinitionByIndex); \
	DECLARE_FUNCTION(execEOSLeaderboardsGetLeaderboardDefinitionCount); \
	DECLARE_FUNCTION(execEOSLeaderboardsQueryLeaderboardDefinitions); \
	DECLARE_FUNCTION(execGetLeaderboards);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardUserScoreByUserId); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardUserScoreByIndex); \
	DECLARE_FUNCTION(execEOSLeaderboardsGetLeaderboardUserScoreCount); \
	DECLARE_FUNCTION(execEOSLeaderboardsQueryLeaderboardUserScores); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardRecordByUserId); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardRecordByIndex); \
	DECLARE_FUNCTION(execEOSLeaderboardsGetLeaderboardRecordCount); \
	DECLARE_FUNCTION(execEOSLeaderboardsQueryLeaderboardRanks); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId); \
	DECLARE_FUNCTION(execEOSLeaderboardsCopyLeaderboardDefinitionByIndex); \
	DECLARE_FUNCTION(execEOSLeaderboardsGetLeaderboardDefinitionCount); \
	DECLARE_FUNCTION(execEOSLeaderboardsQueryLeaderboardDefinitions); \
	DECLARE_FUNCTION(execGetLeaderboards);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreLeaderboards(); \
	friend struct Z_Construct_UClass_UCoreLeaderboards_Statics; \
public: \
	DECLARE_CLASS(UCoreLeaderboards, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreLeaderboards)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCoreLeaderboards(); \
	friend struct Z_Construct_UClass_UCoreLeaderboards_Statics; \
public: \
	DECLARE_CLASS(UCoreLeaderboards, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreLeaderboards)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreLeaderboards(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreLeaderboards) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreLeaderboards); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreLeaderboards); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreLeaderboards(UCoreLeaderboards&&); \
	NO_API UCoreLeaderboards(const UCoreLeaderboards&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreLeaderboards(UCoreLeaderboards&&); \
	NO_API UCoreLeaderboards(const UCoreLeaderboards&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreLeaderboards); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreLeaderboards); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreLeaderboards)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_21_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreLeaderboards>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Leaderboards_EOSLeaderboards_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
