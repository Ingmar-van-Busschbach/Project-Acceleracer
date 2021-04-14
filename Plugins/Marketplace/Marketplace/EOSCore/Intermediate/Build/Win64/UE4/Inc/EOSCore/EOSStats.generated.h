// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSStatsCopyStatByNameOptions;
struct FEOSStatsStat;
enum class EOSResult : uint8;
struct FEOSStatsCopyStatByIndexOptions;
struct FEOSStatsGetStatCountOptions;
struct FEOSStatsQueryStatsOptions;
struct FEOSStatsIngestStatOptions;
class UCoreStats;
#ifdef EOSCORE_EOSStats_generated_h
#error "EOSStats.generated.h already included, missing '#pragma once' in EOSStats.h"
#endif
#define EOSCORE_EOSStats_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSStatsCopyStatByName); \
	DECLARE_FUNCTION(execEOSStatsCopyStatByIndex); \
	DECLARE_FUNCTION(execEOSStatsGetStatsCount); \
	DECLARE_FUNCTION(execEOSStatsQueryStats); \
	DECLARE_FUNCTION(execEOSStatsIngestStat); \
	DECLARE_FUNCTION(execGetStats);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSStatsCopyStatByName); \
	DECLARE_FUNCTION(execEOSStatsCopyStatByIndex); \
	DECLARE_FUNCTION(execEOSStatsGetStatsCount); \
	DECLARE_FUNCTION(execEOSStatsQueryStats); \
	DECLARE_FUNCTION(execEOSStatsIngestStat); \
	DECLARE_FUNCTION(execGetStats);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStats(); \
	friend struct Z_Construct_UClass_UCoreStats_Statics; \
public: \
	DECLARE_CLASS(UCoreStats, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStats)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStats(); \
	friend struct Z_Construct_UClass_UCoreStats_Statics; \
public: \
	DECLARE_CLASS(UCoreStats, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStats)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStats(UCoreStats&&); \
	NO_API UCoreStats(const UCoreStats&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStats(UCoreStats&&); \
	NO_API UCoreStats(const UCoreStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStats)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_15_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
