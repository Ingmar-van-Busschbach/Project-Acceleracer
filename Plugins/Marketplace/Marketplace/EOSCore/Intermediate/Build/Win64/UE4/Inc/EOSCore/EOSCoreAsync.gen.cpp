// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Core/EOSCoreAsync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCoreAsync() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
// End Cross Module References
	void UEOSCoreAsyncAction::StaticRegisterNativesUEOSCoreAsyncAction()
	{
	}
	UClass* Z_Construct_UClass_UEOSCoreAsyncAction_NoRegister()
	{
		return UEOSCoreAsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreAsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCoreAsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreAsyncAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/EOSCoreAsync.h" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreAsync.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreAsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreAsyncAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreAsyncAction_Statics::ClassParams = {
		&UEOSCoreAsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreAsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreAsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreAsyncAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreAsyncAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreAsyncAction, 1487626838);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreAsyncAction>()
	{
		return UEOSCoreAsyncAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreAsyncAction(Z_Construct_UClass_UEOSCoreAsyncAction, &UEOSCoreAsyncAction::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreAsyncAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreAsyncAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
