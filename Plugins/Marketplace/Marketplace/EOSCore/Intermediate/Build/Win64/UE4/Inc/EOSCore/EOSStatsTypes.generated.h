// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSStatsOnQueryStatsCompleteCallbackInfo;
struct FEOSStatsIngestStatCompleteCallbackInfo;
#ifdef EOSCORE_EOSStatsTypes_generated_h
#error "EOSStatsTypes.generated.h already included, missing '#pragma once' in EOSStatsTypes.h"
#endif
#define EOSCORE_EOSStatsTypes_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSStatsOnQueryStatsCompleteCallbackInfo>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_222_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSStatsCopyStatByNameOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSStatsCopyStatByIndexOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSStatsGetStatCountOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSStatsStat_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSStatsStat>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSStatsQueryStatsOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSStatsIngestStatCompleteCallbackInfo>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSStatsIngestStatOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSStatsIngestData>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_276_DELEGATE \
struct _Script_EOSCore_eventOnStatsQueryStatsCompleteCallbackDelegate_Parms \
{ \
	FEOSStatsOnQueryStatsCompleteCallbackInfo data; \
}; \
static inline void FOnStatsQueryStatsCompleteCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStatsQueryStatsCompleteCallbackDelegate, FEOSStatsOnQueryStatsCompleteCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnStatsQueryStatsCompleteCallbackDelegate_Parms Parms; \
	Parms.data=data; \
	OnStatsQueryStatsCompleteCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_275_DELEGATE \
struct _Script_EOSCore_eventOnStatsIngestStatCompleteCallbackDelegate_Parms \
{ \
	FEOSStatsIngestStatCompleteCallbackInfo data; \
}; \
static inline void FOnStatsIngestStatCompleteCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStatsIngestStatCompleteCallbackDelegate, FEOSStatsIngestStatCompleteCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnStatsIngestStatCompleteCallbackDelegate_Parms Parms; \
	Parms.data=data; \
	OnStatsIngestStatCompleteCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_273_DELEGATE \
struct _Script_EOSCore_eventOnStatsQueryStatsCompleteCallback_Parms \
{ \
	FEOSStatsOnQueryStatsCompleteCallbackInfo data; \
}; \
static inline void FOnStatsQueryStatsCompleteCallback_DelegateWrapper(const FScriptDelegate& OnStatsQueryStatsCompleteCallback, FEOSStatsOnQueryStatsCompleteCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnStatsQueryStatsCompleteCallback_Parms Parms; \
	Parms.data=data; \
	OnStatsQueryStatsCompleteCallback.ProcessDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h_272_DELEGATE \
struct _Script_EOSCore_eventOnStatsIngestStatCompleteCallback_Parms \
{ \
	FEOSStatsIngestStatCompleteCallbackInfo data; \
}; \
static inline void FOnStatsIngestStatCompleteCallback_DelegateWrapper(const FScriptDelegate& OnStatsIngestStatCompleteCallback, FEOSStatsIngestStatCompleteCallbackInfo const& data) \
{ \
	_Script_EOSCore_eventOnStatsIngestStatCompleteCallback_Parms Parms; \
	Parms.data=data; \
	OnStatsIngestStatCompleteCallback.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Stats_EOSStatsTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
