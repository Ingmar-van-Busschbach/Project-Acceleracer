// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Stats/EOSStats.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSStats() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreStats_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreStats();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsStat();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStats::execEOSStatsCopyStatByName)
	{
		P_GET_STRUCT(FEOSStatsCopyStatByNameOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSStatsStat,Z_Param_Out_outStat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreStats::EOSStatsCopyStatByName(Z_Param_options,Z_Param_Out_outStat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStats::execEOSStatsCopyStatByIndex)
	{
		P_GET_STRUCT(FEOSStatsCopyStatByIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSStatsStat,Z_Param_Out_outStat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreStats::EOSStatsCopyStatByIndex(Z_Param_options,Z_Param_Out_outStat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStats::execEOSStatsGetStatsCount)
	{
		P_GET_STRUCT(FEOSStatsGetStatCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreStats::EOSStatsGetStatsCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStats::execEOSStatsQueryStats)
	{
		P_GET_STRUCT(FEOSStatsQueryStatsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSStatsQueryStats(Z_Param_options,FOnStatsQueryStatsCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStats::execEOSStatsIngestStat)
	{
		P_GET_STRUCT(FEOSStatsIngestStatOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSStatsIngestStat(Z_Param_options,FOnStatsIngestStatCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStats::execGetStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreStats**)Z_Param__Result=UCoreStats::GetStats();
		P_NATIVE_END;
	}
	void UCoreStats::StaticRegisterNativesUCoreStats()
	{
		UClass* Class = UCoreStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSStatsCopyStatByIndex", &UCoreStats::execEOSStatsCopyStatByIndex },
			{ "EOSStatsCopyStatByName", &UCoreStats::execEOSStatsCopyStatByName },
			{ "EOSStatsGetStatsCount", &UCoreStats::execEOSStatsGetStatsCount },
			{ "EOSStatsIngestStat", &UCoreStats::execEOSStatsIngestStat },
			{ "EOSStatsQueryStats", &UCoreStats::execEOSStatsQueryStats },
			{ "GetStats", &UCoreStats::execGetStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics
	{
		struct CoreStats_eventEOSStatsCopyStatByIndex_Parms
		{
			FEOSStatsCopyStatByIndexOptions options;
			FEOSStatsStat outStat;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outStat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsCopyStatByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::NewProp_outStat = { "outStat", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsCopyStatByIndex_Parms, outStat), Z_Construct_UScriptStruct_FEOSStatsStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsCopyStatByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::NewProp_outStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Stats" },
		{ "Comment", "/**\n     * Fetches a stat from a given index.\n     *\n     * @param Options Structure containing the account id and index being accessed\n     * @param OutAchievement The stat data for the given index, if it exists and is valid, use EOSStatsStat_Release when finished\n     *\n     * @see EOSStatsStat_Release\n     *\n     * @return EOS_Success if the information is available and passed out in OutStat\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the stat is not found\n     */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStats.h" },
		{ "ToolTip", "Fetches a stat from a given index.\n\n@param Options Structure containing the account id and index being accessed\n@param OutAchievement The stat data for the given index, if it exists and is valid, use EOSStatsStat_Release when finished\n\n@see EOSStatsStat_Release\n\n@return EOS_Success if the information is available and passed out in OutStat\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the stat is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStats, nullptr, "EOSStatsCopyStatByIndex", nullptr, nullptr, sizeof(CoreStats_eventEOSStatsCopyStatByIndex_Parms), Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics
	{
		struct CoreStats_eventEOSStatsCopyStatByName_Parms
		{
			FEOSStatsCopyStatByNameOptions options;
			FEOSStatsStat outStat;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outStat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsCopyStatByName_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::NewProp_outStat = { "outStat", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsCopyStatByName_Parms, outStat), Z_Construct_UScriptStruct_FEOSStatsStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsCopyStatByName_Parms, options), Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::NewProp_outStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Stats" },
		{ "Comment", "/**\n     * Fetches a stat from cached stats by name.\n     *\n     * @param Options Structure containing the account id and name being accessed\n     * @param OutAchievement The stat data for the given name, if it exists and is valid, use EOSStatsStat_Release when finished\n     *\n     * @see EOSStatsStat_Release\n     *\n     * @return EOS_Success if the information is available and passed out in OutStat\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the stat is not found\n     */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStats.h" },
		{ "ToolTip", "Fetches a stat from cached stats by name.\n\n@param Options Structure containing the account id and name being accessed\n@param OutAchievement The stat data for the given name, if it exists and is valid, use EOSStatsStat_Release when finished\n\n@see EOSStatsStat_Release\n\n@return EOS_Success if the information is available and passed out in OutStat\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the stat is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStats, nullptr, "EOSStatsCopyStatByName", nullptr, nullptr, sizeof(CoreStats_eventEOSStatsCopyStatByName_Parms), Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics
	{
		struct CoreStats_eventEOSStatsGetStatsCount_Parms
		{
			FEOSStatsGetStatCountOptions options;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsGetStatsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsGetStatsCount_Parms, options), Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Stats" },
		{ "Comment", "/**\n     * Fetch the number of stats that are cached locally.\n     *\n     * @param Options The Options associated with retrieving the stat count\n     *\n     * @see EOSStatsCopyStatByIndex\n     *\n     * @return Number of stats or 0 if there is an error\n     */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStats.h" },
		{ "ToolTip", "Fetch the number of stats that are cached locally.\n\n@param Options The Options associated with retrieving the stat count\n\n@see EOSStatsCopyStatByIndex\n\n@return Number of stats or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStats, nullptr, "EOSStatsGetStatsCount", nullptr, nullptr, sizeof(CoreStats_eventEOSStatsGetStatsCount_Parms), Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics
	{
		struct CoreStats_eventEOSStatsIngestStat_Parms
		{
			FEOSStatsIngestStatOptions options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsIngestStat_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsIngestStat_Parms, options), Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Stats" },
		{ "Comment", "/**\n     * Ingest a stat by the amount specified in Options.\n     * When the operation is complete and the delegate is triggered the stat will be uploaded to the backend to be processed.\n     * The stat may not be updated immediately and an achievement using the stat may take a while to be unlocked once the stat has been uploaded.\n     *\n     * @param Options Structure containing information about the stat we're ingesting.\n     * @param ClientData Arbitrary data that is passed back to you in the callback.\n     * @param callback This function is called when the ingest stat operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStats.h" },
		{ "ToolTip", "Ingest a stat by the amount specified in Options.\nWhen the operation is complete and the delegate is triggered the stat will be uploaded to the backend to be processed.\nThe stat may not be updated immediately and an achievement using the stat may take a while to be unlocked once the stat has been uploaded.\n\n@param Options Structure containing information about the stat we're ingesting.\n@param ClientData Arbitrary data that is passed back to you in the callback.\n@param callback This function is called when the ingest stat operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStats, nullptr, "EOSStatsIngestStat", nullptr, nullptr, sizeof(CoreStats_eventEOSStatsIngestStat_Parms), Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics
	{
		struct CoreStats_eventEOSStatsQueryStats_Parms
		{
			FEOSStatsQueryStatsOptions options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsQueryStats_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventEOSStatsQueryStats_Parms, options), Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Stats" },
		{ "Comment", "/**\n     * Query for a list of stats for a specific player.\n     *\n     * @param Options Structure containing information about the player whose stats we're retrieving.\n     * @param ClientData Arbitrary data that is passed back to you in the callback\n     * @param callback This function is called when the query player stats operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStats.h" },
		{ "ToolTip", "Query for a list of stats for a specific player.\n\n@param Options Structure containing information about the player whose stats we're retrieving.\n@param ClientData Arbitrary data that is passed back to you in the callback\n@param callback This function is called when the query player stats operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStats, nullptr, "EOSStatsQueryStats", nullptr, nullptr, sizeof(CoreStats_eventEOSStatsQueryStats_Parms), Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStats_GetStats_Statics
	{
		struct CoreStats_eventGetStats_Parms
		{
			UCoreStats* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStats_GetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStats_eventGetStats_Parms, ReturnValue), Z_Construct_UClass_UCoreStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStats_GetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStats_GetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStats_GetStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "ModuleRelativePath", "Public/Stats/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStats_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStats, nullptr, "GetStats", nullptr, nullptr, sizeof(CoreStats_eventGetStats_Parms), Z_Construct_UFunction_UCoreStats_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_GetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStats_GetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStats_GetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStats_GetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStats_GetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStats_NoRegister()
	{
		return UCoreStats::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryStatsCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryStatsCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIngestStatCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIngestStatCompleteCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByIndex, "EOSStatsCopyStatByIndex" }, // 4018823338
		{ &Z_Construct_UFunction_UCoreStats_EOSStatsCopyStatByName, "EOSStatsCopyStatByName" }, // 2760097544
		{ &Z_Construct_UFunction_UCoreStats_EOSStatsGetStatsCount, "EOSStatsGetStatsCount" }, // 639159813
		{ &Z_Construct_UFunction_UCoreStats_EOSStatsIngestStat, "EOSStatsIngestStat" }, // 1851559386
		{ &Z_Construct_UFunction_UCoreStats_EOSStatsQueryStats, "EOSStatsQueryStats" }, // 3082551417
		{ &Z_Construct_UFunction_UCoreStats_GetStats, "GetStats" }, // 705581841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stats/EOSStats.h" },
		{ "ModuleRelativePath", "Public/Stats/EOSStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStats_Statics::NewProp_OnQueryStatsCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Stats|Delegates" },
		{ "ModuleRelativePath", "Public/Stats/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStats_Statics::NewProp_OnQueryStatsCompleteCallbackDelegate = { "OnQueryStatsCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStats, OnQueryStatsCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStats_Statics::NewProp_OnQueryStatsCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStats_Statics::NewProp_OnQueryStatsCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStats_Statics::NewProp_OnIngestStatCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Stats|Delegates" },
		{ "ModuleRelativePath", "Public/Stats/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStats_Statics::NewProp_OnIngestStatCompleteCallbackDelegate = { "OnIngestStatCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStats, OnIngestStatCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStats_Statics::NewProp_OnIngestStatCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStats_Statics::NewProp_OnIngestStatCompleteCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStats_Statics::NewProp_OnQueryStatsCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStats_Statics::NewProp_OnIngestStatCompleteCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStats_Statics::ClassParams = {
		&UCoreStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStats_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStats, 40020599);
	template<> EOSCORE_API UClass* StaticClass<UCoreStats>()
	{
		return UCoreStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStats(Z_Construct_UClass_UCoreStats, &UCoreStats::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
