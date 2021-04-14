// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EOSCORE_EOSMetricsTypes_generated_h
#error "EOSMetricsTypes.generated.h already included, missing '#pragma once' in EOSMetricsTypes.h"
#endif
#define EOSCORE_EOSMetricsTypes_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetricsTypes_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSMetricsEndPlayerSessionOptions>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetricsTypes_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSMetricsBeginPlayerSessionOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Metrics_EOSMetricsTypes_h


#define FOREACH_ENUM_EEOSEMETRICSACCOUNTIDTYPE(op) \
	op(EEOSEMetricsAccountIdType::EOS_MAIT_Epic) \
	op(EEOSEMetricsAccountIdType::EOS_MAIT_External) 

enum class EEOSEMetricsAccountIdType : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EEOSEMetricsAccountIdType>();

#define FOREACH_ENUM_EEOSEUSERCONTROLLERTYPE(op) \
	op(EEOSEUserControllerType::EOS_UCT_Unknown) \
	op(EEOSEUserControllerType::EOS_UCT_MouseKeyboard) \
	op(EEOSEUserControllerType::EOS_UCT_GamepadControl) \
	op(EEOSEUserControllerType::EOS_UCT_TouchControl) 

enum class EEOSEUserControllerType : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EEOSEUserControllerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
