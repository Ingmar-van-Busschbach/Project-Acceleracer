// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Connect/EOSConnect.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSConnect() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreConnect_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreConnect();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthExpirationCallback__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnLoginStatusChangedCallback__DelegateSignature();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectExternalAccountInfo();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCopyProductUserExternalAccountByAccountIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCopyProductUserExternalAccountByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCopyProductUserInfoOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnCreateDeviceIdCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCreateDeviceIdOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnCreateUserCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectCreateUserOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDeleteDeviceIdCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectDeleteDeviceIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSProductUserId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectGetExternalAccountMappingsOptions();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSELoginStatus();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectGetProductUserExternalAccountCountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectGetProductUserIdMappingOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnLinkAccountCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectLinkAccountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnLoginCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectLoginOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryExternalAccountMappingsCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectQueryExternalAccountMappingsOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryProductUserIdMappingsCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectQueryProductUserIdMappingsOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTransferDeviceIdAccountCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectTransferDeviceIdAccountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnUnlinkAccountCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSConnectUnlinkAccountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnLoginStatusChangedCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthExpirationCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryProductUserIdMappingsCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryExternalAccountMappingsCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTransferDeviceIdAccountCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDeleteDeviceIdCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnCreateDeviceIdCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnUnlinkAccountCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnLinkAccountCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnCreateUserCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnLoginCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectRemoveNotifyLoginStatusChanged)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreConnect::EOSConnectRemoveNotifyLoginStatusChanged(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectAddNotifyLoginStatusChanged)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCoreConnect::EOSConnectAddNotifyLoginStatusChanged(FOnLoginStatusChangedCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectRemoveNotifyAuthExpiration)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreConnect::EOSConnectRemoveNotifyAuthExpiration(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectAddNotifyAuthExpiration)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCoreConnect::EOSConnectAddNotifyAuthExpiration(FOnAuthExpirationCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectGetLoginStatusPure)
	{
		P_GET_STRUCT(FEOSProductUserId,Z_Param_localUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSELoginStatus*)Z_Param__Result=UCoreConnect::EOSConnectGetLoginStatusPure(Z_Param_localUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectGetLoginStatus)
	{
		P_GET_STRUCT(FEOSProductUserId,Z_Param_localUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSELoginStatus*)Z_Param__Result=UCoreConnect::EOSConnectGetLoginStatus(Z_Param_localUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectGetLoggedInUserByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSProductUserId*)Z_Param__Result=UCoreConnect::EOSConnectGetLoggedInUserByIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectGetLoggedInUsersCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreConnect::EOSConnectGetLoggedInUsersCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectCopyProductUserInfo)
	{
		P_GET_STRUCT(FEOSConnectCopyProductUserInfoOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSConnectExternalAccountInfo,Z_Param_Out_outExternalAccountInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreConnect::EOSConnectCopyProductUserInfo(Z_Param_options,Z_Param_Out_outExternalAccountInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectCopyProductUserExternalAccountByAccountId)
	{
		P_GET_STRUCT(FEOSConnectCopyProductUserExternalAccountByAccountIdOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSConnectExternalAccountInfo,Z_Param_Out_outExternalAccountInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreConnect::EOSConnectCopyProductUserExternalAccountByAccountId(Z_Param_options,Z_Param_Out_outExternalAccountInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectCopyProductUserExternalAccountByAccountType)
	{
		P_GET_STRUCT(FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSConnectExternalAccountInfo,Z_Param_Out_outExternalAccountInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreConnect::EOSConnectCopyProductUserExternalAccountByAccountType(Z_Param_options,Z_Param_Out_outExternalAccountInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectCopyProductUserExternalAccountByIndex)
	{
		P_GET_STRUCT(FEOSConnectCopyProductUserExternalAccountByIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSConnectExternalAccountInfo,Z_Param_Out_outExternalAccountInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreConnect::EOSConnectCopyProductUserExternalAccountByIndex(Z_Param_options,Z_Param_Out_outExternalAccountInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectGetProductUserExternalAccountCount)
	{
		P_GET_STRUCT(FEOSConnectGetProductUserExternalAccountCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreConnect::EOSConnectGetProductUserExternalAccountCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectGetProductUserIdMapping)
	{
		P_GET_STRUCT(FEOSConnectGetProductUserIdMappingOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreConnect::EOSConnectGetProductUserIdMapping(Z_Param_options,Z_Param_Out_outString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectGetExternalAccountMapping)
	{
		P_GET_STRUCT(FEOSConnectGetExternalAccountMappingsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSProductUserId*)Z_Param__Result=UCoreConnect::EOSConnectGetExternalAccountMapping(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectQueryProductUserIdMappings)
	{
		P_GET_STRUCT(FEOSConnectQueryProductUserIdMappingsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSConnectQueryProductUserIdMappings(Z_Param_options,FOnQueryProductUserIdMappingsCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectQueryExternalAccountMappings)
	{
		P_GET_STRUCT(FEOSConnectQueryExternalAccountMappingsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSConnectQueryExternalAccountMappings(Z_Param_options,FOnQueryExternalAccountMappingsCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectTransferDeviceIdAccount)
	{
		P_GET_STRUCT(FEOSConnectTransferDeviceIdAccountOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSConnectTransferDeviceIdAccount(Z_Param_options,FOnTransferDeviceIdAccountCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectDeleteDeviceId)
	{
		P_GET_STRUCT(FEOSConnectDeleteDeviceIdOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSConnectDeleteDeviceId(Z_Param_options,FOnDeleteDeviceIdCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectCreateDeviceId)
	{
		P_GET_STRUCT(FEOSConnectCreateDeviceIdOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSConnectCreateDeviceId(Z_Param_options,FOnCreateDeviceIdCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectUnlinkAccount)
	{
		P_GET_STRUCT(FEOSConnectUnlinkAccountOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSConnectUnlinkAccount(Z_Param_options,FOnUnlinkAccountCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectLinkAccount)
	{
		P_GET_STRUCT(FEOSConnectLinkAccountOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSConnectLinkAccount(Z_Param_options,FOnLinkAccountCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectCreateUser)
	{
		P_GET_STRUCT(FEOSConnectCreateUserOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSConnectCreateUser(Z_Param_options,FOnCreateUserCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execEOSConnectLogin)
	{
		P_GET_STRUCT(FEOSConnectLoginOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSConnectLogin(Z_Param_options,FOnLoginCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreConnect::execGetConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreConnect**)Z_Param__Result=UCoreConnect::GetConnect();
		P_NATIVE_END;
	}
	void UCoreConnect::StaticRegisterNativesUCoreConnect()
	{
		UClass* Class = UCoreConnect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSConnectAddNotifyAuthExpiration", &UCoreConnect::execEOSConnectAddNotifyAuthExpiration },
			{ "EOSConnectAddNotifyLoginStatusChanged", &UCoreConnect::execEOSConnectAddNotifyLoginStatusChanged },
			{ "EOSConnectCopyProductUserExternalAccountByAccountId", &UCoreConnect::execEOSConnectCopyProductUserExternalAccountByAccountId },
			{ "EOSConnectCopyProductUserExternalAccountByAccountType", &UCoreConnect::execEOSConnectCopyProductUserExternalAccountByAccountType },
			{ "EOSConnectCopyProductUserExternalAccountByIndex", &UCoreConnect::execEOSConnectCopyProductUserExternalAccountByIndex },
			{ "EOSConnectCopyProductUserInfo", &UCoreConnect::execEOSConnectCopyProductUserInfo },
			{ "EOSConnectCreateDeviceId", &UCoreConnect::execEOSConnectCreateDeviceId },
			{ "EOSConnectCreateUser", &UCoreConnect::execEOSConnectCreateUser },
			{ "EOSConnectDeleteDeviceId", &UCoreConnect::execEOSConnectDeleteDeviceId },
			{ "EOSConnectGetExternalAccountMapping", &UCoreConnect::execEOSConnectGetExternalAccountMapping },
			{ "EOSConnectGetLoggedInUserByIndex", &UCoreConnect::execEOSConnectGetLoggedInUserByIndex },
			{ "EOSConnectGetLoggedInUsersCount", &UCoreConnect::execEOSConnectGetLoggedInUsersCount },
			{ "EOSConnectGetLoginStatus", &UCoreConnect::execEOSConnectGetLoginStatus },
			{ "EOSConnectGetLoginStatusPure", &UCoreConnect::execEOSConnectGetLoginStatusPure },
			{ "EOSConnectGetProductUserExternalAccountCount", &UCoreConnect::execEOSConnectGetProductUserExternalAccountCount },
			{ "EOSConnectGetProductUserIdMapping", &UCoreConnect::execEOSConnectGetProductUserIdMapping },
			{ "EOSConnectLinkAccount", &UCoreConnect::execEOSConnectLinkAccount },
			{ "EOSConnectLogin", &UCoreConnect::execEOSConnectLogin },
			{ "EOSConnectQueryExternalAccountMappings", &UCoreConnect::execEOSConnectQueryExternalAccountMappings },
			{ "EOSConnectQueryProductUserIdMappings", &UCoreConnect::execEOSConnectQueryProductUserIdMappings },
			{ "EOSConnectRemoveNotifyAuthExpiration", &UCoreConnect::execEOSConnectRemoveNotifyAuthExpiration },
			{ "EOSConnectRemoveNotifyLoginStatusChanged", &UCoreConnect::execEOSConnectRemoveNotifyLoginStatusChanged },
			{ "EOSConnectTransferDeviceIdAccount", &UCoreConnect::execEOSConnectTransferDeviceIdAccount },
			{ "EOSConnectUnlinkAccount", &UCoreConnect::execEOSConnectUnlinkAccount },
			{ "GetConnect", &UCoreConnect::execGetConnect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics
	{
		struct CoreConnect_eventEOSConnectAddNotifyAuthExpiration_Parms
		{
			FScriptDelegate callback;
			FEOSNotificationId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectAddNotifyAuthExpiration_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectAddNotifyAuthExpiration_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAuthExpirationCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Register to receive upcoming authentication expiration notifications.\n     * Notification is approximately 10 minutes prior to expiration.\n     * Call EOS_Connect_Login again with valid third party credentials to refresh access\n     *\n     * @note must call RemoveNotifyAuthExpiration to remove the notification\n     *\n     * @param Options structure containing the API version of the callback to use\n     \n     * @param Notification a callback that is fired when the authentication is about to expire\n     *\n     * @return handle representing the registered callback\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Register to receive upcoming authentication expiration notifications.\nNotification is approximately 10 minutes prior to expiration.\nCall EOS_Connect_Login again with valid third party credentials to refresh access\n\n@note must call RemoveNotifyAuthExpiration to remove the notification\n\n@param Options structure containing the API version of the callback to use\n\n@param Notification a callback that is fired when the authentication is about to expire\n\n@return handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectAddNotifyAuthExpiration", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectAddNotifyAuthExpiration_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics
	{
		struct CoreConnect_eventEOSConnectAddNotifyLoginStatusChanged_Parms
		{
			FScriptDelegate callback;
			FEOSNotificationId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectAddNotifyLoginStatusChanged_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectAddNotifyLoginStatusChanged_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnLoginStatusChangedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Register to receive user login status updates.\n     * @note must call RemoveNotifyLoginStatusChanged to remove the notification\n     *\n     * @param Options structure containing the API version of the callback to use\n     \n     * @param Notification a callback that is fired when the login status for a user changes\n     *\n     * @return handle representing the registered callback\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Register to receive user login status updates.\n@note must call RemoveNotifyLoginStatusChanged to remove the notification\n\n@param Options structure containing the API version of the callback to use\n\n@param Notification a callback that is fired when the login status for a user changes\n\n@return handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectAddNotifyLoginStatusChanged", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectAddNotifyLoginStatusChanged_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics
	{
		struct CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountId_Parms
		{
			FEOSConnectCopyProductUserExternalAccountByAccountIdOptions options;
			FEOSConnectExternalAccountInfo outExternalAccountInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outExternalAccountInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::NewProp_outExternalAccountInfo = { "outExternalAccountInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountId_Parms, outExternalAccountInfo), Z_Construct_UScriptStruct_FEOSConnectExternalAccountInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountId_Parms, options), Z_Construct_UScriptStruct_FEOSConnectCopyProductUserExternalAccountByAccountIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::NewProp_outExternalAccountInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetch information about an external account linked to a product user id.\n     * On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)\n     *\n     * @param Options Structure containing the target external account id.\n     * @param OutExternalAccountInfo The external account info data for the user with given external account id.\n     *\n     * @see EOS_Connect_ExternalAccountInfo_Release\n     *\n     * @return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo\n     *         EOS_Success if the information is available and passed out in OutExternalAccountInfo\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the account data doesn't exist or hasn't been queried yet\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetch information about an external account linked to a product user id.\nOn a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)\n\n@param Options Structure containing the target external account id.\n@param OutExternalAccountInfo The external account info data for the user with given external account id.\n\n@see EOS_Connect_ExternalAccountInfo_Release\n\n@return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo\n        EOS_Success if the information is available and passed out in OutExternalAccountInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the account data doesn't exist or hasn't been queried yet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectCopyProductUserExternalAccountByAccountId", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountId_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics
	{
		struct CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountType_Parms
		{
			FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions options;
			FEOSConnectExternalAccountInfo outExternalAccountInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outExternalAccountInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountType_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::NewProp_outExternalAccountInfo = { "outExternalAccountInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountType_Parms, outExternalAccountInfo), Z_Construct_UScriptStruct_FEOSConnectExternalAccountInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountType_Parms, options), Z_Construct_UScriptStruct_FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::NewProp_outExternalAccountInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetch information about an external account of a specific type linked to a product user id.\n     * On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)\n     *\n     * @param Options Structure containing the target external account type.\n     * @param OutExternalAccountInfo The external account info data for the user with given external account type.\n     *\n     * @see EOS_Connect_ExternalAccountInfo_Release\n     *\n     * @return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo\n     *         EOS_Success if the information is available and passed out in OutExternalAccountInfo\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the account data doesn't exist or hasn't been queried yet\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetch information about an external account of a specific type linked to a product user id.\nOn a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)\n\n@param Options Structure containing the target external account type.\n@param OutExternalAccountInfo The external account info data for the user with given external account type.\n\n@see EOS_Connect_ExternalAccountInfo_Release\n\n@return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo\n        EOS_Success if the information is available and passed out in OutExternalAccountInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the account data doesn't exist or hasn't been queried yet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectCopyProductUserExternalAccountByAccountType", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByAccountType_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics
	{
		struct CoreConnect_eventEOSConnectCopyProductUserExternalAccountByIndex_Parms
		{
			FEOSConnectCopyProductUserExternalAccountByIndexOptions options;
			FEOSConnectExternalAccountInfo outExternalAccountInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outExternalAccountInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::NewProp_outExternalAccountInfo = { "outExternalAccountInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByIndex_Parms, outExternalAccountInfo), Z_Construct_UScriptStruct_FEOSConnectExternalAccountInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSConnectCopyProductUserExternalAccountByIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::NewProp_outExternalAccountInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetch information about an external account linked to a product user id.\n     * On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)\n     *\n     * @param Options Structure containing the target index.\n     * @param OutExternalAccountInfo The external account info data for the user with given index.\n     *\n     * @see EOS_Connect_ExternalAccountInfo_Release\n     *\n     * @return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo\n     *         EOS_Success if the information is available and passed out in OutExternalAccountInfo\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the account data doesn't exist or hasn't been queried yet\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetch information about an external account linked to a product user id.\nOn a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)\n\n@param Options Structure containing the target index.\n@param OutExternalAccountInfo The external account info data for the user with given index.\n\n@see EOS_Connect_ExternalAccountInfo_Release\n\n@return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo\n        EOS_Success if the information is available and passed out in OutExternalAccountInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the account data doesn't exist or hasn't been queried yet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectCopyProductUserExternalAccountByIndex", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectCopyProductUserExternalAccountByIndex_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics
	{
		struct CoreConnect_eventEOSConnectCopyProductUserInfo_Parms
		{
			FEOSConnectCopyProductUserInfoOptions options;
			FEOSConnectExternalAccountInfo outExternalAccountInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outExternalAccountInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserInfo_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::NewProp_outExternalAccountInfo = { "outExternalAccountInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserInfo_Parms, outExternalAccountInfo), Z_Construct_UScriptStruct_FEOSConnectExternalAccountInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCopyProductUserInfo_Parms, options), Z_Construct_UScriptStruct_FEOSConnectCopyProductUserInfoOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::NewProp_outExternalAccountInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetch information about a Product User, using the external account that they most recently logged in with as the reference.\n     * On a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)\n     *\n     * @param Options Structure containing the target external account id.\n     * @param OutExternalAccountInfo The external account info data last logged in for the user.\n     *\n     * @see EOS_Connect_ExternalAccountInfo_Release\n     *\n     * @return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo\n     *         EOS_Success if the information is available and passed out in OutExternalAccountInfo\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the account data doesn't exist or hasn't been queried yet\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetch information about a Product User, using the external account that they most recently logged in with as the reference.\nOn a successful call, the caller must release the returned structure using the EOS_Connect_ExternalAccountInfo_Release API. (Release is automatically handled by EOSCore::)\n\n@param Options Structure containing the target external account id.\n@param OutExternalAccountInfo The external account info data last logged in for the user.\n\n@see EOS_Connect_ExternalAccountInfo_Release\n\n@return An EOS_EResult that indicates the external account data was copied into the OutExternalAccountInfo\n        EOS_Success if the information is available and passed out in OutExternalAccountInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the account data doesn't exist or hasn't been queried yet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectCopyProductUserInfo", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectCopyProductUserInfo_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics
	{
		struct CoreConnect_eventEOSConnectCreateDeviceId_Parms
		{
			FEOSConnectCreateDeviceIdOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCreateDeviceId_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnCreateDeviceIdCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCreateDeviceId_Parms, options), Z_Construct_UScriptStruct_FEOSConnectCreateDeviceIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Create a new unique pseudo-account that can be used to identify the current user profile on the local device.\n     *\n     * This function is intended to be used by mobile games and PC games that wish to allow\n     * a new user to start playing without requiring to login to the game using any user identity.\n     * In addition to this, the Device ID feature is used to automatically login the local user\n     * also when they have linked at least one external user account(s) with the local Device ID.\n     *\n     * It is possible to link many devices with the same user's account keyring using the Device ID feature.\n     *\n     * Linking a device later or immediately with a real user account will ensure that the player\n     * will not lose their progress if they switch devices or lose the device at some point,\n     * as they will be always able to login with one of their linked real accounts and also link\n     * another new device with the user account associations keychain. Otherwise, without having\n     * at least one permanent user account linked to the Device ID, the player would lose all of their\n     * game data and progression permanently should something happen to their device or the local\n     * user profile on the device.\n     *\n     * After a successful one-time CreateDeviceId operation, the game can login the local user\n     * automatically on subsequent game starts with EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN\n     * credentials type. If a Device ID already exists for the local user on the device then EOS_DuplicateNotAllowed\n     * error result is returned and the caller should proceed to calling EOS_Connect_Login directly.\n     *\n     * @param Options structure containing operation input parameters\n     * @param callback a callback that is fired when the create operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Create a new unique pseudo-account that can be used to identify the current user profile on the local device.\n\nThis function is intended to be used by mobile games and PC games that wish to allow\na new user to start playing without requiring to login to the game using any user identity.\nIn addition to this, the Device ID feature is used to automatically login the local user\nalso when they have linked at least one external user account(s) with the local Device ID.\n\nIt is possible to link many devices with the same user's account keyring using the Device ID feature.\n\nLinking a device later or immediately with a real user account will ensure that the player\nwill not lose their progress if they switch devices or lose the device at some point,\nas they will be always able to login with one of their linked real accounts and also link\nanother new device with the user account associations keychain. Otherwise, without having\nat least one permanent user account linked to the Device ID, the player would lose all of their\ngame data and progression permanently should something happen to their device or the local\nuser profile on the device.\n\nAfter a successful one-time CreateDeviceId operation, the game can login the local user\nautomatically on subsequent game starts with EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN\ncredentials type. If a Device ID already exists for the local user on the device then EOS_DuplicateNotAllowed\nerror result is returned and the caller should proceed to calling EOS_Connect_Login directly.\n\n@param Options structure containing operation input parameters\n@param callback a callback that is fired when the create operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectCreateDeviceId", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectCreateDeviceId_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics
	{
		struct CoreConnect_eventEOSConnectCreateUser_Parms
		{
			FEOSConnectCreateUserOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCreateUser_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnCreateUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectCreateUser_Parms, options), Z_Construct_UScriptStruct_FEOSConnectCreateUserOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Create an account association with the Epic Online Service as a product user given their external auth credentials\n     *\n     * @param Options structure containing a continuance token from a \"user not found\" response during Login (always try login first)\n     * @param callback a callback that is fired when the create operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Create an account association with the Epic Online Service as a product user given their external auth credentials\n\n@param Options structure containing a continuance token from a \"user not found\" response during Login (always try login first)\n@param callback a callback that is fired when the create operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectCreateUser", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectCreateUser_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics
	{
		struct CoreConnect_eventEOSConnectDeleteDeviceId_Parms
		{
			FEOSConnectDeleteDeviceIdOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectDeleteDeviceId_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnDeleteDeviceIdCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectDeleteDeviceId_Parms, options), Z_Construct_UScriptStruct_FEOSConnectDeleteDeviceIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Delete any existing Device ID access credentials for the current user profile on the local device.\n     *\n     * The deletion is permanent and it is not possible to recover lost game data and progression\n     * if the Device ID had not been linked with at least one real external user account.\n     *\n     * @param Options structure containing operation input parameters\n     * @param callback a callback that is fired when the delete operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Delete any existing Device ID access credentials for the current user profile on the local device.\n\nThe deletion is permanent and it is not possible to recover lost game data and progression\nif the Device ID had not been linked with at least one real external user account.\n\n@param Options structure containing operation input parameters\n@param callback a callback that is fired when the delete operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectDeleteDeviceId", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectDeleteDeviceId_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics
	{
		struct CoreConnect_eventEOSConnectGetExternalAccountMapping_Parms
		{
			FEOSConnectGetExternalAccountMappingsOptions options;
			FEOSProductUserId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetExternalAccountMapping_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetExternalAccountMapping_Parms, options), Z_Construct_UScriptStruct_FEOSConnectGetExternalAccountMappingsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetch a product user id that maps to an external account id\n     *\n     * @param Options structure containing the local user and target external account id\n     *\n     * @return the product user id, previously retrieved from the backend service, for the given target external account\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetch a product user id that maps to an external account id\n\n@param Options structure containing the local user and target external account id\n\n@return the product user id, previously retrieved from the backend service, for the given target external account" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectGetExternalAccountMapping", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectGetExternalAccountMapping_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics
	{
		struct CoreConnect_eventEOSConnectGetLoggedInUserByIndex_Parms
		{
			int32 index;
			FEOSProductUserId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetLoggedInUserByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetLoggedInUserByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetch a product user id that is logged in. This product user id is in the Epic Online Services namespace\n     *\n     * @param Index an index into the list of logged in users. If the index is out of bounds, the returned product user id will be invalid.\n     *\n     * @return the product user id associated with the index passed\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetch a product user id that is logged in. This product user id is in the Epic Online Services namespace\n\n@param Index an index into the list of logged in users. If the index is out of bounds, the returned product user id will be invalid.\n\n@return the product user id associated with the index passed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectGetLoggedInUserByIndex", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectGetLoggedInUserByIndex_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics
	{
		struct CoreConnect_eventEOSConnectGetLoggedInUsersCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetLoggedInUsersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetch the number of product users that are logged in.\n     *\n     * @return the number of product users logged in.\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetch the number of product users that are logged in.\n\n@return the number of product users logged in." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectGetLoggedInUsersCount", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectGetLoggedInUsersCount_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics
	{
		struct CoreConnect_eventEOSConnectGetLoginStatus_Parms
		{
			FEOSProductUserId localUserId;
			EEOSELoginStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_localUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EEOSELoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::NewProp_localUserId = { "localUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetLoginStatus_Parms, localUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::NewProp_localUserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetches the login status for an product user id.  This product user id is considered logged in as long as the underlying access token has not expired.\n     *\n     * @param LocalUserId the product user id of the user being queried\n     *\n     * @return the enum value of a user's login status\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetches the login status for an product user id.  This product user id is considered logged in as long as the underlying access token has not expired.\n\n@param LocalUserId the product user id of the user being queried\n\n@return the enum value of a user's login status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectGetLoginStatus", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectGetLoginStatus_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics
	{
		struct CoreConnect_eventEOSConnectGetLoginStatusPure_Parms
		{
			FEOSProductUserId localUserId;
			EEOSELoginStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_localUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetLoginStatusPure_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EEOSELoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::NewProp_localUserId = { "localUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetLoginStatusPure_Parms, localUserId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::NewProp_localUserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetches the login status for an product user id.  This product user id is considered logged in as long as the underlying access token has not expired.\n     *\n     * @param LocalUserId the product user id of the user being queried\n     *\n     * @return the enum value of a user's login status\n     */" },
		{ "DisplayName", "EOSConnect Get Login Status (Pure)" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetches the login status for an product user id.  This product user id is considered logged in as long as the underlying access token has not expired.\n\n@param LocalUserId the product user id of the user being queried\n\n@return the enum value of a user's login status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectGetLoginStatusPure", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectGetLoginStatusPure_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics
	{
		struct CoreConnect_eventEOSConnectGetProductUserExternalAccountCount_Parms
		{
			FEOSConnectGetProductUserExternalAccountCountOptions options;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetProductUserExternalAccountCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetProductUserExternalAccountCount_Parms, options), Z_Construct_UScriptStruct_FEOSConnectGetProductUserExternalAccountCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetch the number of linked external accounts for a product user id.\n     *\n     * @param Options The Options associated with retrieving the external account info count.\n     *\n     * @see EOS_Connect_CopyProductUserExternalAccountByIndex\n     *\n     * @return Number of external accounts or 0 otherwise\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetch the number of linked external accounts for a product user id.\n\n@param Options The Options associated with retrieving the external account info count.\n\n@see EOS_Connect_CopyProductUserExternalAccountByIndex\n\n@return Number of external accounts or 0 otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectGetProductUserExternalAccountCount", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectGetProductUserExternalAccountCount_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics
	{
		struct CoreConnect_eventEOSConnectGetProductUserIdMapping_Parms
		{
			FEOSConnectGetProductUserIdMappingOptions options;
			FString outString;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetProductUserIdMapping_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::NewProp_outString = { "outString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetProductUserIdMapping_Parms, outString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectGetProductUserIdMapping_Parms, options), Z_Construct_UScriptStruct_FEOSConnectGetProductUserIdMappingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::NewProp_outString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Fetch an external account id, in string form, that maps to a given product user id\n     *\n     * @param Options structure containing the local user and target product user id\n     * @param OutBuffer The buffer into which the account id data should be written.  The buffer must be long enough to hold a string of EOS_CONNECT_EXTERNAL_ACCOUNT_ID_MAX_LENGTH.\n     * @param InOutBufferLength The size of the OutBuffer in characters.\n     *                          The input buffer should include enough space to be null-terminated.\n     *                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.\n     *\n     * @return An EOS_EResult that indicates the external account id was copied into the OutBuffer\n     *         EOS_Success if the information is available and passed out in OutUserInfo\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the mapping doesn't exist or hasn't been queried yet\n     *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the external account id. InOutBufferLength contains the required minimum length to perform the operation successfully.\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Fetch an external account id, in string form, that maps to a given product user id\n\n@param Options structure containing the local user and target product user id\n@param OutBuffer The buffer into which the account id data should be written.  The buffer must be long enough to hold a string of EOS_CONNECT_EXTERNAL_ACCOUNT_ID_MAX_LENGTH.\n@param InOutBufferLength The size of the OutBuffer in characters.\n                         The input buffer should include enough space to be null-terminated.\n                         When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.\n\n@return An EOS_EResult that indicates the external account id was copied into the OutBuffer\n        EOS_Success if the information is available and passed out in OutUserInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the mapping doesn't exist or hasn't been queried yet\n        EOS_LimitExceeded - The OutBuffer is not large enough to receive the external account id. InOutBufferLength contains the required minimum length to perform the operation successfully." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectGetProductUserIdMapping", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectGetProductUserIdMapping_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics
	{
		struct CoreConnect_eventEOSConnectLinkAccount_Parms
		{
			FEOSConnectLinkAccountOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectLinkAccount_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnLinkAccountCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectLinkAccount_Parms, options), Z_Construct_UScriptStruct_FEOSConnectLinkAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Link a set of external auth credentials with an existing product user on the Epic Online Service\n     *\n     * @param Options structure containing a continuance token from a \"user not found\" response during Login (always try login first) and a currently logged in user not already associated with this external auth provider\n     * @param callback a callback that is fired when the link operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Link a set of external auth credentials with an existing product user on the Epic Online Service\n\n@param Options structure containing a continuance token from a \"user not found\" response during Login (always try login first) and a currently logged in user not already associated with this external auth provider\n@param callback a callback that is fired when the link operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectLinkAccount", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectLinkAccount_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics
	{
		struct CoreConnect_eventEOSConnectLogin_Parms
		{
			FEOSConnectLoginOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectLogin_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnLoginCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectLogin_Parms, options), Z_Construct_UScriptStruct_FEOSConnectLoginOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n    * Login/Authenticate given a valid set of external auth credentials.\n    *\n    * @param Options structure containing the external account credentials and type to use during the login operation\n    * @param callback a callback that is fired when the login operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Login/Authenticate given a valid set of external auth credentials.\n\n@param Options structure containing the external account credentials and type to use during the login operation\n@param callback a callback that is fired when the login operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectLogin", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectLogin_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics
	{
		struct CoreConnect_eventEOSConnectQueryExternalAccountMappings_Parms
		{
			FEOSConnectQueryExternalAccountMappingsOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectQueryExternalAccountMappings_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryExternalAccountMappingsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectQueryExternalAccountMappings_Parms, options), Z_Construct_UScriptStruct_FEOSConnectQueryExternalAccountMappingsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Retrieve the equivalent product user ids from a list of external account ids from supported account providers.  The values will be cached and retrievable via EOS_Connect_GetExternalAccountMapping\n     *\n     * @param Options structure containing a list of external account ids, in string form, to query for the product user id representation\n     * @param callback a callback that is fired when the query operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Retrieve the equivalent product user ids from a list of external account ids from supported account providers.  The values will be cached and retrievable via EOS_Connect_GetExternalAccountMapping\n\n@param Options structure containing a list of external account ids, in string form, to query for the product user id representation\n@param callback a callback that is fired when the query operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectQueryExternalAccountMappings", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectQueryExternalAccountMappings_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics
	{
		struct CoreConnect_eventEOSConnectQueryProductUserIdMappings_Parms
		{
			FEOSConnectQueryProductUserIdMappingsOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectQueryProductUserIdMappings_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryProductUserIdMappingsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectQueryProductUserIdMappings_Parms, options), Z_Construct_UScriptStruct_FEOSConnectQueryProductUserIdMappingsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Retrieve the equivalent external account mappings from a list of product user ids.\n     * This will include data for each external account info found for the linked product ids.\n     *\n     * The values will be cached and retrievable via EOS_Connect_GetProductUserIdMapping, EOS_Connect_CopyProductUserExternalAccountByIndex,\n     * EOS_Connect_CopyProductUserExternalAccountByAccountType or EOS_Connect_CopyProductUserExternalAccountByAccountId.\n     *\n     * @see EOS_Connect_ExternalAccountInfo\n     * @see EOS_Connect_GetProductUserExternalAccountCount\n     * @see EOS_Connect_GetProductUserIdMapping\n     * @see EOS_Connect_CopyProductUserExternalAccountByIndex\n     * @see EOS_Connect_CopyProductUserExternalAccountByAccountType\n     * @see EOS_Connect_CopyProductUserExternalAccountByAccountId\n     * @see EOS_Connect_CopyProductUserInfo\n     *\n     * @param Options structure containing a list of product user ids to query for the external account representation\n     \n     * @param callback a callback that is fired when the query operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Retrieve the equivalent external account mappings from a list of product user ids.\nThis will include data for each external account info found for the linked product ids.\n\nThe values will be cached and retrievable via EOS_Connect_GetProductUserIdMapping, EOS_Connect_CopyProductUserExternalAccountByIndex,\nEOS_Connect_CopyProductUserExternalAccountByAccountType or EOS_Connect_CopyProductUserExternalAccountByAccountId.\n\n@see EOS_Connect_ExternalAccountInfo\n@see EOS_Connect_GetProductUserExternalAccountCount\n@see EOS_Connect_GetProductUserIdMapping\n@see EOS_Connect_CopyProductUserExternalAccountByIndex\n@see EOS_Connect_CopyProductUserExternalAccountByAccountType\n@see EOS_Connect_CopyProductUserExternalAccountByAccountId\n@see EOS_Connect_CopyProductUserInfo\n\n@param Options structure containing a list of product user ids to query for the external account representation\n\n@param callback a callback that is fired when the query operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectQueryProductUserIdMappings", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectQueryProductUserIdMappings_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics
	{
		struct CoreConnect_eventEOSConnectRemoveNotifyAuthExpiration_Parms
		{
			FEOSNotificationId id;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectRemoveNotifyAuthExpiration_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Unregister from receiving expiration notifications.\n     *\n     * @param InId handle representing the registered callback\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Unregister from receiving expiration notifications.\n\n@param InId handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectRemoveNotifyAuthExpiration", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectRemoveNotifyAuthExpiration_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics
	{
		struct CoreConnect_eventEOSConnectRemoveNotifyLoginStatusChanged_Parms
		{
			FEOSNotificationId id;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectRemoveNotifyLoginStatusChanged_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n     * Unregister from receiving user login status updates.\n     *\n     * @param InId handle representing the registered callback\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Unregister from receiving user login status updates.\n\n@param InId handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectRemoveNotifyLoginStatusChanged", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectRemoveNotifyLoginStatusChanged_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics
	{
		struct CoreConnect_eventEOSConnectTransferDeviceIdAccount_Parms
		{
			FEOSConnectTransferDeviceIdAccountOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectTransferDeviceIdAccount_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnTransferDeviceIdAccountCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectTransferDeviceIdAccount_Parms, options), Z_Construct_UScriptStruct_FEOSConnectTransferDeviceIdAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n\x09 * Transfer a Device ID pseudo-account and the product user associated with it into another\n\x09 * keychain linked with real user accounts (such as Epic Games, Playstation, Xbox, and other).\n\x09 *\n\x09 * This function allows transferring a product user, i.e. the local user's game progression\n\x09 * backend data from a Device ID owned keychain into a keychain with real user accounts\n\x09 * linked to it. The transfer of Device ID owned product user into a keychain of real user\n\x09 * accounts allows persisting the user's game data on the backend in the event that they\n\x09 * would lose access to the local device or otherwise switch to another device or platform.\n\x09 *\n\x09 * This function is only applicable in the situation of where the local user first plays\n\x09 * the game using the anonymous Device ID login, then later logs in using a real user\n\x09 * account that they have also already used to play the same game or another game under the\n\x09 * same organization within Epic Online Services. In such situation, while normally the login\n\x09 * attempt with a real user account would return EOS_InvalidUser and an EOS_ContinuanceToken\n\x09 * and allow calling the EOS_Connect_LinkAccount API to link it with the Device ID's keychain,\n\x09 * instead the login operation succeeds and finds an existing user because the association\n\x09 * already exists. Because the user cannot have two product users simultaneously to play with,\n\x09 * the game should prompt the user to choose which profile to keep and which one to discard\n\x09 * permanently. Based on the user choice, the game may then proceed to transfer the Device ID\n\x09 * login into the keychain that is persistent and backed by real user accounts, and if the user\n\x09 * chooses so, move the product user as well into the destination keychain and overwrite the\n\x09 * existing previous product user with it. To clarify, moving the product user with the Device ID\n\x09 * login in this way into a persisted keychain allows to preserve the so far only locally persisted\n\x09 * game progression and thus protect the user against a case where they lose access to the device.\n\x09 *\n\x09 * On success, the completion callback will return the preserved EOS_ProductUserId that remains\n\x09 * logged in while the discarded EOS_ProductUserId has been invalidated and deleted permanently.\n\x09 * Consecutive logins using the existing Device ID login type or the external account will\n\x09 * connect the user to the same backend data belonging to the preserved EOS_ProductUserId.\n\x09 *\n\x09 * Example walkthrough: Cross-platform mobile game using the anonymous Device ID login.\n\x09 *\n\x09 * For onboarding new users, the game will attempt to always automatically login the local user\n\x09 * by calling EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN login type. If the local\n\x09 * Device ID credentials are not found, and the game wants a frictionless entry for the first time\n\x09 * user experience, the game will automatically call EOS_Connect_CreateDeviceId to create new\n\x09 * Device ID pseudo-account and then login the local user into it. Consecutive game starts will\n\x09 * thus automatically login the user to their locally persisted Device ID account.\n\x09 *\n\x09 * The user starts playing anonymously using the Device ID login type and makes significant game progress.\n\x09 * Later, they login using an external account that they have already used previously for the\n\x09 * same game perhaps on another platform, or another game owned by the same organization.\n\x09 * In such case, EOS_Connect_Login will automatically login the user to their existing account\n\x09 * linking keychain and create automatically a new empty product user for this product.\n\x09 *\n\x09 * In order for the user to use their existing previously created keychain and have the locally\n\x09 * created Device ID login reference to that keychain instead, the user's current product user\n\x09 * needs to be moved to be under that keychain so that their existing game progression will be\n\x09 * preserved. To do so, the game can call EOS_Connect_TransferDeviceIdAccount to transfer the\n\x09 * Device ID login and the product user associated with it into the other keychain that has real\n\x09 * external user account(s) linked to it. Note that it is important that the game either automatically\n\x09 * checks that the other product user does not have any meaningful progression data, or otherwise\n\x09 * will prompt the user to make the choice on which game progression to preserve and which can\n\x09 * be discarded permanently. The other product user will be discarded permanently and cannot be\n\x09 * recovered, so it is very important that the user is guided to make the right choice to avoid\n\x09 * accidental loss of all game progression.\n\x09 *\n\x09 * @see EOS_Connect_Login\n\x09 * @see EOS_Connect_CreateDeviceId\n\x09 *\n\x09 * @param Options structure containing the logged in product users and specifying which one will be preserved\n\x09 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n\x09 * @param CompletionDelegate a callback that is fired when the transfer operation completes, either successfully or in error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Transfer a Device ID pseudo-account and the product user associated with it into another\nkeychain linked with real user accounts (such as Epic Games, Playstation, Xbox, and other).\n\nThis function allows transferring a product user, i.e. the local user's game progression\nbackend data from a Device ID owned keychain into a keychain with real user accounts\nlinked to it. The transfer of Device ID owned product user into a keychain of real user\naccounts allows persisting the user's game data on the backend in the event that they\nwould lose access to the local device or otherwise switch to another device or platform.\n\nThis function is only applicable in the situation of where the local user first plays\nthe game using the anonymous Device ID login, then later logs in using a real user\naccount that they have also already used to play the same game or another game under the\nsame organization within Epic Online Services. In such situation, while normally the login\nattempt with a real user account would return EOS_InvalidUser and an EOS_ContinuanceToken\nand allow calling the EOS_Connect_LinkAccount API to link it with the Device ID's keychain,\ninstead the login operation succeeds and finds an existing user because the association\nalready exists. Because the user cannot have two product users simultaneously to play with,\nthe game should prompt the user to choose which profile to keep and which one to discard\npermanently. Based on the user choice, the game may then proceed to transfer the Device ID\nlogin into the keychain that is persistent and backed by real user accounts, and if the user\nchooses so, move the product user as well into the destination keychain and overwrite the\nexisting previous product user with it. To clarify, moving the product user with the Device ID\nlogin in this way into a persisted keychain allows to preserve the so far only locally persisted\ngame progression and thus protect the user against a case where they lose access to the device.\n\nOn success, the completion callback will return the preserved EOS_ProductUserId that remains\nlogged in while the discarded EOS_ProductUserId has been invalidated and deleted permanently.\nConsecutive logins using the existing Device ID login type or the external account will\nconnect the user to the same backend data belonging to the preserved EOS_ProductUserId.\n\nExample walkthrough: Cross-platform mobile game using the anonymous Device ID login.\n\nFor onboarding new users, the game will attempt to always automatically login the local user\nby calling EOS_Connect_Login using the EOS_ECT_DEVICEID_ACCESS_TOKEN login type. If the local\nDevice ID credentials are not found, and the game wants a frictionless entry for the first time\nuser experience, the game will automatically call EOS_Connect_CreateDeviceId to create new\nDevice ID pseudo-account and then login the local user into it. Consecutive game starts will\nthus automatically login the user to their locally persisted Device ID account.\n\nThe user starts playing anonymously using the Device ID login type and makes significant game progress.\nLater, they login using an external account that they have already used previously for the\nsame game perhaps on another platform, or another game owned by the same organization.\nIn such case, EOS_Connect_Login will automatically login the user to their existing account\nlinking keychain and create automatically a new empty product user for this product.\n\nIn order for the user to use their existing previously created keychain and have the locally\ncreated Device ID login reference to that keychain instead, the user's current product user\nneeds to be moved to be under that keychain so that their existing game progression will be\npreserved. To do so, the game can call EOS_Connect_TransferDeviceIdAccount to transfer the\nDevice ID login and the product user associated with it into the other keychain that has real\nexternal user account(s) linked to it. Note that it is important that the game either automatically\nchecks that the other product user does not have any meaningful progression data, or otherwise\nwill prompt the user to make the choice on which game progression to preserve and which can\nbe discarded permanently. The other product user will be discarded permanently and cannot be\nrecovered, so it is very important that the user is guided to make the right choice to avoid\naccidental loss of all game progression.\n\n@see EOS_Connect_Login\n@see EOS_Connect_CreateDeviceId\n\n@param Options structure containing the logged in product users and specifying which one will be preserved\n@param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate a callback that is fired when the transfer operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectTransferDeviceIdAccount", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectTransferDeviceIdAccount_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics
	{
		struct CoreConnect_eventEOSConnectUnlinkAccount_Parms
		{
			FEOSConnectUnlinkAccountOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectUnlinkAccount_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnUnlinkAccountCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventEOSConnectUnlinkAccount_Parms, options), Z_Construct_UScriptStruct_FEOSConnectUnlinkAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Connect" },
		{ "Comment", "/**\n\x09 * Unlink external auth credentials from the owning keychain of a logged in product user.\n\x09 *\n\x09 * This function allows recovering the user from scenarios where they have accidentally proceeded to creating\n\x09 * a new product user for the local native user account, instead of linking it with an existing keychain that\n\x09 * they have previously created by playing the game (or another game owned by the organization) on another platform.\n\x09 *\n\x09 * In such scenario, after the initial platform login and a new product user creation, the user wishes to re-login\n\x09 * using other set of external auth credentials to connect with their existing game progression data. In order to\n\x09 * allow automatic login also on the current platform, they will need to unlink the accidentally created new keychain\n\x09 * and product user and then use the EOS_Connect_Login and EOS_Connect_LinkAccount APIs to link the local native platform\n\x09 * account with that previously created existing product user and its owning keychain.\n\x09 *\n\x09 * In another secnario, the user may simply want to disassociate the account that they have logged in with from the current\n\x09 * keychain that it is linked with, perhaps to link it against another keychain or to separate the game progressions again.\n\x09 *\n\x09 * In order to protect against account theft, it is only possible to unlink user accounts that have been authenticated\n\x09 * and logged in to the product user in the current session. This prevents a malicious actor from gaining access to one\n\x09 * of the linked accounts and using it to remove all other accounts linked with the keychain. This also prevents a malicious\n\x09 * actor from replacing the unlinked account with their own corresponding account on the same platform, as the unlinking\n\x09 * operation will ensure that any existing authentication session cannot be used to re-link and overwrite the entry without\n\x09 * authenticating with one of the other linked accounts in the keychain. These restrictions limit the potential attack surface\n\x09 * related to account theft scenarios.\n\x09 *\n\x09 * @param Options structure containing operation input parameters\n\x09 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n\x09 * @param CompletionDelegate a callback that is fired when the unlink operation completes, either successfully or in error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "Unlink external auth credentials from the owning keychain of a logged in product user.\n\nThis function allows recovering the user from scenarios where they have accidentally proceeded to creating\na new product user for the local native user account, instead of linking it with an existing keychain that\nthey have previously created by playing the game (or another game owned by the organization) on another platform.\n\nIn such scenario, after the initial platform login and a new product user creation, the user wishes to re-login\nusing other set of external auth credentials to connect with their existing game progression data. In order to\nallow automatic login also on the current platform, they will need to unlink the accidentally created new keychain\nand product user and then use the EOS_Connect_Login and EOS_Connect_LinkAccount APIs to link the local native platform\naccount with that previously created existing product user and its owning keychain.\n\nIn another secnario, the user may simply want to disassociate the account that they have logged in with from the current\nkeychain that it is linked with, perhaps to link it against another keychain or to separate the game progressions again.\n\nIn order to protect against account theft, it is only possible to unlink user accounts that have been authenticated\nand logged in to the product user in the current session. This prevents a malicious actor from gaining access to one\nof the linked accounts and using it to remove all other accounts linked with the keychain. This also prevents a malicious\nactor from replacing the unlinked account with their own corresponding account on the same platform, as the unlinking\noperation will ensure that any existing authentication session cannot be used to re-link and overwrite the entry without\nauthenticating with one of the other linked accounts in the keychain. These restrictions limit the potential attack surface\nrelated to account theft scenarios.\n\n@param Options structure containing operation input parameters\n@param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate a callback that is fired when the unlink operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "EOSConnectUnlinkAccount", nullptr, nullptr, sizeof(CoreConnect_eventEOSConnectUnlinkAccount_Parms), Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreConnect_GetConnect_Statics
	{
		struct CoreConnect_eventGetConnect_Parms
		{
			UCoreConnect* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreConnect_eventGetConnect_Parms, ReturnValue), Z_Construct_UClass_UCoreConnect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n     * The Connect Interface is used to manage local user permissions and access to backend services through the verification of various forms of credentials.\n     * It creates an association between third party providers and an internal mapping that allows Epic Online Services to represent a user agnostically\n     * All Connect Interface calls take a handle of type EOS_HConnect as the first parameter.\n     * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetConnectInterface function.\n     *\n     * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n     *\n     * @see EOS_Platform_GetConnectInterface\n     */" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
		{ "ToolTip", "The Connect Interface is used to manage local user permissions and access to backend services through the verification of various forms of credentials.\nIt creates an association between third party providers and an internal mapping that allows Epic Online Services to represent a user agnostically\nAll Connect Interface calls take a handle of type EOS_HConnect as the first parameter.\nThis handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetConnectInterface function.\n\nNOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n\n@see EOS_Platform_GetConnectInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreConnect, nullptr, "GetConnect", nullptr, nullptr, sizeof(CoreConnect_eventGetConnect_Parms), Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreConnect_GetConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreConnect_GetConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreConnect_NoRegister()
	{
		return UCoreConnect::StaticClass();
	}
	struct Z_Construct_UClass_UCoreConnect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoginStatusChangedCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginStatusChangedCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthExpirationCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthExpirationCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryProductUserIdMappingsCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryProductUserIdMappingsCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryExternalAccountMappingsCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryExternalAccountMappingsCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTransferDeviceIdAccountCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTransferDeviceIdAccountCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeleteDeviceIdCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeleteDeviceIdCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCreateDeviceIdCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateDeviceIdCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnlinkAccountCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnlinkAccountCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLinkAccountCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLinkAccountCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCreateUserCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateUserCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoginCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreConnect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreConnect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyAuthExpiration, "EOSConnectAddNotifyAuthExpiration" }, // 990136147
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectAddNotifyLoginStatusChanged, "EOSConnectAddNotifyLoginStatusChanged" }, // 3852313315
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId, "EOSConnectCopyProductUserExternalAccountByAccountId" }, // 2525434425
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType, "EOSConnectCopyProductUserExternalAccountByAccountType" }, // 4252735546
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex, "EOSConnectCopyProductUserExternalAccountByIndex" }, // 2062965353
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectCopyProductUserInfo, "EOSConnectCopyProductUserInfo" }, // 2257089059
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectCreateDeviceId, "EOSConnectCreateDeviceId" }, // 2403845163
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectCreateUser, "EOSConnectCreateUser" }, // 4230537171
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectDeleteDeviceId, "EOSConnectDeleteDeviceId" }, // 999078650
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectGetExternalAccountMapping, "EOSConnectGetExternalAccountMapping" }, // 927296388
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUserByIndex, "EOSConnectGetLoggedInUserByIndex" }, // 2949159710
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoggedInUsersCount, "EOSConnectGetLoggedInUsersCount" }, // 3487436694
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatus, "EOSConnectGetLoginStatus" }, // 594045934
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectGetLoginStatusPure, "EOSConnectGetLoginStatusPure" }, // 1951611652
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserExternalAccountCount, "EOSConnectGetProductUserExternalAccountCount" }, // 237452493
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectGetProductUserIdMapping, "EOSConnectGetProductUserIdMapping" }, // 1211786508
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectLinkAccount, "EOSConnectLinkAccount" }, // 1091453018
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectLogin, "EOSConnectLogin" }, // 2911915526
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectQueryExternalAccountMappings, "EOSConnectQueryExternalAccountMappings" }, // 1608144193
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectQueryProductUserIdMappings, "EOSConnectQueryProductUserIdMappings" }, // 323747820
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyAuthExpiration, "EOSConnectRemoveNotifyAuthExpiration" }, // 3439392227
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged, "EOSConnectRemoveNotifyLoginStatusChanged" }, // 405624959
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectTransferDeviceIdAccount, "EOSConnectTransferDeviceIdAccount" }, // 2013112570
		{ &Z_Construct_UFunction_UCoreConnect_EOSConnectUnlinkAccount, "EOSConnectUnlinkAccount" }, // 3256123462
		{ &Z_Construct_UFunction_UCoreConnect_GetConnect, "GetConnect" }, // 1608334155
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Connect/EOSConnect.h" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginStatusChangedCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginStatusChangedCallback = { "OnLoginStatusChangedCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnLoginStatusChangedCallback), Z_Construct_UDelegateFunction_EOSCore_OnLoginStatusChangedCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginStatusChangedCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginStatusChangedCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnAuthExpirationCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnAuthExpirationCallback = { "OnAuthExpirationCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnAuthExpirationCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthExpirationCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnAuthExpirationCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnAuthExpirationCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryProductUserIdMappingsCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryProductUserIdMappingsCallback = { "OnQueryProductUserIdMappingsCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnQueryProductUserIdMappingsCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryProductUserIdMappingsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryProductUserIdMappingsCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryProductUserIdMappingsCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryExternalAccountMappingsCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryExternalAccountMappingsCallback = { "OnQueryExternalAccountMappingsCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnQueryExternalAccountMappingsCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryExternalAccountMappingsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryExternalAccountMappingsCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryExternalAccountMappingsCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnTransferDeviceIdAccountCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnTransferDeviceIdAccountCallback = { "OnTransferDeviceIdAccountCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnTransferDeviceIdAccountCallback), Z_Construct_UDelegateFunction_EOSCore_OnTransferDeviceIdAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnTransferDeviceIdAccountCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnTransferDeviceIdAccountCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnDeleteDeviceIdCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnDeleteDeviceIdCallback = { "OnDeleteDeviceIdCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnDeleteDeviceIdCallback), Z_Construct_UDelegateFunction_EOSCore_OnDeleteDeviceIdCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnDeleteDeviceIdCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnDeleteDeviceIdCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateDeviceIdCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateDeviceIdCallback = { "OnCreateDeviceIdCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnCreateDeviceIdCallback), Z_Construct_UDelegateFunction_EOSCore_OnCreateDeviceIdCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateDeviceIdCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateDeviceIdCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnUnlinkAccountCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnUnlinkAccountCallback = { "OnUnlinkAccountCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnUnlinkAccountCallback), Z_Construct_UDelegateFunction_EOSCore_OnUnlinkAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnUnlinkAccountCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnUnlinkAccountCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLinkAccountCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLinkAccountCallback = { "OnLinkAccountCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnLinkAccountCallback), Z_Construct_UDelegateFunction_EOSCore_OnLinkAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLinkAccountCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLinkAccountCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateUserCallback_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateUserCallback = { "OnCreateUserCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnCreateUserCallback), Z_Construct_UDelegateFunction_EOSCore_OnCreateUserCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateUserCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateUserCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Connect|Delegates" },
		{ "ModuleRelativePath", "Public/Connect/EOSConnect.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginCallbackDelegate = { "OnLoginCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreConnect, OnLoginCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnLoginCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreConnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginStatusChangedCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnAuthExpirationCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryProductUserIdMappingsCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnQueryExternalAccountMappingsCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnTransferDeviceIdAccountCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnDeleteDeviceIdCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateDeviceIdCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnUnlinkAccountCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLinkAccountCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnCreateUserCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreConnect_Statics::NewProp_OnLoginCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreConnect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreConnect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreConnect_Statics::ClassParams = {
		&UCoreConnect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreConnect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreConnect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreConnect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreConnect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreConnect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreConnect, 3146993108);
	template<> EOSCORE_API UClass* StaticClass<UCoreConnect>()
	{
		return UCoreConnect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreConnect(Z_Construct_UClass_UCoreConnect, &UCoreConnect::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreConnect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreConnect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
