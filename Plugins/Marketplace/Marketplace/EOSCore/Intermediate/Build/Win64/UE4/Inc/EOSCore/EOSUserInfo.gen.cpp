// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/UserInfo/EOSUserInfo.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserInfo() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreUserInfo_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreUserInfo();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoExternalUserInfo();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoCopyExternalUserInfoByAccountIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoCopyExternalUserInfoByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfo();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoCopyUserInfoOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoGetExternalUserInfoCountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByDisplayNameCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByDisplayNameOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByExternalAccountCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByExternalAccountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByExternalAccountCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByDisplayNameCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreUserInfo::execEOSUserInfoCopyExternalUserInfoByAccountId)
	{
		P_GET_STRUCT(FEOSUserInfoCopyExternalUserInfoByAccountIdOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSUserInfoExternalUserInfo,Z_Param_Out_outExternalUserInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreUserInfo::EOSUserInfoCopyExternalUserInfoByAccountId(Z_Param_options,Z_Param_Out_outExternalUserInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUserInfo::execEOSUserInfoCopyExternalUserInfoByAccountType)
	{
		P_GET_STRUCT(FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSUserInfoExternalUserInfo,Z_Param_Out_outExternalUserInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreUserInfo::EOSUserInfoCopyExternalUserInfoByAccountType(Z_Param_options,Z_Param_Out_outExternalUserInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUserInfo::execEOSUserInfoCopyExternalUserInfoByIndex)
	{
		P_GET_STRUCT(FEOSUserInfoCopyExternalUserInfoByIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSUserInfoExternalUserInfo,Z_Param_Out_outExternalUserInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreUserInfo::EOSUserInfoCopyExternalUserInfoByIndex(Z_Param_options,Z_Param_Out_outExternalUserInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUserInfo::execEOSUserInfoGetExternalUserInfoCount)
	{
		P_GET_STRUCT(FEOSUserInfoGetExternalUserInfoCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreUserInfo::EOSUserInfoGetExternalUserInfoCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUserInfo::execEOSUserInfoCopyUserInfo)
	{
		P_GET_STRUCT(FEOSUserInfoCopyUserInfoOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSUserInfo,Z_Param_Out_outUserInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreUserInfo::EOSUserInfoCopyUserInfo(Z_Param_options,Z_Param_Out_outUserInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUserInfo::execEOSUserInfoQueryUserInfoByExternalAccount)
	{
		P_GET_STRUCT(FEOSUserInfoQueryUserInfoByExternalAccountOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSUserInfoQueryUserInfoByExternalAccount(Z_Param_options,FOnQueryUserInfoByExternalAccountCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUserInfo::execEOSUserInfoQueryUserInfoByDisplayName)
	{
		P_GET_STRUCT(FEOSUserInfoQueryUserInfoByDisplayNameOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSUserInfoQueryUserInfoByDisplayName(Z_Param_options,FOnQueryUserInfoByDisplayNameCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUserInfo::execEOSUserInfoQueryUserInfo)
	{
		P_GET_STRUCT(FEOSUserInfoQueryUserInfoOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSUserInfoQueryUserInfo(Z_Param_options,FOnQueryUserInfoCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUserInfo::execGetUserInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreUserInfo**)Z_Param__Result=UCoreUserInfo::GetUserInfo();
		P_NATIVE_END;
	}
	void UCoreUserInfo::StaticRegisterNativesUCoreUserInfo()
	{
		UClass* Class = UCoreUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSUserInfoCopyExternalUserInfoByAccountId", &UCoreUserInfo::execEOSUserInfoCopyExternalUserInfoByAccountId },
			{ "EOSUserInfoCopyExternalUserInfoByAccountType", &UCoreUserInfo::execEOSUserInfoCopyExternalUserInfoByAccountType },
			{ "EOSUserInfoCopyExternalUserInfoByIndex", &UCoreUserInfo::execEOSUserInfoCopyExternalUserInfoByIndex },
			{ "EOSUserInfoCopyUserInfo", &UCoreUserInfo::execEOSUserInfoCopyUserInfo },
			{ "EOSUserInfoGetExternalUserInfoCount", &UCoreUserInfo::execEOSUserInfoGetExternalUserInfoCount },
			{ "EOSUserInfoQueryUserInfo", &UCoreUserInfo::execEOSUserInfoQueryUserInfo },
			{ "EOSUserInfoQueryUserInfoByDisplayName", &UCoreUserInfo::execEOSUserInfoQueryUserInfoByDisplayName },
			{ "EOSUserInfoQueryUserInfoByExternalAccount", &UCoreUserInfo::execEOSUserInfoQueryUserInfoByExternalAccount },
			{ "GetUserInfo", &UCoreUserInfo::execGetUserInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics
	{
		struct CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountId_Parms
		{
			FEOSUserInfoCopyExternalUserInfoByAccountIdOptions options;
			FEOSUserInfoExternalUserInfo outExternalUserInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outExternalUserInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::NewProp_outExternalUserInfo = { "outExternalUserInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountId_Parms, outExternalUserInfo), Z_Construct_UScriptStruct_FEOSUserInfoExternalUserInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountId_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoCopyExternalUserInfoByAccountIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::NewProp_outExternalUserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UserInfo" },
		{ "Comment", "/**\n     * Fetches an external user info for a given external account id.\n     *\n     * @param Options Structure containing the account id being accessed\n     * @param OutExternalUserInfo The external user info. If it exists and is valid, use EOS_UserInfo_ExternalUserInfo_Release when finished\n     *\n     * @see EOS_UserInfo_ExternalUserInfo_Release\n     *\n     * @return EOS_Success if the information is available and passed out in OutExternalUserInfo\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the external user info is not found\n     */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "Fetches an external user info for a given external account id.\n\n@param Options Structure containing the account id being accessed\n@param OutExternalUserInfo The external user info. If it exists and is valid, use EOS_UserInfo_ExternalUserInfo_Release when finished\n\n@see EOS_UserInfo_ExternalUserInfo_Release\n\n@return EOS_Success if the information is available and passed out in OutExternalUserInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the external user info is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUserInfo, nullptr, "EOSUserInfoCopyExternalUserInfoByAccountId", nullptr, nullptr, sizeof(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountId_Parms), Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics
	{
		struct CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountType_Parms
		{
			FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions options;
			FEOSUserInfoExternalUserInfo outExternalUserInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outExternalUserInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountType_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::NewProp_outExternalUserInfo = { "outExternalUserInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountType_Parms, outExternalUserInfo), Z_Construct_UScriptStruct_FEOSUserInfoExternalUserInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountType_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::NewProp_outExternalUserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UserInfo" },
		{ "Comment", "/**\n     * Fetches an external user info for a given external account type.\n     *\n     * @param Options Structure containing the account type being accessed\n     * @param OutExternalUserInfo The external user info. If it exists and is valid, use EOS_UserInfo_ExternalUserInfo_Release when finished\n     *\n     * @see EOS_UserInfo_ExternalUserInfo_Release\n     *\n     * @return EOS_Success if the information is available and passed out in OutExternalUserInfo\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the external user info is not found\n     */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "Fetches an external user info for a given external account type.\n\n@param Options Structure containing the account type being accessed\n@param OutExternalUserInfo The external user info. If it exists and is valid, use EOS_UserInfo_ExternalUserInfo_Release when finished\n\n@see EOS_UserInfo_ExternalUserInfo_Release\n\n@return EOS_Success if the information is available and passed out in OutExternalUserInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the external user info is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUserInfo, nullptr, "EOSUserInfoCopyExternalUserInfoByAccountType", nullptr, nullptr, sizeof(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByAccountType_Parms), Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics
	{
		struct CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByIndex_Parms
		{
			FEOSUserInfoCopyExternalUserInfoByIndexOptions options;
			FEOSUserInfoExternalUserInfo outExternalUserInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outExternalUserInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::NewProp_outExternalUserInfo = { "outExternalUserInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByIndex_Parms, outExternalUserInfo), Z_Construct_UScriptStruct_FEOSUserInfoExternalUserInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoCopyExternalUserInfoByIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::NewProp_outExternalUserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UserInfo" },
		{ "Comment", "/**\n     * Fetches an external user info from a given index.\n     *\n     * @param Options Structure containing the index being accessed\n     * @param OutExternalUserInfo The external user info. If it exists and is valid, use EOS_UserInfo_ExternalUserInfo_Release when finished\n     *\n     * @see EOS_UserInfo_ExternalUserInfo_Release\n     *\n     * @return EOS_Success if the information is available and passed out in OutExternalUserInfo\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the external user info is not found\n     */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "Fetches an external user info from a given index.\n\n@param Options Structure containing the index being accessed\n@param OutExternalUserInfo The external user info. If it exists and is valid, use EOS_UserInfo_ExternalUserInfo_Release when finished\n\n@see EOS_UserInfo_ExternalUserInfo_Release\n\n@return EOS_Success if the information is available and passed out in OutExternalUserInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the external user info is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUserInfo, nullptr, "EOSUserInfoCopyExternalUserInfoByIndex", nullptr, nullptr, sizeof(CoreUserInfo_eventEOSUserInfoCopyExternalUserInfoByIndex_Parms), Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics
	{
		struct CoreUserInfo_eventEOSUserInfoCopyUserInfo_Parms
		{
			FEOSUserInfoCopyUserInfoOptions options;
			FEOSUserInfo outUserInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outUserInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyUserInfo_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::NewProp_outUserInfo = { "outUserInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyUserInfo_Parms, outUserInfo), Z_Construct_UScriptStruct_FEOSUserInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoCopyUserInfo_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoCopyUserInfoOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::NewProp_outUserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UserInfo" },
		{ "Comment", "/**\n     * EOS_UserInfo_CopyUserInfo is used to immediately retrieve a copy of user information for an account ID, cached by a previous call to EOS_UserInfo_QueryUserInfo.\n     * If the call returns an EOS_Success result, the out parameter, OutUserInfo, must be passed to EOS_UserInfo_Release to release the memory associated with it.\n     *\n     * @param Options structure containing the input parameters\n     * @param OutUserInfo out parameter used to receive the EOS_UserInfo structure.\n     *\n     * @return EOS_Success if the information is available and passed out in OutUserInfo\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_IncompatibleVersion if the API version passed in is incorrect\n     *         EOS_NotFound if the user info is not locally cached. The information must have been previously cached by a call to EOS_UserInfo_QueryUserInfo\n     *\n     * @see EOS_UserInfo\n     * @see EOS_UserInfo_CopyUserInfoOptions\n     * @see EOS_UserInfo_Release\n     */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "EOS_UserInfo_CopyUserInfo is used to immediately retrieve a copy of user information for an account ID, cached by a previous call to EOS_UserInfo_QueryUserInfo.\nIf the call returns an EOS_Success result, the out parameter, OutUserInfo, must be passed to EOS_UserInfo_Release to release the memory associated with it.\n\n@param Options structure containing the input parameters\n@param OutUserInfo out parameter used to receive the EOS_UserInfo structure.\n\n@return EOS_Success if the information is available and passed out in OutUserInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n        EOS_NotFound if the user info is not locally cached. The information must have been previously cached by a call to EOS_UserInfo_QueryUserInfo\n\n@see EOS_UserInfo\n@see EOS_UserInfo_CopyUserInfoOptions\n@see EOS_UserInfo_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUserInfo, nullptr, "EOSUserInfoCopyUserInfo", nullptr, nullptr, sizeof(CoreUserInfo_eventEOSUserInfoCopyUserInfo_Parms), Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics
	{
		struct CoreUserInfo_eventEOSUserInfoGetExternalUserInfoCount_Parms
		{
			FEOSUserInfoGetExternalUserInfoCountOptions options;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoGetExternalUserInfoCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoGetExternalUserInfoCount_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoGetExternalUserInfoCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UserInfo" },
		{ "Comment", "/**\n     * Fetch the number of external user infos that are cached locally.\n     *\n     * @param Options The options associated with retrieving the external user info count\n     *\n     * @see EOS_UserInfo_CopyExternalUserInfoByIndex\n     *\n     * @return The number of external user infos, or 0 if there is an error\n     */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "Fetch the number of external user infos that are cached locally.\n\n@param Options The options associated with retrieving the external user info count\n\n@see EOS_UserInfo_CopyExternalUserInfoByIndex\n\n@return The number of external user infos, or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUserInfo, nullptr, "EOSUserInfoGetExternalUserInfoCount", nullptr, nullptr, sizeof(CoreUserInfo_eventEOSUserInfoGetExternalUserInfoCount_Parms), Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics
	{
		struct CoreUserInfo_eventEOSUserInfoQueryUserInfo_Parms
		{
			FEOSUserInfoQueryUserInfoOptions options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoQueryUserInfo_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoQueryUserInfo_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UserInfo" },
		{ "Comment", "/**\n    * EOS_UserInfo_QueryUserInfo is used to start an asynchronous query to retrieve information, such as display name, about another account.\n    * Once the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.\n    *\n    * @param Options structure containing the input parameters\n    * @param callback a callback that is fired when the async operation completes, either successfully or in error\n    *\n    * @see EOS_UserInfo\n    * @see EOS_UserInfo_CopyUserInfo\n    * @see EOS_UserInfo_QueryUserInfoOptions\n    * @see EOS_UserInfo_OnQueryUserInfoCallback\n    */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "EOS_UserInfo_QueryUserInfo is used to start an asynchronous query to retrieve information, such as display name, about another account.\nOnce the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.\n\n@param Options structure containing the input parameters\n@param callback a callback that is fired when the async operation completes, either successfully or in error\n\n@see EOS_UserInfo\n@see EOS_UserInfo_CopyUserInfo\n@see EOS_UserInfo_QueryUserInfoOptions\n@see EOS_UserInfo_OnQueryUserInfoCallback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUserInfo, nullptr, "EOSUserInfoQueryUserInfo", nullptr, nullptr, sizeof(CoreUserInfo_eventEOSUserInfoQueryUserInfo_Parms), Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics
	{
		struct CoreUserInfo_eventEOSUserInfoQueryUserInfoByDisplayName_Parms
		{
			FEOSUserInfoQueryUserInfoByDisplayNameOptions options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoQueryUserInfoByDisplayName_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByDisplayNameCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoQueryUserInfoByDisplayName_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByDisplayNameOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UserInfo" },
		{ "Comment", "/**\n     * EOS_UserInfo_QueryUserInfoByDisplayName is used to start an asynchronous query to retrieve user information by display name. This can be useful for getting the EOS_EpicAccountId for a display name.\n     * Once the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.\n     *\n     * @param Options structure containing the input parameters\n     * @param callback a callback that is fired when the async operation completes, either successfully or in error\n     *\n     * @see EOS_UserInfo\n     * @see EOS_UserInfo_CopyUserInfo\n     * @see EOS_UserInfo_QueryUserInfoByDisplayNameOptions\n     * @see EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback\n     */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "EOS_UserInfo_QueryUserInfoByDisplayName is used to start an asynchronous query to retrieve user information by display name. This can be useful for getting the EOS_EpicAccountId for a display name.\nOnce the callback has been fired with a successful ResultCode, it is possible to call EOS_UserInfo_CopyUserInfo to receive an EOS_UserInfo containing the available information.\n\n@param Options structure containing the input parameters\n@param callback a callback that is fired when the async operation completes, either successfully or in error\n\n@see EOS_UserInfo\n@see EOS_UserInfo_CopyUserInfo\n@see EOS_UserInfo_QueryUserInfoByDisplayNameOptions\n@see EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUserInfo, nullptr, "EOSUserInfoQueryUserInfoByDisplayName", nullptr, nullptr, sizeof(CoreUserInfo_eventEOSUserInfoQueryUserInfoByDisplayName_Parms), Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics
	{
		struct CoreUserInfo_eventEOSUserInfoQueryUserInfoByExternalAccount_Parms
		{
			FEOSUserInfoQueryUserInfoByExternalAccountOptions options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoQueryUserInfoByExternalAccount_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByExternalAccountCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventEOSUserInfoQueryUserInfoByExternalAccount_Parms, options), Z_Construct_UScriptStruct_FEOSUserInfoQueryUserInfoByExternalAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UserInfo" },
		{ "Comment", "/**\n\x09 * EOS_UserInfo_QueryUserInfoByExternalAccount is used to start an asynchronous query to retrieve user information by external accounts.\n\x09 * This can be useful for getting the EOS_EpicAccountIds for external accounts.\n\x09 * Once the callback has been fired with a successful ResultCode, it is possible to call CopyUserInfo to receive an EOS_UserInfo containing the available information.\n\x09 *\n\x09 * @param Options structure containing the input parameters\n\x09 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n\x09 * @param CompletionDelegate a callback that is fired when the async operation completes, either successfully or in error\n\x09 *\n\x09 * @see EOS_UserInfo\n\x09 * @see EOS_UserInfo_QueryUserInfoByExternalAccountOptions\n\x09 * @see EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "EOS_UserInfo_QueryUserInfoByExternalAccount is used to start an asynchronous query to retrieve user information by external accounts.\nThis can be useful for getting the EOS_EpicAccountIds for external accounts.\nOnce the callback has been fired with a successful ResultCode, it is possible to call CopyUserInfo to receive an EOS_UserInfo containing the available information.\n\n@param Options structure containing the input parameters\n@param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate a callback that is fired when the async operation completes, either successfully or in error\n\n@see EOS_UserInfo\n@see EOS_UserInfo_QueryUserInfoByExternalAccountOptions\n@see EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUserInfo, nullptr, "EOSUserInfoQueryUserInfoByExternalAccount", nullptr, nullptr, sizeof(CoreUserInfo_eventEOSUserInfoQueryUserInfoByExternalAccount_Parms), Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics
	{
		struct CoreUserInfo_eventGetUserInfo_Parms
		{
			UCoreUserInfo* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUserInfo_eventGetUserInfo_Parms, ReturnValue), Z_Construct_UClass_UCoreUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n     * The UserInfo Interface is used to receive user information for Epic account IDs from the backend services and to retrieve that information once it is cached.\n     * All UserInfo Interface calls take a handle of type EOS_HUserInfo as the first parameter.\n     * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUserInfoInterface function.\n     *\n     * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n     *\n     * @see EOS_Platform_GetUserInfoInterface\n     */" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "The UserInfo Interface is used to receive user information for Epic account IDs from the backend services and to retrieve that information once it is cached.\nAll UserInfo Interface calls take a handle of type EOS_HUserInfo as the first parameter.\nThis handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUserInfoInterface function.\n\nNOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n\n@see EOS_Platform_GetUserInfoInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUserInfo, nullptr, "GetUserInfo", nullptr, nullptr, sizeof(CoreUserInfo_eventGetUserInfo_Parms), Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUserInfo_GetUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUserInfo_GetUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreUserInfo_NoRegister()
	{
		return UCoreUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UCoreUserInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryUserInfoByExternalAccountCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryUserInfoByExternalAccountCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryUserInfoByDisplayNameCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryUserInfoByDisplayNameCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryUserInfoCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryUserInfoCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId, "EOSUserInfoCopyExternalUserInfoByAccountId" }, // 2212481467
		{ &Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType, "EOSUserInfoCopyExternalUserInfoByAccountType" }, // 2059795443
		{ &Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex, "EOSUserInfoCopyExternalUserInfoByIndex" }, // 3135410797
		{ &Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoCopyUserInfo, "EOSUserInfoCopyUserInfo" }, // 4208638864
		{ &Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount, "EOSUserInfoGetExternalUserInfoCount" }, // 4234223988
		{ &Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfo, "EOSUserInfoQueryUserInfo" }, // 3860388155
		{ &Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName, "EOSUserInfoQueryUserInfoByDisplayName" }, // 1747746284
		{ &Z_Construct_UFunction_UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount, "EOSUserInfoQueryUserInfoByExternalAccount" }, // 4036579280
		{ &Z_Construct_UFunction_UCoreUserInfo_GetUserInfo, "GetUserInfo" }, // 3305059721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUserInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The UserInfo Interface is used to receive user information for Epic account IDs from the backend services and to retrieve that information once it is cached.\n * All UserInfo Interface calls take a handle of type EOS_HUserInfo as the first parameter.\n * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUserInfoInterface function.\n *\n * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n *\n * @see EOS_Platform_GetUserInfoInterface\n */" },
		{ "IncludePath", "UserInfo/EOSUserInfo.h" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
		{ "ToolTip", "The UserInfo Interface is used to receive user information for Epic account IDs from the backend services and to retrieve that information once it is cached.\nAll UserInfo Interface calls take a handle of type EOS_HUserInfo as the first parameter.\nThis handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUserInfoInterface function.\n\nNOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n\n@see EOS_Platform_GetUserInfoInterface" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByExternalAccountCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|UserInfo|Delegates" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByExternalAccountCallbackDelegate = { "OnQueryUserInfoByExternalAccountCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUserInfo, OnQueryUserInfoByExternalAccountCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByExternalAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByExternalAccountCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByExternalAccountCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByDisplayNameCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|UserInfo|Delegates" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByDisplayNameCallbackDelegate = { "OnQueryUserInfoByDisplayNameCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUserInfo, OnQueryUserInfoByDisplayNameCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoByDisplayNameCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByDisplayNameCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByDisplayNameCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|UserInfo|Delegates" },
		{ "ModuleRelativePath", "Public/UserInfo/EOSUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoCallbackDelegate = { "OnQueryUserInfoCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUserInfo, OnQueryUserInfoCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnQueryUserInfoCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByExternalAccountCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoByDisplayNameCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUserInfo_Statics::NewProp_OnQueryUserInfoCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreUserInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreUserInfo_Statics::ClassParams = {
		&UCoreUserInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreUserInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUserInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreUserInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreUserInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreUserInfo, 3813081131);
	template<> EOSCORE_API UClass* StaticClass<UCoreUserInfo>()
	{
		return UCoreUserInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreUserInfo(Z_Construct_UClass_UCoreUserInfo, &UCoreUserInfo::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreUserInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreUserInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
