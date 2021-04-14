// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Friends/EOSFriendsAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSFriendsAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreFriendsQueryFriends_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreFriendsQueryFriends();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsQueryFriendsOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsQueryFriendsCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsQueryFriendsCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreFriendsSendInvite_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreFriendsSendInvite();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsSendInviteOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsSendInviteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsSendInviteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreFriendsAcceptInvite();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsAcceptInviteOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsAcceptInviteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsAcceptInviteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreFriendsRejectInvite_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreFriendsRejectInvite();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsRejectInviteOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsRejectInviteCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsRejectInviteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreFriendsQueryFriends::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSFriendsQueryFriendsCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreFriendsQueryFriends::execEOSFriendsQueryFriendsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSFriendsQueryFriendsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreFriendsQueryFriends**)Z_Param__Result=UEOSCoreFriendsQueryFriends::EOSFriendsQueryFriendsAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreFriendsQueryFriends::StaticRegisterNativesUEOSCoreFriendsQueryFriends()
	{
		UClass* Class = UEOSCoreFriendsQueryFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSFriendsQueryFriendsAsync", &UEOSCoreFriendsQueryFriends::execEOSFriendsQueryFriendsAsync },
			{ "HandleCallback", &UEOSCoreFriendsQueryFriends::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics
	{
		struct EOSCoreFriendsQueryFriends_eventEOSFriendsQueryFriendsAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSFriendsQueryFriendsOptions options;
			UEOSCoreFriendsQueryFriends* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsQueryFriends_eventEOSFriendsQueryFriendsAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreFriendsQueryFriends_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsQueryFriends_eventEOSFriendsQueryFriendsAsync_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsQueryFriendsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsQueryFriends_eventEOSFriendsQueryFriendsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Starts an asynchronous task that reads the user's friends list from the backend service, caching it for future use.\n\x09*\n\x09* @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n\x09*\n\x09* @param Options structure containing the account for which to retrieve the friends list\n\x09* @param ClientData arbitrary data that is passed back to you in the callback\n\x09* @param callback a callback that is fired when the async operation completes, either successfully or in error\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
		{ "ToolTip", "Starts an asynchronous task that reads the user's friends list from the backend service, caching it for future use.\n\n@note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n\n@param Options structure containing the account for which to retrieve the friends list\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreFriendsQueryFriends, nullptr, "EOSFriendsQueryFriendsAsync", nullptr, nullptr, sizeof(EOSCoreFriendsQueryFriends_eventEOSFriendsQueryFriendsAsync_Parms), Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics
	{
		struct EOSCoreFriendsQueryFriends_eventHandleCallback_Parms
		{
			FEOSFriendsQueryFriendsCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreFriendsQueryFriends_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreFriendsQueryFriends_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsQueryFriends_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSFriendsQueryFriendsCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreFriendsQueryFriends, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreFriendsQueryFriends_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreFriendsQueryFriends_NoRegister()
	{
		return UEOSCoreFriendsQueryFriends::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync, "EOSFriendsQueryFriendsAsync" }, // 3629934384
		{ &Z_Construct_UFunction_UEOSCoreFriendsQueryFriends_HandleCallback, "HandleCallback" }, // 526884602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreFriendsQueryFriends\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Friends/EOSFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreFriendsQueryFriends\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreFriendsQueryFriends, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnFriendsQueryFriendsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreFriendsQueryFriends>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::ClassParams = {
		&UEOSCoreFriendsQueryFriends::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreFriendsQueryFriends()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreFriendsQueryFriends_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreFriendsQueryFriends, 3226677739);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreFriendsQueryFriends>()
	{
		return UEOSCoreFriendsQueryFriends::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreFriendsQueryFriends(Z_Construct_UClass_UEOSCoreFriendsQueryFriends, &UEOSCoreFriendsQueryFriends::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreFriendsQueryFriends"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreFriendsQueryFriends);
	DEFINE_FUNCTION(UEOSCoreFriendsSendInvite::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSFriendsSendInviteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreFriendsSendInvite::execEOSFriendsSendInviteAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSFriendsSendInviteOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreFriendsSendInvite**)Z_Param__Result=UEOSCoreFriendsSendInvite::EOSFriendsSendInviteAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreFriendsSendInvite::StaticRegisterNativesUEOSCoreFriendsSendInvite()
	{
		UClass* Class = UEOSCoreFriendsSendInvite::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSFriendsSendInviteAsync", &UEOSCoreFriendsSendInvite::execEOSFriendsSendInviteAsync },
			{ "HandleCallback", &UEOSCoreFriendsSendInvite::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics
	{
		struct EOSCoreFriendsSendInvite_eventEOSFriendsSendInviteAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSFriendsSendInviteOptions options;
			UEOSCoreFriendsSendInvite* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsSendInvite_eventEOSFriendsSendInviteAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreFriendsSendInvite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsSendInvite_eventEOSFriendsSendInviteAsync_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsSendInviteOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsSendInvite_eventEOSFriendsSendInviteAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Starts an asynchronous task that sends a friend invitation to another user. The completion delegate is executed after the backend response has been received.\n\x09* It does not indicate that the target user has responded to the friend invitation.\n\x09*\n\x09* @param Options structure containing the account to send the invite from and the account to send the invite to\n\x09* @param ClientData arbitrary data that is passed back to you in the callback\n\x09* @param callback a callback that is fired when the async operation completes, either successfully or in error\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
		{ "ToolTip", "Starts an asynchronous task that sends a friend invitation to another user. The completion delegate is executed after the backend response has been received.\nIt does not indicate that the target user has responded to the friend invitation.\n\n@param Options structure containing the account to send the invite from and the account to send the invite to\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreFriendsSendInvite, nullptr, "EOSFriendsSendInviteAsync", nullptr, nullptr, sizeof(EOSCoreFriendsSendInvite_eventEOSFriendsSendInviteAsync_Parms), Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics
	{
		struct EOSCoreFriendsSendInvite_eventHandleCallback_Parms
		{
			FEOSFriendsSendInviteCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreFriendsSendInvite_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreFriendsSendInvite_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsSendInvite_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSFriendsSendInviteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreFriendsSendInvite, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreFriendsSendInvite_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreFriendsSendInvite_NoRegister()
	{
		return UEOSCoreFriendsSendInvite::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync, "EOSFriendsSendInviteAsync" }, // 2326984402
		{ &Z_Construct_UFunction_UEOSCoreFriendsSendInvite_HandleCallback, "HandleCallback" }, // 714903944
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreFriendsSendInvite\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Friends/EOSFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreFriendsSendInvite\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreFriendsSendInvite, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnFriendsSendInviteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreFriendsSendInvite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::ClassParams = {
		&UEOSCoreFriendsSendInvite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreFriendsSendInvite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreFriendsSendInvite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreFriendsSendInvite, 3559674918);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreFriendsSendInvite>()
	{
		return UEOSCoreFriendsSendInvite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreFriendsSendInvite(Z_Construct_UClass_UEOSCoreFriendsSendInvite, &UEOSCoreFriendsSendInvite::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreFriendsSendInvite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreFriendsSendInvite);
	DEFINE_FUNCTION(UEOSCoreFriendsAcceptInvite::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSFriendsAcceptInviteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreFriendsAcceptInvite::execEOSFriendsAcceptInviteAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSFriendsAcceptInviteOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreFriendsAcceptInvite**)Z_Param__Result=UEOSCoreFriendsAcceptInvite::EOSFriendsAcceptInviteAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreFriendsAcceptInvite::StaticRegisterNativesUEOSCoreFriendsAcceptInvite()
	{
		UClass* Class = UEOSCoreFriendsAcceptInvite::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSFriendsAcceptInviteAsync", &UEOSCoreFriendsAcceptInvite::execEOSFriendsAcceptInviteAsync },
			{ "HandleCallback", &UEOSCoreFriendsAcceptInvite::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics
	{
		struct EOSCoreFriendsAcceptInvite_eventEOSFriendsAcceptInviteAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSFriendsAcceptInviteOptions options;
			UEOSCoreFriendsAcceptInvite* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsAcceptInvite_eventEOSFriendsAcceptInviteAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsAcceptInvite_eventEOSFriendsAcceptInviteAsync_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsAcceptInviteOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsAcceptInvite_eventEOSFriendsAcceptInviteAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Starts an asynchronous task that accepts a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n\x09*\n\x09* @param Options structure containing the logged in account and the inviting account\n\x09* @param ClientData arbitrary data that is passed back to you in the callback\n\x09* @param callback a callback that is fired when the async operation completes, either successfully or in error\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
		{ "ToolTip", "Starts an asynchronous task that accepts a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n\n@param Options structure containing the logged in account and the inviting account\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreFriendsAcceptInvite, nullptr, "EOSFriendsAcceptInviteAsync", nullptr, nullptr, sizeof(EOSCoreFriendsAcceptInvite_eventEOSFriendsAcceptInviteAsync_Parms), Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics
	{
		struct EOSCoreFriendsAcceptInvite_eventHandleCallback_Parms
		{
			FEOSFriendsAcceptInviteCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreFriendsAcceptInvite_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreFriendsAcceptInvite_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsAcceptInvite_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSFriendsAcceptInviteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreFriendsAcceptInvite, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreFriendsAcceptInvite_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_NoRegister()
	{
		return UEOSCoreFriendsAcceptInvite::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync, "EOSFriendsAcceptInviteAsync" }, // 3848588140
		{ &Z_Construct_UFunction_UEOSCoreFriendsAcceptInvite_HandleCallback, "HandleCallback" }, // 4230495792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreFriendsAcceptInvite\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Friends/EOSFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreFriendsAcceptInvite\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreFriendsAcceptInvite, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnFriendsAcceptInviteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreFriendsAcceptInvite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::ClassParams = {
		&UEOSCoreFriendsAcceptInvite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreFriendsAcceptInvite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreFriendsAcceptInvite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreFriendsAcceptInvite, 2553824415);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreFriendsAcceptInvite>()
	{
		return UEOSCoreFriendsAcceptInvite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreFriendsAcceptInvite(Z_Construct_UClass_UEOSCoreFriendsAcceptInvite, &UEOSCoreFriendsAcceptInvite::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreFriendsAcceptInvite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreFriendsAcceptInvite);
	DEFINE_FUNCTION(UEOSCoreFriendsRejectInvite::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSFriendsRejectInviteCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreFriendsRejectInvite::execEOSFriendsRejectInviteAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSFriendsRejectInviteOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreFriendsRejectInvite**)Z_Param__Result=UEOSCoreFriendsRejectInvite::EOSFriendsRejectInviteAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreFriendsRejectInvite::StaticRegisterNativesUEOSCoreFriendsRejectInvite()
	{
		UClass* Class = UEOSCoreFriendsRejectInvite::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSFriendsRejectInviteAsync", &UEOSCoreFriendsRejectInvite::execEOSFriendsRejectInviteAsync },
			{ "HandleCallback", &UEOSCoreFriendsRejectInvite::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics
	{
		struct EOSCoreFriendsRejectInvite_eventEOSFriendsRejectInviteAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSFriendsRejectInviteOptions options;
			UEOSCoreFriendsRejectInvite* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsRejectInvite_eventEOSFriendsRejectInviteAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreFriendsRejectInvite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsRejectInvite_eventEOSFriendsRejectInviteAsync_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsRejectInviteOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsRejectInvite_eventEOSFriendsRejectInviteAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Starts an asynchronous task that rejects a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n\x09*\n\x09* @param Options structure containing the logged in account and the inviting account\n\x09* @param ClientData arbitrary data that is passed back to you in the callback\n\x09* @param callback a callback that is fired when the async operation completes, either successfully or in error\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
		{ "ToolTip", "Starts an asynchronous task that rejects a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n\n@param Options structure containing the logged in account and the inviting account\n@param ClientData arbitrary data that is passed back to you in the callback\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreFriendsRejectInvite, nullptr, "EOSFriendsRejectInviteAsync", nullptr, nullptr, sizeof(EOSCoreFriendsRejectInvite_eventEOSFriendsRejectInviteAsync_Parms), Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics
	{
		struct EOSCoreFriendsRejectInvite_eventHandleCallback_Parms
		{
			FEOSFriendsRejectInviteCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreFriendsRejectInvite_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreFriendsRejectInvite_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreFriendsRejectInvite_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSFriendsRejectInviteCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreFriendsRejectInvite, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreFriendsRejectInvite_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreFriendsRejectInvite_NoRegister()
	{
		return UEOSCoreFriendsRejectInvite::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync, "EOSFriendsRejectInviteAsync" }, // 1457314892
		{ &Z_Construct_UFunction_UEOSCoreFriendsRejectInvite_HandleCallback, "HandleCallback" }, // 63092072
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreFriendsRejectInvite\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Friends/EOSFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreFriendsRejectInvite\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Friends/EOSFriendsAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreFriendsRejectInvite, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnFriendsRejectInviteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreFriendsRejectInvite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::ClassParams = {
		&UEOSCoreFriendsRejectInvite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreFriendsRejectInvite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreFriendsRejectInvite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreFriendsRejectInvite, 316970373);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreFriendsRejectInvite>()
	{
		return UEOSCoreFriendsRejectInvite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreFriendsRejectInvite(Z_Construct_UClass_UEOSCoreFriendsRejectInvite, &UEOSCoreFriendsRejectInvite::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreFriendsRejectInvite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreFriendsRejectInvite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
