// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Leaderboards/EOSLeaderboardsAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLeaderboardsAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardDefinitionsOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardRanksOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardRanksCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardUserScoresOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardUserScoresCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreLeaderboardsQueryLeaderboardDefinitions::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLeaderboardsQueryLeaderboardDefinitions::execEOSLeaderboardsQueryLeaderboardDefinitionsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSLeaderboardsQueryLeaderboardDefinitionsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreLeaderboardsQueryLeaderboardDefinitions**)Z_Param__Result=UEOSCoreLeaderboardsQueryLeaderboardDefinitions::EOSLeaderboardsQueryLeaderboardDefinitionsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreLeaderboardsQueryLeaderboardDefinitions::StaticRegisterNativesUEOSCoreLeaderboardsQueryLeaderboardDefinitions()
	{
		UClass* Class = UEOSCoreLeaderboardsQueryLeaderboardDefinitions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSLeaderboardsQueryLeaderboardDefinitionsAsync", &UEOSCoreLeaderboardsQueryLeaderboardDefinitions::execEOSLeaderboardsQueryLeaderboardDefinitionsAsync },
			{ "HandleCallback", &UEOSCoreLeaderboardsQueryLeaderboardDefinitions::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics
	{
		struct EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventEOSLeaderboardsQueryLeaderboardDefinitionsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSLeaderboardsQueryLeaderboardDefinitionsOptions options;
			UEOSCoreLeaderboardsQueryLeaderboardDefinitions* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventEOSLeaderboardsQueryLeaderboardDefinitionsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventEOSLeaderboardsQueryLeaderboardDefinitionsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardDefinitionsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventEOSLeaderboardsQueryLeaderboardDefinitionsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Leaderboards|Async" },
		{ "Comment", "/**\n    * Query for a list of existing leaderboards definitions including their attributes.\n    *\n    * @param Options Structure containing information about the application whose leaderboard definitions we're retrieving.\n    * @param ClientData Arbitrary data that is passed back to you in the callback.\n    * @param callback This function is called when the query operation completes.\n    *\n    * @return EOS_Success if the operation completes successfully\n    *         EOS_InvalidParameters if any of the options are incorrect\n    */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
		{ "ToolTip", "Query for a list of existing leaderboards definitions including their attributes.\n\n@param Options Structure containing information about the application whose leaderboard definitions we're retrieving.\n@param ClientData Arbitrary data that is passed back to you in the callback.\n@param callback This function is called when the query operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions, nullptr, "EOSLeaderboardsQueryLeaderboardDefinitionsAsync", nullptr, nullptr, sizeof(EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventEOSLeaderboardsQueryLeaderboardDefinitionsAsync_Parms), Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics
	{
		struct EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventHandleCallback_Parms
		{
			FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreLeaderboardsQueryLeaderboardDefinitions_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_NoRegister()
	{
		return UEOSCoreLeaderboardsQueryLeaderboardDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync, "EOSLeaderboardsQueryLeaderboardDefinitionsAsync" }, // 57449932
		{ &Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback, "HandleCallback" }, // 2961719165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreLeaderboardsQueryLeaderboardDefinitions\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Leaderboards/EOSLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreLeaderboardsQueryLeaderboardDefinitions\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreLeaderboardsQueryLeaderboardDefinitions, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardDefinitionsCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreLeaderboardsQueryLeaderboardDefinitions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::ClassParams = {
		&UEOSCoreLeaderboardsQueryLeaderboardDefinitions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreLeaderboardsQueryLeaderboardDefinitions, 3100568983);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreLeaderboardsQueryLeaderboardDefinitions>()
	{
		return UEOSCoreLeaderboardsQueryLeaderboardDefinitions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardDefinitions, &UEOSCoreLeaderboardsQueryLeaderboardDefinitions::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreLeaderboardsQueryLeaderboardDefinitions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreLeaderboardsQueryLeaderboardDefinitions);
	DEFINE_FUNCTION(UEOSCoreLeaderboardsQueryLeaderboardRanks::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLeaderboardsQueryLeaderboardRanks::execEOSLeaderboardsQueryLeaderboardRanksAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSLeaderboardsQueryLeaderboardRanksOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreLeaderboardsQueryLeaderboardRanks**)Z_Param__Result=UEOSCoreLeaderboardsQueryLeaderboardRanks::EOSLeaderboardsQueryLeaderboardRanksAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreLeaderboardsQueryLeaderboardRanks::StaticRegisterNativesUEOSCoreLeaderboardsQueryLeaderboardRanks()
	{
		UClass* Class = UEOSCoreLeaderboardsQueryLeaderboardRanks::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSLeaderboardsQueryLeaderboardRanksAsync", &UEOSCoreLeaderboardsQueryLeaderboardRanks::execEOSLeaderboardsQueryLeaderboardRanksAsync },
			{ "HandleCallback", &UEOSCoreLeaderboardsQueryLeaderboardRanks::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics
	{
		struct EOSCoreLeaderboardsQueryLeaderboardRanks_eventEOSLeaderboardsQueryLeaderboardRanksAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSLeaderboardsQueryLeaderboardRanksOptions options;
			UEOSCoreLeaderboardsQueryLeaderboardRanks* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardRanks_eventEOSLeaderboardsQueryLeaderboardRanksAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardRanks_eventEOSLeaderboardsQueryLeaderboardRanksAsync_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardRanksOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardRanks_eventEOSLeaderboardsQueryLeaderboardRanksAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Leaderboards|Async" },
		{ "Comment", "/**\n     * Retrieves top leaderboard records by rank in the leaderboard matching the given leaderboard ID.\n     *\n     * @param Options Structure containing information about the leaderboard records we're retrieving.\n     * @param ClientData Arbitrary data that is passed back to you in the callback.\n     * @param callback This function is called when the query operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
		{ "ToolTip", "Retrieves top leaderboard records by rank in the leaderboard matching the given leaderboard ID.\n\n@param Options Structure containing information about the leaderboard records we're retrieving.\n@param ClientData Arbitrary data that is passed back to you in the callback.\n@param callback This function is called when the query operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks, nullptr, "EOSLeaderboardsQueryLeaderboardRanksAsync", nullptr, nullptr, sizeof(EOSCoreLeaderboardsQueryLeaderboardRanks_eventEOSLeaderboardsQueryLeaderboardRanksAsync_Parms), Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics
	{
		struct EOSCoreLeaderboardsQueryLeaderboardRanks_eventHandleCallback_Parms
		{
			FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreLeaderboardsQueryLeaderboardRanks_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLeaderboardsQueryLeaderboardRanks_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardRanks_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreLeaderboardsQueryLeaderboardRanks_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_NoRegister()
	{
		return UEOSCoreLeaderboardsQueryLeaderboardRanks::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync, "EOSLeaderboardsQueryLeaderboardRanksAsync" }, // 77660942
		{ &Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback, "HandleCallback" }, // 2011382391
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreLeaderboardsQueryLeaderboardRanks\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Leaderboards/EOSLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreLeaderboardsQueryLeaderboardRanks\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreLeaderboardsQueryLeaderboardRanks, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardRanksCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreLeaderboardsQueryLeaderboardRanks>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::ClassParams = {
		&UEOSCoreLeaderboardsQueryLeaderboardRanks::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreLeaderboardsQueryLeaderboardRanks, 2701330542);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreLeaderboardsQueryLeaderboardRanks>()
	{
		return UEOSCoreLeaderboardsQueryLeaderboardRanks::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardRanks, &UEOSCoreLeaderboardsQueryLeaderboardRanks::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreLeaderboardsQueryLeaderboardRanks"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreLeaderboardsQueryLeaderboardRanks);
	DEFINE_FUNCTION(UEOSCoreLeaderboardsQueryLeaderboardUserScores::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLeaderboardsQueryLeaderboardUserScores::execEOSLeaderboardsQueryLeaderboardUserScoresAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSLeaderboardsQueryLeaderboardUserScoresOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreLeaderboardsQueryLeaderboardUserScores**)Z_Param__Result=UEOSCoreLeaderboardsQueryLeaderboardUserScores::EOSLeaderboardsQueryLeaderboardUserScoresAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreLeaderboardsQueryLeaderboardUserScores::StaticRegisterNativesUEOSCoreLeaderboardsQueryLeaderboardUserScores()
	{
		UClass* Class = UEOSCoreLeaderboardsQueryLeaderboardUserScores::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSLeaderboardsQueryLeaderboardUserScoresAsync", &UEOSCoreLeaderboardsQueryLeaderboardUserScores::execEOSLeaderboardsQueryLeaderboardUserScoresAsync },
			{ "HandleCallback", &UEOSCoreLeaderboardsQueryLeaderboardUserScores::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics
	{
		struct EOSCoreLeaderboardsQueryLeaderboardUserScores_eventEOSLeaderboardsQueryLeaderboardUserScoresAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSLeaderboardsQueryLeaderboardUserScoresOptions options;
			UEOSCoreLeaderboardsQueryLeaderboardUserScores* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardUserScores_eventEOSLeaderboardsQueryLeaderboardUserScoresAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardUserScores_eventEOSLeaderboardsQueryLeaderboardUserScoresAsync_Parms, options), Z_Construct_UScriptStruct_FEOSLeaderboardsQueryLeaderboardUserScoresOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardUserScores_eventEOSLeaderboardsQueryLeaderboardUserScoresAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Leaderboards|Async" },
		{ "Comment", "/**\n     * Query for a list of scores for a given list of users.\n     *\n     * @param Options Structure containing information about the users whose scores we're retrieving.\n     * @param ClientData Arbitrary data that is passed back to you in the callback.\n     * @param callback This function is called when the query operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
		{ "ToolTip", "Query for a list of scores for a given list of users.\n\n@param Options Structure containing information about the users whose scores we're retrieving.\n@param ClientData Arbitrary data that is passed back to you in the callback.\n@param callback This function is called when the query operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores, nullptr, "EOSLeaderboardsQueryLeaderboardUserScoresAsync", nullptr, nullptr, sizeof(EOSCoreLeaderboardsQueryLeaderboardUserScores_eventEOSLeaderboardsQueryLeaderboardUserScoresAsync_Parms), Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics
	{
		struct EOSCoreLeaderboardsQueryLeaderboardUserScores_eventHandleCallback_Parms
		{
			FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreLeaderboardsQueryLeaderboardUserScores_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLeaderboardsQueryLeaderboardUserScores_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLeaderboardsQueryLeaderboardUserScores_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreLeaderboardsQueryLeaderboardUserScores_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_NoRegister()
	{
		return UEOSCoreLeaderboardsQueryLeaderboardUserScores::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync, "EOSLeaderboardsQueryLeaderboardUserScoresAsync" }, // 2237670563
		{ &Z_Construct_UFunction_UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback, "HandleCallback" }, // 1813052453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreLeaderboardsQueryLeaderboardUserScores\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Leaderboards/EOSLeaderboardsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreLeaderboardsQueryLeaderboardUserScores\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Leaderboards/EOSLeaderboardsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreLeaderboardsQueryLeaderboardUserScores, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryLeaderboardUserScoresCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreLeaderboardsQueryLeaderboardUserScores>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::ClassParams = {
		&UEOSCoreLeaderboardsQueryLeaderboardUserScores::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreLeaderboardsQueryLeaderboardUserScores, 867206960);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreLeaderboardsQueryLeaderboardUserScores>()
	{
		return UEOSCoreLeaderboardsQueryLeaderboardUserScores::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores(Z_Construct_UClass_UEOSCoreLeaderboardsQueryLeaderboardUserScores, &UEOSCoreLeaderboardsQueryLeaderboardUserScores::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreLeaderboardsQueryLeaderboardUserScores"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreLeaderboardsQueryLeaderboardUserScores);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
