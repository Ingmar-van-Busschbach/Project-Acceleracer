// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEOSCore/Public/Network/EOSCoreNetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCoreNetDriver() {}
// Cross Module References
	ONLINESUBSYSTEMEOSCORE_API UClass* Z_Construct_UClass_UEOSNetDriver_NoRegister();
	ONLINESUBSYSTEMEOSCORE_API UClass* Z_Construct_UClass_UEOSNetDriver();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEOSCore();
// End Cross Module References
	void UEOSNetDriver::StaticRegisterNativesUEOSNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UEOSNetDriver_NoRegister()
	{
		return UEOSNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEOSCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNetDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Network/EOSCoreNetDriver.h" },
		{ "ModuleRelativePath", "Public/Network/EOSCoreNetDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNetDriver_Statics::ClassParams = {
		&UEOSNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UEOSNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNetDriver, 3349519107);
	template<> ONLINESUBSYSTEMEOSCORE_API UClass* StaticClass<UEOSNetDriver>()
	{
		return UEOSNetDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNetDriver(Z_Construct_UClass_UEOSNetDriver, &UEOSNetDriver::StaticClass, TEXT("/Script/OnlineSubsystemEOSCore"), TEXT("UEOSNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNetDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
