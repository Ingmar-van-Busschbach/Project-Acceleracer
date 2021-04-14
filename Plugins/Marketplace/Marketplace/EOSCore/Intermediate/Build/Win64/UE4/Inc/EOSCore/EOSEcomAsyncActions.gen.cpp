// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Ecom/EOSEcomAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSEcomAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomQueryOwnership_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomQueryOwnership();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomQueryOwnershipOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomQueryOwnershipCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryOwnershipCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomQueryOwnershipTokenOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomQueryOwnershipTokenCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryOwnershipTokenCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomQueryEntitlements();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomQueryEntitlementsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomQueryEntitlementsCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryEntitlementsCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomQueryOffers_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomQueryOffers();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomQueryOffersOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomQueryOffersCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryQueryOffersCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomCheckout_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomCheckout();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomCheckoutOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomCheckoutCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryCheckoutCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomRedeemEntitlementsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEcomRedeemEntitlementsCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryRedeemEntitlementsCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreEcomQueryOwnership::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSEcomQueryOwnershipCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreEcomQueryOwnership::execEOSEcomQueryOwnershipAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSEcomQueryOwnershipOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreEcomQueryOwnership**)Z_Param__Result=UEOSCoreEcomQueryOwnership::EOSEcomQueryOwnershipAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreEcomQueryOwnership::StaticRegisterNativesUEOSCoreEcomQueryOwnership()
	{
		UClass* Class = UEOSCoreEcomQueryOwnership::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSEcomQueryOwnershipAsync", &UEOSCoreEcomQueryOwnership::execEOSEcomQueryOwnershipAsync },
			{ "HandleCallback", &UEOSCoreEcomQueryOwnership::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics
	{
		struct EOSCoreEcomQueryOwnership_eventEOSEcomQueryOwnershipAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSEcomQueryOwnershipOptions options;
			UEOSCoreEcomQueryOwnership* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOwnership_eventEOSEcomQueryOwnershipAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreEcomQueryOwnership_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOwnership_eventEOSEcomQueryOwnershipAsync_Parms, options), Z_Construct_UScriptStruct_FEOSEcomQueryOwnershipOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOwnership_eventEOSEcomQueryOwnershipAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Ecom|Async" },
		{ "Comment", "/**\n    * Query the ownership status for a given list of catalog item ids defined with Epic Online Services.\n    * This data will be cached for a limited time and retrieved again from the backend when necessary\n    *\n    * @param options structure containing the account and catalog item ids to retrieve\n    * @param ClientData arbitrary data that is passed back to you in the callback\n    * @param callback a callback that is fired when the async operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "Query the ownership status for a given list of catalog item ids defined with Epic Online Services.\nThis data will be cached for a limited time and retrieved again from the backend when necessary\n\n@param options structure containing the account and catalog item ids to retrieve\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomQueryOwnership, nullptr, "EOSEcomQueryOwnershipAsync", nullptr, nullptr, sizeof(EOSCoreEcomQueryOwnership_eventEOSEcomQueryOwnershipAsync_Parms), Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics
	{
		struct EOSCoreEcomQueryOwnership_eventHandleCallback_Parms
		{
			FEOSEcomQueryOwnershipCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreEcomQueryOwnership_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreEcomQueryOwnership_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOwnership_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSEcomQueryOwnershipCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomQueryOwnership, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreEcomQueryOwnership_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreEcomQueryOwnership_NoRegister()
	{
		return UEOSCoreEcomQueryOwnership::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync, "EOSEcomQueryOwnershipAsync" }, // 41256863
		{ &Z_Construct_UFunction_UEOSCoreEcomQueryOwnership_HandleCallback, "HandleCallback" }, // 3298537246
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreEcomQueryOwnership\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Ecom/EOSEcomAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreEcomQueryOwnership\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreEcomQueryOwnership, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryOwnershipCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreEcomQueryOwnership>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::ClassParams = {
		&UEOSCoreEcomQueryOwnership::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreEcomQueryOwnership()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreEcomQueryOwnership_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreEcomQueryOwnership, 2063590402);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreEcomQueryOwnership>()
	{
		return UEOSCoreEcomQueryOwnership::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreEcomQueryOwnership(Z_Construct_UClass_UEOSCoreEcomQueryOwnership, &UEOSCoreEcomQueryOwnership::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreEcomQueryOwnership"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreEcomQueryOwnership);
	DEFINE_FUNCTION(UEOSCoreEcomQueryOwnershipToken::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSEcomQueryOwnershipTokenCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreEcomQueryOwnershipToken::execEOSEcomQueryOwnershipTokenAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSEcomQueryOwnershipTokenOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreEcomQueryOwnershipToken**)Z_Param__Result=UEOSCoreEcomQueryOwnershipToken::EOSEcomQueryOwnershipTokenAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreEcomQueryOwnershipToken::StaticRegisterNativesUEOSCoreEcomQueryOwnershipToken()
	{
		UClass* Class = UEOSCoreEcomQueryOwnershipToken::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSEcomQueryOwnershipTokenAsync", &UEOSCoreEcomQueryOwnershipToken::execEOSEcomQueryOwnershipTokenAsync },
			{ "HandleCallback", &UEOSCoreEcomQueryOwnershipToken::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics
	{
		struct EOSCoreEcomQueryOwnershipToken_eventEOSEcomQueryOwnershipTokenAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSEcomQueryOwnershipTokenOptions options;
			UEOSCoreEcomQueryOwnershipToken* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOwnershipToken_eventEOSEcomQueryOwnershipTokenAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOwnershipToken_eventEOSEcomQueryOwnershipTokenAsync_Parms, options), Z_Construct_UScriptStruct_FEOSEcomQueryOwnershipTokenOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOwnershipToken_eventEOSEcomQueryOwnershipTokenAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Ecom|Async" },
		{ "Comment", "/**\n    * Query the ownership status for a given list of catalog item ids defined with Epic Online Services.\n    * The data is return via the callback in the form of a signed JWT that should be verified by an external backend server using a public key for authenticity.\n    *\n    * @param options structure containing the account and catalog item ids to retrieve in token form\n    * @param ClientData arbitrary data that is passed back to you in the callback\n    * @param callback a callback that is fired when the async operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "Query the ownership status for a given list of catalog item ids defined with Epic Online Services.\nThe data is return via the callback in the form of a signed JWT that should be verified by an external backend server using a public key for authenticity.\n\n@param options structure containing the account and catalog item ids to retrieve in token form\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken, nullptr, "EOSEcomQueryOwnershipTokenAsync", nullptr, nullptr, sizeof(EOSCoreEcomQueryOwnershipToken_eventEOSEcomQueryOwnershipTokenAsync_Parms), Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics
	{
		struct EOSCoreEcomQueryOwnershipToken_eventHandleCallback_Parms
		{
			FEOSEcomQueryOwnershipTokenCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreEcomQueryOwnershipToken_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreEcomQueryOwnershipToken_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOwnershipToken_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSEcomQueryOwnershipTokenCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreEcomQueryOwnershipToken_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_NoRegister()
	{
		return UEOSCoreEcomQueryOwnershipToken::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync, "EOSEcomQueryOwnershipTokenAsync" }, // 95836260
		{ &Z_Construct_UFunction_UEOSCoreEcomQueryOwnershipToken_HandleCallback, "HandleCallback" }, // 268167446
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreEcomQueryOwnershipToken\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Ecom/EOSEcomAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreEcomQueryOwnershipToken\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreEcomQueryOwnershipToken, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryOwnershipTokenCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreEcomQueryOwnershipToken>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::ClassParams = {
		&UEOSCoreEcomQueryOwnershipToken::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreEcomQueryOwnershipToken, 1891442168);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreEcomQueryOwnershipToken>()
	{
		return UEOSCoreEcomQueryOwnershipToken::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreEcomQueryOwnershipToken(Z_Construct_UClass_UEOSCoreEcomQueryOwnershipToken, &UEOSCoreEcomQueryOwnershipToken::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreEcomQueryOwnershipToken"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreEcomQueryOwnershipToken);
	DEFINE_FUNCTION(UEOSCoreEcomQueryEntitlements::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSEcomQueryEntitlementsCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreEcomQueryEntitlements::execEOSEcomQueryEntitlementsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSEcomQueryEntitlementsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreEcomQueryEntitlements**)Z_Param__Result=UEOSCoreEcomQueryEntitlements::EOSEcomQueryEntitlementsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreEcomQueryEntitlements::StaticRegisterNativesUEOSCoreEcomQueryEntitlements()
	{
		UClass* Class = UEOSCoreEcomQueryEntitlements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSEcomQueryEntitlementsAsync", &UEOSCoreEcomQueryEntitlements::execEOSEcomQueryEntitlementsAsync },
			{ "HandleCallback", &UEOSCoreEcomQueryEntitlements::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics
	{
		struct EOSCoreEcomQueryEntitlements_eventEOSEcomQueryEntitlementsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSEcomQueryEntitlementsOptions options;
			UEOSCoreEcomQueryEntitlements* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryEntitlements_eventEOSEcomQueryEntitlementsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryEntitlements_eventEOSEcomQueryEntitlementsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSEcomQueryEntitlementsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryEntitlements_eventEOSEcomQueryEntitlementsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Ecom|Async" },
		{ "Comment", "/**\n    * Query the entitlement information defined with Epic Online Services.\n    * A set of entitlement names can be provided to filter the set of entitlements associated with the account.\n    * This data will be cached for a limited time and retrieved again from the backend when necessary.\n    * Use EOS_Ecom_CopyEntitlementByIndex, EOS_Ecom_CopyEntitlementByNameAndIndex, and EOS_Ecom_CopyEntitlementById to get the entitlement details.\n    * Use EOS_Ecom_GetEntitlementsByNameCount to retrieve the number of entitlements with a specific entitlement name.\n    *\n    * @param options structure containing the account and entitlement names to retrieve\n    * @param ClientData arbitrary data that is passed back to you in the callback\n    * @param callback a callback that is fired when the async operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "Query the entitlement information defined with Epic Online Services.\nA set of entitlement names can be provided to filter the set of entitlements associated with the account.\nThis data will be cached for a limited time and retrieved again from the backend when necessary.\nUse EOS_Ecom_CopyEntitlementByIndex, EOS_Ecom_CopyEntitlementByNameAndIndex, and EOS_Ecom_CopyEntitlementById to get the entitlement details.\nUse EOS_Ecom_GetEntitlementsByNameCount to retrieve the number of entitlements with a specific entitlement name.\n\n@param options structure containing the account and entitlement names to retrieve\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomQueryEntitlements, nullptr, "EOSEcomQueryEntitlementsAsync", nullptr, nullptr, sizeof(EOSCoreEcomQueryEntitlements_eventEOSEcomQueryEntitlementsAsync_Parms), Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics
	{
		struct EOSCoreEcomQueryEntitlements_eventHandleCallback_Parms
		{
			FEOSEcomQueryEntitlementsCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreEcomQueryEntitlements_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreEcomQueryEntitlements_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryEntitlements_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSEcomQueryEntitlementsCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomQueryEntitlements, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreEcomQueryEntitlements_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_NoRegister()
	{
		return UEOSCoreEcomQueryEntitlements::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync, "EOSEcomQueryEntitlementsAsync" }, // 1648378519
		{ &Z_Construct_UFunction_UEOSCoreEcomQueryEntitlements_HandleCallback, "HandleCallback" }, // 3695722028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreEcomQueryEntitlements\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Ecom/EOSEcomAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreEcomQueryEntitlements\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreEcomQueryEntitlements, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryEntitlementsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreEcomQueryEntitlements>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::ClassParams = {
		&UEOSCoreEcomQueryEntitlements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreEcomQueryEntitlements()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreEcomQueryEntitlements_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreEcomQueryEntitlements, 67546289);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreEcomQueryEntitlements>()
	{
		return UEOSCoreEcomQueryEntitlements::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreEcomQueryEntitlements(Z_Construct_UClass_UEOSCoreEcomQueryEntitlements, &UEOSCoreEcomQueryEntitlements::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreEcomQueryEntitlements"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreEcomQueryEntitlements);
	DEFINE_FUNCTION(UEOSCoreEcomQueryOffers::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSEcomQueryOffersCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreEcomQueryOffers::execEOSEcomQueryOffersAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSEcomQueryOffersOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreEcomQueryOffers**)Z_Param__Result=UEOSCoreEcomQueryOffers::EOSEcomQueryOffersAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreEcomQueryOffers::StaticRegisterNativesUEOSCoreEcomQueryOffers()
	{
		UClass* Class = UEOSCoreEcomQueryOffers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSEcomQueryOffersAsync", &UEOSCoreEcomQueryOffers::execEOSEcomQueryOffersAsync },
			{ "HandleCallback", &UEOSCoreEcomQueryOffers::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics
	{
		struct EOSCoreEcomQueryOffers_eventEOSEcomQueryOffersAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSEcomQueryOffersOptions options;
			UEOSCoreEcomQueryOffers* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOffers_eventEOSEcomQueryOffersAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreEcomQueryOffers_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOffers_eventEOSEcomQueryOffersAsync_Parms, options), Z_Construct_UScriptStruct_FEOSEcomQueryOffersOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOffers_eventEOSEcomQueryOffersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Ecom|Async" },
		{ "Comment", "/**\n    * Query for a list of catalog offers defined with Epic Online Services.\n    * This data will be cached for a limited time and retrieved again from the backend when necessary.\n    *\n    * @param options structure containing filter criteria\n    * @param ClientData arbitrary data that is passed back to you in the callback\n    * @param callback a callback that is fired when the async operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "Query for a list of catalog offers defined with Epic Online Services.\nThis data will be cached for a limited time and retrieved again from the backend when necessary.\n\n@param options structure containing filter criteria\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomQueryOffers, nullptr, "EOSEcomQueryOffersAsync", nullptr, nullptr, sizeof(EOSCoreEcomQueryOffers_eventEOSEcomQueryOffersAsync_Parms), Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics
	{
		struct EOSCoreEcomQueryOffers_eventHandleCallback_Parms
		{
			FEOSEcomQueryOffersCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreEcomQueryOffers_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreEcomQueryOffers_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomQueryOffers_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSEcomQueryOffersCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomQueryOffers, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreEcomQueryOffers_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreEcomQueryOffers_NoRegister()
	{
		return UEOSCoreEcomQueryOffers::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync, "EOSEcomQueryOffersAsync" }, // 1858296981
		{ &Z_Construct_UFunction_UEOSCoreEcomQueryOffers_HandleCallback, "HandleCallback" }, // 2024828762
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreEcomQueryOffers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Ecom/EOSEcomAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreEcomQueryOffers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreEcomQueryOffers, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryQueryOffersCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreEcomQueryOffers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::ClassParams = {
		&UEOSCoreEcomQueryOffers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreEcomQueryOffers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreEcomQueryOffers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreEcomQueryOffers, 3692914180);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreEcomQueryOffers>()
	{
		return UEOSCoreEcomQueryOffers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreEcomQueryOffers(Z_Construct_UClass_UEOSCoreEcomQueryOffers, &UEOSCoreEcomQueryOffers::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreEcomQueryOffers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreEcomQueryOffers);
	DEFINE_FUNCTION(UEOSCoreEcomCheckout::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSEcomCheckoutCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreEcomCheckout::execEOSEcomCheckoutAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSEcomCheckoutOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreEcomCheckout**)Z_Param__Result=UEOSCoreEcomCheckout::EOSEcomCheckoutAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreEcomCheckout::StaticRegisterNativesUEOSCoreEcomCheckout()
	{
		UClass* Class = UEOSCoreEcomCheckout::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSEcomCheckoutAsync", &UEOSCoreEcomCheckout::execEOSEcomCheckoutAsync },
			{ "HandleCallback", &UEOSCoreEcomCheckout::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics
	{
		struct EOSCoreEcomCheckout_eventEOSEcomCheckoutAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSEcomCheckoutOptions options;
			UEOSCoreEcomCheckout* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomCheckout_eventEOSEcomCheckoutAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreEcomCheckout_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomCheckout_eventEOSEcomCheckoutAsync_Parms, options), Z_Construct_UScriptStruct_FEOSEcomCheckoutOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomCheckout_eventEOSEcomCheckoutAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Ecom|Async" },
		{ "Comment", "/**\n    * Initiates the purchase flow for a set of offers.  The callback is triggered after the purchase flow.\n    * On success, the set of entitlements that were unlocked will be cached.\n    * On success, a Transaction Id will be returned. The Transaction Id can be used to obtain a\n    * const FEOSEcomHTransaction& handle. The handle can then be used to retrieve the entitlements rewarded by the purchase.\n    *\n    * @see EOS_Ecom_Transaction_Release\n    *\n    * @param options structure containing filter criteria\n    * @param ClientData arbitrary data that is passed back to you in the callback\n    * @param callback a callback that is fired when the async operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "Initiates the purchase flow for a set of offers.  The callback is triggered after the purchase flow.\nOn success, the set of entitlements that were unlocked will be cached.\nOn success, a Transaction Id will be returned. The Transaction Id can be used to obtain a\nconst FEOSEcomHTransaction& handle. The handle can then be used to retrieve the entitlements rewarded by the purchase.\n\n@see EOS_Ecom_Transaction_Release\n\n@param options structure containing filter criteria\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomCheckout, nullptr, "EOSEcomCheckoutAsync", nullptr, nullptr, sizeof(EOSCoreEcomCheckout_eventEOSEcomCheckoutAsync_Parms), Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics
	{
		struct EOSCoreEcomCheckout_eventHandleCallback_Parms
		{
			FEOSEcomCheckoutCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreEcomCheckout_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreEcomCheckout_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomCheckout_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSEcomCheckoutCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomCheckout, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreEcomCheckout_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreEcomCheckout_NoRegister()
	{
		return UEOSCoreEcomCheckout::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreEcomCheckout_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreEcomCheckout_EOSEcomCheckoutAsync, "EOSEcomCheckoutAsync" }, // 3373429101
		{ &Z_Construct_UFunction_UEOSCoreEcomCheckout_HandleCallback, "HandleCallback" }, // 2709331957
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreEcomCheckout\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Ecom/EOSEcomAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreEcomCheckout\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreEcomCheckout, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryCheckoutCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreEcomCheckout>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::ClassParams = {
		&UEOSCoreEcomCheckout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreEcomCheckout()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreEcomCheckout_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreEcomCheckout, 3819753870);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreEcomCheckout>()
	{
		return UEOSCoreEcomCheckout::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreEcomCheckout(Z_Construct_UClass_UEOSCoreEcomCheckout, &UEOSCoreEcomCheckout::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreEcomCheckout"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreEcomCheckout);
	DEFINE_FUNCTION(UEOSCoreEcomRedeemEntitlements::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSEcomRedeemEntitlementsCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreEcomRedeemEntitlements::execEOSEcomRedeemEntitlementsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSEcomRedeemEntitlementsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreEcomRedeemEntitlements**)Z_Param__Result=UEOSCoreEcomRedeemEntitlements::EOSEcomRedeemEntitlementsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreEcomRedeemEntitlements::StaticRegisterNativesUEOSCoreEcomRedeemEntitlements()
	{
		UClass* Class = UEOSCoreEcomRedeemEntitlements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSEcomRedeemEntitlementsAsync", &UEOSCoreEcomRedeemEntitlements::execEOSEcomRedeemEntitlementsAsync },
			{ "HandleCallback", &UEOSCoreEcomRedeemEntitlements::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics
	{
		struct EOSCoreEcomRedeemEntitlements_eventEOSEcomRedeemEntitlementsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSEcomRedeemEntitlementsOptions options;
			UEOSCoreEcomRedeemEntitlements* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomRedeemEntitlements_eventEOSEcomRedeemEntitlementsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomRedeemEntitlements_eventEOSEcomRedeemEntitlementsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSEcomRedeemEntitlementsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomRedeemEntitlements_eventEOSEcomRedeemEntitlementsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Ecom|Async" },
		{ "Comment", "/**\n    * Requests that the provided entitlement be marked redeemed.  This will cause that entitlement\n    * to no longer be returned from QueryEntitlements unless the include redeemed request flag is set true.\n    *\n    * @param options structure containing entitlement to redeem\n    * @param ClientData arbitrary data that is passed back to you in the callback\n    * @param callback a callback that is fired when the async operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "Requests that the provided entitlement be marked redeemed.  This will cause that entitlement\nto no longer be returned from QueryEntitlements unless the include redeemed request flag is set true.\n\n@param options structure containing entitlement to redeem\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements, nullptr, "EOSEcomRedeemEntitlementsAsync", nullptr, nullptr, sizeof(EOSCoreEcomRedeemEntitlements_eventEOSEcomRedeemEntitlementsAsync_Parms), Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics
	{
		struct EOSCoreEcomRedeemEntitlements_eventHandleCallback_Parms
		{
			FEOSEcomRedeemEntitlementsCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreEcomRedeemEntitlements_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreEcomRedeemEntitlements_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreEcomRedeemEntitlements_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSEcomRedeemEntitlementsCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreEcomRedeemEntitlements_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_NoRegister()
	{
		return UEOSCoreEcomRedeemEntitlements::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync, "EOSEcomRedeemEntitlementsAsync" }, // 1289676948
		{ &Z_Construct_UFunction_UEOSCoreEcomRedeemEntitlements_HandleCallback, "HandleCallback" }, // 4055669771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreEcomRedeemEntitlements\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Ecom/EOSEcomAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreEcomRedeemEntitlements\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ecom/EOSEcomAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreEcomRedeemEntitlements, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnEcomQueryRedeemEntitlementsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreEcomRedeemEntitlements>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::ClassParams = {
		&UEOSCoreEcomRedeemEntitlements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreEcomRedeemEntitlements, 1739663653);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreEcomRedeemEntitlements>()
	{
		return UEOSCoreEcomRedeemEntitlements::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreEcomRedeemEntitlements(Z_Construct_UClass_UEOSCoreEcomRedeemEntitlements, &UEOSCoreEcomRedeemEntitlements::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreEcomRedeemEntitlements"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreEcomRedeemEntitlements);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
