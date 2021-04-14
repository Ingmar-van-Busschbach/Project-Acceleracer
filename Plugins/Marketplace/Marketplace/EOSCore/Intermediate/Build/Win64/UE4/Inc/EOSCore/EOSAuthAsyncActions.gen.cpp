// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Auth/EOSAuthAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAuthAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthLogin_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthLogin();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthLoginOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthLoginCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthLogout_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthLogout();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthLogoutOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthLogoutCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLogoutCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthLinkAccount_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthLinkAccount();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthLinkAccountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthLinkAccountCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLinkAccountCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthDeletePersistentAuthOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthDeletePersistentAuthCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthDeletePersistentAuthCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthVerifyUserAuthOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthVerifyUserAuthCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthVerifyUserAuthCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreAuthLogin::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSAuthLoginCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreAuthLogin::execEOSAuthLoginAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSAuthLoginOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreAuthLogin**)Z_Param__Result=UEOSCoreAuthLogin::EOSAuthLoginAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreAuthLogin::StaticRegisterNativesUEOSCoreAuthLogin()
	{
		UClass* Class = UEOSCoreAuthLogin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAuthLoginAsync", &UEOSCoreAuthLogin::execEOSAuthLoginAsync },
			{ "HandleCallback", &UEOSCoreAuthLogin::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics
	{
		struct EOSCoreAuthLogin_eventEOSAuthLoginAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSAuthLoginOptions options;
			UEOSCoreAuthLogin* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLogin_eventEOSAuthLoginAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreAuthLogin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLogin_eventEOSAuthLoginAsync_Parms, options), Z_Construct_UScriptStruct_FEOSAuthLoginOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLogin_eventEOSAuthLoginAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Auth|Async" },
		{ "Comment", "/**\n     * Login/Authenticate with user credentials.\n     *\n     * @param options               structure containing the account credentials to use during the login operation\n     * @param clientData            arbitrary data that is passed back to you in the CompletionDelegate\n     * @param callback              a callback that is fired when the login operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "Login/Authenticate with user credentials.\n\n@param options               structure containing the account credentials to use during the login operation\n@param clientData            arbitrary data that is passed back to you in the CompletionDelegate\n@param callback              a callback that is fired when the login operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthLogin, nullptr, "EOSAuthLoginAsync", nullptr, nullptr, sizeof(EOSCoreAuthLogin_eventEOSAuthLoginAsync_Parms), Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics
	{
		struct EOSCoreAuthLogin_eventHandleCallback_Parms
		{
			FEOSAuthLoginCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreAuthLogin_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreAuthLogin_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLogin_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSAuthLoginCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthLogin, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreAuthLogin_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreAuthLogin_NoRegister()
	{
		return UEOSCoreAuthLogin::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreAuthLogin_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreAuthLogin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreAuthLogin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreAuthLogin_EOSAuthLoginAsync, "EOSAuthLoginAsync" }, // 930933731
		{ &Z_Construct_UFunction_UEOSCoreAuthLogin_HandleCallback, "HandleCallback" }, // 1290500697
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthLogin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreAuthLogin\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Auth/EOSAuthAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreAuthLogin\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthLogin_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreAuthLogin_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreAuthLogin, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthLogin_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthLogin_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreAuthLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreAuthLogin_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreAuthLogin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreAuthLogin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreAuthLogin_Statics::ClassParams = {
		&UEOSCoreAuthLogin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreAuthLogin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthLogin_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthLogin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthLogin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreAuthLogin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreAuthLogin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreAuthLogin, 2673024713);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreAuthLogin>()
	{
		return UEOSCoreAuthLogin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreAuthLogin(Z_Construct_UClass_UEOSCoreAuthLogin, &UEOSCoreAuthLogin::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreAuthLogin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreAuthLogin);
	DEFINE_FUNCTION(UEOSCoreAuthLogout::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSAuthLogoutCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreAuthLogout::execEOSAuthLogoutAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSAuthLogoutOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreAuthLogout**)Z_Param__Result=UEOSCoreAuthLogout::EOSAuthLogoutAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreAuthLogout::StaticRegisterNativesUEOSCoreAuthLogout()
	{
		UClass* Class = UEOSCoreAuthLogout::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAuthLogoutAsync", &UEOSCoreAuthLogout::execEOSAuthLogoutAsync },
			{ "HandleCallback", &UEOSCoreAuthLogout::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics
	{
		struct EOSCoreAuthLogout_eventEOSAuthLogoutAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSAuthLogoutOptions options;
			UEOSCoreAuthLogout* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLogout_eventEOSAuthLogoutAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreAuthLogout_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLogout_eventEOSAuthLogoutAsync_Parms, options), Z_Construct_UScriptStruct_FEOSAuthLogoutOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLogout_eventEOSAuthLogoutAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Auth|Async" },
		{ "Comment", "/**\n     * Signs the player out of the online service.\n     *\n     * @param options        structure containing information about which account to log out.\n     * @param clientData     arbitrary data that is passed back to you in the CompletionDelegate\n     * @param callback       a callback that is fired when the logout operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "Signs the player out of the online service.\n\n@param options        structure containing information about which account to log out.\n@param clientData     arbitrary data that is passed back to you in the CompletionDelegate\n@param callback       a callback that is fired when the logout operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthLogout, nullptr, "EOSAuthLogoutAsync", nullptr, nullptr, sizeof(EOSCoreAuthLogout_eventEOSAuthLogoutAsync_Parms), Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics
	{
		struct EOSCoreAuthLogout_eventHandleCallback_Parms
		{
			FEOSAuthLogoutCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreAuthLogout_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreAuthLogout_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLogout_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSAuthLogoutCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthLogout, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreAuthLogout_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreAuthLogout_NoRegister()
	{
		return UEOSCoreAuthLogout::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreAuthLogout_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreAuthLogout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreAuthLogout_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreAuthLogout_EOSAuthLogoutAsync, "EOSAuthLogoutAsync" }, // 2968341511
		{ &Z_Construct_UFunction_UEOSCoreAuthLogout_HandleCallback, "HandleCallback" }, // 3974439397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthLogout_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreAuthLogout\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Auth/EOSAuthAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreAuthLogout\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthLogout_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreAuthLogout_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreAuthLogout, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLogoutCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthLogout_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthLogout_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreAuthLogout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreAuthLogout_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreAuthLogout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreAuthLogout>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreAuthLogout_Statics::ClassParams = {
		&UEOSCoreAuthLogout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreAuthLogout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthLogout_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthLogout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthLogout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreAuthLogout()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreAuthLogout_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreAuthLogout, 2057652727);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreAuthLogout>()
	{
		return UEOSCoreAuthLogout::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreAuthLogout(Z_Construct_UClass_UEOSCoreAuthLogout, &UEOSCoreAuthLogout::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreAuthLogout"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreAuthLogout);
	DEFINE_FUNCTION(UEOSCoreAuthLinkAccount::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSAuthLinkAccountCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreAuthLinkAccount::execEOSAuthLinkAccount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSAuthLinkAccountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreAuthLinkAccount**)Z_Param__Result=UEOSCoreAuthLinkAccount::EOSAuthLinkAccount(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreAuthLinkAccount::StaticRegisterNativesUEOSCoreAuthLinkAccount()
	{
		UClass* Class = UEOSCoreAuthLinkAccount::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAuthLinkAccount", &UEOSCoreAuthLinkAccount::execEOSAuthLinkAccount },
			{ "HandleCallback", &UEOSCoreAuthLinkAccount::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics
	{
		struct EOSCoreAuthLinkAccount_eventEOSAuthLinkAccount_Parms
		{
			UObject* WorldContextObject;
			FEOSAuthLinkAccountOptions options;
			UEOSCoreAuthLinkAccount* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLinkAccount_eventEOSAuthLinkAccount_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreAuthLinkAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLinkAccount_eventEOSAuthLinkAccount_Parms, options), Z_Construct_UScriptStruct_FEOSAuthLinkAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLinkAccount_eventEOSAuthLinkAccount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Auth|Async" },
		{ "Comment", "/**\n\x09 * Link external account by continuing previous login attempt with a continuance token.\n\x09 *\n\x09 * On Desktop and Mobile platforms, the user will be presented the Epic Account Portal to resolve their identity.\n\x09 *\n\x09 * On Console, the user will login to their Epic Account using an external device, e.g. a mobile device or a desktop PC,\n\x09 * by browsing to the presented authentication URL and entering the device code presented by the game on the console.\n\x09 *\n\x09 * On success, the user will be logged in at the completion of this action.\n\x09 * This will commit this external account to the Epic Account and cannot be undone in the SDK.\n\x09 *\n\x09 * @param Options structure containing the account credentials to use during the link account operation\n\x09 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n\x09 * @param CompletionDelegate a callback that is fired when the link account operation completes, either successfully or in error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "Link external account by continuing previous login attempt with a continuance token.\n\nOn Desktop and Mobile platforms, the user will be presented the Epic Account Portal to resolve their identity.\n\nOn Console, the user will login to their Epic Account using an external device, e.g. a mobile device or a desktop PC,\nby browsing to the presented authentication URL and entering the device code presented by the game on the console.\n\nOn success, the user will be logged in at the completion of this action.\nThis will commit this external account to the Epic Account and cannot be undone in the SDK.\n\n@param Options structure containing the account credentials to use during the link account operation\n@param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate a callback that is fired when the link account operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthLinkAccount, nullptr, "EOSAuthLinkAccount", nullptr, nullptr, sizeof(EOSCoreAuthLinkAccount_eventEOSAuthLinkAccount_Parms), Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics
	{
		struct EOSCoreAuthLinkAccount_eventHandleCallback_Parms
		{
			FEOSAuthLinkAccountCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreAuthLinkAccount_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreAuthLinkAccount_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthLinkAccount_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSAuthLinkAccountCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthLinkAccount, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreAuthLinkAccount_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreAuthLinkAccount_NoRegister()
	{
		return UEOSCoreAuthLinkAccount::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreAuthLinkAccount_EOSAuthLinkAccount, "EOSAuthLinkAccount" }, // 2276449186
		{ &Z_Construct_UFunction_UEOSCoreAuthLinkAccount_HandleCallback, "HandleCallback" }, // 1581944937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreAuthLinkAccount\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Auth/EOSAuthAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreAuthLinkAccount\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreAuthLinkAccount, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLinkAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreAuthLinkAccount>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::ClassParams = {
		&UEOSCoreAuthLinkAccount::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreAuthLinkAccount()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreAuthLinkAccount_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreAuthLinkAccount, 33749250);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreAuthLinkAccount>()
	{
		return UEOSCoreAuthLinkAccount::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreAuthLinkAccount(Z_Construct_UClass_UEOSCoreAuthLinkAccount, &UEOSCoreAuthLinkAccount::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreAuthLinkAccount"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreAuthLinkAccount);
	DEFINE_FUNCTION(UEOSCoreAuthDeletePersistentAuth::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSAuthDeletePersistentAuthCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreAuthDeletePersistentAuth::execEOSAuthDeletePersistentAuthAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FEOSAuthDeletePersistentAuthOptions,Z_Param_Out_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreAuthDeletePersistentAuth**)Z_Param__Result=UEOSCoreAuthDeletePersistentAuth::EOSAuthDeletePersistentAuthAsync(Z_Param_WorldContextObject,Z_Param_Out_options);
		P_NATIVE_END;
	}
	void UEOSCoreAuthDeletePersistentAuth::StaticRegisterNativesUEOSCoreAuthDeletePersistentAuth()
	{
		UClass* Class = UEOSCoreAuthDeletePersistentAuth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAuthDeletePersistentAuthAsync", &UEOSCoreAuthDeletePersistentAuth::execEOSAuthDeletePersistentAuthAsync },
			{ "HandleCallback", &UEOSCoreAuthDeletePersistentAuth::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics
	{
		struct EOSCoreAuthDeletePersistentAuth_eventEOSAuthDeletePersistentAuthAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSAuthDeletePersistentAuthOptions options;
			UEOSCoreAuthDeletePersistentAuth* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthDeletePersistentAuth_eventEOSAuthDeletePersistentAuthAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthDeletePersistentAuth_eventEOSAuthDeletePersistentAuthAsync_Parms, options), Z_Construct_UScriptStruct_FEOSAuthDeletePersistentAuthOptions, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::NewProp_options_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthDeletePersistentAuth_eventEOSAuthDeletePersistentAuthAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Auth|Async" },
		{ "Comment", "/**\n    * Deletes a previously received and locally stored persistent auth access token for the currently logged in user of the local device.\n    *\n    * On Desktop and Mobile platforms, the access token is deleted from the keychain of the local user and a backend request is made to revoke the token on the authentication server.\n    * On Console platforms, even though the caller is responsible for storing and deleting the access token on the local device,\n    * this function should still be called with the access token before its deletion to make the best effort in attempting to also revoke it on the authentication server.\n    * If the function would fail on Console, the caller should still proceed as normal to delete the access token locally as intended.\n    *\n    * @param options          structure containing operation input parameters\n    * @param clientData       arbitrary data that is passed back to you in the CompletionDelegate\n    * @param callback         a callback that is fired when the deletion operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "Deletes a previously received and locally stored persistent auth access token for the currently logged in user of the local device.\n\nOn Desktop and Mobile platforms, the access token is deleted from the keychain of the local user and a backend request is made to revoke the token on the authentication server.\nOn Console platforms, even though the caller is responsible for storing and deleting the access token on the local device,\nthis function should still be called with the access token before its deletion to make the best effort in attempting to also revoke it on the authentication server.\nIf the function would fail on Console, the caller should still proceed as normal to delete the access token locally as intended.\n\n@param options          structure containing operation input parameters\n@param clientData       arbitrary data that is passed back to you in the CompletionDelegate\n@param callback         a callback that is fired when the deletion operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth, nullptr, "EOSAuthDeletePersistentAuthAsync", nullptr, nullptr, sizeof(EOSCoreAuthDeletePersistentAuth_eventEOSAuthDeletePersistentAuthAsync_Parms), Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics
	{
		struct EOSCoreAuthDeletePersistentAuth_eventHandleCallback_Parms
		{
			FEOSAuthDeletePersistentAuthCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreAuthDeletePersistentAuth_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreAuthDeletePersistentAuth_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthDeletePersistentAuth_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSAuthDeletePersistentAuthCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreAuthDeletePersistentAuth_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_NoRegister()
	{
		return UEOSCoreAuthDeletePersistentAuth::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync, "EOSAuthDeletePersistentAuthAsync" }, // 2715501163
		{ &Z_Construct_UFunction_UEOSCoreAuthDeletePersistentAuth_HandleCallback, "HandleCallback" }, // 1565608919
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreAuthDeletePersistentAuth\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Auth/EOSAuthAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreAuthDeletePersistentAuth\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreAuthDeletePersistentAuth, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthDeletePersistentAuthCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreAuthDeletePersistentAuth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::ClassParams = {
		&UEOSCoreAuthDeletePersistentAuth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreAuthDeletePersistentAuth, 1212094539);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreAuthDeletePersistentAuth>()
	{
		return UEOSCoreAuthDeletePersistentAuth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreAuthDeletePersistentAuth(Z_Construct_UClass_UEOSCoreAuthDeletePersistentAuth, &UEOSCoreAuthDeletePersistentAuth::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreAuthDeletePersistentAuth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreAuthDeletePersistentAuth);
	DEFINE_FUNCTION(UEOSCoreAuthVerifyUserAuth::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSAuthVerifyUserAuthCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreAuthVerifyUserAuth::execEOSAuthVerifyUserAuthAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSAuthVerifyUserAuthOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreAuthVerifyUserAuth**)Z_Param__Result=UEOSCoreAuthVerifyUserAuth::EOSAuthVerifyUserAuthAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreAuthVerifyUserAuth::StaticRegisterNativesUEOSCoreAuthVerifyUserAuth()
	{
		UClass* Class = UEOSCoreAuthVerifyUserAuth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAuthVerifyUserAuthAsync", &UEOSCoreAuthVerifyUserAuth::execEOSAuthVerifyUserAuthAsync },
			{ "HandleCallback", &UEOSCoreAuthVerifyUserAuth::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics
	{
		struct EOSCoreAuthVerifyUserAuth_eventEOSAuthVerifyUserAuthAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSAuthVerifyUserAuthOptions options;
			UEOSCoreAuthVerifyUserAuth* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthVerifyUserAuth_eventEOSAuthVerifyUserAuthAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthVerifyUserAuth_eventEOSAuthVerifyUserAuthAsync_Parms, options), Z_Construct_UScriptStruct_FEOSAuthVerifyUserAuthOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthVerifyUserAuth_eventEOSAuthVerifyUserAuthAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Auth|Async" },
		{ "Comment", "/**\n     * Contact the backend service to verify validity of an existing user auth token.\n     * This function is intended for server-side use only.\n     *\n     * @param options       structure containing information about the auth token being verified\n     * @param clientData    arbitrary data that is passed back to you in the CompletionDelegate\n     * @param callback      a callback that is fired when the logout operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "Contact the backend service to verify validity of an existing user auth token.\nThis function is intended for server-side use only.\n\n@param options       structure containing information about the auth token being verified\n@param clientData    arbitrary data that is passed back to you in the CompletionDelegate\n@param callback      a callback that is fired when the logout operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth, nullptr, "EOSAuthVerifyUserAuthAsync", nullptr, nullptr, sizeof(EOSCoreAuthVerifyUserAuth_eventEOSAuthVerifyUserAuthAsync_Parms), Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics
	{
		struct EOSCoreAuthVerifyUserAuth_eventHandleCallback_Parms
		{
			FEOSAuthVerifyUserAuthCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreAuthVerifyUserAuth_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreAuthVerifyUserAuth_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreAuthVerifyUserAuth_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSAuthVerifyUserAuthCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreAuthVerifyUserAuth_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_NoRegister()
	{
		return UEOSCoreAuthVerifyUserAuth::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync, "EOSAuthVerifyUserAuthAsync" }, // 1411187390
		{ &Z_Construct_UFunction_UEOSCoreAuthVerifyUserAuth_HandleCallback, "HandleCallback" }, // 519286990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreAuthVerifyUserAuth\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Auth/EOSAuthAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreAuthVerifyUserAuth\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Auth/EOSAuthAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreAuthVerifyUserAuth, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthVerifyUserAuthCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreAuthVerifyUserAuth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::ClassParams = {
		&UEOSCoreAuthVerifyUserAuth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreAuthVerifyUserAuth, 48241506);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreAuthVerifyUserAuth>()
	{
		return UEOSCoreAuthVerifyUserAuth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreAuthVerifyUserAuth(Z_Construct_UClass_UEOSCoreAuthVerifyUserAuth, &UEOSCoreAuthVerifyUserAuth::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreAuthVerifyUserAuth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreAuthVerifyUserAuth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
