// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Friends/EOSFriends.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSFriends() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreFriends_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreFriends();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsAcceptInviteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsAcceptInviteOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsUpdateCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEpicAccountId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsGetFriendAtIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsGetFriendsCountOptions();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSEFriendsStatus();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsGetStatusOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsQueryFriendsCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsQueryFriendsOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsRejectInviteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsRejectInviteOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsSendInviteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendsSendInviteOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsUpdateCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsDeleteFriendCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsRejectInviteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsAcceptInviteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsSendInviteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFriendsQueryFriendsCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreFriends::execEOSFriendsRemoveNotifyFriendsUpdate)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreFriends::EOSFriendsRemoveNotifyFriendsUpdate(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFriends::execEOSFriendsAddNotifyFriendsUpdate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=P_THIS->EOSFriendsAddNotifyFriendsUpdate(FOnFriendsUpdateCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFriends::execEOSFriendsGetStatus)
	{
		P_GET_STRUCT(FEOSFriendsGetStatusOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSEFriendsStatus*)Z_Param__Result=UCoreFriends::EOSFriendsGetStatus(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFriends::execEOSFriendsGetFriendAtIndex)
	{
		P_GET_STRUCT(FEOSFriendsGetFriendAtIndexOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSEpicAccountId*)Z_Param__Result=UCoreFriends::EOSFriendsGetFriendAtIndex(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFriends::execEOSFriendsGetFriendsCount)
	{
		P_GET_STRUCT(FEOSFriendsGetFriendsCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreFriends::EOSFriendsGetFriendsCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFriends::execEOSFriendsRejectInvite)
	{
		P_GET_STRUCT(FEOSFriendsRejectInviteOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSFriendsRejectInvite(Z_Param_options,FOnFriendsRejectInviteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFriends::execEOSFriendsAcceptInvite)
	{
		P_GET_STRUCT(FEOSFriendsAcceptInviteOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSFriendsAcceptInvite(Z_Param_options,FOnFriendsAcceptInviteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFriends::execEOSFriendsSendInvite)
	{
		P_GET_STRUCT(FEOSFriendsSendInviteOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSFriendsSendInvite(Z_Param_options,FOnFriendsSendInviteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFriends::execEOSFriendsQueryFriends)
	{
		P_GET_STRUCT(FEOSFriendsQueryFriendsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSFriendsQueryFriends(Z_Param_options,FOnFriendsQueryFriendsCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFriends::execGetFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreFriends**)Z_Param__Result=UCoreFriends::GetFriends();
		P_NATIVE_END;
	}
	void UCoreFriends::StaticRegisterNativesUCoreFriends()
	{
		UClass* Class = UCoreFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSFriendsAcceptInvite", &UCoreFriends::execEOSFriendsAcceptInvite },
			{ "EOSFriendsAddNotifyFriendsUpdate", &UCoreFriends::execEOSFriendsAddNotifyFriendsUpdate },
			{ "EOSFriendsGetFriendAtIndex", &UCoreFriends::execEOSFriendsGetFriendAtIndex },
			{ "EOSFriendsGetFriendsCount", &UCoreFriends::execEOSFriendsGetFriendsCount },
			{ "EOSFriendsGetStatus", &UCoreFriends::execEOSFriendsGetStatus },
			{ "EOSFriendsQueryFriends", &UCoreFriends::execEOSFriendsQueryFriends },
			{ "EOSFriendsRejectInvite", &UCoreFriends::execEOSFriendsRejectInvite },
			{ "EOSFriendsRemoveNotifyFriendsUpdate", &UCoreFriends::execEOSFriendsRemoveNotifyFriendsUpdate },
			{ "EOSFriendsSendInvite", &UCoreFriends::execEOSFriendsSendInvite },
			{ "GetFriends", &UCoreFriends::execGetFriends },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics
	{
		struct CoreFriends_eventEOSFriendsAcceptInvite_Parms
		{
			FEOSFriendsAcceptInviteOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsAcceptInvite_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnFriendsAcceptInviteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsAcceptInvite_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsAcceptInviteOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Friends" },
		{ "Comment", "/**\n\x09* Starts an asynchronous task that accepts a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n\x09*\n\x09* @param Options structure containing the logged in account and the inviting account\n\x09* @param callback a callback that is fired when the async operation completes, either successfully or in error\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "Starts an asynchronous task that accepts a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n\n@param Options structure containing the logged in account and the inviting account\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "EOSFriendsAcceptInvite", nullptr, nullptr, sizeof(CoreFriends_eventEOSFriendsAcceptInvite_Parms), Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics
	{
		struct CoreFriends_eventEOSFriendsAddNotifyFriendsUpdate_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsAddNotifyFriendsUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsAddNotifyFriendsUpdate_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnFriendsUpdateCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Friends" },
		{ "Comment", "/**\n\x09* Listen for changes to friends for a particular account.\n\x09*\n\x09* @param Options Information about who would like notifications.\n\x09* @param ClientData This value is returned to the caller when FriendsUpdateHandler is invoked.\n\x09* @param FriendsUpdateHandler The callback to be invoked when a change to any friend status changes.\n\x09* @return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "Listen for changes to friends for a particular account.\n\n@param Options Information about who would like notifications.\n@param ClientData This value is returned to the caller when FriendsUpdateHandler is invoked.\n@param FriendsUpdateHandler The callback to be invoked when a change to any friend status changes.\n@return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "EOSFriendsAddNotifyFriendsUpdate", nullptr, nullptr, sizeof(CoreFriends_eventEOSFriendsAddNotifyFriendsUpdate_Parms), Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics
	{
		struct CoreFriends_eventEOSFriendsGetFriendAtIndex_Parms
		{
			FEOSFriendsGetFriendAtIndexOptions options;
			FEOSEpicAccountId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsGetFriendAtIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsGetFriendAtIndex_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsGetFriendAtIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Friends" },
		{ "Comment", "/**\n\x09* Retrieves the account id of an entry from the friends list that has already been retrieved by the EOS_Friends_QueryFriends API.\n\x09* The account id returned by this function may belong to an account that has been invited to be a friend or that has invited the local user to be a friend.\n\x09* To determine if the account id returned by this function is a friend or a pending friend invitation, use the EOS_Friends_GetStatus function.\n\x09*\n\x09* @param Options structure containing the account id of the friends list and the index into the list\n\x09* @return the account id of the friend. Note that if the index provided is out of bounds, the returned account id will be a \"null\" account id.\n\x09*\n\x09* @see EOS_Friends_GetFriendsCount\n\x09* @see EOS_Friends_GetStatus\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "Retrieves the account id of an entry from the friends list that has already been retrieved by the EOS_Friends_QueryFriends API.\nThe account id returned by this function may belong to an account that has been invited to be a friend or that has invited the local user to be a friend.\nTo determine if the account id returned by this function is a friend or a pending friend invitation, use the EOS_Friends_GetStatus function.\n\n@param Options structure containing the account id of the friends list and the index into the list\n@return the account id of the friend. Note that if the index provided is out of bounds, the returned account id will be a \"null\" account id.\n\n@see EOS_Friends_GetFriendsCount\n@see EOS_Friends_GetStatus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "EOSFriendsGetFriendAtIndex", nullptr, nullptr, sizeof(CoreFriends_eventEOSFriendsGetFriendAtIndex_Parms), Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics
	{
		struct CoreFriends_eventEOSFriendsGetFriendsCount_Parms
		{
			FEOSFriendsGetFriendsCountOptions options;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsGetFriendsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsGetFriendsCount_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsGetFriendsCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Friends" },
		{ "Comment", "/**\n\x09* Retrieves the number of friends on the friends list that has already been retrieved by the EOS_Friends_QueryFriends API.\n\x09*\n\x09* @param Options structure containing the account id of the friends list\n\x09* @return the number of friends on the list\n\x09*\n\x09* @see EOS_Friends_GetFriendAtIndex\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "Retrieves the number of friends on the friends list that has already been retrieved by the EOS_Friends_QueryFriends API.\n\n@param Options structure containing the account id of the friends list\n@return the number of friends on the list\n\n@see EOS_Friends_GetFriendAtIndex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "EOSFriendsGetFriendsCount", nullptr, nullptr, sizeof(CoreFriends_eventEOSFriendsGetFriendsCount_Parms), Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics
	{
		struct CoreFriends_eventEOSFriendsGetStatus_Parms
		{
			FEOSFriendsGetStatusOptions options;
			EEOSEFriendsStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsGetStatus_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EEOSEFriendsStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsGetStatus_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsGetStatusOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Friends" },
		{ "Comment", "/**\n\x09* Retrieve the friendship status between the local user and another user.\n\x09*\n\x09* @param Options structure containing the account id of the friend list to check and the account of the user to test friendship status\n\x09* @return A value indicating whether the two accounts have a friendship, pending invites in either direction, or no relationship\n\x09*         EOS_FS_Friends is returned for two users that have confirmed friendship\n\x09*         EOS_FS_InviteSent is returned when the local user has sent a friend invitation but the other user has not accepted or rejected it\n\x09*         EOS_FS_InviteReceived is returned when the other user has sent a friend invitation to the local user\n\x09*         EOS_FS_NotFriends is returned when there is no known relationship\n\x09*\n\x09* @see EOS_EFriendsStatus\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "Retrieve the friendship status between the local user and another user.\n\n@param Options structure containing the account id of the friend list to check and the account of the user to test friendship status\n@return A value indicating whether the two accounts have a friendship, pending invites in either direction, or no relationship\n        EOS_FS_Friends is returned for two users that have confirmed friendship\n        EOS_FS_InviteSent is returned when the local user has sent a friend invitation but the other user has not accepted or rejected it\n        EOS_FS_InviteReceived is returned when the other user has sent a friend invitation to the local user\n        EOS_FS_NotFriends is returned when there is no known relationship\n\n@see EOS_EFriendsStatus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "EOSFriendsGetStatus", nullptr, nullptr, sizeof(CoreFriends_eventEOSFriendsGetStatus_Parms), Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics
	{
		struct CoreFriends_eventEOSFriendsQueryFriends_Parms
		{
			FEOSFriendsQueryFriendsOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsQueryFriends_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnFriendsQueryFriendsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsQueryFriends_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsQueryFriendsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Friends" },
		{ "Comment", "/**\n\x09* Starts an asynchronous task that reads the user's friends list from the backend service, caching it for future use.\n\x09*\n\x09* @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n\x09*\n\x09* @param Options structure containing the account for which to retrieve the friends list\n\x09* @param callback a callback that is fired when the async operation completes, either successfully or in error\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "Starts an asynchronous task that reads the user's friends list from the backend service, caching it for future use.\n\n@note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n\n@param Options structure containing the account for which to retrieve the friends list\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "EOSFriendsQueryFriends", nullptr, nullptr, sizeof(CoreFriends_eventEOSFriendsQueryFriends_Parms), Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics
	{
		struct CoreFriends_eventEOSFriendsRejectInvite_Parms
		{
			FEOSFriendsRejectInviteOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsRejectInvite_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnFriendsRejectInviteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsRejectInvite_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsRejectInviteOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Friends" },
		{ "Comment", "/**\n\x09* Starts an asynchronous task that rejects a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n\x09*\n\x09* @param Options structure containing the logged in account and the inviting account\n\x09* @param callback a callback that is fired when the async operation completes, either successfully or in error\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "Starts an asynchronous task that rejects a friend invitation from another user. The completion delegate is executed after the backend response has been received.\n\n@param Options structure containing the logged in account and the inviting account\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "EOSFriendsRejectInvite", nullptr, nullptr, sizeof(CoreFriends_eventEOSFriendsRejectInvite_Parms), Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics
	{
		struct CoreFriends_eventEOSFriendsRemoveNotifyFriendsUpdate_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsRemoveNotifyFriendsUpdate_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Friends" },
		{ "Comment", "/**\n\x09* Stop listening for friends changes on a previously bound handler.\n\x09*\n\x09* @param NotificationId The previously bound notification ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "Stop listening for friends changes on a previously bound handler.\n\n@param NotificationId The previously bound notification ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "EOSFriendsRemoveNotifyFriendsUpdate", nullptr, nullptr, sizeof(CoreFriends_eventEOSFriendsRemoveNotifyFriendsUpdate_Parms), Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics
	{
		struct CoreFriends_eventEOSFriendsSendInvite_Parms
		{
			FEOSFriendsSendInviteOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsSendInvite_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnFriendsSendInviteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventEOSFriendsSendInvite_Parms, options), Z_Construct_UScriptStruct_FEOSFriendsSendInviteOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Friends" },
		{ "Comment", "/**\n\x09* Starts an asynchronous task that sends a friend invitation to another user. The completion delegate is executed after the backend response has been received.\n\x09* It does not indicate that the target user has responded to the friend invitation.\n\x09*\n\x09* @param Options structure containing the account to send the invite from and the account to send the invite to\n\x09* @param callback a callback that is fired when the async operation completes, either successfully or in error\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "Starts an asynchronous task that sends a friend invitation to another user. The completion delegate is executed after the backend response has been received.\nIt does not indicate that the target user has responded to the friend invitation.\n\n@param Options structure containing the account to send the invite from and the account to send the invite to\n@param callback a callback that is fired when the async operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "EOSFriendsSendInvite", nullptr, nullptr, sizeof(CoreFriends_eventEOSFriendsSendInvite_Parms), Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFriends_GetFriends_Statics
	{
		struct CoreFriends_eventGetFriends_Parms
		{
			UCoreFriends* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreFriends_eventGetFriends_Parms, ReturnValue), Z_Construct_UClass_UCoreFriends_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n\x09 * The Friends Interface is used to manage a user's friends list, by interacting with the backend services, and to retrieve the cached list of friends and pending invitations.\n\x09 * All Friends Interface calls take a handle of type EOS_HFriends as the first parameter.\n\x09 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetFriendsInterface function.\n\x09 *\n\x09 * @see EOS_Platform_GetFriendsInterface\n\x09 */" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
		{ "ToolTip", "The Friends Interface is used to manage a user's friends list, by interacting with the backend services, and to retrieve the cached list of friends and pending invitations.\nAll Friends Interface calls take a handle of type EOS_HFriends as the first parameter.\nThis handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetFriendsInterface function.\n\n@see EOS_Platform_GetFriendsInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFriends, nullptr, "GetFriends", nullptr, nullptr, sizeof(CoreFriends_eventGetFriends_Parms), Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFriends_GetFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreFriends_GetFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreFriends_NoRegister()
	{
		return UCoreFriends::StaticClass();
	}
	struct Z_Construct_UClass_UCoreFriends_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFriendsUpdateCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendsUpdateCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFriendsDeleteFriendCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendsDeleteFriendCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFriendsRejectInviteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendsRejectInviteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFriendsAcceptInviteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendsAcceptInviteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFriendsSendInviteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendsSendInviteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFriendsQueryFriendsCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFriendsQueryFriendsCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreFriends_EOSFriendsAcceptInvite, "EOSFriendsAcceptInvite" }, // 1340081301
		{ &Z_Construct_UFunction_UCoreFriends_EOSFriendsAddNotifyFriendsUpdate, "EOSFriendsAddNotifyFriendsUpdate" }, // 3260975795
		{ &Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendAtIndex, "EOSFriendsGetFriendAtIndex" }, // 3898959236
		{ &Z_Construct_UFunction_UCoreFriends_EOSFriendsGetFriendsCount, "EOSFriendsGetFriendsCount" }, // 2165209456
		{ &Z_Construct_UFunction_UCoreFriends_EOSFriendsGetStatus, "EOSFriendsGetStatus" }, // 1613679977
		{ &Z_Construct_UFunction_UCoreFriends_EOSFriendsQueryFriends, "EOSFriendsQueryFriends" }, // 3574719588
		{ &Z_Construct_UFunction_UCoreFriends_EOSFriendsRejectInvite, "EOSFriendsRejectInvite" }, // 1963634023
		{ &Z_Construct_UFunction_UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate, "EOSFriendsRemoveNotifyFriendsUpdate" }, // 3730867453
		{ &Z_Construct_UFunction_UCoreFriends_EOSFriendsSendInvite, "EOSFriendsSendInvite" }, // 1152098131
		{ &Z_Construct_UFunction_UCoreFriends_GetFriends, "GetFriends" }, // 265494937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFriends_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Friends/EOSFriends.h" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsUpdateCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsUpdateCallbackDelegate = { "OnFriendsUpdateCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFriends, OnFriendsUpdateCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnFriendsUpdateCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsUpdateCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsUpdateCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsDeleteFriendCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsDeleteFriendCallbackDelegate = { "OnFriendsDeleteFriendCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFriends, OnFriendsDeleteFriendCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnFriendsDeleteFriendCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsDeleteFriendCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsDeleteFriendCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsRejectInviteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsRejectInviteCallbackDelegate = { "OnFriendsRejectInviteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFriends, OnFriendsRejectInviteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnFriendsRejectInviteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsRejectInviteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsRejectInviteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsAcceptInviteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsAcceptInviteCallbackDelegate = { "OnFriendsAcceptInviteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFriends, OnFriendsAcceptInviteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnFriendsAcceptInviteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsAcceptInviteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsAcceptInviteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsSendInviteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsSendInviteCallbackDelegate = { "OnFriendsSendInviteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFriends, OnFriendsSendInviteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnFriendsSendInviteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsSendInviteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsSendInviteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsQueryFriendsCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/EOSFriends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsQueryFriendsCallbackDelegate = { "OnFriendsQueryFriendsCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreFriends, OnFriendsQueryFriendsCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnFriendsQueryFriendsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsQueryFriendsCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsQueryFriendsCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsUpdateCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsDeleteFriendCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsRejectInviteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsAcceptInviteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsSendInviteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreFriends_Statics::NewProp_OnFriendsQueryFriendsCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreFriends>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreFriends_Statics::ClassParams = {
		&UCoreFriends::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreFriends_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFriends_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreFriends()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreFriends_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreFriends, 48557158);
	template<> EOSCORE_API UClass* StaticClass<UCoreFriends>()
	{
		return UCoreFriends::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreFriends(Z_Construct_UClass_UCoreFriends, &UCoreFriends::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreFriends"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreFriends);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
