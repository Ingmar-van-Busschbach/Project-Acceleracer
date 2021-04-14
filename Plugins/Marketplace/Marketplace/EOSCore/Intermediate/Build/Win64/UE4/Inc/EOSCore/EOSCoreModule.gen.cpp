// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/EOSCoreModule.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCoreModule() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
// End Cross Module References
	void UEOSCoreSubsystem::StaticRegisterNativesUEOSCoreSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UEOSCoreSubsystem_NoRegister()
	{
		return UEOSCoreSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCoreSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EOSCoreModule.h" },
		{ "ModuleRelativePath", "Public/EOSCoreModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreSubsystem_Statics::ClassParams = {
		&UEOSCoreSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreSubsystem, 223147715);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreSubsystem>()
	{
		return UEOSCoreSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreSubsystem(Z_Construct_UClass_UEOSCoreSubsystem, &UEOSCoreSubsystem::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
