// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Core/EOSTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSTypes() {}
// Cross Module References
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_ESuccessFail();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSEComparisonOp();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSEAttributeType();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSELoginStatus();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSEExternalAccountType();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSELoginStatus();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSChannelType();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPageQuery();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIEventId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAccessToken();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FContinuanceToken();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLobbyId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSProductUserId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEpicAccountId();
// End Cross Module References
	static UEnum* ESuccessFail_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_ESuccessFail, Z_Construct_UPackage__Script_EOSCore(), TEXT("ESuccessFail"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<ESuccessFail>()
	{
		return ESuccessFail_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESuccessFail(ESuccessFail_StaticEnum, TEXT("/Script/EOSCore"), TEXT("ESuccessFail"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_ESuccessFail_Hash() { return 3979160753U; }
	UEnum* Z_Construct_UEnum_EOSCore_ESuccessFail()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESuccessFail"), 0, Get_Z_Construct_UEnum_EOSCore_ESuccessFail_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESuccessFail::Success", (int64)ESuccessFail::Success },
				{ "ESuccessFail::Fail", (int64)ESuccessFail::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Fail.Name", "ESuccessFail::Fail" },
				{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
				{ "Success.Name", "ESuccessFail::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"ESuccessFail",
				"ESuccessFail",
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
	static UEnum* EEOSEComparisonOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_EEOSEComparisonOp, Z_Construct_UPackage__Script_EOSCore(), TEXT("EEOSEComparisonOp"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<EEOSEComparisonOp>()
	{
		return EEOSEComparisonOp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSEComparisonOp(EEOSEComparisonOp_StaticEnum, TEXT("/Script/EOSCore"), TEXT("EEOSEComparisonOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_EEOSEComparisonOp_Hash() { return 3767120801U; }
	UEnum* Z_Construct_UEnum_EOSCore_EEOSEComparisonOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSEComparisonOp"), 0, Get_Z_Construct_UEnum_EOSCore_EEOSEComparisonOp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSEComparisonOp::EOS_CO_EQUAL", (int64)EEOSEComparisonOp::EOS_CO_EQUAL },
				{ "EEOSEComparisonOp::EOS_CO_NOTEQUAL", (int64)EEOSEComparisonOp::EOS_CO_NOTEQUAL },
				{ "EEOSEComparisonOp::EOS_CO_GREATERTHAN", (int64)EEOSEComparisonOp::EOS_CO_GREATERTHAN },
				{ "EEOSEComparisonOp::EOS_CO_GREATERTHANOREQUAL", (int64)EEOSEComparisonOp::EOS_CO_GREATERTHANOREQUAL },
				{ "EEOSEComparisonOp::EOS_CO_LESSTHAN", (int64)EEOSEComparisonOp::EOS_CO_LESSTHAN },
				{ "EEOSEComparisonOp::EOS_CO_LESSTHANOREQUAL", (int64)EEOSEComparisonOp::EOS_CO_LESSTHANOREQUAL },
				{ "EEOSEComparisonOp::EOS_CO_DISTANCE", (int64)EEOSEComparisonOp::EOS_CO_DISTANCE },
				{ "EEOSEComparisonOp::EOS_CO_ANYOF", (int64)EEOSEComparisonOp::EOS_CO_ANYOF },
				{ "EEOSEComparisonOp::EOS_CO_NOTANYOF", (int64)EEOSEComparisonOp::EOS_CO_NOTANYOF },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EOS_CO_ANYOF.Comment", "/** Value stored on the lobby/session may be any from a specified list */" },
				{ "EOS_CO_ANYOF.Name", "EEOSEComparisonOp::EOS_CO_ANYOF" },
				{ "EOS_CO_ANYOF.ToolTip", "Value stored on the lobby/session may be any from a specified list" },
				{ "EOS_CO_DISTANCE.Comment", "/** Prefer values nearest the one specified ie. abs(SearchValue-SessionValue) closest to 0 */" },
				{ "EOS_CO_DISTANCE.Name", "EEOSEComparisonOp::EOS_CO_DISTANCE" },
				{ "EOS_CO_DISTANCE.ToolTip", "Prefer values nearest the one specified ie. abs(SearchValue-SessionValue) closest to 0" },
				{ "EOS_CO_EQUAL.Comment", "/** Value must equal the one stored on the lobby/session */" },
				{ "EOS_CO_EQUAL.Name", "EEOSEComparisonOp::EOS_CO_EQUAL" },
				{ "EOS_CO_EQUAL.ToolTip", "Value must equal the one stored on the lobby/session" },
				{ "EOS_CO_GREATERTHAN.Comment", "/** Value must be strictly greater than the one stored on the lobby/session */" },
				{ "EOS_CO_GREATERTHAN.Name", "EEOSEComparisonOp::EOS_CO_GREATERTHAN" },
				{ "EOS_CO_GREATERTHAN.ToolTip", "Value must be strictly greater than the one stored on the lobby/session" },
				{ "EOS_CO_GREATERTHANOREQUAL.Comment", "/** Value must be greater than or equal to the one stored on the lobby/session */" },
				{ "EOS_CO_GREATERTHANOREQUAL.Name", "EEOSEComparisonOp::EOS_CO_GREATERTHANOREQUAL" },
				{ "EOS_CO_GREATERTHANOREQUAL.ToolTip", "Value must be greater than or equal to the one stored on the lobby/session" },
				{ "EOS_CO_LESSTHAN.Comment", "/** Value must be strictly less than the one stored on the lobby/session */" },
				{ "EOS_CO_LESSTHAN.Name", "EEOSEComparisonOp::EOS_CO_LESSTHAN" },
				{ "EOS_CO_LESSTHAN.ToolTip", "Value must be strictly less than the one stored on the lobby/session" },
				{ "EOS_CO_LESSTHANOREQUAL.Comment", "/** Value must be less than or equal to the one stored on the lobby/session */" },
				{ "EOS_CO_LESSTHANOREQUAL.Name", "EEOSEComparisonOp::EOS_CO_LESSTHANOREQUAL" },
				{ "EOS_CO_LESSTHANOREQUAL.ToolTip", "Value must be less than or equal to the one stored on the lobby/session" },
				{ "EOS_CO_NOTANYOF.Comment", "/** Value stored on the lobby/session may NOT be any from a specified list */" },
				{ "EOS_CO_NOTANYOF.Name", "EEOSEComparisonOp::EOS_CO_NOTANYOF" },
				{ "EOS_CO_NOTANYOF.ToolTip", "Value stored on the lobby/session may NOT be any from a specified list" },
				{ "EOS_CO_NOTEQUAL.Comment", "/** Value must not equal the one stored on the lobby/session */" },
				{ "EOS_CO_NOTEQUAL.Name", "EEOSEComparisonOp::EOS_CO_NOTEQUAL" },
				{ "EOS_CO_NOTEQUAL.ToolTip", "Value must not equal the one stored on the lobby/session" },
				{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"EEOSEComparisonOp",
				"EEOSEComparisonOp",
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
	static UEnum* EEOSEAttributeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_EEOSEAttributeType, Z_Construct_UPackage__Script_EOSCore(), TEXT("EEOSEAttributeType"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<EEOSEAttributeType>()
	{
		return EEOSEAttributeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSEAttributeType(EEOSEAttributeType_StaticEnum, TEXT("/Script/EOSCore"), TEXT("EEOSEAttributeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_EEOSEAttributeType_Hash() { return 2498944444U; }
	UEnum* Z_Construct_UEnum_EOSCore_EEOSEAttributeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSEAttributeType"), 0, Get_Z_Construct_UEnum_EOSCore_EEOSEAttributeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSEAttributeType::EOS_AT_BOOLEAN", (int64)EEOSEAttributeType::EOS_AT_BOOLEAN },
				{ "EEOSEAttributeType::EOS_AT_INT64", (int64)EEOSEAttributeType::EOS_AT_INT64 },
				{ "EEOSEAttributeType::EOS_AT_DOUBLE", (int64)EEOSEAttributeType::EOS_AT_DOUBLE },
				{ "EEOSEAttributeType::EOS_AT_STRING", (int64)EEOSEAttributeType::EOS_AT_STRING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Supported types of data that can be stored with inside an attribute (used by sessions/lobbies/etc) */" },
				{ "EOS_AT_BOOLEAN.Comment", "/** Boolean value (true/false) */" },
				{ "EOS_AT_BOOLEAN.Name", "EEOSEAttributeType::EOS_AT_BOOLEAN" },
				{ "EOS_AT_BOOLEAN.ToolTip", "Boolean value (true/false)" },
				{ "EOS_AT_DOUBLE.Comment", "/** Double/floating point precision */" },
				{ "EOS_AT_DOUBLE.Name", "EEOSEAttributeType::EOS_AT_DOUBLE" },
				{ "EOS_AT_DOUBLE.ToolTip", "Double/floating point precision" },
				{ "EOS_AT_INT64.Comment", "/** 64 bit integers */" },
				{ "EOS_AT_INT64.Name", "EEOSEAttributeType::EOS_AT_INT64" },
				{ "EOS_AT_INT64.ToolTip", "64 bit integers" },
				{ "EOS_AT_STRING.Comment", "/** UTF8 Strings */" },
				{ "EOS_AT_STRING.Name", "EEOSEAttributeType::EOS_AT_STRING" },
				{ "EOS_AT_STRING.ToolTip", "UTF8 Strings" },
				{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
				{ "ToolTip", "Supported types of data that can be stored with inside an attribute (used by sessions/lobbies/etc)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"EEOSEAttributeType",
				"EEOSEAttributeType",
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
	static UEnum* EEOSELoginStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_EEOSELoginStatus, Z_Construct_UPackage__Script_EOSCore(), TEXT("EEOSELoginStatus"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<EEOSELoginStatus>()
	{
		return EEOSELoginStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSELoginStatus(EEOSELoginStatus_StaticEnum, TEXT("/Script/EOSCore"), TEXT("EEOSELoginStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_EEOSELoginStatus_Hash() { return 2359318372U; }
	UEnum* Z_Construct_UEnum_EOSCore_EEOSELoginStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSELoginStatus"), 0, Get_Z_Construct_UEnum_EOSCore_EEOSELoginStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSELoginStatus::EOS_LS_NotLoggedIn", (int64)EEOSELoginStatus::EOS_LS_NotLoggedIn },
				{ "EEOSELoginStatus::EOS_LS_UsingLocalProfile", (int64)EEOSELoginStatus::EOS_LS_UsingLocalProfile },
				{ "EEOSELoginStatus::EOS_LS_LoggedIn", (int64)EEOSELoginStatus::EOS_LS_LoggedIn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * All possible states of a local user\n *\n * @see EOS_Auth_AddNotifyLoginStatusChanged\n * @see EOS_Auth_GetLoginStatus\n * @see EOS_Auth_Login\n * @see EOS_Connect_AddNotifyLoginStatusChanged\n * @see EOS_Connect_GetLoginStatus\n * @see EOS_Connect_Login\n */" },
				{ "EOS_LS_LoggedIn.Comment", "/** Player has been validated by the platform specific authentication service */" },
				{ "EOS_LS_LoggedIn.Name", "EEOSELoginStatus::EOS_LS_LoggedIn" },
				{ "EOS_LS_LoggedIn.ToolTip", "Player has been validated by the platform specific authentication service" },
				{ "EOS_LS_NotLoggedIn.Comment", "/** Player has not logged in or chosen a local profile */" },
				{ "EOS_LS_NotLoggedIn.Name", "EEOSELoginStatus::EOS_LS_NotLoggedIn" },
				{ "EOS_LS_NotLoggedIn.ToolTip", "Player has not logged in or chosen a local profile" },
				{ "EOS_LS_UsingLocalProfile.Comment", "/** Player is using a local profile but is not logged in */" },
				{ "EOS_LS_UsingLocalProfile.Name", "EEOSELoginStatus::EOS_LS_UsingLocalProfile" },
				{ "EOS_LS_UsingLocalProfile.ToolTip", "Player is using a local profile but is not logged in" },
				{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
				{ "ToolTip", "All possible states of a local user\n\n@see EOS_Auth_AddNotifyLoginStatusChanged\n@see EOS_Auth_GetLoginStatus\n@see EOS_Auth_Login\n@see EOS_Connect_AddNotifyLoginStatusChanged\n@see EOS_Connect_GetLoginStatus\n@see EOS_Connect_Login" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"EEOSELoginStatus",
				"EEOSELoginStatus",
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
	static UEnum* EEOSEExternalAccountType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_EEOSEExternalAccountType, Z_Construct_UPackage__Script_EOSCore(), TEXT("EEOSEExternalAccountType"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<EEOSEExternalAccountType>()
	{
		return EEOSEExternalAccountType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSEExternalAccountType(EEOSEExternalAccountType_StaticEnum, TEXT("/Script/EOSCore"), TEXT("EEOSEExternalAccountType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_EEOSEExternalAccountType_Hash() { return 3483289360U; }
	UEnum* Z_Construct_UEnum_EOSCore_EEOSEExternalAccountType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSEExternalAccountType"), 0, Get_Z_Construct_UEnum_EOSCore_EEOSEExternalAccountType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSEExternalAccountType::EOS_EAT_EPIC", (int64)EEOSEExternalAccountType::EOS_EAT_EPIC },
				{ "EEOSEExternalAccountType::EOS_EAT_STEAM", (int64)EEOSEExternalAccountType::EOS_EAT_STEAM },
				{ "EEOSEExternalAccountType::EOS_EAT_PSN", (int64)EEOSEExternalAccountType::EOS_EAT_PSN },
				{ "EEOSEExternalAccountType::EOS_EAT_XBL", (int64)EEOSEExternalAccountType::EOS_EAT_XBL },
				{ "EEOSEExternalAccountType::EOS_EAT_DISCORD", (int64)EEOSEExternalAccountType::EOS_EAT_DISCORD },
				{ "EEOSEExternalAccountType::EOS_EAT_GOG", (int64)EEOSEExternalAccountType::EOS_EAT_GOG },
				{ "EEOSEExternalAccountType::EOS_EAT_NINTENDO", (int64)EEOSEExternalAccountType::EOS_EAT_NINTENDO },
				{ "EEOSEExternalAccountType::EOS_EAT_UPLAY", (int64)EEOSEExternalAccountType::EOS_EAT_UPLAY },
				{ "EEOSEExternalAccountType::EOS_EAT_OPENID", (int64)EEOSEExternalAccountType::EOS_EAT_OPENID },
				{ "EEOSEExternalAccountType::EOS_EAT_APPLE", (int64)EEOSEExternalAccountType::EOS_EAT_APPLE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * All supported external account providers\n *\n * @see EOS_Connect_QueryExternalAccountMappings\n */" },
				{ "EOS_EAT_APPLE.Comment", "/** External account is associated with Apple */" },
				{ "EOS_EAT_APPLE.Name", "EEOSEExternalAccountType::EOS_EAT_APPLE" },
				{ "EOS_EAT_APPLE.ToolTip", "External account is associated with Apple" },
				{ "EOS_EAT_DISCORD.Comment", "/** External account is associated with Discord */" },
				{ "EOS_EAT_DISCORD.Name", "EEOSEExternalAccountType::EOS_EAT_DISCORD" },
				{ "EOS_EAT_DISCORD.ToolTip", "External account is associated with Discord" },
				{ "EOS_EAT_EPIC.Comment", "/** External account is associated with Epic Games */" },
				{ "EOS_EAT_EPIC.Name", "EEOSEExternalAccountType::EOS_EAT_EPIC" },
				{ "EOS_EAT_EPIC.ToolTip", "External account is associated with Epic Games" },
				{ "EOS_EAT_GOG.Comment", "/** External account is associated with GOG */" },
				{ "EOS_EAT_GOG.Name", "EEOSEExternalAccountType::EOS_EAT_GOG" },
				{ "EOS_EAT_GOG.ToolTip", "External account is associated with GOG" },
				{ "EOS_EAT_NINTENDO.Comment", "/** External account is associated with Nintendo */" },
				{ "EOS_EAT_NINTENDO.Name", "EEOSEExternalAccountType::EOS_EAT_NINTENDO" },
				{ "EOS_EAT_NINTENDO.ToolTip", "External account is associated with Nintendo" },
				{ "EOS_EAT_OPENID.Comment", "/** External account is associated with an OpenID Provider */" },
				{ "EOS_EAT_OPENID.Name", "EEOSEExternalAccountType::EOS_EAT_OPENID" },
				{ "EOS_EAT_OPENID.ToolTip", "External account is associated with an OpenID Provider" },
				{ "EOS_EAT_PSN.Comment", "/** External account is associated with Playstation */" },
				{ "EOS_EAT_PSN.Name", "EEOSEExternalAccountType::EOS_EAT_PSN" },
				{ "EOS_EAT_PSN.ToolTip", "External account is associated with Playstation" },
				{ "EOS_EAT_STEAM.Comment", "/** External account is associated with Steam */" },
				{ "EOS_EAT_STEAM.Name", "EEOSEExternalAccountType::EOS_EAT_STEAM" },
				{ "EOS_EAT_STEAM.ToolTip", "External account is associated with Steam" },
				{ "EOS_EAT_UPLAY.Comment", "/** External account is associated with Uplay */" },
				{ "EOS_EAT_UPLAY.Name", "EEOSEExternalAccountType::EOS_EAT_UPLAY" },
				{ "EOS_EAT_UPLAY.ToolTip", "External account is associated with Uplay" },
				{ "EOS_EAT_XBL.Comment", "/** External account is associated with Xbox Live */" },
				{ "EOS_EAT_XBL.Name", "EEOSEExternalAccountType::EOS_EAT_XBL" },
				{ "EOS_EAT_XBL.ToolTip", "External account is associated with Xbox Live" },
				{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
				{ "ToolTip", "All supported external account providers\n\n@see EOS_Connect_QueryExternalAccountMappings" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"EEOSEExternalAccountType",
				"EEOSEExternalAccountType",
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
	static UEnum* EOSELoginStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_EOSELoginStatus, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSELoginStatus"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<EOSELoginStatus>()
	{
		return EOSELoginStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOSELoginStatus(EOSELoginStatus_StaticEnum, TEXT("/Script/EOSCore"), TEXT("EOSELoginStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_EOSELoginStatus_Hash() { return 2032314350U; }
	UEnum* Z_Construct_UEnum_EOSCore_EOSELoginStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOSELoginStatus"), 0, Get_Z_Construct_UEnum_EOSCore_EOSELoginStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOSELoginStatus::EOS_LS_NotLoggedIn", (int64)EOSELoginStatus::EOS_LS_NotLoggedIn },
				{ "EOSELoginStatus::EOS_LS_UsingLocalProfile", (int64)EOSELoginStatus::EOS_LS_UsingLocalProfile },
				{ "EOSELoginStatus::EOS_LS_LoggedIn", (int64)EOSELoginStatus::EOS_LS_LoggedIn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EOS_LS_LoggedIn.Comment", "/** Player has been validated by the platform specific authentication service */" },
				{ "EOS_LS_LoggedIn.Name", "EOSELoginStatus::EOS_LS_LoggedIn" },
				{ "EOS_LS_LoggedIn.ToolTip", "Player has been validated by the platform specific authentication service" },
				{ "EOS_LS_NotLoggedIn.Comment", "/** Player has not logged in or chosen a local profile */" },
				{ "EOS_LS_NotLoggedIn.Name", "EOSELoginStatus::EOS_LS_NotLoggedIn" },
				{ "EOS_LS_NotLoggedIn.ToolTip", "Player has not logged in or chosen a local profile" },
				{ "EOS_LS_UsingLocalProfile.Comment", "/** Player is using a local profile but is not logged in */" },
				{ "EOS_LS_UsingLocalProfile.Name", "EOSELoginStatus::EOS_LS_UsingLocalProfile" },
				{ "EOS_LS_UsingLocalProfile.ToolTip", "Player is using a local profile but is not logged in" },
				{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"EOSELoginStatus",
				"EOSELoginStatus",
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
	static UEnum* EOSResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_EOSResult, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSResult"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<EOSResult>()
	{
		return EOSResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOSResult(EOSResult_StaticEnum, TEXT("/Script/EOSCore"), TEXT("EOSResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_EOSResult_Hash() { return 11685254U; }
	UEnum* Z_Construct_UEnum_EOSCore_EOSResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOSResult"), 0, Get_Z_Construct_UEnum_EOSCore_EOSResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOSResult::EOS_Success", (int64)EOSResult::EOS_Success },
				{ "EOSResult::EOS_NoConnection", (int64)EOSResult::EOS_NoConnection },
				{ "EOSResult::EOS_InvalidCredentials", (int64)EOSResult::EOS_InvalidCredentials },
				{ "EOSResult::EOS_InvalidUser", (int64)EOSResult::EOS_InvalidUser },
				{ "EOSResult::EOS_InvalidAuth", (int64)EOSResult::EOS_InvalidAuth },
				{ "EOSResult::EOS_AccessDenied", (int64)EOSResult::EOS_AccessDenied },
				{ "EOSResult::EOS_MissingPermissions", (int64)EOSResult::EOS_MissingPermissions },
				{ "EOSResult::EOS_Token_Not_Account", (int64)EOSResult::EOS_Token_Not_Account },
				{ "EOSResult::EOS_TooManyRequests", (int64)EOSResult::EOS_TooManyRequests },
				{ "EOSResult::EOS_AlreadyPending", (int64)EOSResult::EOS_AlreadyPending },
				{ "EOSResult::EOS_InvalidParameters", (int64)EOSResult::EOS_InvalidParameters },
				{ "EOSResult::EOS_InvalidRequest", (int64)EOSResult::EOS_InvalidRequest },
				{ "EOSResult::EOS_UnrecognizedResponse", (int64)EOSResult::EOS_UnrecognizedResponse },
				{ "EOSResult::EOS_IncompatibleVersion", (int64)EOSResult::EOS_IncompatibleVersion },
				{ "EOSResult::EOS_NotConfigured", (int64)EOSResult::EOS_NotConfigured },
				{ "EOSResult::EOS_AlreadyConfigured", (int64)EOSResult::EOS_AlreadyConfigured },
				{ "EOSResult::EOS_NotImplemented", (int64)EOSResult::EOS_NotImplemented },
				{ "EOSResult::EOS_Canceled", (int64)EOSResult::EOS_Canceled },
				{ "EOSResult::EOS_NotFound", (int64)EOSResult::EOS_NotFound },
				{ "EOSResult::EOS_OperationWillRetry", (int64)EOSResult::EOS_OperationWillRetry },
				{ "EOSResult::EOS_NoChange", (int64)EOSResult::EOS_NoChange },
				{ "EOSResult::EOS_VersionMismatch", (int64)EOSResult::EOS_VersionMismatch },
				{ "EOSResult::EOS_LimitExceeded", (int64)EOSResult::EOS_LimitExceeded },
				{ "EOSResult::EOS_Disabled", (int64)EOSResult::EOS_Disabled },
				{ "EOSResult::EOS_DuplicateNotAllowed", (int64)EOSResult::EOS_DuplicateNotAllowed },
				{ "EOSResult::EOS_MissingParameters_DEPRECATED", (int64)EOSResult::EOS_MissingParameters_DEPRECATED },
				{ "EOSResult::EOS_InvalidSandboxId", (int64)EOSResult::EOS_InvalidSandboxId },
				{ "EOSResult::EOS_TimedOut", (int64)EOSResult::EOS_TimedOut },
				{ "EOSResult::EOS_PartialResult", (int64)EOSResult::EOS_PartialResult },
				{ "EOSResult::EOS_Missing_Role", (int64)EOSResult::EOS_Missing_Role },
				{ "EOSResult::EOS_Missing_Feature", (int64)EOSResult::EOS_Missing_Feature },
				{ "EOSResult::EOS_Invalid_Sandbox", (int64)EOSResult::EOS_Invalid_Sandbox },
				{ "EOSResult::EOS_Invalid_Deployment", (int64)EOSResult::EOS_Invalid_Deployment },
				{ "EOSResult::EOS_Invalid_Product", (int64)EOSResult::EOS_Invalid_Product },
				{ "EOSResult::EOS_Invalid_ProductUserID", (int64)EOSResult::EOS_Invalid_ProductUserID },
				{ "EOSResult::EOS_ServiceFailure", (int64)EOSResult::EOS_ServiceFailure },
				{ "EOSResult::EOS_CacheDirectoryMissing", (int64)EOSResult::EOS_CacheDirectoryMissing },
				{ "EOSResult::EOS_CacheDirectoryInvalid", (int64)EOSResult::EOS_CacheDirectoryInvalid },
				{ "EOSResult::EOS_InvalidState", (int64)EOSResult::EOS_InvalidState },
				{ "EOSResult::EOS_Auth_AccountLocked", (int64)EOSResult::EOS_Auth_AccountLocked },
				{ "EOSResult::EOS_Auth_AccountLockedForUpdate", (int64)EOSResult::EOS_Auth_AccountLockedForUpdate },
				{ "EOSResult::EOS_Auth_InvalidRefreshToken", (int64)EOSResult::EOS_Auth_InvalidRefreshToken },
				{ "EOSResult::EOS_Auth_InvalidToken", (int64)EOSResult::EOS_Auth_InvalidToken },
				{ "EOSResult::EOS_Auth_AuthenticationFailure", (int64)EOSResult::EOS_Auth_AuthenticationFailure },
				{ "EOSResult::EOS_Auth_InvalidPlatformToken", (int64)EOSResult::EOS_Auth_InvalidPlatformToken },
				{ "EOSResult::EOS_Auth_WrongAccount", (int64)EOSResult::EOS_Auth_WrongAccount },
				{ "EOSResult::EOS_Auth_WrongClient", (int64)EOSResult::EOS_Auth_WrongClient },
				{ "EOSResult::EOS_Auth_FullAccountRequired", (int64)EOSResult::EOS_Auth_FullAccountRequired },
				{ "EOSResult::EOS_Auth_HeadlessAccountRequired", (int64)EOSResult::EOS_Auth_HeadlessAccountRequired },
				{ "EOSResult::EOS_Auth_PasswordResetRequired", (int64)EOSResult::EOS_Auth_PasswordResetRequired },
				{ "EOSResult::EOS_Auth_PasswordCannotBeReused", (int64)EOSResult::EOS_Auth_PasswordCannotBeReused },
				{ "EOSResult::EOS_Auth_Expired", (int64)EOSResult::EOS_Auth_Expired },
				{ "EOSResult::EOS_Auth_ScopeConsentRequired", (int64)EOSResult::EOS_Auth_ScopeConsentRequired },
				{ "EOSResult::EOS_Auth_ApplicationNotFound", (int64)EOSResult::EOS_Auth_ApplicationNotFound },
				{ "EOSResult::EOS_Auth_ScopeNotFound", (int64)EOSResult::EOS_Auth_ScopeNotFound },
				{ "EOSResult::EOS_Auth_AccountFeatureRestricted", (int64)EOSResult::EOS_Auth_AccountFeatureRestricted },
				{ "EOSResult::EOS_Auth_PinGrantCode", (int64)EOSResult::EOS_Auth_PinGrantCode },
				{ "EOSResult::EOS_Auth_PinGrantExpired", (int64)EOSResult::EOS_Auth_PinGrantExpired },
				{ "EOSResult::EOS_Auth_PinGrantPending", (int64)EOSResult::EOS_Auth_PinGrantPending },
				{ "EOSResult::EOS_Auth_ExternalAuthNotLinked", (int64)EOSResult::EOS_Auth_ExternalAuthNotLinked },
				{ "EOSResult::EOS_Auth_ExternalAuthRevoked", (int64)EOSResult::EOS_Auth_ExternalAuthRevoked },
				{ "EOSResult::EOS_Auth_ExternalAuthInvalid", (int64)EOSResult::EOS_Auth_ExternalAuthInvalid },
				{ "EOSResult::EOS_Auth_ExternalAuthRestricted", (int64)EOSResult::EOS_Auth_ExternalAuthRestricted },
				{ "EOSResult::EOS_Auth_ExternalAuthCannotLogin", (int64)EOSResult::EOS_Auth_ExternalAuthCannotLogin },
				{ "EOSResult::EOS_Auth_ExternalAuthExpired", (int64)EOSResult::EOS_Auth_ExternalAuthExpired },
				{ "EOSResult::EOS_Auth_ExternalAuthIsLastLoginType", (int64)EOSResult::EOS_Auth_ExternalAuthIsLastLoginType },
				{ "EOSResult::EOS_Auth_ExchangeCodeNotFound", (int64)EOSResult::EOS_Auth_ExchangeCodeNotFound },
				{ "EOSResult::EOS_Auth_OriginatingExchangeCodeSessionExpired", (int64)EOSResult::EOS_Auth_OriginatingExchangeCodeSessionExpired },
				{ "EOSResult::EOS_Auth_PersistentAuth_AccountNotActive", (int64)EOSResult::EOS_Auth_PersistentAuth_AccountNotActive },
				{ "EOSResult::EOS_Auth_MFARequired", (int64)EOSResult::EOS_Auth_MFARequired },
				{ "EOSResult::EOS_Auth_ParentalControls", (int64)EOSResult::EOS_Auth_ParentalControls },
				{ "EOSResult::EOS_Auth_NoRealId", (int64)EOSResult::EOS_Auth_NoRealId },
				{ "EOSResult::EOS_Friends_InviteAwaitingAcceptance", (int64)EOSResult::EOS_Friends_InviteAwaitingAcceptance },
				{ "EOSResult::EOS_Friends_NoInvitation", (int64)EOSResult::EOS_Friends_NoInvitation },
				{ "EOSResult::EOS_Friends_AlreadyFriends", (int64)EOSResult::EOS_Friends_AlreadyFriends },
				{ "EOSResult::EOS_Friends_NotFriends", (int64)EOSResult::EOS_Friends_NotFriends },
				{ "EOSResult::EOS_Friends_TargetUserTooManyInvites", (int64)EOSResult::EOS_Friends_TargetUserTooManyInvites },
				{ "EOSResult::EOS_Friends_LocalUserTooManyInvites", (int64)EOSResult::EOS_Friends_LocalUserTooManyInvites },
				{ "EOSResult::EOS_Friends_TargetUserFriendLimitExceeded", (int64)EOSResult::EOS_Friends_TargetUserFriendLimitExceeded },
				{ "EOSResult::EOS_Friends_LocalUserFriendLimitExceeded", (int64)EOSResult::EOS_Friends_LocalUserFriendLimitExceeded },
				{ "EOSResult::EOS_Presence_DataInvalid", (int64)EOSResult::EOS_Presence_DataInvalid },
				{ "EOSResult::EOS_Presence_DataLengthInvalid", (int64)EOSResult::EOS_Presence_DataLengthInvalid },
				{ "EOSResult::EOS_Presence_DataKeyInvalid", (int64)EOSResult::EOS_Presence_DataKeyInvalid },
				{ "EOSResult::EOS_Presence_DataKeyLengthInvalid", (int64)EOSResult::EOS_Presence_DataKeyLengthInvalid },
				{ "EOSResult::EOS_Presence_DataValueInvalid", (int64)EOSResult::EOS_Presence_DataValueInvalid },
				{ "EOSResult::EOS_Presence_DataValueLengthInvalid", (int64)EOSResult::EOS_Presence_DataValueLengthInvalid },
				{ "EOSResult::EOS_Presence_RichTextInvalid", (int64)EOSResult::EOS_Presence_RichTextInvalid },
				{ "EOSResult::EOS_Presence_RichTextLengthInvalid", (int64)EOSResult::EOS_Presence_RichTextLengthInvalid },
				{ "EOSResult::EOS_Presence_StatusInvalid", (int64)EOSResult::EOS_Presence_StatusInvalid },
				{ "EOSResult::EOS_Ecom_EntitlementStale", (int64)EOSResult::EOS_Ecom_EntitlementStale },
				{ "EOSResult::EOS_Ecom_CatalogOfferStale", (int64)EOSResult::EOS_Ecom_CatalogOfferStale },
				{ "EOSResult::EOS_Ecom_CatalogItemStale", (int64)EOSResult::EOS_Ecom_CatalogItemStale },
				{ "EOSResult::EOS_Ecom_CatalogOfferPriceInvalid", (int64)EOSResult::EOS_Ecom_CatalogOfferPriceInvalid },
				{ "EOSResult::EOS_Ecom_CheckoutLoadError", (int64)EOSResult::EOS_Ecom_CheckoutLoadError },
				{ "EOSResult::EOS_Sessions_SessionInProgress", (int64)EOSResult::EOS_Sessions_SessionInProgress },
				{ "EOSResult::EOS_Sessions_TooManyPlayers", (int64)EOSResult::EOS_Sessions_TooManyPlayers },
				{ "EOSResult::EOS_Sessions_NoPermission", (int64)EOSResult::EOS_Sessions_NoPermission },
				{ "EOSResult::EOS_Sessions_SessionAlreadyExists", (int64)EOSResult::EOS_Sessions_SessionAlreadyExists },
				{ "EOSResult::EOS_Sessions_InvalidLock", (int64)EOSResult::EOS_Sessions_InvalidLock },
				{ "EOSResult::EOS_Sessions_InvalidSession", (int64)EOSResult::EOS_Sessions_InvalidSession },
				{ "EOSResult::EOS_Sessions_SandboxNotAllowed", (int64)EOSResult::EOS_Sessions_SandboxNotAllowed },
				{ "EOSResult::EOS_Sessions_InviteFailed", (int64)EOSResult::EOS_Sessions_InviteFailed },
				{ "EOSResult::EOS_Sessions_InviteNotFound", (int64)EOSResult::EOS_Sessions_InviteNotFound },
				{ "EOSResult::EOS_Sessions_UpsertNotAllowed", (int64)EOSResult::EOS_Sessions_UpsertNotAllowed },
				{ "EOSResult::EOS_Sessions_AggregationFailed", (int64)EOSResult::EOS_Sessions_AggregationFailed },
				{ "EOSResult::EOS_Sessions_HostAtCapacity", (int64)EOSResult::EOS_Sessions_HostAtCapacity },
				{ "EOSResult::EOS_Sessions_SandboxAtCapacity", (int64)EOSResult::EOS_Sessions_SandboxAtCapacity },
				{ "EOSResult::EOS_Sessions_SessionNotAnonymous", (int64)EOSResult::EOS_Sessions_SessionNotAnonymous },
				{ "EOSResult::EOS_Sessions_OutOfSync", (int64)EOSResult::EOS_Sessions_OutOfSync },
				{ "EOSResult::EOS_Sessions_TooManyInvites", (int64)EOSResult::EOS_Sessions_TooManyInvites },
				{ "EOSResult::EOS_Sessions_PresenceSessionExists", (int64)EOSResult::EOS_Sessions_PresenceSessionExists },
				{ "EOSResult::EOS_Sessions_DeploymentAtCapacity", (int64)EOSResult::EOS_Sessions_DeploymentAtCapacity },
				{ "EOSResult::EOS_Sessions_NotAllowed", (int64)EOSResult::EOS_Sessions_NotAllowed },
				{ "EOSResult::EOS_PlayerDataStorage_FilenameInvalid", (int64)EOSResult::EOS_PlayerDataStorage_FilenameInvalid },
				{ "EOSResult::EOS_PlayerDataStorage_FilenameLengthInvalid", (int64)EOSResult::EOS_PlayerDataStorage_FilenameLengthInvalid },
				{ "EOSResult::EOS_PlayerDataStorage_FilenameInvalidChars", (int64)EOSResult::EOS_PlayerDataStorage_FilenameInvalidChars },
				{ "EOSResult::EOS_PlayerDataStorage_FileSizeTooLarge", (int64)EOSResult::EOS_PlayerDataStorage_FileSizeTooLarge },
				{ "EOSResult::EOS_PlayerDataStorage_FileSizeInvalid", (int64)EOSResult::EOS_PlayerDataStorage_FileSizeInvalid },
				{ "EOSResult::EOS_PlayerDataStorage_FileHandleInvalid", (int64)EOSResult::EOS_PlayerDataStorage_FileHandleInvalid },
				{ "EOSResult::EOS_PlayerDataStorage_DataInvalid", (int64)EOSResult::EOS_PlayerDataStorage_DataInvalid },
				{ "EOSResult::EOS_PlayerDataStorage_DataLengthInvalid", (int64)EOSResult::EOS_PlayerDataStorage_DataLengthInvalid },
				{ "EOSResult::EOS_PlayerDataStorage_StartIndexInvalid", (int64)EOSResult::EOS_PlayerDataStorage_StartIndexInvalid },
				{ "EOSResult::EOS_PlayerDataStorage_RequestInProgress", (int64)EOSResult::EOS_PlayerDataStorage_RequestInProgress },
				{ "EOSResult::EOS_PlayerDataStorage_UserThrottled", (int64)EOSResult::EOS_PlayerDataStorage_UserThrottled },
				{ "EOSResult::EOS_PlayerDataStorage_EncryptionKeyNotSet", (int64)EOSResult::EOS_PlayerDataStorage_EncryptionKeyNotSet },
				{ "EOSResult::EOS_PlayerDataStorage_UserErrorFromDataCallback", (int64)EOSResult::EOS_PlayerDataStorage_UserErrorFromDataCallback },
				{ "EOSResult::EOS_PlayerDataStorage_FileHeaderHasNewerVersion", (int64)EOSResult::EOS_PlayerDataStorage_FileHeaderHasNewerVersion },
				{ "EOSResult::EOS_PlayerDataStorage_FileCorrupted", (int64)EOSResult::EOS_PlayerDataStorage_FileCorrupted },
				{ "EOSResult::EOS_Connect_ExternalTokenValidationFailed", (int64)EOSResult::EOS_Connect_ExternalTokenValidationFailed },
				{ "EOSResult::EOS_Connect_UserAlreadyExists", (int64)EOSResult::EOS_Connect_UserAlreadyExists },
				{ "EOSResult::EOS_Connect_AuthExpired", (int64)EOSResult::EOS_Connect_AuthExpired },
				{ "EOSResult::EOS_Connect_InvalidToken", (int64)EOSResult::EOS_Connect_InvalidToken },
				{ "EOSResult::EOS_Connect_UnsupportedTokenType", (int64)EOSResult::EOS_Connect_UnsupportedTokenType },
				{ "EOSResult::EOS_Connect_LinkAccountFailed", (int64)EOSResult::EOS_Connect_LinkAccountFailed },
				{ "EOSResult::EOS_Connect_ExternalServiceUnavailable", (int64)EOSResult::EOS_Connect_ExternalServiceUnavailable },
				{ "EOSResult::EOS_Connect_ExternalServiceConfigurationFailure", (int64)EOSResult::EOS_Connect_ExternalServiceConfigurationFailure },
				{ "EOSResult::EOS_Connect_LinkAccountFailedMissingNintendoIdAccount", (int64)EOSResult::EOS_Connect_LinkAccountFailedMissingNintendoIdAccount },
				{ "EOSResult::EOS_UI_SocialOverlayLoadError", (int64)EOSResult::EOS_UI_SocialOverlayLoadError },
				{ "EOSResult::EOS_Lobby_NotOwner", (int64)EOSResult::EOS_Lobby_NotOwner },
				{ "EOSResult::EOS_Lobby_InvalidLock", (int64)EOSResult::EOS_Lobby_InvalidLock },
				{ "EOSResult::EOS_Lobby_LobbyAlreadyExists", (int64)EOSResult::EOS_Lobby_LobbyAlreadyExists },
				{ "EOSResult::EOS_Lobby_SessionInProgress", (int64)EOSResult::EOS_Lobby_SessionInProgress },
				{ "EOSResult::EOS_Lobby_TooManyPlayers", (int64)EOSResult::EOS_Lobby_TooManyPlayers },
				{ "EOSResult::EOS_Lobby_NoPermission", (int64)EOSResult::EOS_Lobby_NoPermission },
				{ "EOSResult::EOS_Lobby_InvalidSession", (int64)EOSResult::EOS_Lobby_InvalidSession },
				{ "EOSResult::EOS_Lobby_SandboxNotAllowed", (int64)EOSResult::EOS_Lobby_SandboxNotAllowed },
				{ "EOSResult::EOS_Lobby_InviteFailed", (int64)EOSResult::EOS_Lobby_InviteFailed },
				{ "EOSResult::EOS_Lobby_InviteNotFound", (int64)EOSResult::EOS_Lobby_InviteNotFound },
				{ "EOSResult::EOS_Lobby_UpsertNotAllowed", (int64)EOSResult::EOS_Lobby_UpsertNotAllowed },
				{ "EOSResult::EOS_Lobby_AggregationFailed", (int64)EOSResult::EOS_Lobby_AggregationFailed },
				{ "EOSResult::EOS_Lobby_HostAtCapacity", (int64)EOSResult::EOS_Lobby_HostAtCapacity },
				{ "EOSResult::EOS_Lobby_SandboxAtCapacity", (int64)EOSResult::EOS_Lobby_SandboxAtCapacity },
				{ "EOSResult::EOS_Lobby_TooManyInvites", (int64)EOSResult::EOS_Lobby_TooManyInvites },
				{ "EOSResult::EOS_Lobby_DeploymentAtCapacity", (int64)EOSResult::EOS_Lobby_DeploymentAtCapacity },
				{ "EOSResult::EOS_Lobby_NotAllowed", (int64)EOSResult::EOS_Lobby_NotAllowed },
				{ "EOSResult::EOS_Lobby_MemberUpdateOnly", (int64)EOSResult::EOS_Lobby_MemberUpdateOnly },
				{ "EOSResult::MAX", (int64)EOSResult::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EOS_AccessDenied.Comment", "/** Failed due to invalid access */" },
				{ "EOS_AccessDenied.Name", "EOSResult::EOS_AccessDenied" },
				{ "EOS_AccessDenied.ToolTip", "Failed due to invalid access" },
				{ "EOS_AlreadyConfigured.Comment", "/** Already configured for use. */" },
				{ "EOS_AlreadyConfigured.Name", "EOSResult::EOS_AlreadyConfigured" },
				{ "EOS_AlreadyConfigured.ToolTip", "Already configured for use." },
				{ "EOS_AlreadyPending.Comment", "/** Async request was already pending */" },
				{ "EOS_AlreadyPending.Name", "EOSResult::EOS_AlreadyPending" },
				{ "EOS_AlreadyPending.ToolTip", "Async request was already pending" },
				{ "EOS_Auth_AccountFeatureRestricted.Comment", "/** This account has been denied access to login */" },
				{ "EOS_Auth_AccountFeatureRestricted.Name", "EOSResult::EOS_Auth_AccountFeatureRestricted" },
				{ "EOS_Auth_AccountFeatureRestricted.ToolTip", "This account has been denied access to login" },
				{ "EOS_Auth_AccountLocked.Comment", "/** Account locked due to login failures */" },
				{ "EOS_Auth_AccountLocked.Name", "EOSResult::EOS_Auth_AccountLocked" },
				{ "EOS_Auth_AccountLocked.ToolTip", "Account locked due to login failures" },
				{ "EOS_Auth_AccountLockedForUpdate.Comment", "/** Account locked by update operation. */" },
				{ "EOS_Auth_AccountLockedForUpdate.Name", "EOSResult::EOS_Auth_AccountLockedForUpdate" },
				{ "EOS_Auth_AccountLockedForUpdate.ToolTip", "Account locked by update operation." },
				{ "EOS_Auth_ApplicationNotFound.Comment", "/** The application has no profile on the backend */" },
				{ "EOS_Auth_ApplicationNotFound.Name", "EOSResult::EOS_Auth_ApplicationNotFound" },
				{ "EOS_Auth_ApplicationNotFound.ToolTip", "The application has no profile on the backend" },
				{ "EOS_Auth_AuthenticationFailure.Comment", "/** Invalid bearer token */" },
				{ "EOS_Auth_AuthenticationFailure.Name", "EOSResult::EOS_Auth_AuthenticationFailure" },
				{ "EOS_Auth_AuthenticationFailure.ToolTip", "Invalid bearer token" },
				{ "EOS_Auth_ExchangeCodeNotFound.Comment", "/** Exchange code not found */" },
				{ "EOS_Auth_ExchangeCodeNotFound.Name", "EOSResult::EOS_Auth_ExchangeCodeNotFound" },
				{ "EOS_Auth_ExchangeCodeNotFound.ToolTip", "Exchange code not found" },
				{ "EOS_Auth_Expired.Comment", "/** Authorization code/exchange code has expired */" },
				{ "EOS_Auth_Expired.Name", "EOSResult::EOS_Auth_Expired" },
				{ "EOS_Auth_Expired.ToolTip", "Authorization code/exchange code has expired" },
				{ "EOS_Auth_ExternalAuthCannotLogin.Comment", "/** External auth cannot be used for login */" },
				{ "EOS_Auth_ExternalAuthCannotLogin.Name", "EOSResult::EOS_Auth_ExternalAuthCannotLogin" },
				{ "EOS_Auth_ExternalAuthCannotLogin.ToolTip", "External auth cannot be used for login" },
				{ "EOS_Auth_ExternalAuthExpired.Comment", "/** External auth is expired */" },
				{ "EOS_Auth_ExternalAuthExpired.Name", "EOSResult::EOS_Auth_ExternalAuthExpired" },
				{ "EOS_Auth_ExternalAuthExpired.ToolTip", "External auth is expired" },
				{ "EOS_Auth_ExternalAuthInvalid.Comment", "/** External auth token cannot be interpreted */" },
				{ "EOS_Auth_ExternalAuthInvalid.Name", "EOSResult::EOS_Auth_ExternalAuthInvalid" },
				{ "EOS_Auth_ExternalAuthInvalid.ToolTip", "External auth token cannot be interpreted" },
				{ "EOS_Auth_ExternalAuthIsLastLoginType.Comment", "/** External auth cannot be removed since it's the last possible way to login */" },
				{ "EOS_Auth_ExternalAuthIsLastLoginType.Name", "EOSResult::EOS_Auth_ExternalAuthIsLastLoginType" },
				{ "EOS_Auth_ExternalAuthIsLastLoginType.ToolTip", "External auth cannot be removed since it's the last possible way to login" },
				{ "EOS_Auth_ExternalAuthNotLinked.Comment", "/** External auth source did not yield an account */" },
				{ "EOS_Auth_ExternalAuthNotLinked.Name", "EOSResult::EOS_Auth_ExternalAuthNotLinked" },
				{ "EOS_Auth_ExternalAuthNotLinked.ToolTip", "External auth source did not yield an account" },
				{ "EOS_Auth_ExternalAuthRestricted.Comment", "/** External auth cannot be linked to his account due to restrictions */" },
				{ "EOS_Auth_ExternalAuthRestricted.Name", "EOSResult::EOS_Auth_ExternalAuthRestricted" },
				{ "EOS_Auth_ExternalAuthRestricted.ToolTip", "External auth cannot be linked to his account due to restrictions" },
				{ "EOS_Auth_ExternalAuthRevoked.Comment", "/** External auth access revoked */" },
				{ "EOS_Auth_ExternalAuthRevoked.Name", "EOSResult::EOS_Auth_ExternalAuthRevoked" },
				{ "EOS_Auth_ExternalAuthRevoked.ToolTip", "External auth access revoked" },
				{ "EOS_Auth_FullAccountRequired.Comment", "/** Full account is required */" },
				{ "EOS_Auth_FullAccountRequired.Name", "EOSResult::EOS_Auth_FullAccountRequired" },
				{ "EOS_Auth_FullAccountRequired.ToolTip", "Full account is required" },
				{ "EOS_Auth_HeadlessAccountRequired.Comment", "/** Headless account is required */" },
				{ "EOS_Auth_HeadlessAccountRequired.Name", "EOSResult::EOS_Auth_HeadlessAccountRequired" },
				{ "EOS_Auth_HeadlessAccountRequired.ToolTip", "Headless account is required" },
				{ "EOS_Auth_InvalidPlatformToken.Comment", "/** Invalid platform token */" },
				{ "EOS_Auth_InvalidPlatformToken.Name", "EOSResult::EOS_Auth_InvalidPlatformToken" },
				{ "EOS_Auth_InvalidPlatformToken.ToolTip", "Invalid platform token" },
				{ "EOS_Auth_InvalidRefreshToken.Comment", "/** Refresh token used was invalid */" },
				{ "EOS_Auth_InvalidRefreshToken.Name", "EOSResult::EOS_Auth_InvalidRefreshToken" },
				{ "EOS_Auth_InvalidRefreshToken.ToolTip", "Refresh token used was invalid" },
				{ "EOS_Auth_InvalidToken.Comment", "/** Invalid access token =  typically when switching between backend environments */" },
				{ "EOS_Auth_InvalidToken.Name", "EOSResult::EOS_Auth_InvalidToken" },
				{ "EOS_Auth_InvalidToken.ToolTip", "Invalid access token =  typically when switching between backend environments" },
				{ "EOS_Auth_MFARequired.Comment", "/** MFA challenge required */" },
				{ "EOS_Auth_MFARequired.Name", "EOSResult::EOS_Auth_MFARequired" },
				{ "EOS_Auth_MFARequired.ToolTip", "MFA challenge required" },
				{ "EOS_Auth_NoRealId.Comment", "/** Korea real id association required but missing */" },
				{ "EOS_Auth_NoRealId.Name", "EOSResult::EOS_Auth_NoRealId" },
				{ "EOS_Auth_NoRealId.ToolTip", "Korea real id association required but missing" },
				{ "EOS_Auth_OriginatingExchangeCodeSessionExpired.Comment", "/** Originating exchange code session has expired */" },
				{ "EOS_Auth_OriginatingExchangeCodeSessionExpired.Name", "EOSResult::EOS_Auth_OriginatingExchangeCodeSessionExpired" },
				{ "EOS_Auth_OriginatingExchangeCodeSessionExpired.ToolTip", "Originating exchange code session has expired" },
				{ "EOS_Auth_ParentalControls.Comment", "/** Parental locks are in place */" },
				{ "EOS_Auth_ParentalControls.Name", "EOSResult::EOS_Auth_ParentalControls" },
				{ "EOS_Auth_ParentalControls.ToolTip", "Parental locks are in place" },
				{ "EOS_Auth_PasswordCannotBeReused.Comment", "/** Password was previously used and cannot be reused */" },
				{ "EOS_Auth_PasswordCannotBeReused.Name", "EOSResult::EOS_Auth_PasswordCannotBeReused" },
				{ "EOS_Auth_PasswordCannotBeReused.ToolTip", "Password was previously used and cannot be reused" },
				{ "EOS_Auth_PasswordResetRequired.Comment", "/** Password reset is required */" },
				{ "EOS_Auth_PasswordResetRequired.Name", "EOSResult::EOS_Auth_PasswordResetRequired" },
				{ "EOS_Auth_PasswordResetRequired.ToolTip", "Password reset is required" },
				{ "EOS_Auth_PersistentAuth_AccountNotActive.Comment", "/** The account has been disabled and cannot be used for authentication */" },
				{ "EOS_Auth_PersistentAuth_AccountNotActive.Name", "EOSResult::EOS_Auth_PersistentAuth_AccountNotActive" },
				{ "EOS_Auth_PersistentAuth_AccountNotActive.ToolTip", "The account has been disabled and cannot be used for authentication" },
				{ "EOS_Auth_PinGrantCode.Comment", "/** Pin grant code initiated */" },
				{ "EOS_Auth_PinGrantCode.Name", "EOSResult::EOS_Auth_PinGrantCode" },
				{ "EOS_Auth_PinGrantCode.ToolTip", "Pin grant code initiated" },
				{ "EOS_Auth_PinGrantExpired.Comment", "/** Pin grant code attempt expired */" },
				{ "EOS_Auth_PinGrantExpired.Name", "EOSResult::EOS_Auth_PinGrantExpired" },
				{ "EOS_Auth_PinGrantExpired.ToolTip", "Pin grant code attempt expired" },
				{ "EOS_Auth_PinGrantPending.Comment", "/** Pin grant code attempt pending */" },
				{ "EOS_Auth_PinGrantPending.Name", "EOSResult::EOS_Auth_PinGrantPending" },
				{ "EOS_Auth_PinGrantPending.ToolTip", "Pin grant code attempt pending" },
				{ "EOS_Auth_ScopeConsentRequired.Comment", "/** Consent has not been given by the user */" },
				{ "EOS_Auth_ScopeConsentRequired.Name", "EOSResult::EOS_Auth_ScopeConsentRequired" },
				{ "EOS_Auth_ScopeConsentRequired.ToolTip", "Consent has not been given by the user" },
				{ "EOS_Auth_ScopeNotFound.Comment", "/** The requested consent wasn't found on the backend */" },
				{ "EOS_Auth_ScopeNotFound.Name", "EOSResult::EOS_Auth_ScopeNotFound" },
				{ "EOS_Auth_ScopeNotFound.ToolTip", "The requested consent wasn't found on the backend" },
				{ "EOS_Auth_WrongAccount.Comment", "/** Auth parameters are not associated with this account */" },
				{ "EOS_Auth_WrongAccount.Name", "EOSResult::EOS_Auth_WrongAccount" },
				{ "EOS_Auth_WrongAccount.ToolTip", "Auth parameters are not associated with this account" },
				{ "EOS_Auth_WrongClient.Comment", "/** Auth parameters are not associated with this client */" },
				{ "EOS_Auth_WrongClient.Name", "EOSResult::EOS_Auth_WrongClient" },
				{ "EOS_Auth_WrongClient.ToolTip", "Auth parameters are not associated with this client" },
				{ "EOS_CacheDirectoryInvalid.Comment", "/** Cache directory is not accessible. */" },
				{ "EOS_CacheDirectoryInvalid.Name", "EOSResult::EOS_CacheDirectoryInvalid" },
				{ "EOS_CacheDirectoryInvalid.ToolTip", "Cache directory is not accessible." },
				{ "EOS_CacheDirectoryMissing.Comment", "/** Cache directory is not set in platform options. */" },
				{ "EOS_CacheDirectoryMissing.Name", "EOSResult::EOS_CacheDirectoryMissing" },
				{ "EOS_CacheDirectoryMissing.ToolTip", "Cache directory is not set in platform options." },
				{ "EOS_Canceled.Comment", "/** Operation was canceled (likely by user) */" },
				{ "EOS_Canceled.Name", "EOSResult::EOS_Canceled" },
				{ "EOS_Canceled.ToolTip", "Operation was canceled (likely by user)" },
				{ "EOS_Connect_AuthExpired.Comment", "/** EOS Auth expired */" },
				{ "EOS_Connect_AuthExpired.Name", "EOSResult::EOS_Connect_AuthExpired" },
				{ "EOS_Connect_AuthExpired.ToolTip", "EOS Auth expired" },
				{ "EOS_Connect_ExternalServiceConfigurationFailure.Comment", "/** EOS Auth External Service configuration failure with Dev Portal */" },
				{ "EOS_Connect_ExternalServiceConfigurationFailure.Name", "EOSResult::EOS_Connect_ExternalServiceConfigurationFailure" },
				{ "EOS_Connect_ExternalServiceConfigurationFailure.ToolTip", "EOS Auth External Service configuration failure with Dev Portal" },
				{ "EOS_Connect_ExternalServiceUnavailable.Comment", "/** EOS Auth External service for validation was unavailable */" },
				{ "EOS_Connect_ExternalServiceUnavailable.Name", "EOSResult::EOS_Connect_ExternalServiceUnavailable" },
				{ "EOS_Connect_ExternalServiceUnavailable.ToolTip", "EOS Auth External service for validation was unavailable" },
				{ "EOS_Connect_ExternalTokenValidationFailed.Comment", "/** EOS Auth service deemed the external token invalid */" },
				{ "EOS_Connect_ExternalTokenValidationFailed.Name", "EOSResult::EOS_Connect_ExternalTokenValidationFailed" },
				{ "EOS_Connect_ExternalTokenValidationFailed.ToolTip", "EOS Auth service deemed the external token invalid" },
				{ "EOS_Connect_InvalidToken.Comment", "/** EOS Auth invalid token */" },
				{ "EOS_Connect_InvalidToken.Name", "EOSResult::EOS_Connect_InvalidToken" },
				{ "EOS_Connect_InvalidToken.ToolTip", "EOS Auth invalid token" },
				{ "EOS_Connect_LinkAccountFailed.Comment", "/** EOS Auth Account link failure */" },
				{ "EOS_Connect_LinkAccountFailed.Name", "EOSResult::EOS_Connect_LinkAccountFailed" },
				{ "EOS_Connect_LinkAccountFailed.ToolTip", "EOS Auth Account link failure" },
				{ "EOS_Connect_LinkAccountFailedMissingNintendoIdAccount.Comment", "/** EOS Auth Account link failure. Tried to link Nintendo Network Service Account without first linking Nintendo Account */" },
				{ "EOS_Connect_LinkAccountFailedMissingNintendoIdAccount.Name", "EOSResult::EOS_Connect_LinkAccountFailedMissingNintendoIdAccount" },
				{ "EOS_Connect_LinkAccountFailedMissingNintendoIdAccount.ToolTip", "EOS Auth Account link failure. Tried to link Nintendo Network Service Account without first linking Nintendo Account" },
				{ "EOS_Connect_UnsupportedTokenType.Comment", "/** EOS Auth doesn't support this token type */" },
				{ "EOS_Connect_UnsupportedTokenType.Name", "EOSResult::EOS_Connect_UnsupportedTokenType" },
				{ "EOS_Connect_UnsupportedTokenType.ToolTip", "EOS Auth doesn't support this token type" },
				{ "EOS_Connect_UserAlreadyExists.Comment", "/** EOS Auth user already exists */" },
				{ "EOS_Connect_UserAlreadyExists.Name", "EOSResult::EOS_Connect_UserAlreadyExists" },
				{ "EOS_Connect_UserAlreadyExists.ToolTip", "EOS Auth user already exists" },
				{ "EOS_Disabled.Comment", "/** Feature or client ID performing the operation has been disabled. */" },
				{ "EOS_Disabled.Name", "EOSResult::EOS_Disabled" },
				{ "EOS_Disabled.ToolTip", "Feature or client ID performing the operation has been disabled." },
				{ "EOS_DuplicateNotAllowed.Comment", "/** Duplicate entry not allowed */" },
				{ "EOS_DuplicateNotAllowed.Name", "EOSResult::EOS_DuplicateNotAllowed" },
				{ "EOS_DuplicateNotAllowed.ToolTip", "Duplicate entry not allowed" },
				{ "EOS_Ecom_CatalogItemStale.Comment", "/** The item or associated structure retrieved is stale = requery for updated information */" },
				{ "EOS_Ecom_CatalogItemStale.Name", "EOSResult::EOS_Ecom_CatalogItemStale" },
				{ "EOS_Ecom_CatalogItemStale.ToolTip", "The item or associated structure retrieved is stale = requery for updated information" },
				{ "EOS_Ecom_CatalogOfferPriceInvalid.Comment", "/** The one or more offers has an invalid price. This may be caused by the price setup. */" },
				{ "EOS_Ecom_CatalogOfferPriceInvalid.Name", "EOSResult::EOS_Ecom_CatalogOfferPriceInvalid" },
				{ "EOS_Ecom_CatalogOfferPriceInvalid.ToolTip", "The one or more offers has an invalid price. This may be caused by the price setup." },
				{ "EOS_Ecom_CatalogOfferStale.Comment", "/** The offer retrieved is stale = requery for updated information */" },
				{ "EOS_Ecom_CatalogOfferStale.Name", "EOSResult::EOS_Ecom_CatalogOfferStale" },
				{ "EOS_Ecom_CatalogOfferStale.ToolTip", "The offer retrieved is stale = requery for updated information" },
				{ "EOS_Ecom_CheckoutLoadError.Comment", "/** The checkout page failed to load */" },
				{ "EOS_Ecom_CheckoutLoadError.Name", "EOSResult::EOS_Ecom_CheckoutLoadError" },
				{ "EOS_Ecom_CheckoutLoadError.ToolTip", "The checkout page failed to load" },
				{ "EOS_Ecom_EntitlementStale.Comment", "/** The entitlement retrieved is stale = requery for updated information */" },
				{ "EOS_Ecom_EntitlementStale.Name", "EOSResult::EOS_Ecom_EntitlementStale" },
				{ "EOS_Ecom_EntitlementStale.ToolTip", "The entitlement retrieved is stale = requery for updated information" },
				{ "EOS_Friends_AlreadyFriends.Comment", "/** Users are already friends = so sending another invite is erroneous */" },
				{ "EOS_Friends_AlreadyFriends.Name", "EOSResult::EOS_Friends_AlreadyFriends" },
				{ "EOS_Friends_AlreadyFriends.ToolTip", "Users are already friends = so sending another invite is erroneous" },
				{ "EOS_Friends_InviteAwaitingAcceptance.Comment", "/** An outgoing friend invitation is awaiting acceptance; sending another invite to the same user is erroneous */" },
				{ "EOS_Friends_InviteAwaitingAcceptance.Name", "EOSResult::EOS_Friends_InviteAwaitingAcceptance" },
				{ "EOS_Friends_InviteAwaitingAcceptance.ToolTip", "An outgoing friend invitation is awaiting acceptance; sending another invite to the same user is erroneous" },
				{ "EOS_Friends_LocalUserFriendLimitExceeded.Comment", "/** Local user has too many friends to make a new friendship */" },
				{ "EOS_Friends_LocalUserFriendLimitExceeded.Name", "EOSResult::EOS_Friends_LocalUserFriendLimitExceeded" },
				{ "EOS_Friends_LocalUserFriendLimitExceeded.ToolTip", "Local user has too many friends to make a new friendship" },
				{ "EOS_Friends_LocalUserTooManyInvites.Comment", "/** Local user has too many invites to send new invites */" },
				{ "EOS_Friends_LocalUserTooManyInvites.Name", "EOSResult::EOS_Friends_LocalUserTooManyInvites" },
				{ "EOS_Friends_LocalUserTooManyInvites.ToolTip", "Local user has too many invites to send new invites" },
				{ "EOS_Friends_NoInvitation.Comment", "/** There is no friend invitation to accept/reject */" },
				{ "EOS_Friends_NoInvitation.Name", "EOSResult::EOS_Friends_NoInvitation" },
				{ "EOS_Friends_NoInvitation.ToolTip", "There is no friend invitation to accept/reject" },
				{ "EOS_Friends_NotFriends.Comment", "/** Users are not friends = so deleting the friend is erroneous */" },
				{ "EOS_Friends_NotFriends.Name", "EOSResult::EOS_Friends_NotFriends" },
				{ "EOS_Friends_NotFriends.ToolTip", "Users are not friends = so deleting the friend is erroneous" },
				{ "EOS_Friends_TargetUserFriendLimitExceeded.Comment", "/** Remote user has too many friends to make a new friendship */" },
				{ "EOS_Friends_TargetUserFriendLimitExceeded.Name", "EOSResult::EOS_Friends_TargetUserFriendLimitExceeded" },
				{ "EOS_Friends_TargetUserFriendLimitExceeded.ToolTip", "Remote user has too many friends to make a new friendship" },
				{ "EOS_Friends_TargetUserTooManyInvites.Comment", "/** Remote user has too many invites to receive new invites */" },
				{ "EOS_Friends_TargetUserTooManyInvites.Name", "EOSResult::EOS_Friends_TargetUserTooManyInvites" },
				{ "EOS_Friends_TargetUserTooManyInvites.ToolTip", "Remote user has too many invites to receive new invites" },
				{ "EOS_IncompatibleVersion.Comment", "/** Incompatible client for backend version */" },
				{ "EOS_IncompatibleVersion.Name", "EOSResult::EOS_IncompatibleVersion" },
				{ "EOS_IncompatibleVersion.ToolTip", "Incompatible client for backend version" },
				{ "EOS_Invalid_Deployment.Comment", "/** The deployment given to the backend is invalid */" },
				{ "EOS_Invalid_Deployment.Name", "EOSResult::EOS_Invalid_Deployment" },
				{ "EOS_Invalid_Deployment.ToolTip", "The deployment given to the backend is invalid" },
				{ "EOS_Invalid_Product.Comment", "/** The product id specified to the backend is invalid */" },
				{ "EOS_Invalid_Product.Name", "EOSResult::EOS_Invalid_Product" },
				{ "EOS_Invalid_Product.ToolTip", "The product id specified to the backend is invalid" },
				{ "EOS_Invalid_ProductUserID.Comment", "/** The product user id specified to the backend is invalid */" },
				{ "EOS_Invalid_ProductUserID.Name", "EOSResult::EOS_Invalid_ProductUserID" },
				{ "EOS_Invalid_ProductUserID.ToolTip", "The product user id specified to the backend is invalid" },
				{ "EOS_Invalid_Sandbox.Comment", "/** The sandbox given to the backend is invalid */" },
				{ "EOS_Invalid_Sandbox.Name", "EOSResult::EOS_Invalid_Sandbox" },
				{ "EOS_Invalid_Sandbox.ToolTip", "The sandbox given to the backend is invalid" },
				{ "EOS_InvalidAuth.Comment", "/** Failed due to invalid or missing authentication token for user (e.g. not logged in) */" },
				{ "EOS_InvalidAuth.Name", "EOSResult::EOS_InvalidAuth" },
				{ "EOS_InvalidAuth.ToolTip", "Failed due to invalid or missing authentication token for user (e.g. not logged in)" },
				{ "EOS_InvalidCredentials.Comment", "/** Failed login due to invalid credentials */" },
				{ "EOS_InvalidCredentials.Name", "EOSResult::EOS_InvalidCredentials" },
				{ "EOS_InvalidCredentials.ToolTip", "Failed login due to invalid credentials" },
				{ "EOS_InvalidParameters.Comment", "/** Invalid parameters specified for request */" },
				{ "EOS_InvalidParameters.Name", "EOSResult::EOS_InvalidParameters" },
				{ "EOS_InvalidParameters.ToolTip", "Invalid parameters specified for request" },
				{ "EOS_InvalidRequest.Comment", "/** Invalid request */" },
				{ "EOS_InvalidRequest.Name", "EOSResult::EOS_InvalidRequest" },
				{ "EOS_InvalidRequest.ToolTip", "Invalid request" },
				{ "EOS_InvalidSandboxId.Comment", "/** Sandbox id is invalid */" },
				{ "EOS_InvalidSandboxId.Name", "EOSResult::EOS_InvalidSandboxId" },
				{ "EOS_InvalidSandboxId.ToolTip", "Sandbox id is invalid" },
				{ "EOS_InvalidState.Comment", "/** The request failed because resource was in an invalid state */" },
				{ "EOS_InvalidState.Name", "EOSResult::EOS_InvalidState" },
				{ "EOS_InvalidState.ToolTip", "The request failed because resource was in an invalid state" },
				{ "EOS_InvalidUser.Comment", "/** Failed due to invalid or missing user */" },
				{ "EOS_InvalidUser.Name", "EOSResult::EOS_InvalidUser" },
				{ "EOS_InvalidUser.ToolTip", "Failed due to invalid or missing user" },
				{ "EOS_LimitExceeded.Comment", "/** A maximum limit was exceeded on the client, different from EOS_TooManyRequests */" },
				{ "EOS_LimitExceeded.Name", "EOSResult::EOS_LimitExceeded" },
				{ "EOS_LimitExceeded.ToolTip", "A maximum limit was exceeded on the client, different from EOS_TooManyRequests" },
				{ "EOS_Lobby_AggregationFailed.Comment", "/** Backend nodes unavailable to process request */" },
				{ "EOS_Lobby_AggregationFailed.Name", "EOSResult::EOS_Lobby_AggregationFailed" },
				{ "EOS_Lobby_AggregationFailed.ToolTip", "Backend nodes unavailable to process request" },
				{ "EOS_Lobby_DeploymentAtCapacity.Comment", "/** Deployment on node is at capacity */" },
				{ "EOS_Lobby_DeploymentAtCapacity.Name", "EOSResult::EOS_Lobby_DeploymentAtCapacity" },
				{ "EOS_Lobby_DeploymentAtCapacity.ToolTip", "Deployment on node is at capacity" },
				{ "EOS_Lobby_HostAtCapacity.Comment", "/** Individual backend node is as capacity */" },
				{ "EOS_Lobby_HostAtCapacity.Name", "EOSResult::EOS_Lobby_HostAtCapacity" },
				{ "EOS_Lobby_HostAtCapacity.ToolTip", "Individual backend node is as capacity" },
				{ "EOS_Lobby_InvalidLock.Comment", "/** Lobby lock required for operation */" },
				{ "EOS_Lobby_InvalidLock.Name", "EOSResult::EOS_Lobby_InvalidLock" },
				{ "EOS_Lobby_InvalidLock.ToolTip", "Lobby lock required for operation" },
				{ "EOS_Lobby_InvalidSession.Comment", "/** Invalid session reference */" },
				{ "EOS_Lobby_InvalidSession.Name", "EOSResult::EOS_Lobby_InvalidSession" },
				{ "EOS_Lobby_InvalidSession.ToolTip", "Invalid session reference" },
				{ "EOS_Lobby_InviteFailed.Comment", "/** Invite failed to send */" },
				{ "EOS_Lobby_InviteFailed.Name", "EOSResult::EOS_Lobby_InviteFailed" },
				{ "EOS_Lobby_InviteFailed.ToolTip", "Invite failed to send" },
				{ "EOS_Lobby_InviteNotFound.Comment", "/** Invite was not found with the service */" },
				{ "EOS_Lobby_InviteNotFound.Name", "EOSResult::EOS_Lobby_InviteNotFound" },
				{ "EOS_Lobby_InviteNotFound.ToolTip", "Invite was not found with the service" },
				{ "EOS_Lobby_LobbyAlreadyExists.Comment", "/** Lobby already exists in the system */" },
				{ "EOS_Lobby_LobbyAlreadyExists.Name", "EOSResult::EOS_Lobby_LobbyAlreadyExists" },
				{ "EOS_Lobby_LobbyAlreadyExists.ToolTip", "Lobby already exists in the system" },
				{ "EOS_Lobby_MemberUpdateOnly.Comment", "/** While restoring a lost connection lobby ownership changed and only local member data was updated */" },
				{ "EOS_Lobby_MemberUpdateOnly.Name", "EOSResult::EOS_Lobby_MemberUpdateOnly" },
				{ "EOS_Lobby_MemberUpdateOnly.ToolTip", "While restoring a lost connection lobby ownership changed and only local member data was updated" },
				{ "EOS_Lobby_NoPermission.Comment", "/** Client has no permissions to access this session */" },
				{ "EOS_Lobby_NoPermission.Name", "EOSResult::EOS_Lobby_NoPermission" },
				{ "EOS_Lobby_NoPermission.ToolTip", "Client has no permissions to access this session" },
				{ "EOS_Lobby_NotAllowed.Comment", "/** Lobby operation not allowed */" },
				{ "EOS_Lobby_NotAllowed.Name", "EOSResult::EOS_Lobby_NotAllowed" },
				{ "EOS_Lobby_NotAllowed.ToolTip", "Lobby operation not allowed" },
				{ "EOS_Lobby_NotOwner.Comment", "/** Client has no permissions to modify this lobby */" },
				{ "EOS_Lobby_NotOwner.Name", "EOSResult::EOS_Lobby_NotOwner" },
				{ "EOS_Lobby_NotOwner.ToolTip", "Client has no permissions to modify this lobby" },
				{ "EOS_Lobby_SandboxAtCapacity.Comment", "/** Sandbox on node is at capacity */" },
				{ "EOS_Lobby_SandboxAtCapacity.Name", "EOSResult::EOS_Lobby_SandboxAtCapacity" },
				{ "EOS_Lobby_SandboxAtCapacity.ToolTip", "Sandbox on node is at capacity" },
				{ "EOS_Lobby_SandboxNotAllowed.Comment", "/** Sandbox id associated with auth didn't match */" },
				{ "EOS_Lobby_SandboxNotAllowed.Name", "EOSResult::EOS_Lobby_SandboxNotAllowed" },
				{ "EOS_Lobby_SandboxNotAllowed.ToolTip", "Sandbox id associated with auth didn't match" },
				{ "EOS_Lobby_SessionInProgress.Comment", "/** Lobby is already in progress */" },
				{ "EOS_Lobby_SessionInProgress.Name", "EOSResult::EOS_Lobby_SessionInProgress" },
				{ "EOS_Lobby_SessionInProgress.ToolTip", "Lobby is already in progress" },
				{ "EOS_Lobby_TooManyInvites.Comment", "/** User has received too many invites */" },
				{ "EOS_Lobby_TooManyInvites.Name", "EOSResult::EOS_Lobby_TooManyInvites" },
				{ "EOS_Lobby_TooManyInvites.ToolTip", "User has received too many invites" },
				{ "EOS_Lobby_TooManyPlayers.Comment", "/** Too many players to register with this session */" },
				{ "EOS_Lobby_TooManyPlayers.Name", "EOSResult::EOS_Lobby_TooManyPlayers" },
				{ "EOS_Lobby_TooManyPlayers.ToolTip", "Too many players to register with this session" },
				{ "EOS_Lobby_UpsertNotAllowed.Comment", "/** This client may not modify the session */" },
				{ "EOS_Lobby_UpsertNotAllowed.Name", "EOSResult::EOS_Lobby_UpsertNotAllowed" },
				{ "EOS_Lobby_UpsertNotAllowed.ToolTip", "This client may not modify the session" },
				{ "EOS_Missing_Feature.Comment", "/** Client is missing the whitelisted feature */" },
				{ "EOS_Missing_Feature.Name", "EOSResult::EOS_Missing_Feature" },
				{ "EOS_Missing_Feature.ToolTip", "Client is missing the whitelisted feature" },
				{ "EOS_Missing_Role.Comment", "/** Client is missing the whitelisted role */" },
				{ "EOS_Missing_Role.Name", "EOSResult::EOS_Missing_Role" },
				{ "EOS_Missing_Role.ToolTip", "Client is missing the whitelisted role" },
				{ "EOS_MissingParameters_DEPRECATED.Comment", "/** Required parameters are missing. DEPRECATED: This error is no longer used. */" },
				{ "EOS_MissingParameters_DEPRECATED.Name", "EOSResult::EOS_MissingParameters_DEPRECATED" },
				{ "EOS_MissingParameters_DEPRECATED.ToolTip", "Required parameters are missing. DEPRECATED: This error is no longer used." },
				{ "EOS_MissingPermissions.Comment", "/** If the client does not possess the permission required */" },
				{ "EOS_MissingPermissions.Name", "EOSResult::EOS_MissingPermissions" },
				{ "EOS_MissingPermissions.ToolTip", "If the client does not possess the permission required" },
				{ "EOS_NoChange.Comment", "/** The request had no effect */" },
				{ "EOS_NoChange.Name", "EOSResult::EOS_NoChange" },
				{ "EOS_NoChange.ToolTip", "The request had no effect" },
				{ "EOS_NoConnection.Comment", "/** Failed due to no connection */" },
				{ "EOS_NoConnection.Name", "EOSResult::EOS_NoConnection" },
				{ "EOS_NoConnection.ToolTip", "Failed due to no connection" },
				{ "EOS_NotConfigured.Comment", "/** Not configured correctly for use */" },
				{ "EOS_NotConfigured.Name", "EOSResult::EOS_NotConfigured" },
				{ "EOS_NotConfigured.ToolTip", "Not configured correctly for use" },
				{ "EOS_NotFound.Comment", "/** The requested information was not found */" },
				{ "EOS_NotFound.Name", "EOSResult::EOS_NotFound" },
				{ "EOS_NotFound.ToolTip", "The requested information was not found" },
				{ "EOS_NotImplemented.Comment", "/** Feature not available on this implementation */" },
				{ "EOS_NotImplemented.Name", "EOSResult::EOS_NotImplemented" },
				{ "EOS_NotImplemented.ToolTip", "Feature not available on this implementation" },
				{ "EOS_OperationWillRetry.Comment", "/** An error occurred during an asynchronous operation, and it will be retried. Callbacks receiving this result will be called again in the future. */" },
				{ "EOS_OperationWillRetry.Name", "EOSResult::EOS_OperationWillRetry" },
				{ "EOS_OperationWillRetry.ToolTip", "An error occurred during an asynchronous operation, and it will be retried. Callbacks receiving this result will be called again in the future." },
				{ "EOS_PartialResult.Comment", "/** A query returned some but not all of the requested results.  */" },
				{ "EOS_PartialResult.Name", "EOSResult::EOS_PartialResult" },
				{ "EOS_PartialResult.ToolTip", "A query returned some but not all of the requested results." },
				{ "EOS_PlayerDataStorage_DataInvalid.Comment", "/** Request data is invalid */" },
				{ "EOS_PlayerDataStorage_DataInvalid.Name", "EOSResult::EOS_PlayerDataStorage_DataInvalid" },
				{ "EOS_PlayerDataStorage_DataInvalid.ToolTip", "Request data is invalid" },
				{ "EOS_PlayerDataStorage_DataLengthInvalid.Comment", "/** Request data length was invalid */" },
				{ "EOS_PlayerDataStorage_DataLengthInvalid.Name", "EOSResult::EOS_PlayerDataStorage_DataLengthInvalid" },
				{ "EOS_PlayerDataStorage_DataLengthInvalid.ToolTip", "Request data length was invalid" },
				{ "EOS_PlayerDataStorage_EncryptionKeyNotSet.Comment", "/** Encryption key is not set during SDK init.  */" },
				{ "EOS_PlayerDataStorage_EncryptionKeyNotSet.Name", "EOSResult::EOS_PlayerDataStorage_EncryptionKeyNotSet" },
				{ "EOS_PlayerDataStorage_EncryptionKeyNotSet.ToolTip", "Encryption key is not set during SDK init." },
				{ "EOS_PlayerDataStorage_FileCorrupted.Comment", "/** The file is corrupted. In some cases retry can fix the issue. */" },
				{ "EOS_PlayerDataStorage_FileCorrupted.Name", "EOSResult::EOS_PlayerDataStorage_FileCorrupted" },
				{ "EOS_PlayerDataStorage_FileCorrupted.ToolTip", "The file is corrupted. In some cases retry can fix the issue." },
				{ "EOS_PlayerDataStorage_FileHandleInvalid.Comment", "/** Request file handle is not valid */" },
				{ "EOS_PlayerDataStorage_FileHandleInvalid.Name", "EOSResult::EOS_PlayerDataStorage_FileHandleInvalid" },
				{ "EOS_PlayerDataStorage_FileHandleInvalid.ToolTip", "Request file handle is not valid" },
				{ "EOS_PlayerDataStorage_FileHeaderHasNewerVersion.Comment", "/** User is trying to read file that has header from newer version of SDK. Game/SDK needs to be updated. */" },
				{ "EOS_PlayerDataStorage_FileHeaderHasNewerVersion.Name", "EOSResult::EOS_PlayerDataStorage_FileHeaderHasNewerVersion" },
				{ "EOS_PlayerDataStorage_FileHeaderHasNewerVersion.ToolTip", "User is trying to read file that has header from newer version of SDK. Game/SDK needs to be updated." },
				{ "EOS_PlayerDataStorage_FilenameInvalid.Comment", "/** Request filename was invalid */" },
				{ "EOS_PlayerDataStorage_FilenameInvalid.Name", "EOSResult::EOS_PlayerDataStorage_FilenameInvalid" },
				{ "EOS_PlayerDataStorage_FilenameInvalid.ToolTip", "Request filename was invalid" },
				{ "EOS_PlayerDataStorage_FilenameInvalidChars.Comment", "/** Request filename contained invalid characters */" },
				{ "EOS_PlayerDataStorage_FilenameInvalidChars.Name", "EOSResult::EOS_PlayerDataStorage_FilenameInvalidChars" },
				{ "EOS_PlayerDataStorage_FilenameInvalidChars.ToolTip", "Request filename contained invalid characters" },
				{ "EOS_PlayerDataStorage_FilenameLengthInvalid.Comment", "/** Request filename was too long */" },
				{ "EOS_PlayerDataStorage_FilenameLengthInvalid.Name", "EOSResult::EOS_PlayerDataStorage_FilenameLengthInvalid" },
				{ "EOS_PlayerDataStorage_FilenameLengthInvalid.ToolTip", "Request filename was too long" },
				{ "EOS_PlayerDataStorage_FileSizeInvalid.Comment", "/** Request file length is not valid */" },
				{ "EOS_PlayerDataStorage_FileSizeInvalid.Name", "EOSResult::EOS_PlayerDataStorage_FileSizeInvalid" },
				{ "EOS_PlayerDataStorage_FileSizeInvalid.ToolTip", "Request file length is not valid" },
				{ "EOS_PlayerDataStorage_FileSizeTooLarge.Comment", "/** Request operation would grow file too large */" },
				{ "EOS_PlayerDataStorage_FileSizeTooLarge.Name", "EOSResult::EOS_PlayerDataStorage_FileSizeTooLarge" },
				{ "EOS_PlayerDataStorage_FileSizeTooLarge.ToolTip", "Request operation would grow file too large" },
				{ "EOS_PlayerDataStorage_RequestInProgress.Comment", "/** Request is in progress */" },
				{ "EOS_PlayerDataStorage_RequestInProgress.Name", "EOSResult::EOS_PlayerDataStorage_RequestInProgress" },
				{ "EOS_PlayerDataStorage_RequestInProgress.ToolTip", "Request is in progress" },
				{ "EOS_PlayerDataStorage_StartIndexInvalid.Comment", "/** Request start index was invalid */" },
				{ "EOS_PlayerDataStorage_StartIndexInvalid.Name", "EOSResult::EOS_PlayerDataStorage_StartIndexInvalid" },
				{ "EOS_PlayerDataStorage_StartIndexInvalid.ToolTip", "Request start index was invalid" },
				{ "EOS_PlayerDataStorage_UserErrorFromDataCallback.Comment", "/** User data callback returned error (EOS_PlayerDataStorage_EWriteResult::EOS_WR_FailRequest or EOS_PlayerDataStorage_EReadResult::EOS_RR_FailRequest, */" },
				{ "EOS_PlayerDataStorage_UserErrorFromDataCallback.Name", "EOSResult::EOS_PlayerDataStorage_UserErrorFromDataCallback" },
				{ "EOS_PlayerDataStorage_UserErrorFromDataCallback.ToolTip", "User data callback returned error (EOS_PlayerDataStorage_EWriteResult::EOS_WR_FailRequest or EOS_PlayerDataStorage_EReadResult::EOS_RR_FailRequest," },
				{ "EOS_PlayerDataStorage_UserThrottled.Comment", "/** User is marked as throttled which means he can't perform some operations because limits are exceeded.  */" },
				{ "EOS_PlayerDataStorage_UserThrottled.Name", "EOSResult::EOS_PlayerDataStorage_UserThrottled" },
				{ "EOS_PlayerDataStorage_UserThrottled.ToolTip", "User is marked as throttled which means he can't perform some operations because limits are exceeded." },
				{ "EOS_Presence_DataInvalid.Comment", "/** Request data was null or invalid */" },
				{ "EOS_Presence_DataInvalid.Name", "EOSResult::EOS_Presence_DataInvalid" },
				{ "EOS_Presence_DataInvalid.ToolTip", "Request data was null or invalid" },
				{ "EOS_Presence_DataKeyInvalid.Comment", "/** Request contained data with an invalid key */" },
				{ "EOS_Presence_DataKeyInvalid.Name", "EOSResult::EOS_Presence_DataKeyInvalid" },
				{ "EOS_Presence_DataKeyInvalid.ToolTip", "Request contained data with an invalid key" },
				{ "EOS_Presence_DataKeyLengthInvalid.Comment", "/** Request contained data with a key too long or too short */" },
				{ "EOS_Presence_DataKeyLengthInvalid.Name", "EOSResult::EOS_Presence_DataKeyLengthInvalid" },
				{ "EOS_Presence_DataKeyLengthInvalid.ToolTip", "Request contained data with a key too long or too short" },
				{ "EOS_Presence_DataLengthInvalid.Comment", "/** Request contained too many or too few unique data items = or the request would overflow the maximum amount of data allowed */" },
				{ "EOS_Presence_DataLengthInvalid.Name", "EOSResult::EOS_Presence_DataLengthInvalid" },
				{ "EOS_Presence_DataLengthInvalid.ToolTip", "Request contained too many or too few unique data items = or the request would overflow the maximum amount of data allowed" },
				{ "EOS_Presence_DataValueInvalid.Comment", "/** Request contained data with an invalid value */" },
				{ "EOS_Presence_DataValueInvalid.Name", "EOSResult::EOS_Presence_DataValueInvalid" },
				{ "EOS_Presence_DataValueInvalid.ToolTip", "Request contained data with an invalid value" },
				{ "EOS_Presence_DataValueLengthInvalid.Comment", "/** Request contained data with a value too long */" },
				{ "EOS_Presence_DataValueLengthInvalid.Name", "EOSResult::EOS_Presence_DataValueLengthInvalid" },
				{ "EOS_Presence_DataValueLengthInvalid.ToolTip", "Request contained data with a value too long" },
				{ "EOS_Presence_RichTextInvalid.Comment", "/** Request contained an invalid rich text string */" },
				{ "EOS_Presence_RichTextInvalid.Name", "EOSResult::EOS_Presence_RichTextInvalid" },
				{ "EOS_Presence_RichTextInvalid.ToolTip", "Request contained an invalid rich text string" },
				{ "EOS_Presence_RichTextLengthInvalid.Comment", "/** Request contained a rich text string that was too long */" },
				{ "EOS_Presence_RichTextLengthInvalid.Name", "EOSResult::EOS_Presence_RichTextLengthInvalid" },
				{ "EOS_Presence_RichTextLengthInvalid.ToolTip", "Request contained a rich text string that was too long" },
				{ "EOS_Presence_StatusInvalid.Comment", "/** Request contained an invalid status state */" },
				{ "EOS_Presence_StatusInvalid.Name", "EOSResult::EOS_Presence_StatusInvalid" },
				{ "EOS_Presence_StatusInvalid.ToolTip", "Request contained an invalid status state" },
				{ "EOS_ServiceFailure.Comment", "/** There was a failure with the backend service */" },
				{ "EOS_ServiceFailure.Name", "EOSResult::EOS_ServiceFailure" },
				{ "EOS_ServiceFailure.ToolTip", "There was a failure with the backend service" },
				{ "EOS_Sessions_AggregationFailed.Comment", "/** Backend nodes unavailable to process request */" },
				{ "EOS_Sessions_AggregationFailed.Name", "EOSResult::EOS_Sessions_AggregationFailed" },
				{ "EOS_Sessions_AggregationFailed.ToolTip", "Backend nodes unavailable to process request" },
				{ "EOS_Sessions_DeploymentAtCapacity.Comment", "/** Deployment on node is at capacity */" },
				{ "EOS_Sessions_DeploymentAtCapacity.Name", "EOSResult::EOS_Sessions_DeploymentAtCapacity" },
				{ "EOS_Sessions_DeploymentAtCapacity.ToolTip", "Deployment on node is at capacity" },
				{ "EOS_Sessions_HostAtCapacity.Comment", "/** Individual backend node is as capacity */" },
				{ "EOS_Sessions_HostAtCapacity.Name", "EOSResult::EOS_Sessions_HostAtCapacity" },
				{ "EOS_Sessions_HostAtCapacity.ToolTip", "Individual backend node is as capacity" },
				{ "EOS_Sessions_InvalidLock.Comment", "/** Session lock required for operation */" },
				{ "EOS_Sessions_InvalidLock.Name", "EOSResult::EOS_Sessions_InvalidLock" },
				{ "EOS_Sessions_InvalidLock.ToolTip", "Session lock required for operation" },
				{ "EOS_Sessions_InvalidSession.Comment", "/** Invalid session reference */" },
				{ "EOS_Sessions_InvalidSession.Name", "EOSResult::EOS_Sessions_InvalidSession" },
				{ "EOS_Sessions_InvalidSession.ToolTip", "Invalid session reference" },
				{ "EOS_Sessions_InviteFailed.Comment", "/** Invite failed to send */" },
				{ "EOS_Sessions_InviteFailed.Name", "EOSResult::EOS_Sessions_InviteFailed" },
				{ "EOS_Sessions_InviteFailed.ToolTip", "Invite failed to send" },
				{ "EOS_Sessions_InviteNotFound.Comment", "/** Invite was not found with the service */" },
				{ "EOS_Sessions_InviteNotFound.Name", "EOSResult::EOS_Sessions_InviteNotFound" },
				{ "EOS_Sessions_InviteNotFound.ToolTip", "Invite was not found with the service" },
				{ "EOS_Sessions_NoPermission.Comment", "/** Client has no permissions to access this session */" },
				{ "EOS_Sessions_NoPermission.Name", "EOSResult::EOS_Sessions_NoPermission" },
				{ "EOS_Sessions_NoPermission.ToolTip", "Client has no permissions to access this session" },
				{ "EOS_Sessions_NotAllowed.Comment", "/** Session operation not allowed */" },
				{ "EOS_Sessions_NotAllowed.Name", "EOSResult::EOS_Sessions_NotAllowed" },
				{ "EOS_Sessions_NotAllowed.ToolTip", "Session operation not allowed" },
				{ "EOS_Sessions_OutOfSync.Comment", "/** Session is currently out of sync with the backend = data is saved locally but needs to sync with backend */" },
				{ "EOS_Sessions_OutOfSync.Name", "EOSResult::EOS_Sessions_OutOfSync" },
				{ "EOS_Sessions_OutOfSync.ToolTip", "Session is currently out of sync with the backend = data is saved locally but needs to sync with backend" },
				{ "EOS_Sessions_PresenceSessionExists.Comment", "/** Presence session already exists for the client */" },
				{ "EOS_Sessions_PresenceSessionExists.Name", "EOSResult::EOS_Sessions_PresenceSessionExists" },
				{ "EOS_Sessions_PresenceSessionExists.ToolTip", "Presence session already exists for the client" },
				{ "EOS_Sessions_SandboxAtCapacity.Comment", "/** Sandbox on node is at capacity */" },
				{ "EOS_Sessions_SandboxAtCapacity.Name", "EOSResult::EOS_Sessions_SandboxAtCapacity" },
				{ "EOS_Sessions_SandboxAtCapacity.ToolTip", "Sandbox on node is at capacity" },
				{ "EOS_Sessions_SandboxNotAllowed.Comment", "/** Sandbox id associated with auth didn't match */" },
				{ "EOS_Sessions_SandboxNotAllowed.Name", "EOSResult::EOS_Sessions_SandboxNotAllowed" },
				{ "EOS_Sessions_SandboxNotAllowed.ToolTip", "Sandbox id associated with auth didn't match" },
				{ "EOS_Sessions_SessionAlreadyExists.Comment", "/** Session already exists in the system */" },
				{ "EOS_Sessions_SessionAlreadyExists.Name", "EOSResult::EOS_Sessions_SessionAlreadyExists" },
				{ "EOS_Sessions_SessionAlreadyExists.ToolTip", "Session already exists in the system" },
				{ "EOS_Sessions_SessionInProgress.Comment", "/** Session is already in progress */" },
				{ "EOS_Sessions_SessionInProgress.Name", "EOSResult::EOS_Sessions_SessionInProgress" },
				{ "EOS_Sessions_SessionInProgress.ToolTip", "Session is already in progress" },
				{ "EOS_Sessions_SessionNotAnonymous.Comment", "/** An anonymous operation was attempted on a non anonymous session */" },
				{ "EOS_Sessions_SessionNotAnonymous.Name", "EOSResult::EOS_Sessions_SessionNotAnonymous" },
				{ "EOS_Sessions_SessionNotAnonymous.ToolTip", "An anonymous operation was attempted on a non anonymous session" },
				{ "EOS_Sessions_TooManyInvites.Comment", "/** User has received too many invites */" },
				{ "EOS_Sessions_TooManyInvites.Name", "EOSResult::EOS_Sessions_TooManyInvites" },
				{ "EOS_Sessions_TooManyInvites.ToolTip", "User has received too many invites" },
				{ "EOS_Sessions_TooManyPlayers.Comment", "/** Too many players to register with this session */" },
				{ "EOS_Sessions_TooManyPlayers.Name", "EOSResult::EOS_Sessions_TooManyPlayers" },
				{ "EOS_Sessions_TooManyPlayers.ToolTip", "Too many players to register with this session" },
				{ "EOS_Sessions_UpsertNotAllowed.Comment", "/** This client may not modify the session */" },
				{ "EOS_Sessions_UpsertNotAllowed.Name", "EOSResult::EOS_Sessions_UpsertNotAllowed" },
				{ "EOS_Sessions_UpsertNotAllowed.ToolTip", "This client may not modify the session" },
				{ "EOS_Success.Comment", "/** Successful result. no further error processing needed */" },
				{ "EOS_Success.Name", "EOSResult::EOS_Success" },
				{ "EOS_Success.ToolTip", "Successful result. no further error processing needed" },
				{ "EOS_TimedOut.Comment", "/** Request timed out */" },
				{ "EOS_TimedOut.Name", "EOSResult::EOS_TimedOut" },
				{ "EOS_TimedOut.ToolTip", "Request timed out" },
				{ "EOS_Token_Not_Account.Comment", "/** If the token provided does not represent an account */" },
				{ "EOS_Token_Not_Account.Name", "EOSResult::EOS_Token_Not_Account" },
				{ "EOS_Token_Not_Account.ToolTip", "If the token provided does not represent an account" },
				{ "EOS_TooManyRequests.Comment", "/** Throttled due to too many requests */" },
				{ "EOS_TooManyRequests.Name", "EOSResult::EOS_TooManyRequests" },
				{ "EOS_TooManyRequests.ToolTip", "Throttled due to too many requests" },
				{ "EOS_UI_SocialOverlayLoadError.Comment", "/** The social overlay page failed to load */" },
				{ "EOS_UI_SocialOverlayLoadError.Name", "EOSResult::EOS_UI_SocialOverlayLoadError" },
				{ "EOS_UI_SocialOverlayLoadError.ToolTip", "The social overlay page failed to load" },
				{ "EOS_UnrecognizedResponse.Comment", "/** Failed due to unable to parse or recognize a backend response */" },
				{ "EOS_UnrecognizedResponse.Name", "EOSResult::EOS_UnrecognizedResponse" },
				{ "EOS_UnrecognizedResponse.ToolTip", "Failed due to unable to parse or recognize a backend response" },
				{ "EOS_VersionMismatch.Comment", "/** The request attempted to use multiple or inconsistent API versions */" },
				{ "EOS_VersionMismatch.Name", "EOSResult::EOS_VersionMismatch" },
				{ "EOS_VersionMismatch.ToolTip", "The request attempted to use multiple or inconsistent API versions" },
				{ "MAX.Name", "EOSResult::MAX" },
				{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"EOSResult",
				"EOSResult",
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
	static UEnum* EEOSChannelType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EOSCore_EEOSChannelType, Z_Construct_UPackage__Script_EOSCore(), TEXT("EEOSChannelType"));
		}
		return Singleton;
	}
	template<> EOSCORE_API UEnum* StaticEnum<EEOSChannelType>()
	{
		return EEOSChannelType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSChannelType(EEOSChannelType_StaticEnum, TEXT("/Script/EOSCore"), TEXT("EEOSChannelType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EOSCore_EEOSChannelType_Hash() { return 997532019U; }
	UEnum* Z_Construct_UEnum_EOSCore_EEOSChannelType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSChannelType"), 0, Get_Z_Construct_UEnum_EOSCore_EEOSChannelType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSChannelType::DEFAULT", (int64)EEOSChannelType::DEFAULT },
				{ "EEOSChannelType::DATA_REQUEST", (int64)EEOSChannelType::DATA_REQUEST },
				{ "EEOSChannelType::DATA_HANDSHAKE", (int64)EEOSChannelType::DATA_HANDSHAKE },
				{ "EEOSChannelType::DATA_SUBSYSTEM", (int64)EEOSChannelType::DATA_SUBSYSTEM },
				{ "EEOSChannelType::DATA_CHAT", (int64)EEOSChannelType::DATA_CHAT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DATA_CHAT.Name", "EEOSChannelType::DATA_CHAT" },
				{ "DATA_HANDSHAKE.Name", "EEOSChannelType::DATA_HANDSHAKE" },
				{ "DATA_REQUEST.Name", "EEOSChannelType::DATA_REQUEST" },
				{ "DATA_SUBSYSTEM.Name", "EEOSChannelType::DATA_SUBSYSTEM" },
				{ "DEFAULT.Name", "EEOSChannelType::DEFAULT" },
				{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EOSCore,
				nullptr,
				"EEOSChannelType",
				"EEOSChannelType",
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
class UScriptStruct* FEOSPageQuery::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSPageQuery_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSPageQuery, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSPageQuery"), sizeof(FEOSPageQuery), Get_Z_Construct_UScriptStruct_FEOSPageQuery_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSPageQuery>()
{
	return FEOSPageQuery::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSPageQuery(FEOSPageQuery::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSPageQuery"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSPageQuery
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSPageQuery()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSPageQuery")),new UScriptStruct::TCppStructOps<FEOSPageQuery>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSPageQuery;
	struct Z_Construct_UScriptStruct_FEOSPageQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPageQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSPageQuery>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "EOSCore" },
		{ "Comment", "/** The maximum number of results to have in the page. */" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
		{ "ToolTip", "The maximum number of results to have in the page." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPageQuery, MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_StartIndex_MetaData[] = {
		{ "Category", "EOSCore" },
		{ "Comment", "/** The index into the ordered query results to start the page at. */" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
		{ "ToolTip", "The index into the ordered query results to start the page at." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSPageQuery, StartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_StartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_StartIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSPageQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSPageQuery_Statics::NewProp_StartIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSPageQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSPageQuery",
		sizeof(FEOSPageQuery),
		alignof(FEOSPageQuery),
		Z_Construct_UScriptStruct_FEOSPageQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPageQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSPageQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSPageQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSPageQuery()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSPageQuery_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSPageQuery"), sizeof(FEOSPageQuery), Get_Z_Construct_UScriptStruct_FEOSPageQuery_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSPageQuery_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSPageQuery_Hash() { return 2467112270U; }
class UScriptStruct* FEOSUIEventId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSUIEventId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSUIEventId, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSUIEventId"), sizeof(FEOSUIEventId), Get_Z_Construct_UScriptStruct_FEOSUIEventId_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSUIEventId>()
{
	return FEOSUIEventId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSUIEventId(FEOSUIEventId::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSUIEventId"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSUIEventId
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSUIEventId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSUIEventId")),new UScriptStruct::TCppStructOps<FEOSUIEventId>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSUIEventId;
	struct Z_Construct_UScriptStruct_FEOSUIEventId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSUIEventId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** ID representing a specific UI event. */" },
		{ "HasNativeBreak", "EOSCore.EOSCoreLibrary.BreakUIEventIdStruct" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
		{ "ToolTip", "ID representing a specific UI event." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSUIEventId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSUIEventId>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSUIEventId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSUIEventId",
		sizeof(FEOSUIEventId),
		alignof(FEOSUIEventId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSUIEventId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSUIEventId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSUIEventId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSUIEventId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSUIEventId"), sizeof(FEOSUIEventId), Get_Z_Construct_UScriptStruct_FEOSUIEventId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSUIEventId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSUIEventId_Hash() { return 3189962591U; }
class UScriptStruct* FLobbyInviteId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyInviteId, Z_Construct_UPackage__Script_EOSCore(), TEXT("LobbyInviteId"), sizeof(FLobbyInviteId), Get_Z_Construct_UScriptStruct_FLobbyInviteId_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FLobbyInviteId>()
{
	return FLobbyInviteId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyInviteId(FLobbyInviteId::StaticStruct, TEXT("/Script/EOSCore"), TEXT("LobbyInviteId"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFLobbyInviteId
{
	FScriptStruct_EOSCore_StaticRegisterNativesFLobbyInviteId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyInviteId")),new UScriptStruct::TCppStructOps<FLobbyInviteId>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFLobbyInviteId;
	struct Z_Construct_UScriptStruct_FLobbyInviteId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "EOSCore.EOSCoreLibrary.BreakLobbyInviteIdStruct" },
		{ "HasNativeMake", "EOSCore.EOSCoreLibrary.MakeLobbyInviteIdStruct" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyInviteId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyInviteId>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyInviteId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"LobbyInviteId",
		sizeof(FLobbyInviteId),
		alignof(FLobbyInviteId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyInviteId"), sizeof(FLobbyInviteId), Get_Z_Construct_UScriptStruct_FLobbyInviteId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyInviteId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteId_Hash() { return 3873623988U; }
class UScriptStruct* FAccessToken::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FAccessToken_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccessToken, Z_Construct_UPackage__Script_EOSCore(), TEXT("AccessToken"), sizeof(FAccessToken), Get_Z_Construct_UScriptStruct_FAccessToken_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FAccessToken>()
{
	return FAccessToken::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccessToken(FAccessToken::StaticStruct, TEXT("/Script/EOSCore"), TEXT("AccessToken"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFAccessToken
{
	FScriptStruct_EOSCore_StaticRegisterNativesFAccessToken()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AccessToken")),new UScriptStruct::TCppStructOps<FAccessToken>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFAccessToken;
	struct Z_Construct_UScriptStruct_FAccessToken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccessToken_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "EOSCore.EOSCoreLibrary.BreakAccessTokenStruct" },
		{ "HasNativeMake", "EOSCore.EOSCoreLibrary.MakeAccessTokenStruct" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccessToken_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccessToken>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccessToken_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"AccessToken",
		sizeof(FAccessToken),
		alignof(FAccessToken),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccessToken_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccessToken_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccessToken()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccessToken_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccessToken"), sizeof(FAccessToken), Get_Z_Construct_UScriptStruct_FAccessToken_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccessToken_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccessToken_Hash() { return 3280590548U; }
class UScriptStruct* FEOSNotificationId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSNotificationId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSNotificationId, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSNotificationId"), sizeof(FEOSNotificationId), Get_Z_Construct_UScriptStruct_FEOSNotificationId_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSNotificationId>()
{
	return FEOSNotificationId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSNotificationId(FEOSNotificationId::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSNotificationId"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSNotificationId
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSNotificationId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSNotificationId")),new UScriptStruct::TCppStructOps<FEOSNotificationId>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSNotificationId;
	struct Z_Construct_UScriptStruct_FEOSNotificationId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSNotificationId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSNotificationId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSNotificationId>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSNotificationId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSNotificationId",
		sizeof(FEOSNotificationId),
		alignof(FEOSNotificationId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSNotificationId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSNotificationId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSNotificationId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSNotificationId"), sizeof(FEOSNotificationId), Get_Z_Construct_UScriptStruct_FEOSNotificationId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSNotificationId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSNotificationId_Hash() { return 3371254307U; }
class UScriptStruct* FContinuanceToken::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FContinuanceToken_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FContinuanceToken, Z_Construct_UPackage__Script_EOSCore(), TEXT("ContinuanceToken"), sizeof(FContinuanceToken), Get_Z_Construct_UScriptStruct_FContinuanceToken_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FContinuanceToken>()
{
	return FContinuanceToken::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FContinuanceToken(FContinuanceToken::StaticStruct, TEXT("/Script/EOSCore"), TEXT("ContinuanceToken"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFContinuanceToken
{
	FScriptStruct_EOSCore_StaticRegisterNativesFContinuanceToken()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ContinuanceToken")),new UScriptStruct::TCppStructOps<FContinuanceToken>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFContinuanceToken;
	struct Z_Construct_UScriptStruct_FContinuanceToken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContinuanceToken_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContinuanceToken_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContinuanceToken>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContinuanceToken_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"ContinuanceToken",
		sizeof(FContinuanceToken),
		alignof(FContinuanceToken),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContinuanceToken_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContinuanceToken_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContinuanceToken()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FContinuanceToken_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ContinuanceToken"), sizeof(FContinuanceToken), Get_Z_Construct_UScriptStruct_FContinuanceToken_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FContinuanceToken_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FContinuanceToken_Hash() { return 4113468751U; }
class UScriptStruct* FEOSTitleStorageFileTransferRequestHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSTitleStorageFileTransferRequestHandle"), sizeof(FEOSTitleStorageFileTransferRequestHandle), Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSTitleStorageFileTransferRequestHandle>()
{
	return FEOSTitleStorageFileTransferRequestHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle(FEOSTitleStorageFileTransferRequestHandle::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSTitleStorageFileTransferRequestHandle"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSTitleStorageFileTransferRequestHandle
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSTitleStorageFileTransferRequestHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSTitleStorageFileTransferRequestHandle")),new UScriptStruct::TCppStructOps<FEOSTitleStorageFileTransferRequestHandle>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSTitleStorageFileTransferRequestHandle;
	struct Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSTitleStorageFileTransferRequestHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSTitleStorageFileTransferRequestHandle",
		sizeof(FEOSTitleStorageFileTransferRequestHandle),
		alignof(FEOSTitleStorageFileTransferRequestHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSTitleStorageFileTransferRequestHandle"), sizeof(FEOSTitleStorageFileTransferRequestHandle), Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Hash() { return 799068300U; }
class UScriptStruct* FEOSLobbyId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSLobbyId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSLobbyId, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSLobbyId"), sizeof(FEOSLobbyId), Get_Z_Construct_UScriptStruct_FEOSLobbyId_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSLobbyId>()
{
	return FEOSLobbyId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSLobbyId(FEOSLobbyId::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSLobbyId"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSLobbyId
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSLobbyId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSLobbyId")),new UScriptStruct::TCppStructOps<FEOSLobbyId>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSLobbyId;
	struct Z_Construct_UScriptStruct_FEOSLobbyId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLobbyId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** All lobbies are referenced by a unique lobby id */" },
		{ "HasNativeBreak", "EOSCore.EOSCoreLibrary.BreakLobbyIdStruct" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
		{ "ToolTip", "All lobbies are referenced by a unique lobby id" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSLobbyId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSLobbyId>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSLobbyId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSLobbyId",
		sizeof(FEOSLobbyId),
		alignof(FEOSLobbyId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLobbyId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLobbyId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSLobbyId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSLobbyId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSLobbyId"), sizeof(FEOSLobbyId), Get_Z_Construct_UScriptStruct_FEOSLobbyId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSLobbyId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSLobbyId_Hash() { return 4031447743U; }
class UScriptStruct* FEOSProductUserId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSProductUserId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSProductUserId, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSProductUserId"), sizeof(FEOSProductUserId), Get_Z_Construct_UScriptStruct_FEOSProductUserId_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSProductUserId>()
{
	return FEOSProductUserId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSProductUserId(FEOSProductUserId::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSProductUserId"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSProductUserId
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSProductUserId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSProductUserId")),new UScriptStruct::TCppStructOps<FEOSProductUserId>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSProductUserId;
	struct Z_Construct_UScriptStruct_FEOSProductUserId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSProductUserId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSProductUserId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSProductUserId>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSProductUserId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSProductUserId",
		sizeof(FEOSProductUserId),
		alignof(FEOSProductUserId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSProductUserId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSProductUserId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSProductUserId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSProductUserId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSProductUserId"), sizeof(FEOSProductUserId), Get_Z_Construct_UScriptStruct_FEOSProductUserId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSProductUserId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSProductUserId_Hash() { return 3079733180U; }
class UScriptStruct* FEOSEpicAccountId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EOSCORE_API uint32 Get_Z_Construct_UScriptStruct_FEOSEpicAccountId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSEpicAccountId, Z_Construct_UPackage__Script_EOSCore(), TEXT("EOSEpicAccountId"), sizeof(FEOSEpicAccountId), Get_Z_Construct_UScriptStruct_FEOSEpicAccountId_Hash());
	}
	return Singleton;
}
template<> EOSCORE_API UScriptStruct* StaticStruct<FEOSEpicAccountId>()
{
	return FEOSEpicAccountId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSEpicAccountId(FEOSEpicAccountId::StaticStruct, TEXT("/Script/EOSCore"), TEXT("EOSEpicAccountId"), false, nullptr, nullptr);
static struct FScriptStruct_EOSCore_StaticRegisterNativesFEOSEpicAccountId
{
	FScriptStruct_EOSCore_StaticRegisterNativesFEOSEpicAccountId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EOSEpicAccountId")),new UScriptStruct::TCppStructOps<FEOSEpicAccountId>);
	}
} ScriptStruct_EOSCore_StaticRegisterNativesFEOSEpicAccountId;
	struct Z_Construct_UScriptStruct_FEOSEpicAccountId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSEpicAccountId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/EOSTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSEpicAccountId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSEpicAccountId>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSEpicAccountId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
		nullptr,
		&NewStructOps,
		"EOSEpicAccountId",
		sizeof(FEOSEpicAccountId),
		alignof(FEOSEpicAccountId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSEpicAccountId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSEpicAccountId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSEpicAccountId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSEpicAccountId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EOSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSEpicAccountId"), sizeof(FEOSEpicAccountId), Get_Z_Construct_UScriptStruct_FEOSEpicAccountId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSEpicAccountId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSEpicAccountId_Hash() { return 2597192914U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
