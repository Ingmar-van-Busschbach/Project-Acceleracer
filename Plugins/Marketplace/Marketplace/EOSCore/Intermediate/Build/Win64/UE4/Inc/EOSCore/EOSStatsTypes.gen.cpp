// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Stats/EOSStatsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSStatsTypes() {}
// Cross Module References
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSProductUserId();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsStat();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsIngestData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics
	{
		struct _Script_EOSCore_eventOnStatsQueryStatsCompleteCallbackDelegate_Parms
		{
			FEOSStatsOnQueryStatsCompleteCallbackInfo data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnStatsQueryStatsCompleteCallbackDelegate_Parms, data), Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EOSCore, nullptr, "OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_EOSCore_eventOnStatsQueryStatsCompleteCallbackDelegate_Parms), Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics
	{
		struct _Script_EOSCore_eventOnStatsIngestStatCompleteCallbackDelegate_Parms
		{
			FEOSStatsIngestStatCompleteCallbackInfo data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnStatsIngestStatCompleteCallbackDelegate_Parms, data), Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EOSCore, nullptr, "OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_EOSCore_eventOnStatsIngestStatCompleteCallbackDelegate_Parms), Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics
	{
		struct _Script_EOSCore_eventOnStatsQueryStatsCompleteCallback_Parms
		{
			FEOSStatsOnQueryStatsCompleteCallbackInfo data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnStatsQueryStatsCompleteCallback_Parms, data), Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EOSCore, nullptr, "OnStatsQueryStatsCompleteCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_EOSCore_eventOnStatsQueryStatsCompleteCallback_Parms), Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics
	{
		struct _Script_EOSCore_eventOnStatsIngestStatCompleteCallback_Parms
		{
			FEOSStatsIngestStatCompleteCallbackInfo data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnStatsIngestStatCompleteCallback_Parms, data), Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EOSCore, nullptr, "OnStatsIngestStatCompleteCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_EOSCore_eventOnStatsIngestStatCompleteCallback_Parms), Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FEOSStatsOnQueryStatsCompleteCallbackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSStatsOnQueryStatsCompleteCallbackInfo"), sizeof(FEOSStatsOnQueryStatsCompleteCallbackInfo), Get_Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSStatsOnQueryStatsCompleteCallbackInfo>()
{
	return FEOSStatsOnQueryStatsCompleteCallbackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo(FEOSStatsOnQueryStatsCompleteCallbackInfo::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSStatsOnQueryStatsCompleteCallbackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsOnQueryStatsCompleteCallbackInfo
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsOnQueryStatsCompleteCallbackInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSStatsOnQueryStatsCompleteCallbackInfo")),new UScriptStruct::TCppStructOps<FEOSStatsOnQueryStatsCompleteCallbackInfo>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsOnQueryStatsCompleteCallbackInfo;
	struct Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data containing the result information for querying a player's stats request.\n */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Data containing the result information for querying a player's stats request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsOnQueryStatsCompleteCallbackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_TargetUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Product User ID whose stats which were retrieved */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Product User ID whose stats which were retrieved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsOnQueryStatsCompleteCallbackInfo, TargetUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_TargetUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_LocalUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Product User ID of the user who initiated this request */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Product User ID of the user who initiated this request" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsOnQueryStatsCompleteCallbackInfo, LocalUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_LocalUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_ResultCode_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsOnQueryStatsCompleteCallbackInfo, ResultCode), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_ResultCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_ResultCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_TargetUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_LocalUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_ResultCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::NewProp_ResultCode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSStatsOnQueryStatsCompleteCallbackInfo",
		sizeof(FEOSStatsOnQueryStatsCompleteCallbackInfo),
		alignof(FEOSStatsOnQueryStatsCompleteCallbackInfo),
		Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsOnQueryStatsCompleteCallbackInfo"), sizeof(FEOSStatsOnQueryStatsCompleteCallbackInfo), Get_Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo_Hash() { return 3141858420U; }
class UScriptStruct* FEOSStatsCopyStatByNameOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSStatsCopyStatByNameOptions"), sizeof(FEOSStatsCopyStatByNameOptions), Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSStatsCopyStatByNameOptions>()
{
	return FEOSStatsCopyStatByNameOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsCopyStatByNameOptions(FEOSStatsCopyStatByNameOptions::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSStatsCopyStatByNameOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsCopyStatByNameOptions
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsCopyStatByNameOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSStatsCopyStatByNameOptions")),new UScriptStruct::TCppStructOps<FEOSStatsCopyStatByNameOptions>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsCopyStatByNameOptions;
	struct Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Input parameters for the EOS_Stats_CopyStatByName Function.\n */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Input parameters for the EOS_Stats_CopyStatByName Function." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsCopyStatByNameOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** Name of the stat to retrieve from the cache */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Name of the stat to retrieve from the cache" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsCopyStatByNameOptions, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_TargetUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Account ID for the user who is copying the stat. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Account ID for the user who is copying the stat." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsCopyStatByNameOptions, TargetUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_TargetUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::NewProp_TargetUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSStatsCopyStatByNameOptions",
		sizeof(FEOSStatsCopyStatByNameOptions),
		alignof(FEOSStatsCopyStatByNameOptions),
		Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsCopyStatByNameOptions"), sizeof(FEOSStatsCopyStatByNameOptions), Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByNameOptions_Hash() { return 4050475759U; }
class UScriptStruct* FEOSStatsCopyStatByIndexOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSStatsCopyStatByIndexOptions"), sizeof(FEOSStatsCopyStatByIndexOptions), Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSStatsCopyStatByIndexOptions>()
{
	return FEOSStatsCopyStatByIndexOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsCopyStatByIndexOptions(FEOSStatsCopyStatByIndexOptions::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSStatsCopyStatByIndexOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsCopyStatByIndexOptions
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsCopyStatByIndexOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSStatsCopyStatByIndexOptions")),new UScriptStruct::TCppStructOps<FEOSStatsCopyStatByIndexOptions>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsCopyStatByIndexOptions;
	struct Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Input parameters for the EOS_Stats_CopyStatByIndex Function.\n */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Input parameters for the EOS_Stats_CopyStatByIndex Function." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsCopyStatByIndexOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_StatIndex_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** Index of the stat to retrieve from the cache */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Index of the stat to retrieve from the cache" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_StatIndex = { "StatIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsCopyStatByIndexOptions, StatIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_StatIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_StatIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_TargetUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Account ID for the user who is copying the stat. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Account ID for the user who is copying the stat." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsCopyStatByIndexOptions, TargetUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_TargetUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_StatIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::NewProp_TargetUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSStatsCopyStatByIndexOptions",
		sizeof(FEOSStatsCopyStatByIndexOptions),
		alignof(FEOSStatsCopyStatByIndexOptions),
		Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsCopyStatByIndexOptions"), sizeof(FEOSStatsCopyStatByIndexOptions), Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsCopyStatByIndexOptions_Hash() { return 3797936698U; }
class UScriptStruct* FEOSStatsGetStatCountOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSStatsGetStatCountOptions"), sizeof(FEOSStatsGetStatCountOptions), Get_Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSStatsGetStatCountOptions>()
{
	return FEOSStatsGetStatCountOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsGetStatCountOptions(FEOSStatsGetStatCountOptions::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSStatsGetStatCountOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsGetStatCountOptions
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsGetStatCountOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSStatsGetStatCountOptions")),new UScriptStruct::TCppStructOps<FEOSStatsGetStatCountOptions>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsGetStatCountOptions;
	struct Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Input parameters for the EOS_Stats_GetStatsCount Function.\n */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Input parameters for the EOS_Stats_GetStatsCount Function." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsGetStatCountOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::NewProp_TargetUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Product User ID for the user whose stats are being counted */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Product User ID for the user whose stats are being counted" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsGetStatCountOptions, TargetUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::NewProp_TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::NewProp_TargetUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::NewProp_TargetUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSStatsGetStatCountOptions",
		sizeof(FEOSStatsGetStatCountOptions),
		alignof(FEOSStatsGetStatCountOptions),
		Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsGetStatCountOptions"), sizeof(FEOSStatsGetStatCountOptions), Get_Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsGetStatCountOptions_Hash() { return 280265770U; }
class UScriptStruct* FEOSStatsStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsStat, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSStatsStat"), sizeof(FEOSStatsStat), Get_Z_Construct_UScriptStruct_FEOSStatsStat_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSStatsStat>()
{
	return FEOSStatsStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsStat(FEOSStatsStat::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSStatsStat"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsStat
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsStat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSStatsStat")),new UScriptStruct::TCppStructOps<FEOSStatsStat>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsStat;
	struct Z_Construct_UScriptStruct_FEOSStatsStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains information about a single player stat.\n */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Contains information about a single player stat." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** Current value for the stat. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Current value for the stat." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsStat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for end time. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for end time." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsStat, EndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for start time. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for start time." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsStat, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** Name of the stat. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Name of the stat." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsStat, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsStat_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSStatsStat",
		sizeof(FEOSStatsStat),
		alignof(FEOSStatsStat),
		Z_Construct_UScriptStruct_FEOSStatsStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsStat"), sizeof(FEOSStatsStat), Get_Z_Construct_UScriptStruct_FEOSStatsStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsStat_Hash() { return 4201171251U; }
class UScriptStruct* FEOSStatsQueryStatsOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSStatsQueryStatsOptions"), sizeof(FEOSStatsQueryStatsOptions), Get_Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSStatsQueryStatsOptions>()
{
	return FEOSStatsQueryStatsOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsQueryStatsOptions(FEOSStatsQueryStatsOptions::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSStatsQueryStatsOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsQueryStatsOptions
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsQueryStatsOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSStatsQueryStatsOptions")),new UScriptStruct::TCppStructOps<FEOSStatsQueryStatsOptions>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsQueryStatsOptions;
	struct Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Input parameters for the EOS_Stats_QueryStats Function.\n */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Input parameters for the EOS_Stats_QueryStats Function." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsQueryStatsOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_TargetUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Product User ID for the user whose stats are being retrieved */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Product User ID for the user whose stats are being retrieved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsQueryStatsOptions, TargetUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_TargetUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StatNames_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** An array of stat names to query for (Optional). */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "An array of stat names to query for (Optional)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StatNames = { "StatNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsQueryStatsOptions, StatNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StatNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StatNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StatNames_Inner = { "StatNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for end time (Optional). */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for end time (Optional)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsQueryStatsOptions, EndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for start time (Optional). */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for start time (Optional)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsQueryStatsOptions, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_LocalUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Product User ID of the local user requesting the stats. Set to null for dedicated server. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Product User ID of the local user requesting the stats. Set to null for dedicated server." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsQueryStatsOptions, LocalUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_LocalUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_TargetUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StatNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StatNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::NewProp_LocalUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSStatsQueryStatsOptions",
		sizeof(FEOSStatsQueryStatsOptions),
		alignof(FEOSStatsQueryStatsOptions),
		Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsQueryStatsOptions"), sizeof(FEOSStatsQueryStatsOptions), Get_Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions_Hash() { return 654953163U; }
class UScriptStruct* FEOSStatsIngestStatCompleteCallbackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSStatsIngestStatCompleteCallbackInfo"), sizeof(FEOSStatsIngestStatCompleteCallbackInfo), Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSStatsIngestStatCompleteCallbackInfo>()
{
	return FEOSStatsIngestStatCompleteCallbackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo(FEOSStatsIngestStatCompleteCallbackInfo::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSStatsIngestStatCompleteCallbackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsIngestStatCompleteCallbackInfo
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsIngestStatCompleteCallbackInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSStatsIngestStatCompleteCallbackInfo")),new UScriptStruct::TCppStructOps<FEOSStatsIngestStatCompleteCallbackInfo>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsIngestStatCompleteCallbackInfo;
	struct Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data containing the result information for an ingest stat request.\n */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Data containing the result information for an ingest stat request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsIngestStatCompleteCallbackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_TargetUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Product User ID for the user whose stat is being ingested */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Product User ID for the user whose stat is being ingested" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsIngestStatCompleteCallbackInfo, TargetUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_TargetUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_LocalUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Product User ID for the user requesting the ingest */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Product User ID for the user requesting the ingest" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsIngestStatCompleteCallbackInfo, LocalUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_LocalUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_ResultCode_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsIngestStatCompleteCallbackInfo, ResultCode), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_ResultCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_ResultCode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_TargetUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_LocalUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_ResultCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::NewProp_ResultCode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSStatsIngestStatCompleteCallbackInfo",
		sizeof(FEOSStatsIngestStatCompleteCallbackInfo),
		alignof(FEOSStatsIngestStatCompleteCallbackInfo),
		Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsIngestStatCompleteCallbackInfo"), sizeof(FEOSStatsIngestStatCompleteCallbackInfo), Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo_Hash() { return 3324717539U; }
class UScriptStruct* FEOSStatsIngestStatOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSStatsIngestStatOptions"), sizeof(FEOSStatsIngestStatOptions), Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSStatsIngestStatOptions>()
{
	return FEOSStatsIngestStatOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsIngestStatOptions(FEOSStatsIngestStatOptions::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSStatsIngestStatOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsIngestStatOptions
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsIngestStatOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSStatsIngestStatOptions")),new UScriptStruct::TCppStructOps<FEOSStatsIngestStatOptions>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsIngestStatOptions;
	struct Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Stats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsIngestStatOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_TargetUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Product User ID for the user whose stat is being ingested. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Product User ID for the user whose stat is being ingested." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_TargetUserId = { "TargetUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsIngestStatOptions, TargetUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_TargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_TargetUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** Stats to ingest. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Stats to ingest." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsIngestStatOptions, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_Stats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSStatsIngestData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_LocalUserId_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The Product User ID of the local user requesting the ingest.  Set to null for dedicated server. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The Product User ID of the local user requesting the ingest.  Set to null for dedicated server." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_LocalUserId = { "LocalUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsIngestStatOptions, LocalUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_LocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_LocalUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_TargetUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_Stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_Stats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::NewProp_LocalUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSStatsIngestStatOptions",
		sizeof(FEOSStatsIngestStatOptions),
		alignof(FEOSStatsIngestStatOptions),
		Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsIngestStatOptions"), sizeof(FEOSStatsIngestStatOptions), Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions_Hash() { return 3106943877U; }
class UScriptStruct* FEOSStatsIngestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsIngestData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsIngestData, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSStatsIngestData"), sizeof(FEOSStatsIngestData), Get_Z_Construct_UScriptStruct_FEOSStatsIngestData_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSStatsIngestData>()
{
	return FEOSStatsIngestData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsIngestData(FEOSStatsIngestData::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSStatsIngestData"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsIngestData
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsIngestData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSStatsIngestData")),new UScriptStruct::TCppStructOps<FEOSStatsIngestData>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSStatsIngestData;
	struct Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IngestAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IngestAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains information about a single stat to ingest.\n */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "Contains information about a single stat to ingest." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsIngestData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_IngestAmount_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The amount to ingest the stat. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The amount to ingest the stat." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_IngestAmount = { "IngestAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsIngestData, IngestAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_IngestAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_IngestAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_StatName_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/** The name of the stat to ingest. */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsTypes.h" },
		{ "ToolTip", "The name of the stat to ingest." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsIngestData, StatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_IngestAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::NewProp_StatName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSStatsIngestData",
		sizeof(FEOSStatsIngestData),
		alignof(FEOSStatsIngestData),
		Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsIngestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsIngestData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsIngestData"), sizeof(FEOSStatsIngestData), Get_Z_Construct_UScriptStruct_FEOSStatsIngestData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsIngestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsIngestData_Hash() { return 3557150159U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
