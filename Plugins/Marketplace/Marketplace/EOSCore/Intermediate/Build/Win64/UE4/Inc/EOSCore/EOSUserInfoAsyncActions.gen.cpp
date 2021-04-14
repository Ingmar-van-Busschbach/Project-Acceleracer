// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/UserInfo/EOSUserInfoAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserInfoAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByDisplayNameOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByDisplayNameCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByExternalAccountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByExternalAccountCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreUserInfoQueryUserInfo::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSUserInfoQueryUserInfoCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreUserInfoQueryUserInfo::execEOSUserInfoQueryUserInfoAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSUserInfoQueryUserInfoOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreUserInfoQueryUserInfo**)Z_Param__Result=UEOSCoreUserInfoQueryUserInfo::EOSUserInfoQueryUserInfoAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreUserInfoQueryUserInfo::StaticRegisterNativesUEOSCoreUserInfoQueryUserInfo()
	{
		UClass* Class = UEOSCoreUserInfoQueryUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSUserInfoQueryUserInfoAsync", &UEOSCoreUserInfoQueryUserInfo::execEOSUserInfoQueryUserInfoAsync },
			{ "HandleCallback", &UEOSCoreUserInfoQueryUserInfo::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics
	{
		struct EOSCoreUserInfoQueryUserInfo_eventEOSUserInfoQueryUserInfoAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSUserInfoQueryUserInfoOptions options;
			UEOSCoreUserInfoQueryUserInfo* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoQueryUserInfo_eventEOSUserInfoQueryUserInfoAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoQueryUserInfo_eventEOSUserInfoQueryUserInfoAsync_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoQueryUserInfo_eventEOSUserInfoQueryUserInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|UserInfo|Async" },
		{ "Comment", "/**\n    * EOS_UserInfo_QueryUserInfo is used to start an asynchronous query to retrieve information, such as display name, about another account.\n    * Once the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.\n    *\n    * @param Options structure containing the input parameters\n    * @param ClientData arbitrary data that is passed back to you in the callback\n    * @param callback a callback that is fired when the async operation completes, either successfully or in error\n    *\n    * @see EOS_UserInfo\n    * @see EOS_UserInfo_CopyUserInfo\n    * @see EOS_UserInfo_QueryUserInfoOptions\n    * @see EOS_UserInfo_OnQueryUserInfoCallback\n    */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
		{ "ToolTip", "EOS_UserInfo_QueryUserInfo is used to start an asynchronous query to retrieve information, such as display name, about another account.\nOnce the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.\n\n@param Options structure containing the input parameters\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error\n\n@see EOS_UserInfo\n@see EOS_UserInfo_CopyUserInfo\n@see EOS_UserInfo_QueryUserInfoOptions\n@see EOS_UserInfo_OnQueryUserInfoCallback" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo, nullptr, "EOSUserInfoQueryUserInfoAsync", nullptr, nullptr, sizeof(EOSCoreUserInfoQueryUserInfo_eventEOSUserInfoQueryUserInfoAsync_Parms), Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics
	{
		struct EOSCoreUserInfoQueryUserInfo_eventHandleCallback_Parms
		{
			FEOSUserInfoQueryUserInfoCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreUserInfoQueryUserInfo_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreUserInfoQueryUserInfo_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoQueryUserInfo_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreUserInfoQueryUserInfo_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_NoRegister()
	{
		return UEOSCoreUserInfoQueryUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync, "EOSUserInfoQueryUserInfoAsync" }, // 1366967230
		{ &Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfo_HandleCallback, "HandleCallback" }, // 1053499057
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreUserInfoQueryUserInfo\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "UserInfo/EOSUserInfoAsyncActions.h" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreUserInfoQueryUserInfo\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreUserInfoQueryUserInfo, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreUserInfoQueryUserInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::ClassParams = {
		&UEOSCoreUserInfoQueryUserInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreUserInfoQueryUserInfo, 834804608);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreUserInfoQueryUserInfo>()
	{
		return UEOSCoreUserInfoQueryUserInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreUserInfoQueryUserInfo(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfo, &UEOSCoreUserInfoQueryUserInfo::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreUserInfoQueryUserInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreUserInfoQueryUserInfo);
	DEFINE_FUNCTION(UEOSCoreUserInfoQueryUserInfoByDisplayName::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreUserInfoQueryUserInfoByDisplayName::execEOSUserInfoQueryUserInfoByDisplayNameAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSUserInfoQueryUserInfoByDisplayNameOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreUserInfoQueryUserInfoByDisplayName**)Z_Param__Result=UEOSCoreUserInfoQueryUserInfoByDisplayName::EOSUserInfoQueryUserInfoByDisplayNameAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreUserInfoQueryUserInfoByDisplayName::StaticRegisterNativesUEOSCoreUserInfoQueryUserInfoByDisplayName()
	{
		UClass* Class = UEOSCoreUserInfoQueryUserInfoByDisplayName::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSUserInfoQueryUserInfoByDisplayNameAsync", &UEOSCoreUserInfoQueryUserInfoByDisplayName::execEOSUserInfoQueryUserInfoByDisplayNameAsync },
			{ "HandleCallback", &UEOSCoreUserInfoQueryUserInfoByDisplayName::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics
	{
		struct EOSCoreUserInfoQueryUserInfoByDisplayName_eventEOSUserInfoQueryUserInfoByDisplayNameAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSUserInfoQueryUserInfoByDisplayNameOptions options;
			UEOSCoreUserInfoQueryUserInfoByDisplayName* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoQueryUserInfoByDisplayName_eventEOSUserInfoQueryUserInfoByDisplayNameAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoQueryUserInfoByDisplayName_eventEOSUserInfoQueryUserInfoByDisplayNameAsync_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByDisplayNameOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoQueryUserInfoByDisplayName_eventEOSUserInfoQueryUserInfoByDisplayNameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|UserInfo|Async" },
		{ "Comment", "/**\n     * EOS_UserInfo_QueryUserInfoByDisplayName is used to start an asynchronous query to retrieve user information by display name. This can be useful for getting the EOS_EpicAccountId for a display name.\n     * Once the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.\n     *\n     * @param Options structure containing the input parameters\n     * @param ClientData arbitrary data that is passed back to you in the callback\n     * @param callback a callback that is fired when the async operation completes, either successfully or in error\n     *\n     * @see EOS_UserInfo\n     * @see EOS_UserInfo_CopyUserInfo\n     * @see EOS_UserInfo_QueryUserInfoByDisplayNameOptions\n     * @see EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback\n     */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
		{ "ToolTip", "EOS_UserInfo_QueryUserInfoByDisplayName is used to start an asynchronous query to retrieve user information by display name. This can be useful for getting the EOS_EpicAccountId for a display name.\nOnce the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.\n\n@param Options structure containing the input parameters\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error\n\n@see EOS_UserInfo\n@see EOS_UserInfo_CopyUserInfo\n@see EOS_UserInfo_QueryUserInfoByDisplayNameOptions\n@see EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName, nullptr, "EOSUserInfoQueryUserInfoByDisplayNameAsync", nullptr, nullptr, sizeof(EOSCoreUserInfoQueryUserInfoByDisplayName_eventEOSUserInfoQueryUserInfoByDisplayNameAsync_Parms), Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics
	{
		struct EOSCoreUserInfoQueryUserInfoByDisplayName_eventHandleCallback_Parms
		{
			FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreUserInfoQueryUserInfoByDisplayName_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreUserInfoQueryUserInfoByDisplayName_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoQueryUserInfoByDisplayName_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreUserInfoQueryUserInfoByDisplayName_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_NoRegister()
	{
		return UEOSCoreUserInfoQueryUserInfoByDisplayName::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync, "EOSUserInfoQueryUserInfoByDisplayNameAsync" }, // 3599296837
		{ &Z_Construct_UFunction_UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback, "HandleCallback" }, // 1170377984
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreUserInfoQueryUserInfoByDisplayName\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "UserInfo/EOSUserInfoAsyncActions.h" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreUserInfoQueryUserInfoByDisplayName\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreUserInfoQueryUserInfoByDisplayName, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByDisplayNameCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreUserInfoQueryUserInfoByDisplayName>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::ClassParams = {
		&UEOSCoreUserInfoQueryUserInfoByDisplayName::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreUserInfoQueryUserInfoByDisplayName, 3424429437);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreUserInfoQueryUserInfoByDisplayName>()
	{
		return UEOSCoreUserInfoQueryUserInfoByDisplayName::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName(Z_Construct_UClass_UEOSCoreUserInfoQueryUserInfoByDisplayName, &UEOSCoreUserInfoQueryUserInfoByDisplayName::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreUserInfoQueryUserInfoByDisplayName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreUserInfoQueryUserInfoByDisplayName);
	DEFINE_FUNCTION(UEOSCoreUserInfoByExternalAccount::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreUserInfoByExternalAccount::execEOSUserInfoQueryUserInfoByExternalAccountAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSUserInfoQueryUserInfoByExternalAccountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreUserInfoByExternalAccount**)Z_Param__Result=UEOSCoreUserInfoByExternalAccount::EOSUserInfoQueryUserInfoByExternalAccountAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreUserInfoByExternalAccount::StaticRegisterNativesUEOSCoreUserInfoByExternalAccount()
	{
		UClass* Class = UEOSCoreUserInfoByExternalAccount::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSUserInfoQueryUserInfoByExternalAccountAsync", &UEOSCoreUserInfoByExternalAccount::execEOSUserInfoQueryUserInfoByExternalAccountAsync },
			{ "HandleCallback", &UEOSCoreUserInfoByExternalAccount::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics
	{
		struct EOSCoreUserInfoByExternalAccount_eventEOSUserInfoQueryUserInfoByExternalAccountAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSUserInfoQueryUserInfoByExternalAccountOptions options;
			UEOSCoreUserInfoByExternalAccount* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoByExternalAccount_eventEOSUserInfoQueryUserInfoByExternalAccountAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoByExternalAccount_eventEOSUserInfoQueryUserInfoByExternalAccountAsync_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByExternalAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoByExternalAccount_eventEOSUserInfoQueryUserInfoByExternalAccountAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|UserInfo|Async" },
		{ "Comment", "/**\n\x09 * EOS_UserInfo_QueryUserInfoByExternalAccount is used to start an asynchronous query to retrieve user information by external accounts.\n\x09 * This can be useful for getting the EOS_EpicAccountIds for external accounts.\n\x09 * Once the callback has been fired with a successful ResultCode, it is possible to call CopyUserInfo to receive an EOS_UserInfo containing the available information.\n\x09 *\n\x09 * @param Options structure containing the input parameters\n\x09 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n\x09 * @param CompletionDelegate a callback that is fired when the async operation completes, either successfully or in error\n\x09 *\n\x09 * @see EOS_UserInfo\n\x09 * @see EOS_UserInfo_QueryUserInfoByExternalAccountOptions\n\x09 * @see EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
		{ "ToolTip", "EOS_UserInfo_QueryUserInfoByExternalAccount is used to start an asynchronous query to retrieve user information by external accounts.\nThis can be useful for getting the EOS_EpicAccountIds for external accounts.\nOnce the callback has been fired with a successful ResultCode, it is possible to call CopyUserInfo to receive an EOS_UserInfo containing the available information.\n\n@param Options structure containing the input parameters\n@param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate a callback that is fired when the async operation completes, either successfully or in error\n\n@see EOS_UserInfo\n@see EOS_UserInfo_QueryUserInfoByExternalAccountOptions\n@see EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount, nullptr, "EOSUserInfoQueryUserInfoByExternalAccountAsync", nullptr, nullptr, sizeof(EOSCoreUserInfoByExternalAccount_eventEOSUserInfoQueryUserInfoByExternalAccountAsync_Parms), Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics
	{
		struct EOSCoreUserInfoByExternalAccount_eventHandleCallback_Parms
		{
			FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreUserInfoByExternalAccount_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreUserInfoByExternalAccount_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreUserInfoByExternalAccount_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreUserInfoByExternalAccount_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_NoRegister()
	{
		return UEOSCoreUserInfoByExternalAccount::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync, "EOSUserInfoQueryUserInfoByExternalAccountAsync" }, // 302506225
		{ &Z_Construct_UFunction_UEOSCoreUserInfoByExternalAccount_HandleCallback, "HandleCallback" }, // 1578968781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreUserInfoByExternalAccount\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "UserInfo/EOSUserInfoAsyncActions.h" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreUserInfoByExternalAccount\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfoAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreUserInfoByExternalAccount, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByExternalAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreUserInfoByExternalAccount>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::ClassParams = {
		&UEOSCoreUserInfoByExternalAccount::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreUserInfoByExternalAccount, 659241598);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreUserInfoByExternalAccount>()
	{
		return UEOSCoreUserInfoByExternalAccount::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreUserInfoByExternalAccount(Z_Construct_UClass_UEOSCoreUserInfoByExternalAccount, &UEOSCoreUserInfoByExternalAccount::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreUserInfoByExternalAccount"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreUserInfoByExternalAccount);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
