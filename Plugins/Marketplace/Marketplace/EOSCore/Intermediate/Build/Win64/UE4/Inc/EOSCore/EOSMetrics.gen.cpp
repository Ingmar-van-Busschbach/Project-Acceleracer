// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Metrics/EOSMetrics.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSMetrics() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreMetrics_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreMetrics();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions();
// End Cross Module References
	DEFINE_FUNCTION(UCoreMetrics::execEOSMetricsEndPlayerSession)
	{
		P_GET_STRUCT(FEOSMetricsEndPlayerSessionOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=P_THIS->EOSMetricsEndPlayerSession(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMetrics::execEOSMetricsBeginPlayerSession)
	{
		P_GET_STRUCT(FEOSMetricsBeginPlayerSessionOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=P_THIS->EOSMetricsBeginPlayerSession(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreMetrics::execGetMetrics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreMetrics**)Z_Param__Result=UCoreMetrics::GetMetrics();
		P_NATIVE_END;
	}
	void UCoreMetrics::StaticRegisterNativesUCoreMetrics()
	{
		UClass* Class = UCoreMetrics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSMetricsBeginPlayerSession", &UCoreMetrics::execEOSMetricsBeginPlayerSession },
			{ "EOSMetricsEndPlayerSession", &UCoreMetrics::execEOSMetricsEndPlayerSession },
			{ "GetMetrics", &UCoreMetrics::execGetMetrics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics
	{
		struct CoreMetrics_eventEOSMetricsBeginPlayerSession_Parms
		{
			FEOSMetricsBeginPlayerSessionOptions options;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMetrics_eventEOSMetricsBeginPlayerSession_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMetrics_eventEOSMetricsBeginPlayerSession_Parms, options), Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Metrics" },
		{ "Comment", "/**\n    * Logs the start of a new game session for a local player.\n    *\n    * The game client should call this function whenever it joins into a new multiplayer, peer-to-peer or single player game session.\n    * Each call to BeginPlayerSession must be matched with a corresponding call to EndPlayerSession.\n    *\n    * @param Options Structure containing the local player's game account and the game session information.\n    *\n    * @return Returns EOS_Success on success, or an error code if the input parameters are invalid or an active session for the player already exists.\n    */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetrics.h" },
		{ "ToolTip", "Logs the start of a new game session for a local player.\n\nThe game client should call this function whenever it joins into a new multiplayer, peer-to-peer or single player game session.\nEach call to BeginPlayerSession must be matched with a corresponding call to EndPlayerSession.\n\n@param Options Structure containing the local player's game account and the game session information.\n\n@return Returns EOS_Success on success, or an error code if the input parameters are invalid or an active session for the player already exists." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMetrics, nullptr, "EOSMetricsBeginPlayerSession", nullptr, nullptr, sizeof(CoreMetrics_eventEOSMetricsBeginPlayerSession_Parms), Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics
	{
		struct CoreMetrics_eventEOSMetricsEndPlayerSession_Parms
		{
			FEOSMetricsEndPlayerSessionOptions options;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMetrics_eventEOSMetricsEndPlayerSession_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMetrics_eventEOSMetricsEndPlayerSession_Parms, options), Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Metrics" },
		{ "Comment", "/**\n     * Logs the end of a game session for a local player.\n     *\n     * Call once when the game client leaves the active game session.\n     * Each call to BeginPlayerSession must be matched with a corresponding call to EndPlayerSession.\n     *\n     * @param Options Structure containing the account id of the player whose session to end.\n     *\n     * @return Returns EOS_Success on success, or an error code if the input parameters are invalid or there was no active session for the player.\n     */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetrics.h" },
		{ "ToolTip", "Logs the end of a game session for a local player.\n\nCall once when the game client leaves the active game session.\nEach call to BeginPlayerSession must be matched with a corresponding call to EndPlayerSession.\n\n@param Options Structure containing the account id of the player whose session to end.\n\n@return Returns EOS_Success on success, or an error code if the input parameters are invalid or there was no active session for the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMetrics, nullptr, "EOSMetricsEndPlayerSession", nullptr, nullptr, sizeof(CoreMetrics_eventEOSMetricsEndPlayerSession_Parms), Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics
	{
		struct CoreMetrics_eventGetMetrics_Parms
		{
			UCoreMetrics* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreMetrics_eventGetMetrics_Parms, ReturnValue), Z_Construct_UClass_UCoreMetrics_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetrics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreMetrics, nullptr, "GetMetrics", nullptr, nullptr, sizeof(CoreMetrics_eventGetMetrics_Parms), Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreMetrics_GetMetrics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreMetrics_GetMetrics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreMetrics_NoRegister()
	{
		return UCoreMetrics::StaticClass();
	}
	struct Z_Construct_UClass_UCoreMetrics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreMetrics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreMetrics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreMetrics_EOSMetricsBeginPlayerSession, "EOSMetricsBeginPlayerSession" }, // 1275364347
		{ &Z_Construct_UFunction_UCoreMetrics_EOSMetricsEndPlayerSession, "EOSMetricsEndPlayerSession" }, // 1665726399
		{ &Z_Construct_UFunction_UCoreMetrics_GetMetrics, "GetMetrics" }, // 1531527192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMetrics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Metrics/EOSMetrics.h" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetrics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreMetrics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreMetrics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreMetrics_Statics::ClassParams = {
		&UCoreMetrics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreMetrics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMetrics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreMetrics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreMetrics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreMetrics, 1300363384);
	template<> EOSCORE_API UClass* StaticClass<UCoreMetrics>()
	{
		return UCoreMetrics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreMetrics(Z_Construct_UClass_UCoreMetrics, &UCoreMetrics::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreMetrics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreMetrics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
