// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Metrics/EOSMetricsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSMetricsTypes() {}
// Cross Module References
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSEMetricsAccountIdType();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSEUserControllerType();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEpicAccountId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions();
// End Cross Module References
	static UEnum* EEOSEMetricsAccountIdType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_EEOSEMetricsAccountIdType, Z_Construct_UPackage__Script_EOSCore(), TEXT("EEOSEMetricsAccountIdType"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<EEOSEMetricsAccountIdType>()
	{
		return EEOSEMetricsAccountIdType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSEMetricsAccountIdType(EEOSEMetricsAccountIdType_StaticEnum, TEXT("/Script/EOSCore"), TEXT("EEOSEMetricsAccountIdType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_EEOSEMetricsAccountIdType_Hash() { return 2625914510U; }
	UEnum* Z_Construct_UEnum_EOSCore_EEOSEMetricsAccountIdType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSEMetricsAccountIdType"), 0, Get_Z_Construct_UEnum_EOSCore_EEOSEMetricsAccountIdType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSEMetricsAccountIdType::EOS_MAIT_Epic", (int64)EEOSEMetricsAccountIdType::EOS_MAIT_Epic },
				{ "EEOSEMetricsAccountIdType::EOS_MAIT_External", (int64)EEOSEMetricsAccountIdType::EOS_MAIT_External },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Account ID type for EOS_Metrics_BeginPlayerSession and EOS_Metrics_EndPlayerSession. */" },
				{ "EOS_MAIT_Epic.Comment", "/** An Epic Online Services Account ID. */" },
				{ "EOS_MAIT_Epic.Name", "EEOSEMetricsAccountIdType::EOS_MAIT_Epic" },
				{ "EOS_MAIT_Epic.ToolTip", "An Epic Online Services Account ID." },
				{ "EOS_MAIT_External.Comment", "/** An external service Account ID. */" },
				{ "EOS_MAIT_External.Name", "EEOSEMetricsAccountIdType::EOS_MAIT_External" },
				{ "EOS_MAIT_External.ToolTip", "An external service Account ID." },
				{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
				{ "ToolTip", "Account ID type for EOS_Metrics_BeginPlayerSession and EOS_Metrics_EndPlayerSession." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"EEOSEMetricsAccountIdType",
				"EEOSEMetricsAccountIdType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEOSEUserControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_EEOSEUserControllerType, Z_Construct_UPackage__Script_EOSCore(), TEXT("EEOSEUserControllerType"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<EEOSEUserControllerType>()
	{
		return EEOSEUserControllerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSEUserControllerType(EEOSEUserControllerType_StaticEnum, TEXT("/Script/EOSCore"), TEXT("EEOSEUserControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_EEOSEUserControllerType_Hash() { return 680866638U; }
	UEnum* Z_Construct_UEnum_EOSCore_EEOSEUserControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSEUserControllerType"), 0, Get_Z_Construct_UEnum_EOSCore_EEOSEUserControllerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSEUserControllerType::EOS_UCT_Unknown", (int64)EEOSEUserControllerType::EOS_UCT_Unknown },
				{ "EEOSEUserControllerType::EOS_UCT_MouseKeyboard", (int64)EEOSEUserControllerType::EOS_UCT_MouseKeyboard },
				{ "EEOSEUserControllerType::EOS_UCT_GamepadControl", (int64)EEOSEUserControllerType::EOS_UCT_GamepadControl },
				{ "EEOSEUserControllerType::EOS_UCT_TouchControl", (int64)EEOSEUserControllerType::EOS_UCT_TouchControl },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** User game controller types. */" },
				{ "EOS_UCT_GamepadControl.Comment", "/** Gamepad controller. */" },
				{ "EOS_UCT_GamepadControl.Name", "EEOSEUserControllerType::EOS_UCT_GamepadControl" },
				{ "EOS_UCT_GamepadControl.ToolTip", "Gamepad controller." },
				{ "EOS_UCT_MouseKeyboard.Comment", "/** Mouse and keyboard controller. */" },
				{ "EOS_UCT_MouseKeyboard.Name", "EEOSEUserControllerType::EOS_UCT_MouseKeyboard" },
				{ "EOS_UCT_MouseKeyboard.ToolTip", "Mouse and keyboard controller." },
				{ "EOS_UCT_TouchControl.Comment", "/** Touch controller. */" },
				{ "EOS_UCT_TouchControl.Name", "EEOSEUserControllerType::EOS_UCT_TouchControl" },
				{ "EOS_UCT_TouchControl.ToolTip", "Touch controller." },
				{ "EOS_UCT_Unknown.Comment", "/** The game controller type is unknown. */" },
				{ "EOS_UCT_Unknown.Name", "EEOSEUserControllerType::EOS_UCT_Unknown" },
				{ "EOS_UCT_Unknown.ToolTip", "The game controller type is unknown." },
				{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
				{ "ToolTip", "User game controller types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"EEOSEUserControllerType",
				"EEOSEUserControllerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEOSMetricsEndPlayerSessionOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSMetricsEndPlayerSessionOptions"), sizeof(FEOSMetricsEndPlayerSessionOptions), Get_Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSMetricsEndPlayerSessionOptions>()
{
	return FEOSMetricsEndPlayerSessionOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions(FEOSMetricsEndPlayerSessionOptions::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSMetricsEndPlayerSessionOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSMetricsEndPlayerSessionOptions
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSMetricsEndPlayerSessionOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSMetricsEndPlayerSessionOptions")),new UScriptStruct::TCppStructOps<FEOSMetricsEndPlayerSessionOptions>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSMetricsEndPlayerSessionOptions;
	struct Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_External_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_External;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Epic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Epic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountIdType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccountIdType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccountIdType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** EndPlayerSession. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "EndPlayerSession." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSMetricsEndPlayerSessionOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_External_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** An Account ID for another service. Set this field when AccountIdType is set to EOS_MAIT_External. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "An Account ID for another service. Set this field when AccountIdType is set to EOS_MAIT_External." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_External = { "External", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsEndPlayerSessionOptions, External), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_External_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_External_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_Epic_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** An Epic Online Services Account ID. Set this field when AccountIdType is set to EOS_MAIT_Epic. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "An Epic Online Services Account ID. Set this field when AccountIdType is set to EOS_MAIT_Epic." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_Epic = { "Epic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsEndPlayerSessionOptions, Epic), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_Epic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_Epic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_AccountIdType_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** Account ID type that is set in the union. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "Account ID type that is set in the union." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_AccountIdType = { "AccountIdType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsEndPlayerSessionOptions, AccountIdType), Z_Construct_UEnum_EOSCore_EEOSEMetricsAccountIdType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_AccountIdType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_AccountIdType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_AccountIdType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_External,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_Epic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_AccountIdType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::NewProp_AccountIdType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSMetricsEndPlayerSessionOptions",
		sizeof(FEOSMetricsEndPlayerSessionOptions),
		alignof(FEOSMetricsEndPlayerSessionOptions),
		Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSMetricsEndPlayerSessionOptions"), sizeof(FEOSMetricsEndPlayerSessionOptions), Get_Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsEndPlayerSessionOptions_Hash() { return 656793907U; }
class UScriptStruct* FEOSMetricsBeginPlayerSessionOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSMetricsBeginPlayerSessionOptions"), sizeof(FEOSMetricsBeginPlayerSessionOptions), Get_Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSMetricsBeginPlayerSessionOptions>()
{
	return FEOSMetricsBeginPlayerSessionOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions(FEOSMetricsBeginPlayerSessionOptions::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSMetricsBeginPlayerSessionOptions"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSMetricsBeginPlayerSessionOptions
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSMetricsBeginPlayerSessionOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSMetricsBeginPlayerSessionOptions")),new UScriptStruct::TCppStructOps<FEOSMetricsBeginPlayerSessionOptions>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSMetricsBeginPlayerSessionOptions;
	struct Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerIp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_External_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_External;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Epic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Epic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountIdType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccountIdType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccountIdType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** BeginPlayerSession. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "BeginPlayerSession." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSMetricsBeginPlayerSessionOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_GameSessionId_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/**\n\x09 * Optional, application-defined custom match session identifier.\n\x09 *\n\x09 * The game can tag each game session with a custom session match identifier,\n\x09 * which will be shown in the played sessions listing at the user profile dashboard.\n\x09 *\n\x09 * If the identifier is not used, set to NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "Optional, application-defined custom match session identifier.\n\nThe game can tag each game session with a custom session match identifier,\nwhich will be shown in the played sessions listing at the user profile dashboard.\n\nIf the identifier is not used, set to NULL." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_GameSessionId = { "GameSessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsBeginPlayerSessionOptions, GameSessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_GameSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_GameSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ServerIp_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/**\n\x09 * IP address of the game server hosting the game session.\n\x09 * For a localhost session, set to NULL.\n\x09 *\n\x09 * Must be in either one of the following IPv4 or IPv6 string formats:\n\x09 * - \"127.0.0.1\".\n\x09 * - \"1200:0000:AB00:1234:0000:2552:7777:1313\".\n\x09 *\n\x09 * If both IPv4 and IPv6 addresses are available, use the IPv6 address.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "IP address of the game server hosting the game session.\nFor a localhost session, set to NULL.\n\nMust be in either one of the following IPv4 or IPv6 string formats:\n- \"127.0.0.1\".\n- \"1200:0000:AB00:1234:0000:2552:7777:1313\".\n\nIf both IPv4 and IPv6 addresses are available, use the IPv6 address." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ServerIp = { "ServerIp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsBeginPlayerSessionOptions, ServerIp), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ServerIp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ServerIp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ControllerType_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** The user's game controller type. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "The user's game controller type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsBeginPlayerSessionOptions, ControllerType), Z_Construct_UEnum_EOSCore_EEOSEUserControllerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ControllerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ControllerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** The in-game display name for the user as UTF-8 string. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "The in-game display name for the user as UTF-8 string." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsBeginPlayerSessionOptions, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_External_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** An Account ID for another service. Set this field when AccountIdType is set to EOS_MAIT_External. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "An Account ID for another service. Set this field when AccountIdType is set to EOS_MAIT_External." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_External = { "External", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsBeginPlayerSessionOptions, External), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_External_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_External_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_Epic_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** An Epic Online Services Account ID. Set this field when AccountIdType is set to EOS_MAIT_Epic. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "An Epic Online Services Account ID. Set this field when AccountIdType is set to EOS_MAIT_Epic." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_Epic = { "Epic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsBeginPlayerSessionOptions, Epic), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_Epic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_Epic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_AccountIdType_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** Account ID type that is set in the union. */" },
		{ "ModuleRelativePath", "Public/Metrics/EOSMetricsTypes.h" },
		{ "ToolTip", "Account ID type that is set in the union." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_AccountIdType = { "AccountIdType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSMetricsBeginPlayerSessionOptions, AccountIdType), Z_Construct_UEnum_EOSCore_EEOSEMetricsAccountIdType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_AccountIdType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_AccountIdType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_AccountIdType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_GameSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ServerIp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_External,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_Epic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_AccountIdType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::NewProp_AccountIdType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSMetricsBeginPlayerSessionOptions",
		sizeof(FEOSMetricsBeginPlayerSessionOptions),
		alignof(FEOSMetricsBeginPlayerSessionOptions),
		Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSMetricsBeginPlayerSessionOptions"), sizeof(FEOSMetricsBeginPlayerSessionOptions), Get_Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSMetricsBeginPlayerSessionOptions_Hash() { return 2060162482U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
