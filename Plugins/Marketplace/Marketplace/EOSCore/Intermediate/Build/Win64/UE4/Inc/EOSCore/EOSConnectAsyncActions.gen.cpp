// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Connect/EOSConnectAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSConnectAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectLogin_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectLogin();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectLoginOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectLoginCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnLoginCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectCreateUser_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectCreateUser();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCreateUserOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCreateUserCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnCreateUserCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectLinkAccount_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectLinkAccount();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectLinkAccountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectLinkAccountCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnLinkAccountCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectUnlinkAccount();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectUnlinkAccountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectUnlinkAccountCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnUnlinkAccountCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectCreateDeviceId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCreateDeviceIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCreateDeviceIdCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnCreateDeviceIdCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectDeleteDeviceIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectDeleteDeviceIdCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDeleteDeviceIdCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectTransferDeviceIdAccountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectTransferDeviceIdAccountCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTransferDeviceIdAccountCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectQueryExternalAccountMappingsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectQueryExternalAccountMappingsCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryExternalAccountMappingsCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectQueryProductUserIdMappingsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectQueryProductUserIdMappingsCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryProductUserIdMappingsCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreConnectLogin::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSConnectLoginCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreConnectLogin::execEOSConnectLoginAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSConnectLoginOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreConnectLogin**)Z_Param__Result=UEOSCoreConnectLogin::EOSConnectLoginAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreConnectLogin::StaticRegisterNativesUEOSCoreConnectLogin()
	{
		UClass* Class = UEOSCoreConnectLogin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectLoginAsync", &UEOSCoreConnectLogin::execEOSConnectLoginAsync },
			{ "HandleCallback", &UEOSCoreConnectLogin::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics
	{
		struct EOSCoreConnectLogin_eventEOSConnectLoginAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSConnectLoginOptions options;
			UEOSCoreConnectLogin* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectLogin_eventEOSConnectLoginAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreConnectLogin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectLogin_eventEOSConnectLoginAsync_Parms, options), Z_Construct_UScriptStruct_FEOSConnectLoginOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectLogin_eventEOSConnectLoginAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Connect|Async" },
		{ "Comment", "/**\n    * Login/Authenticate given a valid set of external auth credentials.\n    *\n    * @param Options structure containing the external account credentials and type to use during the login operation\n    * @param ClientData arbitrary data that is passed back to you in the callback\n    * @param callback a callback that is fired when the login operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "Login/Authenticate given a valid set of external auth credentials.\n\n@param Options structure containing the external account credentials and type to use during the login operation\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the login operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectLogin, nullptr, "EOSConnectLoginAsync", nullptr, nullptr, sizeof(EOSCoreConnectLogin_eventEOSConnectLoginAsync_Parms), Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics
	{
		struct EOSCoreConnectLogin_eventHandleCallback_Parms
		{
			FEOSConnectLoginCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreConnectLogin_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreConnectLogin_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectLogin_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSConnectLoginCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectLogin, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreConnectLogin_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreConnectLogin_NoRegister()
	{
		return UEOSCoreConnectLogin::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreConnectLogin_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreConnectLogin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreConnectLogin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreConnectLogin_EOSConnectLoginAsync, "EOSConnectLoginAsync" }, // 1112261742
		{ &Z_Construct_UFunction_UEOSCoreConnectLogin_HandleCallback, "HandleCallback" }, // 3496985521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectLogin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreConnectLogin\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Connect/EOSConnectAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreConnectLogin\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectLogin_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreConnectLogin_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreConnectLogin, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnLoginCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectLogin_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectLogin_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreConnectLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreConnectLogin_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreConnectLogin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreConnectLogin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreConnectLogin_Statics::ClassParams = {
		&UEOSCoreConnectLogin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreConnectLogin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectLogin_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectLogin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectLogin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreConnectLogin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreConnectLogin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreConnectLogin, 2364344242);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreConnectLogin>()
	{
		return UEOSCoreConnectLogin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreConnectLogin(Z_Construct_UClass_UEOSCoreConnectLogin, &UEOSCoreConnectLogin::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreConnectLogin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreConnectLogin);
	DEFINE_FUNCTION(UEOSCoreConnectCreateUser::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSConnectCreateUserCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreConnectCreateUser::execEOSConnectCreateUserAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSConnectCreateUserOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreConnectCreateUser**)Z_Param__Result=UEOSCoreConnectCreateUser::EOSConnectCreateUserAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreConnectCreateUser::StaticRegisterNativesUEOSCoreConnectCreateUser()
	{
		UClass* Class = UEOSCoreConnectCreateUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectCreateUserAsync", &UEOSCoreConnectCreateUser::execEOSConnectCreateUserAsync },
			{ "HandleCallback", &UEOSCoreConnectCreateUser::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics
	{
		struct EOSCoreConnectCreateUser_eventEOSConnectCreateUserAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSConnectCreateUserOptions options;
			UEOSCoreConnectCreateUser* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectCreateUser_eventEOSConnectCreateUserAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreConnectCreateUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectCreateUser_eventEOSConnectCreateUserAsync_Parms, options), Z_Construct_UScriptStruct_FEOSConnectCreateUserOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectCreateUser_eventEOSConnectCreateUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Connect|Async" },
		{ "Comment", "/**\n     * Create an account association with the Epic Online Service as a product user given their external auth credentials\n     *\n     * @param Options structure containing a continuance token from a \"user not found\" response during Login (always try login first)\n     * @param ClientData arbitrary data that is passed back to you in the callback\n     * @param callback a callback that is fired when the create operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "Create an account association with the Epic Online Service as a product user given their external auth credentials\n\n@param Options structure containing a continuance token from a \"user not found\" response during Login (always try login first)\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the create operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectCreateUser, nullptr, "EOSConnectCreateUserAsync", nullptr, nullptr, sizeof(EOSCoreConnectCreateUser_eventEOSConnectCreateUserAsync_Parms), Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics
	{
		struct EOSCoreConnectCreateUser_eventHandleCallback_Parms
		{
			FEOSConnectCreateUserCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreConnectCreateUser_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreConnectCreateUser_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectCreateUser_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSConnectCreateUserCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectCreateUser, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreConnectCreateUser_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreConnectCreateUser_NoRegister()
	{
		return UEOSCoreConnectCreateUser::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync, "EOSConnectCreateUserAsync" }, // 734476220
		{ &Z_Construct_UFunction_UEOSCoreConnectCreateUser_HandleCallback, "HandleCallback" }, // 1765386606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreConnectCreateUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Connect/EOSConnectAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreConnectCreateUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreConnectCreateUser, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnCreateUserCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreConnectCreateUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::ClassParams = {
		&UEOSCoreConnectCreateUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreConnectCreateUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreConnectCreateUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreConnectCreateUser, 2831413863);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreConnectCreateUser>()
	{
		return UEOSCoreConnectCreateUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreConnectCreateUser(Z_Construct_UClass_UEOSCoreConnectCreateUser, &UEOSCoreConnectCreateUser::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreConnectCreateUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreConnectCreateUser);
	DEFINE_FUNCTION(UEOSCoreConnectLinkAccount::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSConnectLinkAccountCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreConnectLinkAccount::execEOSConnectLinkAccountAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSConnectLinkAccountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreConnectLinkAccount**)Z_Param__Result=UEOSCoreConnectLinkAccount::EOSConnectLinkAccountAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreConnectLinkAccount::StaticRegisterNativesUEOSCoreConnectLinkAccount()
	{
		UClass* Class = UEOSCoreConnectLinkAccount::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectLinkAccountAsync", &UEOSCoreConnectLinkAccount::execEOSConnectLinkAccountAsync },
			{ "HandleCallback", &UEOSCoreConnectLinkAccount::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics
	{
		struct EOSCoreConnectLinkAccount_eventEOSConnectLinkAccountAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSConnectLinkAccountOptions options;
			UEOSCoreConnectLinkAccount* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectLinkAccount_eventEOSConnectLinkAccountAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreConnectLinkAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectLinkAccount_eventEOSConnectLinkAccountAsync_Parms, options), Z_Construct_UScriptStruct_FEOSConnectLinkAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectLinkAccount_eventEOSConnectLinkAccountAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Connect|Async" },
		{ "Comment", "/**\n     * Link a set of external auth credentials with an existing product user on the Epic Online Service\n     *\n     * @param Options structure containing a continuance token from a \"user not found\" response during Login (always try login first) and a currently logged in user not already associated with this external auth provider\n     * @param ClientData arbitrary data that is passed back to you in the callback\n     * @param callback a callback that is fired when the link operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "Link a set of external auth credentials with an existing product user on the Epic Online Service\n\n@param Options structure containing a continuance token from a \"user not found\" response during Login (always try login first) and a currently logged in user not already associated with this external auth provider\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the link operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectLinkAccount, nullptr, "EOSConnectLinkAccountAsync", nullptr, nullptr, sizeof(EOSCoreConnectLinkAccount_eventEOSConnectLinkAccountAsync_Parms), Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics
	{
		struct EOSCoreConnectLinkAccount_eventHandleCallback_Parms
		{
			FEOSConnectLinkAccountCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreConnectLinkAccount_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreConnectLinkAccount_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectLinkAccount_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSConnectLinkAccountCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectLinkAccount, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreConnectLinkAccount_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreConnectLinkAccount_NoRegister()
	{
		return UEOSCoreConnectLinkAccount::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync, "EOSConnectLinkAccountAsync" }, // 1869355140
		{ &Z_Construct_UFunction_UEOSCoreConnectLinkAccount_HandleCallback, "HandleCallback" }, // 3738995737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreConnectLinkAccount\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Connect/EOSConnectAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreConnectLinkAccount\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreConnectLinkAccount, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnLinkAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreConnectLinkAccount>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::ClassParams = {
		&UEOSCoreConnectLinkAccount::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreConnectLinkAccount()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreConnectLinkAccount_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreConnectLinkAccount, 3995253270);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreConnectLinkAccount>()
	{
		return UEOSCoreConnectLinkAccount::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreConnectLinkAccount(Z_Construct_UClass_UEOSCoreConnectLinkAccount, &UEOSCoreConnectLinkAccount::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreConnectLinkAccount"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreConnectLinkAccount);
	DEFINE_FUNCTION(UEOSCoreConnectUnlinkAccount::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSConnectUnlinkAccountCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreConnectUnlinkAccount::execEOSConnectUnlinkAccountAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSConnectUnlinkAccountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreConnectUnlinkAccount**)Z_Param__Result=UEOSCoreConnectUnlinkAccount::EOSConnectUnlinkAccountAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreConnectUnlinkAccount::StaticRegisterNativesUEOSCoreConnectUnlinkAccount()
	{
		UClass* Class = UEOSCoreConnectUnlinkAccount::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectUnlinkAccountAsync", &UEOSCoreConnectUnlinkAccount::execEOSConnectUnlinkAccountAsync },
			{ "HandleCallback", &UEOSCoreConnectUnlinkAccount::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics
	{
		struct EOSCoreConnectUnlinkAccount_eventEOSConnectUnlinkAccountAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSConnectUnlinkAccountOptions options;
			UEOSCoreConnectUnlinkAccount* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectUnlinkAccount_eventEOSConnectUnlinkAccountAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectUnlinkAccount_eventEOSConnectUnlinkAccountAsync_Parms, options), Z_Construct_UScriptStruct_FEOSConnectUnlinkAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectUnlinkAccount_eventEOSConnectUnlinkAccountAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Connect|Async" },
		{ "Comment", "/**\n\x09 * Unlink external auth credentials from the owning keychain of a logged in product user.\n\x09 *\n\x09 * This function allows recovering the user from scenarios where they have accidentally proceeded to creating\n\x09 * a new product user for the local native user account, instead of linking it with an existing keychain that\n\x09 * they have previously created by playing the game (or another game owned by the organization) on another platform.\n\x09 *\n\x09 * In such scenario, after the initial platform login and a new product user creation, the user wishes to re-login\n\x09 * using other set of external auth credentials to connect with their existing game progression data. In order to\n\x09 * allow automatic login also on the current platform, they will need to unlink the accidentally created new keychain\n\x09 * and product user and then use the EOS_Connect_Login and EOS_Connect_LinkAccount APIs to link the local native platform\n\x09 * account with that previously created existing product user and its owning keychain.\n\x09 *\n\x09 * In another secnario, the user may simply want to disassociate the account that they have logged in with from the current\n\x09 * keychain that it is linked with, perhaps to link it against another keychain or to separate the game progressions again.\n\x09 *\n\x09 * In order to protect against account theft, it is only possible to unlink user accounts that have been authenticated\n\x09 * and logged in to the product user in the current session. This prevents a malicious actor from gaining access to one\n\x09 * of the linked accounts and using it to remove all other accounts linked with the keychain. This also prevents a malicious\n\x09 * actor from replacing the unlinked account with their own corresponding account on the same platform, as the unlinking\n\x09 * operation will ensure that any existing authentication session cannot be used to re-link and overwrite the entry without\n\x09 * authenticating with one of the other linked accounts in the keychain. These restrictions limit the potential attack surface\n\x09 * related to account theft scenarios.\n\x09 *\n\x09 * @param Options structure containing operation input parameters\n\x09 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n\x09 * @param CompletionDelegate a callback that is fired when the unlink operation completes, either successfully or in error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "Unlink external auth credentials from the owning keychain of a logged in product user.\n\nThis function allows recovering the user from scenarios where they have accidentally proceeded to creating\na new product user for the local native user account, instead of linking it with an existing keychain that\nthey have previously created by playing the game (or another game owned by the organization) on another platform.\n\nIn such scenario, after the initial platform login and a new product user creation, the user wishes to re-login\nusing other set of external auth credentials to connect with their existing game progression data. In order to\nallow automatic login also on the current platform, they will need to unlink the accidentally created new keychain\nand product user and then use the EOS_Connect_Login and EOS_Connect_LinkAccount APIs to link the local native platform\naccount with that previously created existing product user and its owning keychain.\n\nIn another secnario, the user may simply want to disassociate the account that they have logged in with from the current\nkeychain that it is linked with, perhaps to link it against another keychain or to separate the game progressions again.\n\nIn order to protect against account theft, it is only possible to unlink user accounts that have been authenticated\nand logged in to the product user in the current session. This prevents a malicious actor from gaining access to one\nof the linked accounts and using it to remove all other accounts linked with the keychain. This also prevents a malicious\nactor from replacing the unlinked account with their own corresponding account on the same platform, as the unlinking\noperation will ensure that any existing authentication session cannot be used to re-link and overwrite the entry without\nauthenticating with one of the other linked accounts in the keychain. These restrictions limit the potential attack surface\nrelated to account theft scenarios.\n\n@param Options structure containing operation input parameters\n@param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate a callback that is fired when the unlink operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectUnlinkAccount, nullptr, "EOSConnectUnlinkAccountAsync", nullptr, nullptr, sizeof(EOSCoreConnectUnlinkAccount_eventEOSConnectUnlinkAccountAsync_Parms), Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics
	{
		struct EOSCoreConnectUnlinkAccount_eventHandleCallback_Parms
		{
			FEOSConnectUnlinkAccountCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreConnectUnlinkAccount_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreConnectUnlinkAccount_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectUnlinkAccount_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSConnectUnlinkAccountCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectUnlinkAccount, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreConnectUnlinkAccount_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_NoRegister()
	{
		return UEOSCoreConnectUnlinkAccount::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync, "EOSConnectUnlinkAccountAsync" }, // 594936259
		{ &Z_Construct_UFunction_UEOSCoreConnectUnlinkAccount_HandleCallback, "HandleCallback" }, // 1967415952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreConnectUnlinkAccount\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Connect/EOSConnectAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreConnectUnlinkAccount\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreConnectUnlinkAccount, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnUnlinkAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreConnectUnlinkAccount>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::ClassParams = {
		&UEOSCoreConnectUnlinkAccount::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreConnectUnlinkAccount()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreConnectUnlinkAccount_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreConnectUnlinkAccount, 1824667948);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreConnectUnlinkAccount>()
	{
		return UEOSCoreConnectUnlinkAccount::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreConnectUnlinkAccount(Z_Construct_UClass_UEOSCoreConnectUnlinkAccount, &UEOSCoreConnectUnlinkAccount::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreConnectUnlinkAccount"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreConnectUnlinkAccount);
	DEFINE_FUNCTION(UEOSCoreConnectCreateDeviceId::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSConnectCreateDeviceIdCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreConnectCreateDeviceId::execEOSConnectCreateDeviceIdAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSConnectCreateDeviceIdOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreConnectCreateDeviceId**)Z_Param__Result=UEOSCoreConnectCreateDeviceId::EOSConnectCreateDeviceIdAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreConnectCreateDeviceId::StaticRegisterNativesUEOSCoreConnectCreateDeviceId()
	{
		UClass* Class = UEOSCoreConnectCreateDeviceId::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectCreateDeviceIdAsync", &UEOSCoreConnectCreateDeviceId::execEOSConnectCreateDeviceIdAsync },
			{ "HandleCallback", &UEOSCoreConnectCreateDeviceId::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics
	{
		struct EOSCoreConnectCreateDeviceId_eventEOSConnectCreateDeviceIdAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSConnectCreateDeviceIdOptions options;
			UEOSCoreConnectCreateDeviceId* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectCreateDeviceId_eventEOSConnectCreateDeviceIdAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectCreateDeviceId_eventEOSConnectCreateDeviceIdAsync_Parms, options), Z_Construct_UScriptStruct_FEOSConnectCreateDeviceIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectCreateDeviceId_eventEOSConnectCreateDeviceIdAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Connect|Async" },
		{ "Comment", "/**\n     * Create a new unique pseudo-account that can be used to identify the current user profile on the local device.\n     *\n     * This function is intended to be used by mobile games and PC games that wish to allow\n     * a new user to start playing without requiring to login to the game using any user identity.\n     * In addition to this, the Device ID feature is used to automatically login the local user\n     * also when they have linked at least one external user account(s) with the local Device ID.\n     *\n     * It is possible to link many devices with the same user's account keyring using the Device ID feature.\n     *\n     * Linking a device later or immediately with a real user account will ensure that the player\n     * will not lose their progress if they switch devices or lose the device at some point,\n     * as they will be always able to login with one of their linked real accounts and also link\n     * another new device with the user account associations keychain. Otherwise, without having\n     * at least one permanent user account linked to the Device ID, the player would lose all of their\n     * game data and progression permanently should something happen to their device or the local\n     * user profile on the device.\n     *\n     * After a successful one-time CreateDeviceId operation, the game can login the local user\n     * automatically on subsequent game starts with EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN\n     * credentials type. If a Device ID already exists for the local user on the device then EOS_DuplicateNotAllowed\n     * error result is returned and the caller should proceed to calling EOS_Connect_Login directly.\n     *\n     * @param Options structure containing operation input parameters\n     * @param ClientData arbitrary data that is passed back to you in the callback\n     * @param callback a callback that is fired when the create operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "Create a new unique pseudo-account that can be used to identify the current user profile on the local device.\n\nThis function is intended to be used by mobile games and PC games that wish to allow\na new user to start playing without requiring to login to the game using any user identity.\nIn addition to this, the Device ID feature is used to automatically login the local user\nalso when they have linked at least one external user account(s) with the local Device ID.\n\nIt is possible to link many devices with the same user's account keyring using the Device ID feature.\n\nLinking a device later or immediately with a real user account will ensure that the player\nwill not lose their progress if they switch devices or lose the device at some point,\nas they will be always able to login with one of their linked real accounts and also link\nanother new device with the user account associations keychain. Otherwise, without having\nat least one permanent user account linked to the Device ID, the player would lose all of their\ngame data and progression permanently should something happen to their device or the local\nuser profile on the device.\n\nAfter a successful one-time CreateDeviceId operation, the game can login the local user\nautomatically on subsequent game starts with EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN\ncredentials type. If a Device ID already exists for the local user on the device then EOS_DuplicateNotAllowed\nerror result is returned and the caller should proceed to calling EOS_Connect_Login directly.\n\n@param Options structure containing operation input parameters\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the create operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectCreateDeviceId, nullptr, "EOSConnectCreateDeviceIdAsync", nullptr, nullptr, sizeof(EOSCoreConnectCreateDeviceId_eventEOSConnectCreateDeviceIdAsync_Parms), Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics
	{
		struct EOSCoreConnectCreateDeviceId_eventHandleCallback_Parms
		{
			FEOSConnectCreateDeviceIdCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreConnectCreateDeviceId_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreConnectCreateDeviceId_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectCreateDeviceId_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSConnectCreateDeviceIdCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectCreateDeviceId, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreConnectCreateDeviceId_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_NoRegister()
	{
		return UEOSCoreConnectCreateDeviceId::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync, "EOSConnectCreateDeviceIdAsync" }, // 3378416368
		{ &Z_Construct_UFunction_UEOSCoreConnectCreateDeviceId_HandleCallback, "HandleCallback" }, // 4079564763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreConnectCreateDeviceId\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Connect/EOSConnectAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreConnectCreateDeviceId\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreConnectCreateDeviceId, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnCreateDeviceIdCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreConnectCreateDeviceId>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::ClassParams = {
		&UEOSCoreConnectCreateDeviceId::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreConnectCreateDeviceId()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreConnectCreateDeviceId_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreConnectCreateDeviceId, 652203591);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreConnectCreateDeviceId>()
	{
		return UEOSCoreConnectCreateDeviceId::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreConnectCreateDeviceId(Z_Construct_UClass_UEOSCoreConnectCreateDeviceId, &UEOSCoreConnectCreateDeviceId::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreConnectCreateDeviceId"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreConnectCreateDeviceId);
	DEFINE_FUNCTION(UEOSCoreConnectDeleteDeviceId::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSConnectDeleteDeviceIdCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreConnectDeleteDeviceId::execEOSConnectDeleteDeviceIdAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSConnectDeleteDeviceIdOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreConnectDeleteDeviceId**)Z_Param__Result=UEOSCoreConnectDeleteDeviceId::EOSConnectDeleteDeviceIdAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreConnectDeleteDeviceId::StaticRegisterNativesUEOSCoreConnectDeleteDeviceId()
	{
		UClass* Class = UEOSCoreConnectDeleteDeviceId::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectDeleteDeviceIdAsync", &UEOSCoreConnectDeleteDeviceId::execEOSConnectDeleteDeviceIdAsync },
			{ "HandleCallback", &UEOSCoreConnectDeleteDeviceId::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics
	{
		struct EOSCoreConnectDeleteDeviceId_eventEOSConnectDeleteDeviceIdAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSConnectDeleteDeviceIdOptions options;
			UEOSCoreConnectDeleteDeviceId* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectDeleteDeviceId_eventEOSConnectDeleteDeviceIdAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectDeleteDeviceId_eventEOSConnectDeleteDeviceIdAsync_Parms, options), Z_Construct_UScriptStruct_FEOSConnectDeleteDeviceIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectDeleteDeviceId_eventEOSConnectDeleteDeviceIdAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Connect|Async" },
		{ "Comment", "/**\n     * Delete any existing Device ID access credentials for the current user profile on the local device.\n     *\n     * The deletion is permanent and it is not possible to recover lost game data and progression\n     * if the Device ID had not been linked with at least one real external user account.\n     *\n     * @param Options structure containing operation input parameters\n     * @param ClientData arbitrary data that is passed back to you in the callback\n     * @param callback a callback that is fired when the delete operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "Delete any existing Device ID access credentials for the current user profile on the local device.\n\nThe deletion is permanent and it is not possible to recover lost game data and progression\nif the Device ID had not been linked with at least one real external user account.\n\n@param Options structure containing operation input parameters\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the delete operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId, nullptr, "EOSConnectDeleteDeviceIdAsync", nullptr, nullptr, sizeof(EOSCoreConnectDeleteDeviceId_eventEOSConnectDeleteDeviceIdAsync_Parms), Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics
	{
		struct EOSCoreConnectDeleteDeviceId_eventHandleCallback_Parms
		{
			FEOSConnectDeleteDeviceIdCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreConnectDeleteDeviceId_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreConnectDeleteDeviceId_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectDeleteDeviceId_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSConnectDeleteDeviceIdCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreConnectDeleteDeviceId_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_NoRegister()
	{
		return UEOSCoreConnectDeleteDeviceId::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync, "EOSConnectDeleteDeviceIdAsync" }, // 1074950066
		{ &Z_Construct_UFunction_UEOSCoreConnectDeleteDeviceId_HandleCallback, "HandleCallback" }, // 4073668163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreConnectDeleteDeviceId\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Connect/EOSConnectAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreConnectDeleteDeviceId\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreConnectDeleteDeviceId, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnDeleteDeviceIdCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreConnectDeleteDeviceId>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::ClassParams = {
		&UEOSCoreConnectDeleteDeviceId::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreConnectDeleteDeviceId, 2229293981);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreConnectDeleteDeviceId>()
	{
		return UEOSCoreConnectDeleteDeviceId::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreConnectDeleteDeviceId(Z_Construct_UClass_UEOSCoreConnectDeleteDeviceId, &UEOSCoreConnectDeleteDeviceId::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreConnectDeleteDeviceId"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreConnectDeleteDeviceId);
	DEFINE_FUNCTION(UEOSCoreConnectTransferDeviceIdAccount::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSConnectTransferDeviceIdAccountCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreConnectTransferDeviceIdAccount::execEOSConnectTransferDeviceIdAccountAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSConnectTransferDeviceIdAccountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreConnectTransferDeviceIdAccount**)Z_Param__Result=UEOSCoreConnectTransferDeviceIdAccount::EOSConnectTransferDeviceIdAccountAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreConnectTransferDeviceIdAccount::StaticRegisterNativesUEOSCoreConnectTransferDeviceIdAccount()
	{
		UClass* Class = UEOSCoreConnectTransferDeviceIdAccount::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectTransferDeviceIdAccountAsync", &UEOSCoreConnectTransferDeviceIdAccount::execEOSConnectTransferDeviceIdAccountAsync },
			{ "HandleCallback", &UEOSCoreConnectTransferDeviceIdAccount::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics
	{
		struct EOSCoreConnectTransferDeviceIdAccount_eventEOSConnectTransferDeviceIdAccountAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSConnectTransferDeviceIdAccountOptions options;
			UEOSCoreConnectTransferDeviceIdAccount* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectTransferDeviceIdAccount_eventEOSConnectTransferDeviceIdAccountAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectTransferDeviceIdAccount_eventEOSConnectTransferDeviceIdAccountAsync_Parms, options), Z_Construct_UScriptStruct_FEOSConnectTransferDeviceIdAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectTransferDeviceIdAccount_eventEOSConnectTransferDeviceIdAccountAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Connect|Async" },
		{ "Comment", "/**\n\x09 * Transfer a Device ID pseudo-account and the product user associated with it into another\n\x09 * keychain linked with real user accounts (such as Epic Games, Playstation, Xbox, and other).\n\x09 *\n\x09 * This function allows transferring a product user, i.e. the local user's game progression\n\x09 * backend data from a Device ID owned keychain into a keychain with real user accounts\n\x09 * linked to it. The transfer of Device ID owned product user into a keychain of real user\n\x09 * accounts allows persisting the user's game data on the backend in the event that they\n\x09 * would lose access to the local device or otherwise switch to another device or platform.\n\x09 *\n\x09 * This function is only applicable in the situation of where the local user first plays\n\x09 * the game using the anonymous Device ID login, then later logs in using a real user\n\x09 * account that they have also already used to play the same game or another game under the\n\x09 * same organization within Epic Online Services. In such situation, while normally the login\n\x09 * attempt with a real user account would return EOS_InvalidUser and an EOS_ContinuanceToken\n\x09 * and allow calling the EOS_Connect_LinkAccount API to link it with the Device ID's keychain,\n\x09 * instead the login operation succeeds and finds an existing user because the association\n\x09 * already exists. Because the user cannot have two product users simultaneously to play with,\n\x09 * the game should prompt the user to choose which profile to keep and which one to discard\n\x09 * permanently. Based on the user choice, the game may then proceed to transfer the Device ID\n\x09 * login into the keychain that is persistent and backed by real user accounts, and if the user\n\x09 * chooses so, move the product user as well into the destination keychain and overwrite the\n\x09 * existing previous product user with it. To clarify, moving the product user with the Device ID\n\x09 * login in this way into a persisted keychain allows to preserve the so far only locally persisted\n\x09 * game progression and thus protect the user against a case where they lose access to the device.\n\x09 *\n\x09 * On success, the completion callback will return the preserved EOS_ProductUserId that remains\n\x09 * logged in while the discarded EOS_ProductUserId has been invalidated and deleted permanently.\n\x09 * Consecutive logins using the existing Device ID login type or the external account will\n\x09 * connect the user to the same backend data belonging to the preserved EOS_ProductUserId.\n\x09 *\n\x09 * Example walkthrough: Cross-platform mobile game using the anonymous Device ID login.\n\x09 *\n\x09 * For onboarding new users, the game will attempt to always automatically login the local user\n\x09 * by calling EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN login type. If the local\n\x09 * Device ID credentials are not found, and the game wants a frictionless entry for the first time\n\x09 * user experience, the game will automatically call EOS_Connect_CreateDeviceId to create new\n\x09 * Device ID pseudo-account and then login the local user into it. Consecutive game starts will\n\x09 * thus automatically login the user to their locally persisted Device ID account.\n\x09 *\n\x09 * The user starts playing anonymously using the Device ID login type and makes significant game progress.\n\x09 * Later, they login using an external account that they have already used previously for the\n\x09 * same game perhaps on another platform, or another game owned by the same organization.\n\x09 * In such case, EOS_Connect_Login will automatically login the user to their existing account\n\x09 * linking keychain and create automatically a new empty product user for this product.\n\x09 *\n\x09 * In order for the user to use their existing previously created keychain and have the locally\n\x09 * created Device ID login reference to that keychain instead, the user's current product user\n\x09 * needs to be moved to be under that keychain so that their existing game progression will be\n\x09 * preserved. To do so, the game can call EOS_Connect_TransferDeviceIdAccount to transfer the\n\x09 * Device ID login and the product user associated with it into the other keychain that has real\n\x09 * external user account(s) linked to it. Note that it is important that the game either automatically\n\x09 * checks that the other product user does not have any meaningful progression data, or otherwise\n\x09 * will prompt the user to make the choice on which game progression to preserve and which can\n\x09 * be discarded permanently. The other product user will be discarded permanently and cannot be\n\x09 * recovered, so it is very important that the user is guided to make the right choice to avoid\n\x09 * accidental loss of all game progression.\n\x09 *\n\x09 * @see EOS_Connect_Login\n\x09 * @see EOS_Connect_CreateDeviceId\n\x09 *\n\x09 * @param Options structure containing the logged in product users and specifying which one will be preserved\n\x09 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n\x09 * @param CompletionDelegate a callback that is fired when the transfer operation completes, either successfully or in error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "Transfer a Device ID pseudo-account and the product user associated with it into another\nkeychain linked with real user accounts (such as Epic Games, Playstation, Xbox, and other).\n\nThis function allows transferring a product user, i.e. the local user's game progression\nbackend data from a Device ID owned keychain into a keychain with real user accounts\nlinked to it. The transfer of Device ID owned product user into a keychain of real user\naccounts allows persisting the user's game data on the backend in the event that they\nwould lose access to the local device or otherwise switch to another device or platform.\n\nThis function is only applicable in the situation of where the local user first plays\nthe game using the anonymous Device ID login, then later logs in using a real user\naccount that they have also already used to play the same game or another game under the\nsame organization within Epic Online Services. In such situation, while normally the login\nattempt with a real user account would return EOS_InvalidUser and an EOS_ContinuanceToken\nand allow calling the EOS_Connect_LinkAccount API to link it with the Device ID's keychain,\ninstead the login operation succeeds and finds an existing user because the association\nalready exists. Because the user cannot have two product users simultaneously to play with,\nthe game should prompt the user to choose which profile to keep and which one to discard\npermanently. Based on the user choice, the game may then proceed to transfer the Device ID\nlogin into the keychain that is persistent and backed by real user accounts, and if the user\nchooses so, move the product user as well into the destination keychain and overwrite the\nexisting previous product user with it. To clarify, moving the product user with the Device ID\nlogin in this way into a persisted keychain allows to preserve the so far only locally persisted\ngame progression and thus protect the user against a case where they lose access to the device.\n\nOn success, the completion callback will return the preserved EOS_ProductUserId that remains\nlogged in while the discarded EOS_ProductUserId has been invalidated and deleted permanently.\nConsecutive logins using the existing Device ID login type or the external account will\nconnect the user to the same backend data belonging to the preserved EOS_ProductUserId.\n\nExample walkthrough: Cross-platform mobile game using the anonymous Device ID login.\n\nFor onboarding new users, the game will attempt to always automatically login the local user\nby calling EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN login type. If the local\nDevice ID credentials are not found, and the game wants a frictionless entry for the first time\nuser experience, the game will automatically call EOS_Connect_CreateDeviceId to create new\nDevice ID pseudo-account and then login the local user into it. Consecutive game starts will\nthus automatically login the user to their locally persisted Device ID account.\n\nThe user starts playing anonymously using the Device ID login type and makes significant game progress.\nLater, they login using an external account that they have already used previously for the\nsame game perhaps on another platform, or another game owned by the same organization.\nIn such case, EOS_Connect_Login will automatically login the user to their existing account\nlinking keychain and create automatically a new empty product user for this product.\n\nIn order for the user to use their existing previously created keychain and have the locally\ncreated Device ID login reference to that keychain instead, the user's current product user\nneeds to be moved to be under that keychain so that their existing game progression will be\npreserved. To do so, the game can call EOS_Connect_TransferDeviceIdAccount to transfer the\nDevice ID login and the product user associated with it into the other keychain that has real\nexternal user account(s) linked to it. Note that it is important that the game either automatically\nchecks that the other product user does not have any meaningful progression data, or otherwise\nwill prompt the user to make the choice on which game progression to preserve and which can\nbe discarded permanently. The other product user will be discarded permanently and cannot be\nrecovered, so it is very important that the user is guided to make the right choice to avoid\naccidental loss of all game progression.\n\n@see EOS_Connect_Login\n@see EOS_Connect_CreateDeviceId\n\n@param Options structure containing the logged in product users and specifying which one will be preserved\n@param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate a callback that is fired when the transfer operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount, nullptr, "EOSConnectTransferDeviceIdAccountAsync", nullptr, nullptr, sizeof(EOSCoreConnectTransferDeviceIdAccount_eventEOSConnectTransferDeviceIdAccountAsync_Parms), Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics
	{
		struct EOSCoreConnectTransferDeviceIdAccount_eventHandleCallback_Parms
		{
			FEOSConnectTransferDeviceIdAccountCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreConnectTransferDeviceIdAccount_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreConnectTransferDeviceIdAccount_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectTransferDeviceIdAccount_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSConnectTransferDeviceIdAccountCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreConnectTransferDeviceIdAccount_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_NoRegister()
	{
		return UEOSCoreConnectTransferDeviceIdAccount::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync, "EOSConnectTransferDeviceIdAccountAsync" }, // 1891394618
		{ &Z_Construct_UFunction_UEOSCoreConnectTransferDeviceIdAccount_HandleCallback, "HandleCallback" }, // 3046599467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreConnectTransferDeviceIdAccount\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Connect/EOSConnectAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreConnectTransferDeviceIdAccount\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreConnectTransferDeviceIdAccount, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnTransferDeviceIdAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreConnectTransferDeviceIdAccount>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::ClassParams = {
		&UEOSCoreConnectTransferDeviceIdAccount::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreConnectTransferDeviceIdAccount, 2785620851);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreConnectTransferDeviceIdAccount>()
	{
		return UEOSCoreConnectTransferDeviceIdAccount::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreConnectTransferDeviceIdAccount(Z_Construct_UClass_UEOSCoreConnectTransferDeviceIdAccount, &UEOSCoreConnectTransferDeviceIdAccount::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreConnectTransferDeviceIdAccount"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreConnectTransferDeviceIdAccount);
	DEFINE_FUNCTION(UEOSCoreConnectQueryExternalAccountMappings::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSConnectQueryExternalAccountMappingsCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreConnectQueryExternalAccountMappings::execEOSConnectQueryExternalAccountMappingsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSConnectQueryExternalAccountMappingsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreConnectQueryExternalAccountMappings**)Z_Param__Result=UEOSCoreConnectQueryExternalAccountMappings::EOSConnectQueryExternalAccountMappingsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreConnectQueryExternalAccountMappings::StaticRegisterNativesUEOSCoreConnectQueryExternalAccountMappings()
	{
		UClass* Class = UEOSCoreConnectQueryExternalAccountMappings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectQueryExternalAccountMappingsAsync", &UEOSCoreConnectQueryExternalAccountMappings::execEOSConnectQueryExternalAccountMappingsAsync },
			{ "HandleCallback", &UEOSCoreConnectQueryExternalAccountMappings::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics
	{
		struct EOSCoreConnectQueryExternalAccountMappings_eventEOSConnectQueryExternalAccountMappingsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSConnectQueryExternalAccountMappingsOptions options;
			UEOSCoreConnectQueryExternalAccountMappings* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectQueryExternalAccountMappings_eventEOSConnectQueryExternalAccountMappingsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectQueryExternalAccountMappings_eventEOSConnectQueryExternalAccountMappingsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSConnectQueryExternalAccountMappingsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectQueryExternalAccountMappings_eventEOSConnectQueryExternalAccountMappingsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Connect|Async" },
		{ "Comment", "/**\n     * Retrieve the equivalent product user ids from a list of external account ids from supported account providers.  The values will be cached and retrievable via EOS_Connect_GetExternalAccountMapping\n     *\n     * @param Options structure containing a list of external account ids, in string form, to query for the product user id representation\n     * @param ClientData arbitrary data that is passed back to you in the callback\n     * @param callback a callback that is fired when the query operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "Retrieve the equivalent product user ids from a list of external account ids from supported account providers.  The values will be cached and retrievable via EOS_Connect_GetExternalAccountMapping\n\n@param Options structure containing a list of external account ids, in string form, to query for the product user id representation\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the query operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings, nullptr, "EOSConnectQueryExternalAccountMappingsAsync", nullptr, nullptr, sizeof(EOSCoreConnectQueryExternalAccountMappings_eventEOSConnectQueryExternalAccountMappingsAsync_Parms), Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics
	{
		struct EOSCoreConnectQueryExternalAccountMappings_eventHandleCallback_Parms
		{
			FEOSConnectQueryExternalAccountMappingsCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreConnectQueryExternalAccountMappings_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreConnectQueryExternalAccountMappings_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectQueryExternalAccountMappings_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSConnectQueryExternalAccountMappingsCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreConnectQueryExternalAccountMappings_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_NoRegister()
	{
		return UEOSCoreConnectQueryExternalAccountMappings::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync, "EOSConnectQueryExternalAccountMappingsAsync" }, // 3270325305
		{ &Z_Construct_UFunction_UEOSCoreConnectQueryExternalAccountMappings_HandleCallback, "HandleCallback" }, // 1287271990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreConnectQueryExternalAccountMappings\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Connect/EOSConnectAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreConnectQueryExternalAccountMappings\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreConnectQueryExternalAccountMappings, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryExternalAccountMappingsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreConnectQueryExternalAccountMappings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::ClassParams = {
		&UEOSCoreConnectQueryExternalAccountMappings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreConnectQueryExternalAccountMappings, 2198659309);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreConnectQueryExternalAccountMappings>()
	{
		return UEOSCoreConnectQueryExternalAccountMappings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreConnectQueryExternalAccountMappings(Z_Construct_UClass_UEOSCoreConnectQueryExternalAccountMappings, &UEOSCoreConnectQueryExternalAccountMappings::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreConnectQueryExternalAccountMappings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreConnectQueryExternalAccountMappings);
	DEFINE_FUNCTION(UEOSCoreConnectQueryProductUserIdMappings::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSConnectQueryProductUserIdMappingsCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreConnectQueryProductUserIdMappings::execEOSConnectQueryProductUserIdMappingsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSConnectQueryProductUserIdMappingsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreConnectQueryProductUserIdMappings**)Z_Param__Result=UEOSCoreConnectQueryProductUserIdMappings::EOSConnectQueryProductUserIdMappingsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreConnectQueryProductUserIdMappings::StaticRegisterNativesUEOSCoreConnectQueryProductUserIdMappings()
	{
		UClass* Class = UEOSCoreConnectQueryProductUserIdMappings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectQueryProductUserIdMappingsAsync", &UEOSCoreConnectQueryProductUserIdMappings::execEOSConnectQueryProductUserIdMappingsAsync },
			{ "HandleCallback", &UEOSCoreConnectQueryProductUserIdMappings::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics
	{
		struct EOSCoreConnectQueryProductUserIdMappings_eventEOSConnectQueryProductUserIdMappingsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSConnectQueryProductUserIdMappingsOptions options;
			UEOSCoreConnectQueryProductUserIdMappings* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectQueryProductUserIdMappings_eventEOSConnectQueryProductUserIdMappingsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectQueryProductUserIdMappings_eventEOSConnectQueryProductUserIdMappingsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSConnectQueryProductUserIdMappingsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectQueryProductUserIdMappings_eventEOSConnectQueryProductUserIdMappingsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Connect|Async" },
		{ "Comment", "/**\n     * Retrieve the equivalent product user ids from a list of external account ids from supported account providers.  The values will be cached and retrievable via EOS_Connect_GetExternalAccountMapping\n     *\n     * @param Options structure containing a list of external account ids, in string form, to query for the product user id representation\n     * @param ClientData arbitrary data that is passed back to you in the callback\n     * @param callback a callback that is fired when the query operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "Retrieve the equivalent product user ids from a list of external account ids from supported account providers.  The values will be cached and retrievable via EOS_Connect_GetExternalAccountMapping\n\n@param Options structure containing a list of external account ids, in string form, to query for the product user id representation\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the query operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings, nullptr, "EOSConnectQueryProductUserIdMappingsAsync", nullptr, nullptr, sizeof(EOSCoreConnectQueryProductUserIdMappings_eventEOSConnectQueryProductUserIdMappingsAsync_Parms), Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics
	{
		struct EOSCoreConnectQueryProductUserIdMappings_eventHandleCallback_Parms
		{
			FEOSConnectQueryProductUserIdMappingsCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreConnectQueryProductUserIdMappings_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreConnectQueryProductUserIdMappings_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreConnectQueryProductUserIdMappings_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSConnectQueryProductUserIdMappingsCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreConnectQueryProductUserIdMappings_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_NoRegister()
	{
		return UEOSCoreConnectQueryProductUserIdMappings::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync, "EOSConnectQueryProductUserIdMappingsAsync" }, // 3365051286
		{ &Z_Construct_UFunction_UEOSCoreConnectQueryProductUserIdMappings_HandleCallback, "HandleCallback" }, // 2564599370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreConnectQueryProductUserIdMappings\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Connect/EOSConnectAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreConnectQueryProductUserIdMappings\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Connect/EOSConnectAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreConnectQueryProductUserIdMappings, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryProductUserIdMappingsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreConnectQueryProductUserIdMappings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::ClassParams = {
		&UEOSCoreConnectQueryProductUserIdMappings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreConnectQueryProductUserIdMappings, 1338561093);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreConnectQueryProductUserIdMappings>()
	{
		return UEOSCoreConnectQueryProductUserIdMappings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreConnectQueryProductUserIdMappings(Z_Construct_UClass_UEOSCoreConnectQueryProductUserIdMappings, &UEOSCoreConnectQueryProductUserIdMappings::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreConnectQueryProductUserIdMappings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreConnectQueryProductUserIdMappings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
