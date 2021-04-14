// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEOSCore/Public/Network/EOSCoreNetConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCoreNetConnection() {}
// Cross Module References
	ONLINESUBSYSTEMEOSCORE_API UClass* Z_Construct_UClass_UEOSNetConnection_NoRegister();
	ONLINESUBSYSTEMEOSCORE_API UClass* Z_Construct_UClass_UEOSNetConnection();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEOSCore();
// End Cross Module References
	void UEOSNetConnection::StaticRegisterNativesUEOSNetConnection()
	{
	}
	UClass* Z_Construct_UClass_UEOSNetConnection_NoRegister()
	{
		return UEOSNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEOSCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNetConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Network/EOSCoreNetConnection.h" },
		{ "ModuleRelativePath", "Public/Network/EOSCoreNetConnection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNetConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNetConnection_Statics::ClassParams = {
		&UEOSNetConnection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSNetConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNetConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNetConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNetConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNetConnection, 4073701041);
	template<> ONLINESUBSYSTEMEOSCORE_API UClass* StaticClass<UEOSNetConnection>()
	{
		return UEOSNetConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNetConnection(Z_Construct_UClass_UEOSNetConnection, &UEOSNetConnection::StaticClass, TEXT("/Script/OnlineSubsystemEOSCore"), TEXT("UEOSNetConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNetConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
