// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEOSCore/Public/Utilities/EOSSubsystemHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSubsystemHelpers() {}
// Cross Module References
	ONLINESUBSYSTEMEOSCORE_API UClass* Z_Construct_UClass_UEOSSubsystemHelpers_NoRegister();
	ONLINESUBSYSTEMEOSCORE_API UClass* Z_Construct_UClass_UEOSSubsystemHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEOSCore();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSubsystemHelpers::execCreateSessionResultFromUiEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_eventId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintSessionResult*)Z_Param__Result=UEOSSubsystemHelpers::CreateSessionResultFromUiEvent(Z_Param_eventId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSubsystemHelpers::execCreateSessionResultFromInviteId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_inviteId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintSessionResult*)Z_Param__Result=UEOSSubsystemHelpers::CreateSessionResultFromInviteId(Z_Param_inviteId);
		P_NATIVE_END;
	}
	void UEOSSubsystemHelpers::StaticRegisterNativesUEOSSubsystemHelpers()
	{
		UClass* Class = UEOSSubsystemHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSessionResultFromInviteId", &UEOSSubsystemHelpers::execCreateSessionResultFromInviteId },
			{ "CreateSessionResultFromUiEvent", &UEOSSubsystemHelpers::execCreateSessionResultFromUiEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics
	{
		struct EOSSubsystemHelpers_eventCreateSessionResultFromInviteId_Parms
		{
			FString inviteId;
			FBlueprintSessionResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inviteId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSubsystemHelpers_eventCreateSessionResultFromInviteId_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::NewProp_inviteId = { "inviteId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSubsystemHelpers_eventCreateSessionResultFromInviteId_Parms, inviteId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::NewProp_inviteId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "ModuleRelativePath", "Public/Utilities/EOSSubsystemHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSubsystemHelpers, nullptr, "CreateSessionResultFromInviteId", nullptr, nullptr, sizeof(EOSSubsystemHelpers_eventCreateSessionResultFromInviteId_Parms), Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics
	{
		struct EOSSubsystemHelpers_eventCreateSessionResultFromUiEvent_Parms
		{
			FString eventId;
			FBlueprintSessionResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_eventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSubsystemHelpers_eventCreateSessionResultFromUiEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::NewProp_eventId = { "eventId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSubsystemHelpers_eventCreateSessionResultFromUiEvent_Parms, eventId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::NewProp_eventId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "ModuleRelativePath", "Public/Utilities/EOSSubsystemHelpers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSubsystemHelpers, nullptr, "CreateSessionResultFromUiEvent", nullptr, nullptr, sizeof(EOSSubsystemHelpers_eventCreateSessionResultFromUiEvent_Parms), Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSubsystemHelpers_NoRegister()
	{
		return UEOSSubsystemHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSubsystemHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSubsystemHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSubsystemHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromInviteId, "CreateSessionResultFromInviteId" }, // 3041738462
		{ &Z_Construct_UFunction_UEOSSubsystemHelpers_CreateSessionResultFromUiEvent, "CreateSessionResultFromUiEvent" }, // 2922884219
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSubsystemHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/EOSSubsystemHelpers.h" },
		{ "ModuleRelativePath", "Public/Utilities/EOSSubsystemHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSubsystemHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSubsystemHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSubsystemHelpers_Statics::ClassParams = {
		&UEOSSubsystemHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSubsystemHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSubsystemHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSubsystemHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSubsystemHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSubsystemHelpers, 3177505738);
	template<> ONLINESUBSYSTEMEOSCORE_API UClass* StaticClass<UEOSSubsystemHelpers>()
	{
		return UEOSSubsystemHelpers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSubsystemHelpers(Z_Construct_UClass_UEOSSubsystemHelpers, &UEOSSubsystemHelpers::StaticClass, TEXT("/Script/OnlineSubsystemEOSCore"), TEXT("UEOSSubsystemHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSubsystemHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
