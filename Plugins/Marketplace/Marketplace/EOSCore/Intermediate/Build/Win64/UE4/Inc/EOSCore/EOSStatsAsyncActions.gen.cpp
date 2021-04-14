// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Stats/EOSStatsAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSStatsAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreStatsIngestStat_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreStatsIngestStat();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreStatsQueryStats_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreStatsQueryStats();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreStatsIngestStat::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSStatsIngestStatCompleteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreStatsIngestStat::execEOSStatsIngestStatAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSStatsIngestStatOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreStatsIngestStat**)Z_Param__Result=UEOSCoreStatsIngestStat::EOSStatsIngestStatAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreStatsIngestStat::StaticRegisterNativesUEOSCoreStatsIngestStat()
	{
		UClass* Class = UEOSCoreStatsIngestStat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSStatsIngestStatAsync", &UEOSCoreStatsIngestStat::execEOSStatsIngestStatAsync },
			{ "HandleCallback", &UEOSCoreStatsIngestStat::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics
	{
		struct EOSCoreStatsIngestStat_eventEOSStatsIngestStatAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSStatsIngestStatOptions options;
			UEOSCoreStatsIngestStat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreStatsIngestStat_eventEOSStatsIngestStatAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreStatsIngestStat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreStatsIngestStat_eventEOSStatsIngestStatAsync_Parms, options), Z_Construct_UScriptStruct_FEOSStatsIngestStatOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreStatsIngestStat_eventEOSStatsIngestStatAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Stats|Async" },
		{ "Comment", "/**\n     * Ingest a stat by the amount specified in Options.\n     * When the operation is complete and the delegate is triggered the stat will be uploaded to the backend to be processed.\n     * The stat may not be updated immediately and an achievement using the stat may take a while to be unlocked once the stat has been uploaded.\n     *\n     * @param Options Structure containing information about the stat we're ingesting.\n     * @param ClientData Arbitrary data that is passed back to you in the callback.\n     * @param callback This function is called when the ingest stat operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsAsyncActions.h" },
		{ "ToolTip", "Ingest a stat by the amount specified in Options.\nWhen the operation is complete and the delegate is triggered the stat will be uploaded to the backend to be processed.\nThe stat may not be updated immediately and an achievement using the stat may take a while to be unlocked once the stat has been uploaded.\n\n@param Options Structure containing information about the stat we're ingesting.\n@param ClientData Arbitrary data that is passed back to you in the callback.\n@param callback This function is called when the ingest stat operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreStatsIngestStat, nullptr, "EOSStatsIngestStatAsync", nullptr, nullptr, sizeof(EOSCoreStatsIngestStat_eventEOSStatsIngestStatAsync_Parms), Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics
	{
		struct EOSCoreStatsIngestStat_eventHandleCallback_Parms
		{
			FEOSStatsIngestStatCompleteCallbackInfo data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
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
	void Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreStatsIngestStat_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreStatsIngestStat_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreStatsIngestStat_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSStatsIngestStatCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats/EOSStatsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreStatsIngestStat, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreStatsIngestStat_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreStatsIngestStat_NoRegister()
	{
		return UEOSCoreStatsIngestStat::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync, "EOSStatsIngestStatAsync" }, // 3067012848
		{ &Z_Construct_UFunction_UEOSCoreStatsIngestStat_HandleCallback, "HandleCallback" }, // 3163617475
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreStatsIngestStat\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Stats/EOSStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreStatsIngestStat\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats/EOSStatsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreStatsIngestStat, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnStatsIngestStatCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreStatsIngestStat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::ClassParams = {
		&UEOSCoreStatsIngestStat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreStatsIngestStat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreStatsIngestStat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreStatsIngestStat, 1605630121);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreStatsIngestStat>()
	{
		return UEOSCoreStatsIngestStat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreStatsIngestStat(Z_Construct_UClass_UEOSCoreStatsIngestStat, &UEOSCoreStatsIngestStat::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreStatsIngestStat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreStatsIngestStat);
	DEFINE_FUNCTION(UEOSCoreStatsQueryStats::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSStatsOnQueryStatsCompleteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreStatsQueryStats::execEOSStatsQueryStatsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSStatsQueryStatsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreStatsQueryStats**)Z_Param__Result=UEOSCoreStatsQueryStats::EOSStatsQueryStatsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreStatsQueryStats::StaticRegisterNativesUEOSCoreStatsQueryStats()
	{
		UClass* Class = UEOSCoreStatsQueryStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSStatsQueryStatsAsync", &UEOSCoreStatsQueryStats::execEOSStatsQueryStatsAsync },
			{ "HandleCallback", &UEOSCoreStatsQueryStats::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics
	{
		struct EOSCoreStatsQueryStats_eventEOSStatsQueryStatsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSStatsQueryStatsOptions options;
			UEOSCoreStatsQueryStats* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreStatsQueryStats_eventEOSStatsQueryStatsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreStatsQueryStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreStatsQueryStats_eventEOSStatsQueryStatsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSStatsQueryStatsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreStatsQueryStats_eventEOSStatsQueryStatsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Stats|Async" },
		{ "Comment", "/**\n     * Query for a list of stats for a specific player.\n     *\n     * @param Options Structure containing information about the player whose stats we're retrieving.\n     * @param ClientData Arbitrary data that is passed back to you in the callback\n     * @param callback This function is called when the query player stats operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsAsyncActions.h" },
		{ "ToolTip", "Query for a list of stats for a specific player.\n\n@param Options Structure containing information about the player whose stats we're retrieving.\n@param ClientData Arbitrary data that is passed back to you in the callback\n@param callback This function is called when the query player stats operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreStatsQueryStats, nullptr, "EOSStatsQueryStatsAsync", nullptr, nullptr, sizeof(EOSCoreStatsQueryStats_eventEOSStatsQueryStatsAsync_Parms), Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics
	{
		struct EOSCoreStatsQueryStats_eventHandleCallback_Parms
		{
			FEOSStatsOnQueryStatsCompleteCallbackInfo data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
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
	void Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreStatsQueryStats_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreStatsQueryStats_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreStatsQueryStats_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSStatsOnQueryStatsCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Stats/EOSStatsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreStatsQueryStats, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreStatsQueryStats_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreStatsQueryStats_NoRegister()
	{
		return UEOSCoreStatsQueryStats::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync, "EOSStatsQueryStatsAsync" }, // 938587216
		{ &Z_Construct_UFunction_UEOSCoreStatsQueryStats_HandleCallback, "HandleCallback" }, // 1538863523
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreStatsQueryStats\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Stats/EOSStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Stats/EOSStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreStatsQueryStats\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stats/EOSStatsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreStatsQueryStats, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnStatsQueryStatsCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreStatsQueryStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::ClassParams = {
		&UEOSCoreStatsQueryStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreStatsQueryStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreStatsQueryStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreStatsQueryStats, 221533221);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreStatsQueryStats>()
	{
		return UEOSCoreStatsQueryStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreStatsQueryStats(Z_Construct_UClass_UEOSCoreStatsQueryStats, &UEOSCoreStatsQueryStats::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreStatsQueryStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreStatsQueryStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
