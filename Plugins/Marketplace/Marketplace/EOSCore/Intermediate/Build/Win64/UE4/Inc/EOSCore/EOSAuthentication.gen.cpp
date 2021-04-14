// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Auth/EOSAuthentication.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAuthentication() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreAuthentication_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreAuthentication();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginStatusChangedCallback__DelegateSignature();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthToken();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEpicAccountId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthCopyUserAuthTokenOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthDeletePersistentAuthCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthDeletePersistentAuthOptions();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSELoginStatus();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLinkAccountCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthLinkAccountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthLoginOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLogoutCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthLogoutOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthVerifyUserAuthCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAuthVerifyUserAuthOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginStatusChangedCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthDeletePersistentAuthCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthVerifyUserAuthCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLinkAccountCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLogoutCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthRemoveNotifyLoginStatusChanged)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreAuthentication::EOSAuthRemoveNotifyLoginStatusChanged(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthAddNotifyLoginStatusChanged)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCoreAuthentication::EOSAuthAddNotifyLoginStatusChanged(FOnAuthLoginStatusChangedCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthCopyUserAuthToken)
	{
		P_GET_STRUCT(FEOSAuthCopyUserAuthTokenOptions,Z_Param_options);
		P_GET_STRUCT(FEOSEpicAccountId,Z_Param_localUserId);
		P_GET_STRUCT_REF(FEOSAuthToken,Z_Param_Out_outUserAuthToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreAuthentication::EOSAuthCopyUserAuthToken(Z_Param_options,Z_Param_localUserId,Z_Param_Out_outUserAuthToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthGetLoginStatusPure)
	{
		P_GET_STRUCT(FEOSEpicAccountId,Z_Param_localUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSELoginStatus*)Z_Param__Result=UCoreAuthentication::EOSAuthGetLoginStatusPure(Z_Param_localUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthGetLoginStatus)
	{
		P_GET_STRUCT(FEOSEpicAccountId,Z_Param_localUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSELoginStatus*)Z_Param__Result=UCoreAuthentication::EOSAuthGetLoginStatus(Z_Param_localUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthGetLoggedInAccountByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSEpicAccountId*)Z_Param__Result=UCoreAuthentication::EOSAuthGetLoggedInAccountByIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthGetLoggedInAccountsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreAuthentication::EOSAuthGetLoggedInAccountsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthVerifyUserAuth)
	{
		P_GET_STRUCT_REF(FEOSAuthVerifyUserAuthOptions,Z_Param_Out_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSAuthVerifyUserAuth(Z_Param_Out_options,FOnAuthVerifyUserAuthCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthDeletePersistentAuth)
	{
		P_GET_STRUCT_REF(FEOSAuthDeletePersistentAuthOptions,Z_Param_Out_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSAuthDeletePersistentAuth(Z_Param_Out_options,FOnAuthDeletePersistentAuthCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthLinkAccount)
	{
		P_GET_STRUCT(FEOSAuthLinkAccountOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSAuthLinkAccount(Z_Param_options,FOnAuthLinkAccountCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthLogout)
	{
		P_GET_STRUCT(FEOSAuthLogoutOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSAuthLogout(Z_Param_options,FOnAuthLogoutCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execEOSAuthLogin)
	{
		P_GET_STRUCT(FEOSAuthLoginOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSAuthLogin(Z_Param_options,FOnAuthLoginCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAuthentication::execGetAuthentication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreAuthentication**)Z_Param__Result=UCoreAuthentication::GetAuthentication();
		P_NATIVE_END;
	}
	void UCoreAuthentication::StaticRegisterNativesUCoreAuthentication()
	{
		UClass* Class = UCoreAuthentication::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAuthAddNotifyLoginStatusChanged", &UCoreAuthentication::execEOSAuthAddNotifyLoginStatusChanged },
			{ "EOSAuthCopyUserAuthToken", &UCoreAuthentication::execEOSAuthCopyUserAuthToken },
			{ "EOSAuthDeletePersistentAuth", &UCoreAuthentication::execEOSAuthDeletePersistentAuth },
			{ "EOSAuthGetLoggedInAccountByIndex", &UCoreAuthentication::execEOSAuthGetLoggedInAccountByIndex },
			{ "EOSAuthGetLoggedInAccountsCount", &UCoreAuthentication::execEOSAuthGetLoggedInAccountsCount },
			{ "EOSAuthGetLoginStatus", &UCoreAuthentication::execEOSAuthGetLoginStatus },
			{ "EOSAuthGetLoginStatusPure", &UCoreAuthentication::execEOSAuthGetLoginStatusPure },
			{ "EOSAuthLinkAccount", &UCoreAuthentication::execEOSAuthLinkAccount },
			{ "EOSAuthLogin", &UCoreAuthentication::execEOSAuthLogin },
			{ "EOSAuthLogout", &UCoreAuthentication::execEOSAuthLogout },
			{ "EOSAuthRemoveNotifyLoginStatusChanged", &UCoreAuthentication::execEOSAuthRemoveNotifyLoginStatusChanged },
			{ "EOSAuthVerifyUserAuth", &UCoreAuthentication::execEOSAuthVerifyUserAuth },
			{ "GetAuthentication", &UCoreAuthentication::execGetAuthentication },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics
	{
		struct CoreAuthentication_eventEOSAuthAddNotifyLoginStatusChanged_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthAddNotifyLoginStatusChanged_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthAddNotifyLoginStatusChanged_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginStatusChangedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n    * Register to receive login status updates.\n    * @note must call RemoveNotifyLoginStatusChanged to remove the notification\n    *\n    * @param options        structure containing the api version of AddNotifyLoginStatusChanged to use\n    * @param clientData     arbitrary data that is passed back to you in the callback\n    * @param notification   a callback that is fired when the login status for a user changes\n    *\n    * @return handle representing the registered callback\n    */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Register to receive login status updates.\n@note must call RemoveNotifyLoginStatusChanged to remove the notification\n\n@param options        structure containing the api version of AddNotifyLoginStatusChanged to use\n@param clientData     arbitrary data that is passed back to you in the callback\n@param notification   a callback that is fired when the login status for a user changes\n\n@return handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthAddNotifyLoginStatusChanged", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthAddNotifyLoginStatusChanged_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics
	{
		struct CoreAuthentication_eventEOSAuthCopyUserAuthToken_Parms
		{
			FEOSAuthCopyUserAuthTokenOptions options;
			FEOSEpicAccountId localUserId;
			FEOSAuthToken outUserAuthToken;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outUserAuthToken;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_localUserId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthCopyUserAuthToken_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_outUserAuthToken = { "outUserAuthToken", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthCopyUserAuthToken_Parms, outUserAuthToken), Z_Construct_UScriptStruct_FEOSAuthToken, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_localUserId = { "localUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthCopyUserAuthToken_Parms, localUserId), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthCopyUserAuthToken_Parms, options), Z_Construct_UScriptStruct_FEOSAuthCopyUserAuthTokenOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_outUserAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_localUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n    * Fetches a user auth token for an account id.\n    *\n    * @param options            structure containing the api version of CopyUserAuthToken to use\n    * @param localUserId        the account id of the user being queried\n    * @param outUserAuthToken   the auth token for the given user, if it exists and is valid, use EOS_Auth_Token_Release when finished\n    *\n    * @see EOS_Auth_Token_Release\n    *\n    * @return EOS_Success if the information is available and passed out in OutUserAuthToken\n    *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n    *         EOS_NotFound if the auth token is not found or expired.\n    *\n    */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Fetches a user auth token for an account id.\n\n@param options            structure containing the api version of CopyUserAuthToken to use\n@param localUserId        the account id of the user being queried\n@param outUserAuthToken   the auth token for the given user, if it exists and is valid, use EOS_Auth_Token_Release when finished\n\n@see EOS_Auth_Token_Release\n\n@return EOS_Success if the information is available and passed out in OutUserAuthToken\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the auth token is not found or expired." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthCopyUserAuthToken", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthCopyUserAuthToken_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics
	{
		struct CoreAuthentication_eventEOSAuthDeletePersistentAuth_Parms
		{
			FEOSAuthDeletePersistentAuthOptions options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthDeletePersistentAuth_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAuthDeletePersistentAuthCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthDeletePersistentAuth_Parms, options), Z_Construct_UScriptStruct_FEOSAuthDeletePersistentAuthOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n    * Deletes a previously received and locally stored persistent auth access token for the currently logged in user of the local device.\n    *\n    * On Desktop and Mobile platforms, the access token is deleted from the keychain of the local user and a backend request is made to revoke the token on the authentication server.\n    * On Console platforms, even though the caller is responsible for storing and deleting the access token on the local device,\n    * this function should still be called with the access token before its deletion to make the best effort in attempting to also revoke it on the authentication server.\n    * If the function would fail on Console, the caller should still proceed as normal to delete the access token locally as intended.\n    *\n    * @param options          structure containing operation input parameters\n    * @param clientData       arbitrary data that is passed back to you in the CompletionDelegate\n    * @param callback         a callback that is fired when the deletion operation completes, either successfully or in error\n    */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Deletes a previously received and locally stored persistent auth access token for the currently logged in user of the local device.\n\nOn Desktop and Mobile platforms, the access token is deleted from the keychain of the local user and a backend request is made to revoke the token on the authentication server.\nOn Console platforms, even though the caller is responsible for storing and deleting the access token on the local device,\nthis function should still be called with the access token before its deletion to make the best effort in attempting to also revoke it on the authentication server.\nIf the function would fail on Console, the caller should still proceed as normal to delete the access token locally as intended.\n\n@param options          structure containing operation input parameters\n@param clientData       arbitrary data that is passed back to you in the CompletionDelegate\n@param callback         a callback that is fired when the deletion operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthDeletePersistentAuth", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthDeletePersistentAuth_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics
	{
		struct CoreAuthentication_eventEOSAuthGetLoggedInAccountByIndex_Parms
		{
			int32 index;
			FEOSEpicAccountId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthGetLoggedInAccountByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthGetLoggedInAccountByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n    * Fetch an account id that is logged in.\n    *\n    * @param Index an index into the list of logged in accounts. If the index is out of bounds, the returned account id will be invalid.\n    *\n    * @return the account id associated with the index passed\n    */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Fetch an account id that is logged in.\n\n@param Index an index into the list of logged in accounts. If the index is out of bounds, the returned account id will be invalid.\n\n@return the account id associated with the index passed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthGetLoggedInAccountByIndex", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthGetLoggedInAccountByIndex_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics
	{
		struct CoreAuthentication_eventEOSAuthGetLoggedInAccountsCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthGetLoggedInAccountsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n    * Fetch the number of accounts that are logged in.\n    *\n    * @return the number of accounts logged in.\n    */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Fetch the number of accounts that are logged in.\n\n@return the number of accounts logged in." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthGetLoggedInAccountsCount", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthGetLoggedInAccountsCount_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics
	{
		struct CoreAuthentication_eventEOSAuthGetLoginStatus_Parms
		{
			FEOSEpicAccountId localUserId;
			EOSELoginStatus ReturnValue;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthGetLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSELoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::NewProp_localUserId = { "localUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthGetLoginStatus_Parms, localUserId), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::NewProp_localUserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n    * Fetches the login status for an account id.\n    *\n    * @param LocalUserId the account id of the user being queried\n    *\n    * @return the enum value of a user's login status\n    */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Fetches the login status for an account id.\n\n@param LocalUserId the account id of the user being queried\n\n@return the enum value of a user's login status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthGetLoginStatus", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthGetLoginStatus_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics
	{
		struct CoreAuthentication_eventEOSAuthGetLoginStatusPure_Parms
		{
			FEOSEpicAccountId localUserId;
			EOSELoginStatus ReturnValue;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthGetLoginStatusPure_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSELoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::NewProp_localUserId = { "localUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthGetLoginStatusPure_Parms, localUserId), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::NewProp_localUserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n    * Fetches the login status for an account id.\n    *\n    * @param LocalUserId the account id of the user being queried\n    *\n    * @return the enum value of a user's login status\n    */" },
		{ "DisplayName", "EOSAuth Get Login Status (Pure)" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Fetches the login status for an account id.\n\n@param LocalUserId the account id of the user being queried\n\n@return the enum value of a user's login status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthGetLoginStatusPure", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthGetLoginStatusPure_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics
	{
		struct CoreAuthentication_eventEOSAuthLinkAccount_Parms
		{
			FEOSAuthLinkAccountOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthLinkAccount_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLinkAccountCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthLinkAccount_Parms, options), Z_Construct_UScriptStruct_FEOSAuthLinkAccountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n\x09 * Link external account by continuing previous login attempt with a continuance token.\n\x09 *\n\x09 * On Desktop and Mobile platforms, the user will be presented the Epic Account Portal to resolve their identity.\n\x09 *\n\x09 * On Console, the user will login to their Epic Account using an external device, e.g. a mobile device or a desktop PC,\n\x09 * by browsing to the presented authentication URL and entering the device code presented by the game on the console.\n\x09 *\n\x09 * On success, the user will be logged in at the completion of this action.\n\x09 * This will commit this external account to the Epic Account and cannot be undone in the SDK.\n\x09 *\n\x09 * @param Options structure containing the account credentials to use during the link account operation\n\x09 * @param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n\x09 * @param CompletionDelegate a callback that is fired when the link account operation completes, either successfully or in error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Link external account by continuing previous login attempt with a continuance token.\n\nOn Desktop and Mobile platforms, the user will be presented the Epic Account Portal to resolve their identity.\n\nOn Console, the user will login to their Epic Account using an external device, e.g. a mobile device or a desktop PC,\nby browsing to the presented authentication URL and entering the device code presented by the game on the console.\n\nOn success, the user will be logged in at the completion of this action.\nThis will commit this external account to the Epic Account and cannot be undone in the SDK.\n\n@param Options structure containing the account credentials to use during the link account operation\n@param ClientData arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate a callback that is fired when the link account operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthLinkAccount", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthLinkAccount_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics
	{
		struct CoreAuthentication_eventEOSAuthLogin_Parms
		{
			FEOSAuthLoginOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthLogin_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthLogin_Parms, options), Z_Construct_UScriptStruct_FEOSAuthLoginOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n     * Login/Authenticate with user credentials.\n     *\n     * @param options               structure containing the account credentials to use during the login operation\n     * @param clientData            arbitrary data that is passed back to you in the CompletionDelegate\n     * @param callback              a callback that is fired when the login operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Login/Authenticate with user credentials.\n\n@param options               structure containing the account credentials to use during the login operation\n@param clientData            arbitrary data that is passed back to you in the CompletionDelegate\n@param callback              a callback that is fired when the login operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthLogin", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthLogin_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics
	{
		struct CoreAuthentication_eventEOSAuthLogout_Parms
		{
			FEOSAuthLogoutOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthLogout_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLogoutCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthLogout_Parms, options), Z_Construct_UScriptStruct_FEOSAuthLogoutOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n     * Signs the player out of the online service.\n     *\n     * @param options        structure containing information about which account to log out.\n     * @param callback       a callback that is fired when the logout operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Signs the player out of the online service.\n\n@param options        structure containing information about which account to log out.\n@param callback       a callback that is fired when the logout operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthLogout", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthLogout_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics
	{
		struct CoreAuthentication_eventEOSAuthRemoveNotifyLoginStatusChanged_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthRemoveNotifyLoginStatusChanged_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n     * Unregister from receiving login status updates.\n     *\n     * @param id handle representing the registered callback\n     */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Unregister from receiving login status updates.\n\n@param id handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthRemoveNotifyLoginStatusChanged", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthRemoveNotifyLoginStatusChanged_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics
	{
		struct CoreAuthentication_eventEOSAuthVerifyUserAuth_Parms
		{
			FEOSAuthVerifyUserAuthOptions options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthVerifyUserAuth_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAuthVerifyUserAuthCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventEOSAuthVerifyUserAuth_Parms, options), Z_Construct_UScriptStruct_FEOSAuthVerifyUserAuthOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Authentication" },
		{ "Comment", "/**\n     * Contact the backend service to verify validity of an existing user auth token.\n     * This function is intended for server-side use only.\n     *\n     * @param options       structure containing information about the auth token being verified\n     * @param clientData    arbitrary data that is passed back to you in the CompletionDelegate\n     * @param callback      a callback that is fired when the logout operation completes, either successfully or in error\n     */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "Contact the backend service to verify validity of an existing user auth token.\nThis function is intended for server-side use only.\n\n@param options       structure containing information about the auth token being verified\n@param clientData    arbitrary data that is passed back to you in the CompletionDelegate\n@param callback      a callback that is fired when the logout operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "EOSAuthVerifyUserAuth", nullptr, nullptr, sizeof(CoreAuthentication_eventEOSAuthVerifyUserAuth_Parms), Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics
	{
		struct CoreAuthentication_eventGetAuthentication_Parms
		{
			UCoreAuthentication* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAuthentication_eventGetAuthentication_Parms, ReturnValue), Z_Construct_UClass_UCoreAuthentication_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n     * The Auth Interface is used to manage local user permissions and access to backend services through the verification of various forms of credentials.\n     * All Auth Interface calls take a handle of type EOS_HAuth as the first parameter.\n     * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetAuthInterface function.\n     *\n     * @see EOS_Platform_GetAuthInterface\n     */" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
		{ "ToolTip", "The Auth Interface is used to manage local user permissions and access to backend services through the verification of various forms of credentials.\nAll Auth Interface calls take a handle of type EOS_HAuth as the first parameter.\nThis handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetAuthInterface function.\n\n@see EOS_Platform_GetAuthInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAuthentication, nullptr, "GetAuthentication", nullptr, nullptr, sizeof(CoreAuthentication_eventGetAuthentication_Parms), Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAuthentication_GetAuthentication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAuthentication_GetAuthentication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreAuthentication_NoRegister()
	{
		return UCoreAuthentication::StaticClass();
	}
	struct Z_Construct_UClass_UCoreAuthentication_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthLoginStatusChangedCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthLoginStatusChangedCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthDeletePersistentAuthCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthDeletePersistentAuthCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthVerifyUserAuthCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthVerifyUserAuthCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthLinkAccountCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthLinkAccountCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthLogoutCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthLogoutCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthLoginCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthLoginCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreAuthentication_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreAuthentication_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged, "EOSAuthAddNotifyLoginStatusChanged" }, // 3129585385
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthCopyUserAuthToken, "EOSAuthCopyUserAuthToken" }, // 2247967847
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthDeletePersistentAuth, "EOSAuthDeletePersistentAuth" }, // 4153680992
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex, "EOSAuthGetLoggedInAccountByIndex" }, // 3396962054
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoggedInAccountsCount, "EOSAuthGetLoggedInAccountsCount" }, // 2182484772
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatus, "EOSAuthGetLoginStatus" }, // 513798216
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthGetLoginStatusPure, "EOSAuthGetLoginStatusPure" }, // 2536896511
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthLinkAccount, "EOSAuthLinkAccount" }, // 4259862049
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogin, "EOSAuthLogin" }, // 3726625577
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthLogout, "EOSAuthLogout" }, // 3645780743
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged, "EOSAuthRemoveNotifyLoginStatusChanged" }, // 3501617298
		{ &Z_Construct_UFunction_UCoreAuthentication_EOSAuthVerifyUserAuth, "EOSAuthVerifyUserAuth" }, // 1338604016
		{ &Z_Construct_UFunction_UCoreAuthentication_GetAuthentication, "GetAuthentication" }, // 2977706989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuthentication_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/EOSAuthentication.h" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginStatusChangedCallback_MetaData[] = {
		{ "Category", "EOSCore|Authentication|Delegates" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginStatusChangedCallback = { "OnAuthLoginStatusChangedCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuthentication, OnAuthLoginStatusChangedCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginStatusChangedCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginStatusChangedCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginStatusChangedCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthDeletePersistentAuthCallback_MetaData[] = {
		{ "Category", "EOSCore|Authentication|Delegates" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthDeletePersistentAuthCallback = { "OnAuthDeletePersistentAuthCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuthentication, OnAuthDeletePersistentAuthCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthDeletePersistentAuthCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthDeletePersistentAuthCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthDeletePersistentAuthCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthVerifyUserAuthCallback_MetaData[] = {
		{ "Category", "EOSCore|Authentication|Delegates" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthVerifyUserAuthCallback = { "OnAuthVerifyUserAuthCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuthentication, OnAuthVerifyUserAuthCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthVerifyUserAuthCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthVerifyUserAuthCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthVerifyUserAuthCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLinkAccountCallback_MetaData[] = {
		{ "Category", "EOSCore|Authentication|Delegates" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLinkAccountCallback = { "OnAuthLinkAccountCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuthentication, OnAuthLinkAccountCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLinkAccountCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLinkAccountCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLinkAccountCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLogoutCallback_MetaData[] = {
		{ "Category", "EOSCore|Authentication|Delegates" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLogoutCallback = { "OnAuthLogoutCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuthentication, OnAuthLogoutCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLogoutCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLogoutCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLogoutCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginCallback_MetaData[] = {
		{ "Category", "EOSCore|Authentication|Delegates" },
		{ "ModuleRelativePath", "Public/Auth/EOSAuthentication.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginCallback = { "OnAuthLoginCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAuthentication, OnAuthLoginCallback), Z_Construct_UDelegateFunction_EOSCore_OnAuthLoginCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAuthentication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginStatusChangedCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthDeletePersistentAuthCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthVerifyUserAuthCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLinkAccountCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLogoutCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAuthentication_Statics::NewProp_OnAuthLoginCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreAuthentication_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAuthentication>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreAuthentication_Statics::ClassParams = {
		&UCoreAuthentication::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreAuthentication_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuthentication_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreAuthentication_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAuthentication_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreAuthentication()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreAuthentication_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreAuthentication, 545890434);
	template<> EOSCORE_API UClass* StaticClass<UCoreAuthentication>()
	{
		return UCoreAuthentication::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreAuthentication(Z_Construct_UClass_UCoreAuthentication, &UCoreAuthentication::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreAuthentication"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAuthentication);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
