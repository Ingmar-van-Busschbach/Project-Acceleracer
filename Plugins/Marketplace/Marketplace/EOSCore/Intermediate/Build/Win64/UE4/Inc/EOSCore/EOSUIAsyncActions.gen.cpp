// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/UI/EOSUIAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUIAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUIShowFriends_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUIShowFriends();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIShowFriendsOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIShowFriendsCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnShowFriendsCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUIHideFriends_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUIHideFriends();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIHideFriendsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIHideFriendsCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnHideFriendsCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreUIShowFriends::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSUIShowFriendsCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreUIShowFriends::execEOSUIShowFriendsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSUIShowFriendsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreUIShowFriends**)Z_Param__Result=UEOSCoreUIShowFriends::EOSUIShowFriendsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreUIShowFriends::StaticRegisterNativesUEOSCoreUIShowFriends()
	{
		UClass* Class = UEOSCoreUIShowFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSUIShowFriendsAsync", &UEOSCoreUIShowFriends::execEOSUIShowFriendsAsync },
			{ "HandleCallback", &UEOSCoreUIShowFriends::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics
	{
		struct EOSCoreUIShowFriends_eventEOSUIShowFriendsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSUIShowFriendsOptions options;
			UEOSCoreUIShowFriends* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUIShowFriends_eventEOSUIShowFriendsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreUIShowFriends_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUIShowFriends_eventEOSUIShowFriendsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSUIShowFriendsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUIShowFriends_eventEOSUIShowFriendsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|UI|Async" },
		{ "Comment", "/**\n     * Opens the overlay with a request to show the friends list.\n     *\n     * @param Options Structure containing the account id of the friends list to show.\n     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate.\n     * @param CompletionDelegate A callback that is fired when the request to show the friends list has been sent to the overlay, or on an error.\n     *\n     * @return EOS_Success If the overlay has been notified about the request.\n     *         EOS_InvalidParameters If any of the options are incorrect.\n     *         EOS_NotConfigured If the overlay is not properly configured.\n     *         EOS_NoChange If the overlay is already visible.\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUIAsyncActions.h" },
		{ "ToolTip", "Opens the overlay with a request to show the friends list.\n\n@param Options Structure containing the account id of the friends list to show.\n@param ClientData Arbitrary data that is passed back to you in the CompletionDelegate.\n@param CompletionDelegate A callback that is fired when the request to show the friends list has been sent to the overlay, or on an error.\n\n@return EOS_Success If the overlay has been notified about the request.\n        EOS_InvalidParameters If any of the options are incorrect.\n        EOS_NotConfigured If the overlay is not properly configured.\n        EOS_NoChange If the overlay is already visible." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUIShowFriends, nullptr, "EOSUIShowFriendsAsync", nullptr, nullptr, sizeof(EOSCoreUIShowFriends_eventEOSUIShowFriendsAsync_Parms), Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics
	{
		struct EOSCoreUIShowFriends_eventHandleCallback_Parms
		{
			FEOSUIShowFriendsCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreUIShowFriends_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreUIShowFriends_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUIShowFriends_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSUIShowFriendsCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/EOSUIAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUIShowFriends, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreUIShowFriends_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreUIShowFriends_NoRegister()
	{
		return UEOSCoreUIShowFriends::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreUIShowFriends_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreUIShowFriends_EOSUIShowFriendsAsync, "EOSUIShowFriendsAsync" }, // 1118269832
		{ &Z_Construct_UFunction_UEOSCoreUIShowFriends_HandleCallback, "HandleCallback" }, // 2845913181
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreUIShowFriends\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "UI/EOSUIAsyncActions.h" },
		{ "ModuleRelativePath", "Public/UI/EOSUIAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreUIShowFriends\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/EOSUIAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreUIShowFriends, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnShowFriendsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreUIShowFriends>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::ClassParams = {
		&UEOSCoreUIShowFriends::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreUIShowFriends()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreUIShowFriends_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreUIShowFriends, 3909770808);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreUIShowFriends>()
	{
		return UEOSCoreUIShowFriends::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreUIShowFriends(Z_Construct_UClass_UEOSCoreUIShowFriends, &UEOSCoreUIShowFriends::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreUIShowFriends"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreUIShowFriends);
	DEFINE_FUNCTION(UEOSCoreUIHideFriends::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSUIHideFriendsCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreUIHideFriends::execEOSUIHideFriendsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSUIHideFriendsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreUIHideFriends**)Z_Param__Result=UEOSCoreUIHideFriends::EOSUIHideFriendsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreUIHideFriends::StaticRegisterNativesUEOSCoreUIHideFriends()
	{
		UClass* Class = UEOSCoreUIHideFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSUIHideFriendsAsync", &UEOSCoreUIHideFriends::execEOSUIHideFriendsAsync },
			{ "HandleCallback", &UEOSCoreUIHideFriends::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics
	{
		struct EOSCoreUIHideFriends_eventEOSUIHideFriendsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSUIHideFriendsOptions options;
			UEOSCoreUIHideFriends* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUIHideFriends_eventEOSUIHideFriendsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreUIHideFriends_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUIHideFriends_eventEOSUIHideFriendsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSUIHideFriendsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUIHideFriends_eventEOSUIHideFriendsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|UI|Async" },
		{ "Comment", "/**\n     * Hides the active overlay.\n     *\n     * @param Options Structure containing the account id of the browser to close.\n     * @param ClientData Arbitrary data that is passed back to you in the callback.\n     * @param callback A callback that is fired when the request to hide the friends list has been processed, or on an error.\n     *\n     * @return EOS_Success If the overlay has been notified about the request.\n     *         EOS_InvalidParameters If any of the options are incorrect.\n     *         EOS_NotConfigured If the overlay is not properly configured.\n     *         EOS_NoChange If the overlay is already hidden.\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUIAsyncActions.h" },
		{ "ToolTip", "Hides the active overlay.\n\n@param Options Structure containing the account id of the browser to close.\n@param ClientData Arbitrary data that is passed back to you in the callback.\n@param callback A callback that is fired when the request to hide the friends list has been processed, or on an error.\n\n@return EOS_Success If the overlay has been notified about the request.\n        EOS_InvalidParameters If any of the options are incorrect.\n        EOS_NotConfigured If the overlay is not properly configured.\n        EOS_NoChange If the overlay is already hidden." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUIHideFriends, nullptr, "EOSUIHideFriendsAsync", nullptr, nullptr, sizeof(EOSCoreUIHideFriends_eventEOSUIHideFriendsAsync_Parms), Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics
	{
		struct EOSCoreUIHideFriends_eventHandleCallback_Parms
		{
			FEOSUIHideFriendsCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreUIHideFriends_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreUIHideFriends_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUIHideFriends_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSUIHideFriendsCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/EOSUIAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUIHideFriends, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreUIHideFriends_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreUIHideFriends_NoRegister()
	{
		return UEOSCoreUIHideFriends::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreUIHideFriends_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreUIHideFriends_EOSUIHideFriendsAsync, "EOSUIHideFriendsAsync" }, // 3505651362
		{ &Z_Construct_UFunction_UEOSCoreUIHideFriends_HandleCallback, "HandleCallback" }, // 2228937954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreUIHideFriends\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "UI/EOSUIAsyncActions.h" },
		{ "ModuleRelativePath", "Public/UI/EOSUIAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreUIHideFriends\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/EOSUIAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreUIHideFriends, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnHideFriendsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreUIHideFriends>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::ClassParams = {
		&UEOSCoreUIHideFriends::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreUIHideFriends()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreUIHideFriends_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreUIHideFriends, 2174043571);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreUIHideFriends>()
	{
		return UEOSCoreUIHideFriends::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreUIHideFriends(Z_Construct_UClass_UEOSCoreUIHideFriends, &UEOSCoreUIHideFriends::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreUIHideFriends"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreUIHideFriends);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
