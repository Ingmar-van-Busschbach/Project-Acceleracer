// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Presence/EOSPresenceAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPresenceAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePresenceQueryPresence_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePresenceQueryPresence();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceQueryPresenceOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceQueryPresenceCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceQueryPresenceCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePresenceSetPresence_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePresenceSetPresence();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceSetPresenceOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceSetPresenceCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceSetPresenceCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCorePresenceQueryPresence::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSPresenceQueryPresenceCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCorePresenceQueryPresence::execEOSPresenceQueryPresenceAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSPresenceQueryPresenceOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCorePresenceQueryPresence**)Z_Param__Result=UEOSCorePresenceQueryPresence::EOSPresenceQueryPresenceAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCorePresenceQueryPresence::StaticRegisterNativesUEOSCorePresenceQueryPresence()
	{
		UClass* Class = UEOSCorePresenceQueryPresence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPresenceQueryPresenceAsync", &UEOSCorePresenceQueryPresence::execEOSPresenceQueryPresenceAsync },
			{ "HandleCallback", &UEOSCorePresenceQueryPresence::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics
	{
		struct EOSCorePresenceQueryPresence_eventEOSPresenceQueryPresenceAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSPresenceQueryPresenceOptions options;
			UEOSCorePresenceQueryPresence* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePresenceQueryPresence_eventEOSPresenceQueryPresenceAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCorePresenceQueryPresence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePresenceQueryPresence_eventEOSPresenceQueryPresenceAsync_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceQueryPresenceOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePresenceQueryPresence_eventEOSPresenceQueryPresenceAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Presence|Async" },
		{ "Comment", "/**\n\x09* Query a user's presence. This must complete successfully before CopyPresence will have valid results. If HasPresence returns true for a remote\n\x09* user, this does not need to be called.\n\x09*\n\x09* @param Options Object containing properties related to who is querying presence and for what user\n\x09* @param ClientData Optional pointer to help track this request, that is returned in the completion callback\n\x09* @param callback Pointer to a function that handles receiving the completion information\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresenceAsyncActions.h" },
		{ "ToolTip", "Query a user's presence. This must complete successfully before CopyPresence will have valid results. If HasPresence returns true for a remote\nuser, this does not need to be called.\n\n@param Options Object containing properties related to who is querying presence and for what user\n@param ClientData Optional pointer to help track this request, that is returned in the completion callback\n@param callback Pointer to a function that handles receiving the completion information" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePresenceQueryPresence, nullptr, "EOSPresenceQueryPresenceAsync", nullptr, nullptr, sizeof(EOSCorePresenceQueryPresence_eventEOSPresenceQueryPresenceAsync_Parms), Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics
	{
		struct EOSCorePresenceQueryPresence_eventHandleCallback_Parms
		{
			FEOSPresenceQueryPresenceCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCorePresenceQueryPresence_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCorePresenceQueryPresence_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePresenceQueryPresence_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSPresenceQueryPresenceCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Presence/EOSPresenceAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePresenceQueryPresence, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCorePresenceQueryPresence_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCorePresenceQueryPresence_NoRegister()
	{
		return UEOSCorePresenceQueryPresence::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync, "EOSPresenceQueryPresenceAsync" }, // 313053870
		{ &Z_Construct_UFunction_UEOSCorePresenceQueryPresence_HandleCallback, "HandleCallback" }, // 3219869669
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCorePresenceQueryPresence\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Presence/EOSPresenceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresenceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCorePresenceQueryPresence\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Presence/EOSPresenceAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCorePresenceQueryPresence, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnPresenceQueryPresenceCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCorePresenceQueryPresence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::ClassParams = {
		&UEOSCorePresenceQueryPresence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCorePresenceQueryPresence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCorePresenceQueryPresence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCorePresenceQueryPresence, 178855124);
	template<> EOSCORE_API UClass* StaticClass<UEOSCorePresenceQueryPresence>()
	{
		return UEOSCorePresenceQueryPresence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCorePresenceQueryPresence(Z_Construct_UClass_UEOSCorePresenceQueryPresence, &UEOSCorePresenceQueryPresence::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCorePresenceQueryPresence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCorePresenceQueryPresence);
	DEFINE_FUNCTION(UEOSCorePresenceSetPresence::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSPresenceSetPresenceCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCorePresenceSetPresence::execEOSPresenceSetPresenceAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSPresenceSetPresenceOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCorePresenceSetPresence**)Z_Param__Result=UEOSCorePresenceSetPresence::EOSPresenceSetPresenceAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCorePresenceSetPresence::StaticRegisterNativesUEOSCorePresenceSetPresence()
	{
		UClass* Class = UEOSCorePresenceSetPresence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPresenceSetPresenceAsync", &UEOSCorePresenceSetPresence::execEOSPresenceSetPresenceAsync },
			{ "HandleCallback", &UEOSCorePresenceSetPresence::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics
	{
		struct EOSCorePresenceSetPresence_eventEOSPresenceSetPresenceAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSPresenceSetPresenceOptions options;
			UEOSCorePresenceSetPresence* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePresenceSetPresence_eventEOSPresenceSetPresenceAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCorePresenceSetPresence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePresenceSetPresence_eventEOSPresenceSetPresenceAsync_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceSetPresenceOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePresenceSetPresence_eventEOSPresenceSetPresenceAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Presence|Async" },
		{ "Comment", "/**\n\x09* Sets your new presence with the data applied to a PresenceModificationHandle. The PresenceModificationHandle can be released safely after calling this function.\n\x09*\n\x09* @param Options Object containing a PresenceModificationHandle and associated user data\n\x09* @param ClientData Optional pointer to help track this request, that is returned in the completion callback\n\x09* @param callback Pointer to a function that handles receiving the completion information\n\x09*\n\x09* @see EOS_Presence_CreatePresenceModification\n\x09* @see EOS_PresenceModification_Release\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresenceAsyncActions.h" },
		{ "ToolTip", "Sets your new presence with the data applied to a PresenceModificationHandle. The PresenceModificationHandle can be released safely after calling this function.\n\n@param Options Object containing a PresenceModificationHandle and associated user data\n@param ClientData Optional pointer to help track this request, that is returned in the completion callback\n@param callback Pointer to a function that handles receiving the completion information\n\n@see EOS_Presence_CreatePresenceModification\n@see EOS_PresenceModification_Release" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePresenceSetPresence, nullptr, "EOSPresenceSetPresenceAsync", nullptr, nullptr, sizeof(EOSCorePresenceSetPresence_eventEOSPresenceSetPresenceAsync_Parms), Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics
	{
		struct EOSCorePresenceSetPresence_eventHandleCallback_Parms
		{
			FEOSPresenceSetPresenceCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCorePresenceSetPresence_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCorePresenceSetPresence_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePresenceSetPresence_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSPresenceSetPresenceCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Presence/EOSPresenceAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePresenceSetPresence, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCorePresenceSetPresence_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCorePresenceSetPresence_NoRegister()
	{
		return UEOSCorePresenceSetPresence::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync, "EOSPresenceSetPresenceAsync" }, // 2360735567
		{ &Z_Construct_UFunction_UEOSCorePresenceSetPresence_HandleCallback, "HandleCallback" }, // 775147085
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCorePresenceSetPresence\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Presence/EOSPresenceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresenceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCorePresenceSetPresence\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Presence/EOSPresenceAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCorePresenceSetPresence, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnPresenceSetPresenceCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCorePresenceSetPresence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::ClassParams = {
		&UEOSCorePresenceSetPresence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCorePresenceSetPresence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCorePresenceSetPresence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCorePresenceSetPresence, 346277959);
	template<> EOSCORE_API UClass* StaticClass<UEOSCorePresenceSetPresence>()
	{
		return UEOSCorePresenceSetPresence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCorePresenceSetPresence(Z_Construct_UClass_UEOSCorePresenceSetPresence, &UEOSCorePresenceSetPresence::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCorePresenceSetPresence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCorePresenceSetPresence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
