// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSMetricsEndPlayerSessionOptions;
enum class EOSResult : uint8;
struct FEOSMetricsBeginPlayerSessionOptions;
class UCoreMetrics;
#ifdef EOSCORE_EOSMetrics_generated_h
#error "EOSMetrics.generated.h already included, missing '#pragma once' in EOSMetrics.h"
#endif
#define EOSCORE_EOSMetrics_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSMetricsEndPlayerSession); \
	DECLARE_FUNCTION(execEOSMetricsBeginPlayerSession); \
	DECLARE_FUNCTION(execGetMetrics);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSMetricsEndPlayerSession); \
	DECLARE_FUNCTION(execEOSMetricsBeginPlayerSession); \
	DECLARE_FUNCTION(execGetMetrics);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreMetrics(); \
	friend struct Z_Construct_UClass_UCoreMetrics_Statics; \
public: \
	DECLARE_CLASS(UCoreMetrics, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreMetrics)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreMetrics(); \
	friend struct Z_Construct_UClass_UCoreMetrics_Statics; \
public: \
	DECLARE_CLASS(UCoreMetrics, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreMetrics)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreMetrics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreMetrics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreMetrics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreMetrics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreMetrics(UCoreMetrics&&); \
	NO_API UCoreMetrics(const UCoreMetrics&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreMetrics(UCoreMetrics&&); \
	NO_API UCoreMetrics(const UCoreMetrics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreMetrics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreMetrics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreMetrics)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_15_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreMetrics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetrics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
