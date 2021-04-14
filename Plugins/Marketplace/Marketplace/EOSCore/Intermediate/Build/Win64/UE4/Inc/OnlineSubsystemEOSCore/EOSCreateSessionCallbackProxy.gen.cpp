// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEOSCore/Classes/EOSCreateSessionCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCreateSessionCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMEOSCORE_API UClass* Z_Construct_UClass_UEOSCreateSessionCallbackProxy_NoRegister();
	ONLINESUBSYSTEMEOSCORE_API UClass* Z_Construct_UClass_UEOSCreateSessionCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEOSCore();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCreateSessionCallbackProxy::execCreateEOSCoreSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_publicConnections);
		P_GET_UBOOL(Z_Param_allowJoinInProgress);
		P_GET_UBOOL(Z_Param_allowInvites);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCreateSessionCallbackProxy**)Z_Param__Result=UEOSCreateSessionCallbackProxy::CreateEOSCoreSession(Z_Param_sessionName,Z_Param_publicConnections,Z_Param_allowJoinInProgress,Z_Param_allowInvites);
		P_NATIVE_END;
	}
	void UEOSCreateSessionCallbackProxy::StaticRegisterNativesUEOSCreateSessionCallbackProxy()
	{
		UClass* Class = UEOSCreateSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateEOSCoreSession", &UEOSCreateSessionCallbackProxy::execCreateEOSCoreSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics
	{
		struct EOSCreateSessionCallbackProxy_eventCreateEOSCoreSession_Parms
		{
			FString sessionName;
			int32 publicConnections;
			bool allowJoinInProgress;
			bool allowInvites;
			UEOSCreateSessionCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_allowInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allowInvites;
		static void NewProp_allowJoinInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allowJoinInProgress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_publicConnections;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCreateSessionCallbackProxy_eventCreateEOSCoreSession_Parms, ReturnValue), Z_Construct_UClass_UEOSCreateSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_allowInvites_SetBit(void* Obj)
	{
		((EOSCreateSessionCallbackProxy_eventCreateEOSCoreSession_Parms*)Obj)->allowInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_allowInvites = { "allowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCreateSessionCallbackProxy_eventCreateEOSCoreSession_Parms), &Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_allowInvites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_allowJoinInProgress_SetBit(void* Obj)
	{
		((EOSCreateSessionCallbackProxy_eventCreateEOSCoreSession_Parms*)Obj)->allowJoinInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_allowJoinInProgress = { "allowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCreateSessionCallbackProxy_eventCreateEOSCoreSession_Parms), &Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_allowJoinInProgress_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_publicConnections = { "publicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCreateSessionCallbackProxy_eventCreateEOSCoreSession_Parms, publicConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCreateSessionCallbackProxy_eventCreateEOSCoreSession_Parms, sessionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_allowInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_allowJoinInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_publicConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::NewProp_sessionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|Session" },
		{ "CPP_Default_allowInvites", "true" },
		{ "CPP_Default_allowJoinInProgress", "true" },
		{ "ModuleRelativePath", "Classes/EOSCreateSessionCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCreateSessionCallbackProxy, nullptr, "CreateEOSCoreSession", nullptr, nullptr, sizeof(EOSCreateSessionCallbackProxy_eventCreateEOSCoreSession_Parms), Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCreateSessionCallbackProxy_NoRegister()
	{
		return UEOSCreateSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCreateSessionCallbackProxy_CreateEOSCoreSession, "CreateEOSCoreSession" }, // 662379412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EOSCreateSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/EOSCreateSessionCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EOSCreateSessionCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCreateSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EOSCreateSessionCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCreateSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCreateSessionCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::ClassParams = {
		&UEOSCreateSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCreateSessionCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCreateSessionCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCreateSessionCallbackProxy, 234918913);
	template<> ONLINESUBSYSTEMEOSCORE_API UClass* StaticClass<UEOSCreateSessionCallbackProxy>()
	{
		return UEOSCreateSessionCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCreateSessionCallbackProxy(Z_Construct_UClass_UEOSCreateSessionCallbackProxy, &UEOSCreateSessionCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemEOSCore"), TEXT("UEOSCreateSessionCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCreateSessionCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
