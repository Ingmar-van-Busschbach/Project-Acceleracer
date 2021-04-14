// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Achievements/EOSAchievementsAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAchievementsAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsQueryDefinitionsOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryDefinitionsCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsQueryPlayerAchievementsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryPlayerAchievementsCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsUnlockAchievementsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockAchievementsCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreAchievementsQueryDefinitions::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreAchievementsQueryDefinitions::execEOSAchievementsQueryDefinitionsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSAchievementsQueryDefinitionsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreAchievementsQueryDefinitions**)Z_Param__Result=UEOSCoreAchievementsQueryDefinitions::EOSAchievementsQueryDefinitionsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreAchievementsQueryDefinitions::StaticRegisterNativesUEOSCoreAchievementsQueryDefinitions()
	{
		UClass* Class = UEOSCoreAchievementsQueryDefinitions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAchievementsQueryDefinitionsAsync", &UEOSCoreAchievementsQueryDefinitions::execEOSAchievementsQueryDefinitionsAsync },
			{ "HandleCallback", &UEOSCoreAchievementsQueryDefinitions::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics
	{
		struct EOSCoreAchievementsQueryDefinitions_eventEOSAchievementsQueryDefinitionsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSAchievementsQueryDefinitionsOptions options;
			UEOSCoreAchievementsQueryDefinitions* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsQueryDefinitions_eventEOSAchievementsQueryDefinitionsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsQueryDefinitions_eventEOSAchievementsQueryDefinitionsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsQueryDefinitionsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsQueryDefinitions_eventEOSAchievementsQueryDefinitionsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "clientData" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Achievements|Async" },
		{ "Comment", "/**\n     * Query for a list of definitions for all existing achievements, including localized text, icon IDs and whether an achievement is hidden.\n     *\n     * @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n     *\n     * @param options       Structure containing information about the application whose achievement definitions we're retrieving.\n     * @param clientData    Arbitrary data that is passed back to you in the CompletionDelegate\n     * @param callback      This function is called when the query definitions operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
		{ "ToolTip", "Query for a list of definitions for all existing achievements, including localized text, icon IDs and whether an achievement is hidden.\n\n@note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n\n@param options       Structure containing information about the application whose achievement definitions we're retrieving.\n@param clientData    Arbitrary data that is passed back to you in the CompletionDelegate\n@param callback      This function is called when the query definitions operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions, nullptr, "EOSAchievementsQueryDefinitionsAsync", nullptr, nullptr, sizeof(EOSCoreAchievementsQueryDefinitions_eventEOSAchievementsQueryDefinitionsAsync_Parms), Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics
	{
		struct EOSCoreAchievementsQueryDefinitions_eventHandleCallback_Parms
		{
			FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreAchievementsQueryDefinitions_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreAchievementsQueryDefinitions_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsQueryDefinitions_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreAchievementsQueryDefinitions_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_NoRegister()
	{
		return UEOSCoreAchievementsQueryDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync, "EOSAchievementsQueryDefinitionsAsync" }, // 84513007
		{ &Z_Construct_UFunction_UEOSCoreAchievementsQueryDefinitions_HandleCallback, "HandleCallback" }, // 3165245585
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreAchievementsQueryDefinitions\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Achievements/EOSAchievementsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreAchievementsQueryDefinitions\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreAchievementsQueryDefinitions, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryDefinitionsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreAchievementsQueryDefinitions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::ClassParams = {
		&UEOSCoreAchievementsQueryDefinitions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreAchievementsQueryDefinitions, 1460229683);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreAchievementsQueryDefinitions>()
	{
		return UEOSCoreAchievementsQueryDefinitions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreAchievementsQueryDefinitions(Z_Construct_UClass_UEOSCoreAchievementsQueryDefinitions, &UEOSCoreAchievementsQueryDefinitions::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreAchievementsQueryDefinitions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreAchievementsQueryDefinitions);
	DEFINE_FUNCTION(UEOSCoreAchievementsQueryPlayerAchievements::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreAchievementsQueryPlayerAchievements::execEOSAchievementsQueryPlayerAchievementsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSAchievementsQueryPlayerAchievementsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreAchievementsQueryPlayerAchievements**)Z_Param__Result=UEOSCoreAchievementsQueryPlayerAchievements::EOSAchievementsQueryPlayerAchievementsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreAchievementsQueryPlayerAchievements::StaticRegisterNativesUEOSCoreAchievementsQueryPlayerAchievements()
	{
		UClass* Class = UEOSCoreAchievementsQueryPlayerAchievements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAchievementsQueryPlayerAchievementsAsync", &UEOSCoreAchievementsQueryPlayerAchievements::execEOSAchievementsQueryPlayerAchievementsAsync },
			{ "HandleCallback", &UEOSCoreAchievementsQueryPlayerAchievements::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics
	{
		struct EOSCoreAchievementsQueryPlayerAchievements_eventEOSAchievementsQueryPlayerAchievementsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSAchievementsQueryPlayerAchievementsOptions options;
			UEOSCoreAchievementsQueryPlayerAchievements* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsQueryPlayerAchievements_eventEOSAchievementsQueryPlayerAchievementsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsQueryPlayerAchievements_eventEOSAchievementsQueryPlayerAchievementsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsQueryPlayerAchievementsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsQueryPlayerAchievements_eventEOSAchievementsQueryPlayerAchievementsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "clientData" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Achievements|Async" },
		{ "Comment", "/**\n     * Query for a list of achievements for a specific player, including progress towards completion for each achievement.\n     *\n     * @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n     *\n     * @param Options Structure containing information about the player whose achievements we're retrieving.\n     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n     * @param CompletionDelegate This function is called when the query player achievements operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
		{ "ToolTip", "Query for a list of achievements for a specific player, including progress towards completion for each achievement.\n\n@note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n\n@param Options Structure containing information about the player whose achievements we're retrieving.\n@param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate This function is called when the query player achievements operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements, nullptr, "EOSAchievementsQueryPlayerAchievementsAsync", nullptr, nullptr, sizeof(EOSCoreAchievementsQueryPlayerAchievements_eventEOSAchievementsQueryPlayerAchievementsAsync_Parms), Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics
	{
		struct EOSCoreAchievementsQueryPlayerAchievements_eventHandleCallback_Parms
		{
			FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreAchievementsQueryPlayerAchievements_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreAchievementsQueryPlayerAchievements_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsQueryPlayerAchievements_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreAchievementsQueryPlayerAchievements_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_NoRegister()
	{
		return UEOSCoreAchievementsQueryPlayerAchievements::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync, "EOSAchievementsQueryPlayerAchievementsAsync" }, // 3420407440
		{ &Z_Construct_UFunction_UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback, "HandleCallback" }, // 2621347805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreAchievementsQueryPlayerAchievements\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Achievements/EOSAchievementsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreAchievementsQueryPlayerAchievements\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreAchievementsQueryPlayerAchievements, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryPlayerAchievementsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreAchievementsQueryPlayerAchievements>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::ClassParams = {
		&UEOSCoreAchievementsQueryPlayerAchievements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreAchievementsQueryPlayerAchievements, 1467543797);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreAchievementsQueryPlayerAchievements>()
	{
		return UEOSCoreAchievementsQueryPlayerAchievements::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreAchievementsQueryPlayerAchievements(Z_Construct_UClass_UEOSCoreAchievementsQueryPlayerAchievements, &UEOSCoreAchievementsQueryPlayerAchievements::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreAchievementsQueryPlayerAchievements"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreAchievementsQueryPlayerAchievements);
	DEFINE_FUNCTION(UEOSCoreAchievementsUnlockAchievements::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreAchievementsUnlockAchievements::execEOSAchievementsUnlockAchievements)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSAchievementsUnlockAchievementsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreAchievementsUnlockAchievements**)Z_Param__Result=UEOSCoreAchievementsUnlockAchievements::EOSAchievementsUnlockAchievements(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreAchievementsUnlockAchievements::StaticRegisterNativesUEOSCoreAchievementsUnlockAchievements()
	{
		UClass* Class = UEOSCoreAchievementsUnlockAchievements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAchievementsUnlockAchievements", &UEOSCoreAchievementsUnlockAchievements::execEOSAchievementsUnlockAchievements },
			{ "HandleCallback", &UEOSCoreAchievementsUnlockAchievements::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics
	{
		struct EOSCoreAchievementsUnlockAchievements_eventEOSAchievementsUnlockAchievements_Parms
		{
			UObject* WorldContextObject;
			FEOSAchievementsUnlockAchievementsOptions options;
			UEOSCoreAchievementsUnlockAchievements* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsUnlockAchievements_eventEOSAchievementsUnlockAchievements_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsUnlockAchievements_eventEOSAchievementsUnlockAchievements_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsUnlockAchievementsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsUnlockAchievements_eventEOSAchievementsUnlockAchievements_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "clientData" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Achievements|Async" },
		{ "Comment", "/**\n     * Unlocks a number of achievements for a specific player.\n     *\n     * @param Options Structure containing information about the achievements and the player whose achievements we're unlocking.\n     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n     * @param CompletionDelegate This function is called when the unlock achievements operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
		{ "ToolTip", "Unlocks a number of achievements for a specific player.\n\n@param Options Structure containing information about the achievements and the player whose achievements we're unlocking.\n@param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate This function is called when the unlock achievements operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements, nullptr, "EOSAchievementsUnlockAchievements", nullptr, nullptr, sizeof(EOSCoreAchievementsUnlockAchievements_eventEOSAchievementsUnlockAchievements_Parms), Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics
	{
		struct EOSCoreAchievementsUnlockAchievements_eventHandleCallback_Parms
		{
			FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreAchievementsUnlockAchievements_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreAchievementsUnlockAchievements_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAchievementsUnlockAchievements_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreAchievementsUnlockAchievements_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_NoRegister()
	{
		return UEOSCoreAchievementsUnlockAchievements::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements, "EOSAchievementsUnlockAchievements" }, // 340903902
		{ &Z_Construct_UFunction_UEOSCoreAchievementsUnlockAchievements_HandleCallback, "HandleCallback" }, // 3165893910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreAchievementsUnlockAchievements\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Achievements/EOSAchievementsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreAchievementsUnlockAchievements\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievementsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreAchievementsUnlockAchievements, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockAchievementsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreAchievementsUnlockAchievements>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::ClassParams = {
		&UEOSCoreAchievementsUnlockAchievements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreAchievementsUnlockAchievements, 720881123);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreAchievementsUnlockAchievements>()
	{
		return UEOSCoreAchievementsUnlockAchievements::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreAchievementsUnlockAchievements(Z_Construct_UClass_UEOSCoreAchievementsUnlockAchievements, &UEOSCoreAchievementsUnlockAchievements::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreAchievementsUnlockAchievements"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreAchievementsUnlockAchievements);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
