// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Leaderboards/EOSLeaderboards.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLeaderboards() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreLeaderboards_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreLeaderboards();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsDefinition();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsLeaderboardRecord();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsLeaderboardUserScore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsGetLeaderboardDefinitionCountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsGetLeaderboardRecordCountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsGetLeaderboardUserScoreCountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardDefinitionsOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardRanksOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardUserScoresOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardRanksCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardUserScoresCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardUserScoreByUserId)
	{
		P_GET_STRUCT(FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSLeaderboardsLeaderboardUserScore,Z_Param_Out_outLeaderboardUserScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardUserScoreByUserId(Z_Param_options,Z_Param_Out_outLeaderboardUserScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardUserScoreByIndex)
	{
		P_GET_STRUCT(FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSLeaderboardsLeaderboardUserScore,Z_Param_Out_outLeaderboardUserScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardUserScoreByIndex(Z_Param_options,Z_Param_Out_outLeaderboardUserScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsGetLeaderboardUserScoreCount)
	{
		P_GET_STRUCT(FEOSLeaderboardsGetLeaderboardUserScoreCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreLeaderboards::EOSLeaderboardsGetLeaderboardUserScoreCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsQueryLeaderboardUserScores)
	{
		P_GET_STRUCT(FEOSLeaderboardsQueryLeaderboardUserScoresOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSLeaderboardsQueryLeaderboardUserScores(Z_Param_options,FOnQueryLeaderboardUserScoresCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardRecordByUserId)
	{
		P_GET_STRUCT(FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSLeaderboardsLeaderboardRecord,Z_Param_Out_outLeaderboardRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardRecordByUserId(Z_Param_options,Z_Param_Out_outLeaderboardRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardRecordByIndex)
	{
		P_GET_STRUCT(FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSLeaderboardsLeaderboardRecord,Z_Param_Out_outLeaderboardRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardRecordByIndex(Z_Param_options,Z_Param_Out_outLeaderboardRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsGetLeaderboardRecordCount)
	{
		P_GET_STRUCT(FEOSLeaderboardsGetLeaderboardRecordCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreLeaderboards::EOSLeaderboardsGetLeaderboardRecordCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsQueryLeaderboardRanks)
	{
		P_GET_STRUCT(FEOSLeaderboardsQueryLeaderboardRanksOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSLeaderboardsQueryLeaderboardRanks(Z_Param_options,FOnQueryLeaderboardRanksCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId)
	{
		P_GET_STRUCT(FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSLeaderboardsDefinition,Z_Param_Out_outLeaderboardDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId(Z_Param_options,Z_Param_Out_outLeaderboardDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardDefinitionByIndex)
	{
		P_GET_STRUCT(FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSLeaderboardsDefinition,Z_Param_Out_outLeaderboardDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardDefinitionByIndex(Z_Param_options,Z_Param_Out_outLeaderboardDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsGetLeaderboardDefinitionCount)
	{
		P_GET_STRUCT(FEOSLeaderboardsGetLeaderboardDefinitionCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreLeaderboards::EOSLeaderboardsGetLeaderboardDefinitionCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execEOSLeaderboardsQueryLeaderboardDefinitions)
	{
		P_GET_STRUCT(FEOSLeaderboardsQueryLeaderboardDefinitionsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSLeaderboardsQueryLeaderboardDefinitions(Z_Param_options,FOnQueryLeaderboardDefinitionsCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreLeaderboards::execGetLeaderboards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreLeaderboards**)Z_Param__Result=UCoreLeaderboards::GetLeaderboards();
		P_NATIVE_END;
	}
	void UCoreLeaderboards::StaticRegisterNativesUCoreLeaderboards()
	{
		UClass* Class = UCoreLeaderboards::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSLeaderboardsCopyLeaderboardDefinitionByIndex", &UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardDefinitionByIndex },
			{ "EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId", &UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId },
			{ "EOSLeaderboardsCopyLeaderboardRecordByIndex", &UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardRecordByIndex },
			{ "EOSLeaderboardsCopyLeaderboardRecordByUserId", &UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardRecordByUserId },
			{ "EOSLeaderboardsCopyLeaderboardUserScoreByIndex", &UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardUserScoreByIndex },
			{ "EOSLeaderboardsCopyLeaderboardUserScoreByUserId", &UCoreLeaderboards::execEOSLeaderboardsCopyLeaderboardUserScoreByUserId },
			{ "EOSLeaderboardsGetLeaderboardDefinitionCount", &UCoreLeaderboards::execEOSLeaderboardsGetLeaderboardDefinitionCount },
			{ "EOSLeaderboardsGetLeaderboardRecordCount", &UCoreLeaderboards::execEOSLeaderboardsGetLeaderboardRecordCount },
			{ "EOSLeaderboardsGetLeaderboardUserScoreCount", &UCoreLeaderboards::execEOSLeaderboardsGetLeaderboardUserScoreCount },
			{ "EOSLeaderboardsQueryLeaderboardDefinitions", &UCoreLeaderboards::execEOSLeaderboardsQueryLeaderboardDefinitions },
			{ "EOSLeaderboardsQueryLeaderboardRanks", &UCoreLeaderboards::execEOSLeaderboardsQueryLeaderboardRanks },
			{ "EOSLeaderboardsQueryLeaderboardUserScores", &UCoreLeaderboards::execEOSLeaderboardsQueryLeaderboardUserScores },
			{ "GetLeaderboards", &UCoreLeaderboards::execGetLeaderboards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByIndex_Parms
		{
			FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions options;
			FEOSLeaderboardsDefinition outLeaderboardDefinition;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outLeaderboardDefinition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::NewProp_outLeaderboardDefinition = { "outLeaderboardDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByIndex_Parms, outLeaderboardDefinition), Z_Construct_UScriptStruct_FEOSLeaderboardsDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::NewProp_outLeaderboardDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Fetches a leaderboard definition from the cache using an index.\n     *\n     * @param Options Structure containing the index being accessed.\n     * @param OutLeaderboardDefinition The leaderboard data for the given index, if it exists and is valid, use EOSLeaderboardsDefinition_Release when finished.\n     *\n     * @see EOSLeaderboardsDefinition_Release\n     *\n     * @return EOS_Success if the information is available and passed out in OutLeaderboardDefinition\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the leaderboard is not found\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Fetches a leaderboard definition from the cache using an index.\n\n@param Options Structure containing the index being accessed.\n@param OutLeaderboardDefinition The leaderboard data for the given index, if it exists and is valid, use EOSLeaderboardsDefinition_Release when finished.\n\n@see EOSLeaderboardsDefinition_Release\n\n@return EOS_Success if the information is available and passed out in OutLeaderboardDefinition\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the leaderboard is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsCopyLeaderboardDefinitionByIndex", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByIndex_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Parms
		{
			FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions options;
			FEOSLeaderboardsDefinition outLeaderboardDefinition;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outLeaderboardDefinition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_outLeaderboardDefinition = { "outLeaderboardDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Parms, outLeaderboardDefinition), Z_Construct_UScriptStruct_FEOSLeaderboardsDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_outLeaderboardDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Fetches a leaderboard definition from the cache using a leaderboard ID.\n     *\n     * @param Options Structure containing the leaderboard ID being accessed.\n     * @param OutLeaderboardDefinition The leaderboard definition for the given leaderboard ID, if it exists and is valid, use EOSLeaderboardsDefinition_Release when finished.\n     *\n     * @see EOSLeaderboardsDefinition_Release\n     *\n     * @return EOS_Success if the information is available and passed out in OutLeaderboardDefinition\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the leaderboard data is not found\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Fetches a leaderboard definition from the cache using a leaderboard ID.\n\n@param Options Structure containing the leaderboard ID being accessed.\n@param OutLeaderboardDefinition The leaderboard definition for the given leaderboard ID, if it exists and is valid, use EOSLeaderboardsDefinition_Release when finished.\n\n@see EOSLeaderboardsDefinition_Release\n\n@return EOS_Success if the information is available and passed out in OutLeaderboardDefinition\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the leaderboard data is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByIndex_Parms
		{
			FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions options;
			FEOSLeaderboardsLeaderboardRecord outLeaderboardRecord;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outLeaderboardRecord;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::NewProp_outLeaderboardRecord = { "outLeaderboardRecord", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByIndex_Parms, outLeaderboardRecord), Z_Construct_UScriptStruct_FEOSLeaderboardsLeaderboardRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::NewProp_outLeaderboardRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Fetches a leaderboard record from a given index.\n     *\n     * @param Options Structure containing the index being accessed.\n     * @param OutLeaderboardRecord The leaderboard record for the given index, if it exists and is valid, use EOSLeaderboardsLeaderboardRecord_Release when finished.\n     *\n     * @see EOSLeaderboardsLeaderboardRecord_Release\n     *\n     * @return EOS_Success if the leaderboard record is available and passed out in OutLeaderboardRecord\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the leaderboard is not found\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Fetches a leaderboard record from a given index.\n\n@param Options Structure containing the index being accessed.\n@param OutLeaderboardRecord The leaderboard record for the given index, if it exists and is valid, use EOSLeaderboardsLeaderboardRecord_Release when finished.\n\n@see EOSLeaderboardsLeaderboardRecord_Release\n\n@return EOS_Success if the leaderboard record is available and passed out in OutLeaderboardRecord\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the leaderboard is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsCopyLeaderboardRecordByIndex", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByIndex_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByUserId_Parms
		{
			FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions options;
			FEOSLeaderboardsLeaderboardRecord outLeaderboardRecord;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outLeaderboardRecord;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByUserId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::NewProp_outLeaderboardRecord = { "outLeaderboardRecord", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByUserId_Parms, outLeaderboardRecord), Z_Construct_UScriptStruct_FEOSLeaderboardsLeaderboardRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByUserId_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::NewProp_outLeaderboardRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Fetches a leaderboard record from a given user ID.\n     *\n     * @param Options Structure containing the user ID being accessed.\n     * @param OutLeaderboardRecord The leaderboard record for the given user ID, if it exists and is valid, use EOSLeaderboardsLeaderboardRecord_Release when finished.\n     *\n     * @see EOSLeaderboardsLeaderboardRecord_Release\n     *\n     * @return EOS_Success if the leaderboard record is available and passed out in OutLeaderboardRecord\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the leaderboard data is not found\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Fetches a leaderboard record from a given user ID.\n\n@param Options Structure containing the user ID being accessed.\n@param OutLeaderboardRecord The leaderboard record for the given user ID, if it exists and is valid, use EOSLeaderboardsLeaderboardRecord_Release when finished.\n\n@see EOSLeaderboardsLeaderboardRecord_Release\n\n@return EOS_Success if the leaderboard record is available and passed out in OutLeaderboardRecord\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the leaderboard data is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsCopyLeaderboardRecordByUserId", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardRecordByUserId_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByIndex_Parms
		{
			FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions options;
			FEOSLeaderboardsLeaderboardUserScore outLeaderboardUserScore;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outLeaderboardUserScore;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::NewProp_outLeaderboardUserScore = { "outLeaderboardUserScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByIndex_Parms, outLeaderboardUserScore), Z_Construct_UScriptStruct_FEOSLeaderboardsLeaderboardUserScore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::NewProp_outLeaderboardUserScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Fetches leaderboard user score from a given index.\n     *\n     * @param Options Structure containing the index being accessed.\n     * @param OutLeaderboardUserScore The leaderboard user score for the given index, if it exists and is valid, use EOSLeaderboardsLeaderboardUserScore_Release when finished.\n     *\n     * @see EOSLeaderboardsLeaderboardUserScore_Release\n     *\n     * @return EOS_Success if the leaderboard scores are available and passed out in OutLeaderboardUserScore\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the leaderboard user scores are not found\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Fetches leaderboard user score from a given index.\n\n@param Options Structure containing the index being accessed.\n@param OutLeaderboardUserScore The leaderboard user score for the given index, if it exists and is valid, use EOSLeaderboardsLeaderboardUserScore_Release when finished.\n\n@see EOSLeaderboardsLeaderboardUserScore_Release\n\n@return EOS_Success if the leaderboard scores are available and passed out in OutLeaderboardUserScore\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the leaderboard user scores are not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsCopyLeaderboardUserScoreByIndex", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByIndex_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByUserId_Parms
		{
			FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions options;
			FEOSLeaderboardsLeaderboardUserScore outLeaderboardUserScore;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outLeaderboardUserScore;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByUserId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::NewProp_outLeaderboardUserScore = { "outLeaderboardUserScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByUserId_Parms, outLeaderboardUserScore), Z_Construct_UScriptStruct_FEOSLeaderboardsLeaderboardUserScore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByUserId_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::NewProp_outLeaderboardUserScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Fetches leaderboard user score from a given user ID.\n     *\n     * @param Options Structure containing the user ID being accessed.\n     * @param OutLeaderboardUserScore The leaderboard user score for the given user ID, if it exists and is valid, use EOSLeaderboardsLeaderboardUserScore_Release when finished.\n     *\n     * @see EOSLeaderboardsLeaderboardUserScore_Release\n     *\n     * @return EOS_Success if the leaderboard scores are available and passed out in OutLeaderboardUserScore\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the leaderboard user scores are not found\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Fetches leaderboard user score from a given user ID.\n\n@param Options Structure containing the user ID being accessed.\n@param OutLeaderboardUserScore The leaderboard user score for the given user ID, if it exists and is valid, use EOSLeaderboardsLeaderboardUserScore_Release when finished.\n\n@see EOSLeaderboardsLeaderboardUserScore_Release\n\n@return EOS_Success if the leaderboard scores are available and passed out in OutLeaderboardUserScore\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the leaderboard user scores are not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsCopyLeaderboardUserScoreByUserId", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsCopyLeaderboardUserScoreByUserId_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardDefinitionCount_Parms
		{
			FEOSLeaderboardsGetLeaderboardDefinitionCountOptions options;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardDefinitionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardDefinitionCount_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsGetLeaderboardDefinitionCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Fetch the number of leaderboards definitions that are cached locally.\n     *\n     * @param Options The Options associated with retrieving the leaderboard count.\n     *\n     * @see EOSLeaderboardsCopyLeaderboardDefinitionByIndex\n     * @see EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId\n     *\n     * @return Number of leaderboards or 0 if there is an error\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Fetch the number of leaderboards definitions that are cached locally.\n\n@param Options The Options associated with retrieving the leaderboard count.\n\n@see EOSLeaderboardsCopyLeaderboardDefinitionByIndex\n@see EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId\n\n@return Number of leaderboards or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsGetLeaderboardDefinitionCount", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardDefinitionCount_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardRecordCount_Parms
		{
			FEOSLeaderboardsGetLeaderboardRecordCountOptions options;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardRecordCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardRecordCount_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsGetLeaderboardRecordCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Fetch the number of leaderboard records that are cached locally.\n     *\n     * @param Options The Options associated with retrieving the leaderboard record count.\n     *\n     * @see EOSLeaderboardsCopyLeaderboardRecordByIndex\n     * @see EOSLeaderboardsCopyLeaderboardRecordByUserId\n     *\n     * @return Number of leaderboard records or 0 if there is an error\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Fetch the number of leaderboard records that are cached locally.\n\n@param Options The Options associated with retrieving the leaderboard record count.\n\n@see EOSLeaderboardsCopyLeaderboardRecordByIndex\n@see EOSLeaderboardsCopyLeaderboardRecordByUserId\n\n@return Number of leaderboard records or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsGetLeaderboardRecordCount", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardRecordCount_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardUserScoreCount_Parms
		{
			FEOSLeaderboardsGetLeaderboardUserScoreCountOptions options;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardUserScoreCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardUserScoreCount_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsGetLeaderboardUserScoreCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Fetch the number of leaderboard user scores that are cached locally.\n     *\n     * @param Options The Options associated with retrieving the leaderboard user scores count.\n     *\n     * @see EOSLeaderboardsCopyLeaderboardUserScoreByIndex\n     * @see EOSLeaderboardsCopyLeaderboardUserScoreByUserId\n     *\n     * @return Number of leaderboard records or 0 if there is an error\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Fetch the number of leaderboard user scores that are cached locally.\n\n@param Options The Options associated with retrieving the leaderboard user scores count.\n\n@see EOSLeaderboardsCopyLeaderboardUserScoreByIndex\n@see EOSLeaderboardsCopyLeaderboardUserScoreByUserId\n\n@return Number of leaderboard records or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsGetLeaderboardUserScoreCount", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsGetLeaderboardUserScoreCount_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardDefinitions_Parms
		{
			FEOSLeaderboardsQueryLeaderboardDefinitionsOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardDefinitions_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardDefinitionsCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardDefinitions_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardDefinitionsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n    * Query for a list of existing leaderboards definitions including their attributes.\n    *\n    * @param Options Structure containing information about the application whose leaderboard definitions we're retrieving.\n    * @param callback This function is called when the query operation completes.\n    *\n    * @return EOS_Success if the operation completes successfully\n    *         EOS_InvalidParameters if any of the options are incorrect\n    */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Query for a list of existing leaderboards definitions including their attributes.\n\n@param Options Structure containing information about the application whose leaderboard definitions we're retrieving.\n@param callback This function is called when the query operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsQueryLeaderboardDefinitions", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardDefinitions_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardRanks_Parms
		{
			FEOSLeaderboardsQueryLeaderboardRanksOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardRanks_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardRanksCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardRanks_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardRanksOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Retrieves top leaderboard records by rank in the leaderboard matching the given leaderboard ID.\n     *\n     * @param Options Structure containing information about the leaderboard records we're retrieving.\n     * @param callback This function is called when the query operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Retrieves top leaderboard records by rank in the leaderboard matching the given leaderboard ID.\n\n@param Options Structure containing information about the leaderboard records we're retrieving.\n@param callback This function is called when the query operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsQueryLeaderboardRanks", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardRanks_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics
	{
		struct CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardUserScores_Parms
		{
			FEOSLeaderboardsQueryLeaderboardUserScoresOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardUserScores_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardUserScoresCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardUserScores_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardUserScoresOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Leaderboards" },
		{ "Comment", "/**\n     * Query for a list of scores for a given list of users.\n     *\n     * @param Options Structure containing information about the users whose scores we're retrieving.\n     * @param callback This function is called when the query operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "Query for a list of scores for a given list of users.\n\n@param Options Structure containing information about the users whose scores we're retrieving.\n@param callback This function is called when the query operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "EOSLeaderboardsQueryLeaderboardUserScores", nullptr, nullptr, sizeof(CoreLeaderboards_eventEOSLeaderboardsQueryLeaderboardUserScores_Parms), Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics
	{
		struct CoreLeaderboards_eventGetLeaderboards_Parms
		{
			UCoreLeaderboards* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreLeaderboards_eventGetLeaderboards_Parms, ReturnValue), Z_Construct_UClass_UCoreLeaderboards_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n     * The following EOSLeaderboards* functions allow you to query existing leaderboard definitions that have been defined for your application.\n     * You can retrieve a list of scores for the top users for each Leaderboard.\n     * You can also query scores for one or more users.\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "The following EOSLeaderboards* functions allow you to query existing leaderboard definitions that have been defined for your application.\nYou can retrieve a list of scores for the top users for each Leaderboard.\nYou can also query scores for one or more users." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreLeaderboards, nullptr, "GetLeaderboards", nullptr, nullptr, sizeof(CoreLeaderboards_eventGetLeaderboards_Parms), Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreLeaderboards_NoRegister()
	{
		return UCoreLeaderboards::StaticClass();
	}
	struct Z_Construct_UClass_UCoreLeaderboards_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryLeaderboardRanksCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryLeaderboardRanksCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryLeaderboardUserScoresCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryLeaderboardUserScoresCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreLeaderboards_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreLeaderboards_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex, "EOSLeaderboardsCopyLeaderboardDefinitionByIndex" }, // 451285429
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId, "EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId" }, // 3393284958
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex, "EOSLeaderboardsCopyLeaderboardRecordByIndex" }, // 4241410382
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId, "EOSLeaderboardsCopyLeaderboardRecordByUserId" }, // 1416899181
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex, "EOSLeaderboardsCopyLeaderboardUserScoreByIndex" }, // 2789680663
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId, "EOSLeaderboardsCopyLeaderboardUserScoreByUserId" }, // 3803610815
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount, "EOSLeaderboardsGetLeaderboardDefinitionCount" }, // 3220613195
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount, "EOSLeaderboardsGetLeaderboardRecordCount" }, // 1315739913
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount, "EOSLeaderboardsGetLeaderboardUserScoreCount" }, // 2476011331
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions, "EOSLeaderboardsQueryLeaderboardDefinitions" }, // 3901800582
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks, "EOSLeaderboardsQueryLeaderboardRanks" }, // 1014499069
		{ &Z_Construct_UFunction_UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores, "EOSLeaderboardsQueryLeaderboardUserScores" }, // 1683644117
		{ &Z_Construct_UFunction_UCoreLeaderboards_GetLeaderboards, "GetLeaderboards" }, // 1486950120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreLeaderboards_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The following EOSLeaderboards* functions allow you to query existing leaderboard definitions that have been defined for your application.\n * You can retrieve a list of scores for the top users for each Leaderboard.\n * You can also query scores for one or more users.\n */" },
		{ "IncludePath", "Leaderboards/EOSLeaderboards.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
		{ "ToolTip", "The following EOSLeaderboards* functions allow you to query existing leaderboard definitions that have been defined for your application.\nYou can retrieve a list of scores for the top users for each Leaderboard.\nYou can also query scores for one or more users." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardRanksCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Leaderboards|Delegates" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardRanksCompleteCallbackDelegate = { "OnQueryLeaderboardRanksCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreLeaderboards, OnQueryLeaderboardRanksCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardRanksCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardRanksCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardRanksCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardUserScoresCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Leaderboards|Delegates" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardUserScoresCompleteCallbackDelegate = { "OnQueryLeaderboardUserScoresCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreLeaderboards, OnQueryLeaderboardUserScoresCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardUserScoresCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardUserScoresCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardUserScoresCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Leaderboards|Delegates" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate = { "OnQueryLeaderboardDefinitionsCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreLeaderboards, OnQueryLeaderboardDefinitionsCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreLeaderboards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardRanksCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardUserScoresCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreLeaderboards_Statics::NewProp_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreLeaderboards_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreLeaderboards>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreLeaderboards_Statics::ClassParams = {
		&UCoreLeaderboards::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreLeaderboards_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreLeaderboards_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreLeaderboards_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreLeaderboards_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreLeaderboards()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreLeaderboards_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreLeaderboards, 3166526060);
	template<> EOSCORE_API UClass* StaticClass<UCoreLeaderboards>()
	{
		return UCoreLeaderboards::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreLeaderboards(Z_Construct_UClass_UCoreLeaderboards, &UCoreLeaderboards::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreLeaderboards"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreLeaderboards);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
