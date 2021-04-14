// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Presence/EOSPresence.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPresence() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCorePresence_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCorePresence();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceOnJoinGameAcceptedCallback__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceChangedCallback__DelegateSignature();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceInfo();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceCopyPresenceOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSHPresenceModification();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceCreatePresenceModificationOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceGetJoinInfoOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceHasPresenceOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceModificationDeleteDataOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceModificationSetDataOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceModificationSetJoinInfoOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceModificationSetRawRichTextOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceModificationSetStatusOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceQueryPresenceCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceQueryPresenceOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceSetPresenceCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceSetPresenceOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceChangedCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceOnJoinGameAcceptedCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceSetPresenceCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnPresenceQueryPresenceCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceModificationRelease)
	{
		P_GET_STRUCT_REF(FEOSHPresenceModification,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCorePresence::EOSPresenceModificationRelease(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceModificationSetJoinInfo)
	{
		P_GET_STRUCT_REF(FEOSHPresenceModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSPresenceModificationSetJoinInfoOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePresence::EOSPresenceModificationSetJoinInfo(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceModificationDeleteData)
	{
		P_GET_STRUCT_REF(FEOSHPresenceModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSPresenceModificationDeleteDataOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePresence::EOSPresenceModificationDeleteData(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceModificationSetData)
	{
		P_GET_STRUCT_REF(FEOSHPresenceModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSPresenceModificationSetDataOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePresence::EOSPresenceModificationSetData(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceModificationSetRawRichText)
	{
		P_GET_STRUCT_REF(FEOSHPresenceModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSPresenceModificationSetRawRichTextOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePresence::EOSPresenceModificationSetRawRichText(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceModificationSetStatus)
	{
		P_GET_STRUCT_REF(FEOSHPresenceModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSPresenceModificationSetStatusOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePresence::EOSPresenceModificationSetStatus(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceGetJoinInfo)
	{
		P_GET_STRUCT(FEOSPresenceGetJoinInfoOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePresence::EOSPresenceGetJoinInfo(Z_Param_options,Z_Param_Out_outInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceRemoveNotifyJoinGameAccepted)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCorePresence::EOSPresenceRemoveNotifyJoinGameAccepted(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceAddNotifyJoinGameAccepted)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCorePresence::EOSPresenceAddNotifyJoinGameAccepted(FOnPresenceOnJoinGameAcceptedCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceRemoveNotifyOnPresenceChanged)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCorePresence::EOSPresenceRemoveNotifyOnPresenceChanged(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceAddNotifyOnPresenceChanged)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCorePresence::EOSPresenceAddNotifyOnPresenceChanged(FOnPresenceChangedCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceSetPresence)
	{
		P_GET_STRUCT(FEOSPresenceSetPresenceOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSPresenceSetPresence(Z_Param_options,FOnPresenceSetPresenceCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceCreatePresenceModification)
	{
		P_GET_STRUCT(FEOSPresenceCreatePresenceModificationOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSHPresenceModification,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePresence::EOSPresenceCreatePresenceModification(Z_Param_options,Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceCopyPresence)
	{
		P_GET_STRUCT(FEOSPresenceCopyPresenceOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSPresenceInfo,Z_Param_Out_outPresence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePresence::EOSPresenceCopyPresence(Z_Param_options,Z_Param_Out_outPresence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceHasPresence)
	{
		P_GET_STRUCT(FEOSPresenceHasPresenceOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCorePresence::EOSPresenceHasPresence(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execEOSPresenceQueryPresence)
	{
		P_GET_STRUCT(FEOSPresenceQueryPresenceOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSPresenceQueryPresence(Z_Param_options,FOnPresenceQueryPresenceCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePresence::execGetPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCorePresence**)Z_Param__Result=UCorePresence::GetPresence();
		P_NATIVE_END;
	}
	void UCorePresence::StaticRegisterNativesUCorePresence()
	{
		UClass* Class = UCorePresence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPresenceAddNotifyJoinGameAccepted", &UCorePresence::execEOSPresenceAddNotifyJoinGameAccepted },
			{ "EOSPresenceAddNotifyOnPresenceChanged", &UCorePresence::execEOSPresenceAddNotifyOnPresenceChanged },
			{ "EOSPresenceCopyPresence", &UCorePresence::execEOSPresenceCopyPresence },
			{ "EOSPresenceCreatePresenceModification", &UCorePresence::execEOSPresenceCreatePresenceModification },
			{ "EOSPresenceGetJoinInfo", &UCorePresence::execEOSPresenceGetJoinInfo },
			{ "EOSPresenceHasPresence", &UCorePresence::execEOSPresenceHasPresence },
			{ "EOSPresenceModificationDeleteData", &UCorePresence::execEOSPresenceModificationDeleteData },
			{ "EOSPresenceModificationRelease", &UCorePresence::execEOSPresenceModificationRelease },
			{ "EOSPresenceModificationSetData", &UCorePresence::execEOSPresenceModificationSetData },
			{ "EOSPresenceModificationSetJoinInfo", &UCorePresence::execEOSPresenceModificationSetJoinInfo },
			{ "EOSPresenceModificationSetRawRichText", &UCorePresence::execEOSPresenceModificationSetRawRichText },
			{ "EOSPresenceModificationSetStatus", &UCorePresence::execEOSPresenceModificationSetStatus },
			{ "EOSPresenceQueryPresence", &UCorePresence::execEOSPresenceQueryPresence },
			{ "EOSPresenceRemoveNotifyJoinGameAccepted", &UCorePresence::execEOSPresenceRemoveNotifyJoinGameAccepted },
			{ "EOSPresenceRemoveNotifyOnPresenceChanged", &UCorePresence::execEOSPresenceRemoveNotifyOnPresenceChanged },
			{ "EOSPresenceSetPresence", &UCorePresence::execEOSPresenceSetPresence },
			{ "GetPresence", &UCorePresence::execGetPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics
	{
		struct CorePresence_eventEOSPresenceAddNotifyJoinGameAccepted_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceAddNotifyJoinGameAccepted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceAddNotifyJoinGameAccepted_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnPresenceOnJoinGameAcceptedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Register to receive notifications when a user accepts a join game option via the social overlay.\n\x09* @note must call RemoveNotifyJoinGameAccepted to remove the notification\n\x09*\n\x09* @param Options Structure containing information about the request.\n\x09* @param ClientData Arbitrary data that is passed back to you in the callback.\n\x09* @param Notification A callback that is fired when a a notification is received.\n\x09*\n\x09* @return handle representing the registered callback\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Register to receive notifications when a user accepts a join game option via the social overlay.\n@note must call RemoveNotifyJoinGameAccepted to remove the notification\n\n@param Options Structure containing information about the request.\n@param ClientData Arbitrary data that is passed back to you in the callback.\n@param Notification A callback that is fired when a a notification is received.\n\n@return handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceAddNotifyJoinGameAccepted", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceAddNotifyJoinGameAccepted_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics
	{
		struct CorePresence_eventEOSPresenceAddNotifyOnPresenceChanged_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceAddNotifyOnPresenceChanged_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceAddNotifyOnPresenceChanged_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnPresenceChangedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Register to receive notifications when presence changes. If the returned NotificationId is valid, you must call RemoveNotifyOnPresenceChanged when you no longer wish to\n\x09* have your NotificationHandler called\n\x09*\n\x09* @param ClientData Data the is returned to when NotificationHandler is invoked\n\x09* @param NotificationHandler The callback to be fired when a presence change occurs\n\x09* @return Notification ID representing the registered callback if successful, an invalid NotificationId if not\n\x09*\n\x09* @see EOS_INVALID_NOTIFICATIONID\n\x09* @see EOS_Presence_RemoveNotifyOnPresenceChanged\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Register to receive notifications when presence changes. If the returned NotificationId is valid, you must call RemoveNotifyOnPresenceChanged when you no longer wish to\nhave your NotificationHandler called\n\n@param ClientData Data the is returned to when NotificationHandler is invoked\n@param NotificationHandler The callback to be fired when a presence change occurs\n@return Notification ID representing the registered callback if successful, an invalid NotificationId if not\n\n@see EOS_INVALID_NOTIFICATIONID\n@see EOS_Presence_RemoveNotifyOnPresenceChanged" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceAddNotifyOnPresenceChanged", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceAddNotifyOnPresenceChanged_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics
	{
		struct CorePresence_eventEOSPresenceCopyPresence_Parms
		{
			FEOSPresenceCopyPresenceOptions options;
			FEOSPresenceInfo outPresence;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outPresence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceCopyPresence_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::NewProp_outPresence = { "outPresence", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceCopyPresence_Parms, outPresence), Z_Construct_UScriptStruct_FEOSPresenceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceCopyPresence_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceCopyPresenceOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::NewProp_outPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Get a user's cached presence object. If successful, this data must be released by calling EOS_Presence_Info_Release\n\x09*\n\x09* @param Options Object containing properties related to who is requesting presence and for what user\n\x09* @param OutPresence A pointer to a pointer of Presence Info. If the returned result is success, this will be set to data that must be later released, otherwise this will be set to NULL\n\x09* @return Success if we have cached data, or an error result if the request was invalid or we do not have cached data.\n\x09*\n\x09* @see EOS_Presence_Info_Release\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Get a user's cached presence object. If successful, this data must be released by calling EOS_Presence_Info_Release\n\n@param Options Object containing properties related to who is requesting presence and for what user\n@param OutPresence A pointer to a pointer of Presence Info. If the returned result is success, this will be set to data that must be later released, otherwise this will be set to NULL\n@return Success if we have cached data, or an error result if the request was invalid or we do not have cached data.\n\n@see EOS_Presence_Info_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceCopyPresence", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceCopyPresence_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics
	{
		struct CorePresence_eventEOSPresenceCreatePresenceModification_Parms
		{
			FEOSPresenceCreatePresenceModificationOptions options;
			FEOSHPresenceModification handle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceCreatePresenceModification_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceCreatePresenceModification_Parms, handle), Z_Construct_UScriptStruct_FEOSHPresenceModification, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceCreatePresenceModification_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceCreatePresenceModificationOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Creates a presence modification handle. This handle can used to add multiple changes to your presence that can be applied with EOS_Presence_SetPresence.\n\x09* The resulting handle must be released by calling EOS_PresenceModification_Release once it has been passed to EOS_Presence_SetPresence.\n\x09*\n\x09* @param Options Object containing properties related to the user modifying their presence\n\x09* @param OutPresenceModificationHandle Pointer to a Presence Modification Handle to be set if successful\n\x09* @return Success if we successfully created the Presence Modification Handle pointed at in OutPresenceModificationHandle, or an error result if the input data was invalid\n\x09*\n\x09* @see EOS_PresenceModification_Release\n\x09* @see EOS_Presence_SetPresence\n\x09* @see EOS_PresenceModification_SetStatus\n\x09* @see EOS_PresenceModification_SetRawRichText\n\x09* @see EOS_PresenceModification_SetData\n\x09* @see EOS_PresenceModification_DeleteData\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Creates a presence modification handle. This handle can used to add multiple changes to your presence that can be applied with EOS_Presence_SetPresence.\nThe resulting handle must be released by calling EOS_PresenceModification_Release once it has been passed to EOS_Presence_SetPresence.\n\n@param Options Object containing properties related to the user modifying their presence\n@param OutPresenceModificationHandle Pointer to a Presence Modification Handle to be set if successful\n@return Success if we successfully created the Presence Modification Handle pointed at in OutPresenceModificationHandle, or an error result if the input data was invalid\n\n@see EOS_PresenceModification_Release\n@see EOS_Presence_SetPresence\n@see EOS_PresenceModification_SetStatus\n@see EOS_PresenceModification_SetRawRichText\n@see EOS_PresenceModification_SetData\n@see EOS_PresenceModification_DeleteData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceCreatePresenceModification", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceCreatePresenceModification_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics
	{
		struct CorePresence_eventEOSPresenceGetJoinInfo_Parms
		{
			FEOSPresenceGetJoinInfoOptions options;
			FString outInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceGetJoinInfo_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::NewProp_outInfo = { "outInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceGetJoinInfo_Parms, outInfo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceGetJoinInfo_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceGetJoinInfoOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::NewProp_outInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Gets a join info custom game-data string for a specific user. This is a helper function for reading the presence data related to how a user can be joined.\n\x09* Its meaning is entirely application dependent.\n\x09*\n\x09* This value will be valid only after a QueryPresence call has successfully completed.\n\x09*\n\x09* @param Options Object containing an associated user\n\x09* @param OutBuffer The buffer into which the character data should be written.  The buffer must be long enough to hold a string of EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH.\n\x09* @param InOutBufferLength Used as an input to define the OutBuffer length.\n\x09*                          The input buffer should include enough space to be null-terminated.\n\x09*                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.\n\x09*\n\x09* @return An EOSResult that indicates whether the location string was copied into the OutBuffer.\n\x09*         EOS_Success if the information is available and passed out in OutBuffer\n\x09*         EOS_InvalidParameters if you pass a null pointer for the out parameter\n\x09*         EOS_NotFound if there is user or the location string was not found.\n\x09*         EOS_LimitExceeded - The OutBuffer is not large enough to receive the location string. InOutBufferLength contains the required minimum length to perform the operation successfully.\n\x09*\n\x09* @see EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Gets a join info custom game-data string for a specific user. This is a helper function for reading the presence data related to how a user can be joined.\nIts meaning is entirely application dependent.\n\nThis value will be valid only after a QueryPresence call has successfully completed.\n\n@param Options Object containing an associated user\n@param OutBuffer The buffer into which the character data should be written.  The buffer must be long enough to hold a string of EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH.\n@param InOutBufferLength Used as an input to define the OutBuffer length.\n                         The input buffer should include enough space to be null-terminated.\n                         When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.\n\n@return An EOSResult that indicates whether the location string was copied into the OutBuffer.\n        EOS_Success if the information is available and passed out in OutBuffer\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if there is user or the location string was not found.\n        EOS_LimitExceeded - The OutBuffer is not large enough to receive the location string. InOutBufferLength contains the required minimum length to perform the operation successfully.\n\n@see EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceGetJoinInfo", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceGetJoinInfo_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics
	{
		struct CorePresence_eventEOSPresenceHasPresence_Parms
		{
			FEOSPresenceHasPresenceOptions options;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CorePresence_eventEOSPresenceHasPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePresence_eventEOSPresenceHasPresence_Parms), &Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceHasPresence_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceHasPresenceOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Check if we already have presence for a user\n\x09*\n\x09* @param Options Object containing properties related to who is requesting presence and for what user\n\x09* @return EOS_TRUE if we have presence for the requested user, or EOS_FALSE if the request was invalid or we do not have cached data\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Check if we already have presence for a user\n\n@param Options Object containing properties related to who is requesting presence and for what user\n@return EOS_TRUE if we have presence for the requested user, or EOS_FALSE if the request was invalid or we do not have cached data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceHasPresence", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceHasPresence_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics
	{
		struct CorePresence_eventEOSPresenceModificationDeleteData_Parms
		{
			FEOSHPresenceModification handle;
			FEOSPresenceModificationDeleteDataOptions options;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationDeleteData_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationDeleteData_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceModificationDeleteDataOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationDeleteData_Parms, handle), Z_Construct_UScriptStruct_FEOSHPresenceModification, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Removes one or more rows of user-defined presence data for a local user. At least one DeleteDataInfo object\n\x09* must be specified.\n\x09*\n\x09* @param Options Object containing an array of new presence data.\n\x09* @return Success if modification was added successfully, otherwise an error code related to the problem\n\x09*\n\x09* @see EOS_PRESENCE_DATA_MAX_KEYS\n\x09* @see EOS_PRESENCE_DATA_MAX_KEY_LENGTH\n\x09* @see EOS_PRESENCE_DATA_MAX_VALUE_LENGTH\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Removes one or more rows of user-defined presence data for a local user. At least one DeleteDataInfo object\nmust be specified.\n\n@param Options Object containing an array of new presence data.\n@return Success if modification was added successfully, otherwise an error code related to the problem\n\n@see EOS_PRESENCE_DATA_MAX_KEYS\n@see EOS_PRESENCE_DATA_MAX_KEY_LENGTH\n@see EOS_PRESENCE_DATA_MAX_VALUE_LENGTH" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceModificationDeleteData", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceModificationDeleteData_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics
	{
		struct CorePresence_eventEOSPresenceModificationRelease_Parms
		{
			FEOSHPresenceModification handle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationRelease_Parms, handle), Z_Construct_UScriptStruct_FEOSHPresenceModification, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09 * Release the memory associated with an EOS_HPresenceModification handle. This must be called on Handles retrieved from EOS_Presence_CreatePresenceModification.\n\x09 * This can be safely called on a NULL presence modification handle. This also may be safely called while a call to SetPresence is still pending.\n\x09 *\n\x09 * @param PresenceModificationHandle The presence modification handle to release\n\x09 *\n\x09 * @see EOS_Presence_CreatePresenceModification\n\x09 */" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Release the memory associated with an EOS_HPresenceModification handle. This must be called on Handles retrieved from EOS_Presence_CreatePresenceModification.\nThis can be safely called on a NULL presence modification handle. This also may be safely called while a call to SetPresence is still pending.\n\n@param PresenceModificationHandle The presence modification handle to release\n\n@see EOS_Presence_CreatePresenceModification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceModificationRelease", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceModificationRelease_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics
	{
		struct CorePresence_eventEOSPresenceModificationSetData_Parms
		{
			FEOSHPresenceModification handle;
			FEOSPresenceModificationSetDataOptions options;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetData_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetData_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceModificationSetDataOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetData_Parms, handle), Z_Construct_UScriptStruct_FEOSHPresenceModification, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Modifies one or more rows of user-defined presence data for a local user. At least one InfoData object\n\x09* must be specified.\n\x09*\n\x09* @param Options Object containing an array of new presence data.\n\x09* @return Success if modification was added successfully, otherwise an error code related to the problem\n\x09*\n\x09* @see EOS_PRESENCE_DATA_MAX_KEYS\n\x09* @see EOS_PRESENCE_DATA_MAX_KEY_LENGTH\n\x09* @see EOS_PRESENCE_DATA_MAX_VALUE_LENGTH\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Modifies one or more rows of user-defined presence data for a local user. At least one InfoData object\nmust be specified.\n\n@param Options Object containing an array of new presence data.\n@return Success if modification was added successfully, otherwise an error code related to the problem\n\n@see EOS_PRESENCE_DATA_MAX_KEYS\n@see EOS_PRESENCE_DATA_MAX_KEY_LENGTH\n@see EOS_PRESENCE_DATA_MAX_VALUE_LENGTH" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceModificationSetData", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceModificationSetData_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics
	{
		struct CorePresence_eventEOSPresenceModificationSetJoinInfo_Parms
		{
			FEOSHPresenceModification handle;
			FEOSPresenceModificationSetJoinInfoOptions options;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetJoinInfo_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetJoinInfo_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceModificationSetJoinInfoOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetJoinInfo_Parms, handle), Z_Construct_UScriptStruct_FEOSHPresenceModification, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Sets your new join info custom game-data string. This is a helper function for reading the presence data related to how a user can be joined.\n\x09* Its meaning is entirely application dependent.\n\x09*\n\x09* @param Options Object containing a join info string and associated user data\n\x09* @return Success if modification was added successfully, otherwise an error code related to the problem\n\x09*\n\x09* @see EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Sets your new join info custom game-data string. This is a helper function for reading the presence data related to how a user can be joined.\nIts meaning is entirely application dependent.\n\n@param Options Object containing a join info string and associated user data\n@return Success if modification was added successfully, otherwise an error code related to the problem\n\n@see EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceModificationSetJoinInfo", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceModificationSetJoinInfo_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics
	{
		struct CorePresence_eventEOSPresenceModificationSetRawRichText_Parms
		{
			FEOSHPresenceModification handle;
			FEOSPresenceModificationSetRawRichTextOptions options;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetRawRichText_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetRawRichText_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceModificationSetRawRichTextOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetRawRichText_Parms, handle), Z_Construct_UScriptStruct_FEOSHPresenceModification, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Modifies a user's Rich Presence string to a new state. This is the exact value other users will see\n\x09* when they query the local user's presence.\n\x09*\n\x09* @param Options Object containing properties related to setting a user's RichText string\n\x09* @return Success if modification was added successfully, otherwise an error code related to the problem\n\x09*\n\x09* @see EOS_PRESENCE_RICH_TEXT_MAX_VALUE_LENGTH\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Modifies a user's Rich Presence string to a new state. This is the exact value other users will see\nwhen they query the local user's presence.\n\n@param Options Object containing properties related to setting a user's RichText string\n@return Success if modification was added successfully, otherwise an error code related to the problem\n\n@see EOS_PRESENCE_RICH_TEXT_MAX_VALUE_LENGTH" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceModificationSetRawRichText", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceModificationSetRawRichText_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics
	{
		struct CorePresence_eventEOSPresenceModificationSetStatus_Parms
		{
			FEOSHPresenceModification handle;
			FEOSPresenceModificationSetStatusOptions options;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetStatus_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetStatus_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceModificationSetStatusOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceModificationSetStatus_Parms, handle), Z_Construct_UScriptStruct_FEOSHPresenceModification, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Modifies a user's online status to be the new state.\n\x09*\n\x09* @param Options Object containing properties related to setting a user's Status\n\x09* @return Success if modification was added successfully, otherwise an error code related to the problem\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Modifies a user's online status to be the new state.\n\n@param Options Object containing properties related to setting a user's Status\n@return Success if modification was added successfully, otherwise an error code related to the problem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceModificationSetStatus", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceModificationSetStatus_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics
	{
		struct CorePresence_eventEOSPresenceQueryPresence_Parms
		{
			FEOSPresenceQueryPresenceOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceQueryPresence_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnPresenceQueryPresenceCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceQueryPresence_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceQueryPresenceOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Query a user's presence. This must complete successfully before CopyPresence will have valid results. If HasPresence returns true for a remote\n\x09* user, this does not need to be called.\n\x09*\n\x09* @param Options Object containing properties related to who is querying presence and for what user\n\x09* @param callback Pointer to a function that handles receiving the completion information\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Query a user's presence. This must complete successfully before CopyPresence will have valid results. If HasPresence returns true for a remote\nuser, this does not need to be called.\n\n@param Options Object containing properties related to who is querying presence and for what user\n@param callback Pointer to a function that handles receiving the completion information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceQueryPresence", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceQueryPresence_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics
	{
		struct CorePresence_eventEOSPresenceRemoveNotifyJoinGameAccepted_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceRemoveNotifyJoinGameAccepted_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Unregister from receiving notifications when a user accepts a join game option via the social overlay.\n\x09*\n\x09* @param InId Handle representing the registered callback\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Unregister from receiving notifications when a user accepts a join game option via the social overlay.\n\n@param InId Handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceRemoveNotifyJoinGameAccepted", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceRemoveNotifyJoinGameAccepted_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics
	{
		struct CorePresence_eventEOSPresenceRemoveNotifyOnPresenceChanged_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceRemoveNotifyOnPresenceChanged_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Unregister a previously bound notification handler from receiving presence update notifications\n\x09*\n\x09* @param NotificationId The Notification ID representing the registered callback\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Unregister a previously bound notification handler from receiving presence update notifications\n\n@param NotificationId The Notification ID representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceRemoveNotifyOnPresenceChanged", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceRemoveNotifyOnPresenceChanged_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics
	{
		struct CorePresence_eventEOSPresenceSetPresence_Parms
		{
			FEOSPresenceSetPresenceOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceSetPresence_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnPresenceSetPresenceCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventEOSPresenceSetPresence_Parms, options), Z_Construct_UScriptStruct_FEOSPresenceSetPresenceOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Presence" },
		{ "Comment", "/**\n\x09* Sets your new presence with the data applied to a PresenceModificationHandle. The PresenceModificationHandle can be released safely after calling this function.\n\x09*\n\x09* @param Options Object containing a PresenceModificationHandle and associated user data\n\x09\n\x09* @param callback Pointer to a function that handles receiving the completion information\n\x09*\n\x09* @see EOS_Presence_CreatePresenceModification\n\x09* @see EOS_PresenceModification_Release\n\x09*/" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "Sets your new presence with the data applied to a PresenceModificationHandle. The PresenceModificationHandle can be released safely after calling this function.\n\n@param Options Object containing a PresenceModificationHandle and associated user data\n\n@param callback Pointer to a function that handles receiving the completion information\n\n@see EOS_Presence_CreatePresenceModification\n@see EOS_PresenceModification_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "EOSPresenceSetPresence", nullptr, nullptr, sizeof(CorePresence_eventEOSPresenceSetPresence_Parms), Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePresence_GetPresence_Statics
	{
		struct CorePresence_eventGetPresence_Parms
		{
			UCorePresence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePresence_GetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePresence_eventGetPresence_Parms, ReturnValue), Z_Construct_UClass_UCorePresence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePresence_GetPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePresence_GetPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePresence_GetPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n\x09 * The Presence methods allow you to query, read other player's presence information, as well as to modify your own.\n\x09 *\n\x09 * QueryPresence must be called once per login, per remote user, before data will be available. It is currently only possible to query presence for\n\x09 * users that are on your friends list, all other queries will return no results.\n\x09 *\n\x09 * @see EOS_Platform_GetPresenceInterface\n\x09 */" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
		{ "ToolTip", "The Presence methods allow you to query, read other player's presence information, as well as to modify your own.\n\nQueryPresence must be called once per login, per remote user, before data will be available. It is currently only possible to query presence for\nusers that are on your friends list, all other queries will return no results.\n\n@see EOS_Platform_GetPresenceInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePresence_GetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePresence, nullptr, "GetPresence", nullptr, nullptr, sizeof(CorePresence_eventGetPresence_Parms), Z_Construct_UFunction_UCorePresence_GetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_GetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePresence_GetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePresence_GetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePresence_GetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePresence_GetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePresence_NoRegister()
	{
		return UCorePresence::StaticClass();
	}
	struct Z_Construct_UClass_UCorePresence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPresenceChangedCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPresenceChangedCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPresenceOnJoinGameAcceptedCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPresenceOnJoinGameAcceptedCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPresenceSetPresenceCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPresenceSetPresenceCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPresenceQueryPresenceCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPresenceQueryPresenceCompleteCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePresence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePresence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyJoinGameAccepted, "EOSPresenceAddNotifyJoinGameAccepted" }, // 834442598
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceAddNotifyOnPresenceChanged, "EOSPresenceAddNotifyOnPresenceChanged" }, // 4125685946
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceCopyPresence, "EOSPresenceCopyPresence" }, // 1248898510
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceCreatePresenceModification, "EOSPresenceCreatePresenceModification" }, // 478697933
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceGetJoinInfo, "EOSPresenceGetJoinInfo" }, // 3132158016
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceHasPresence, "EOSPresenceHasPresence" }, // 1036881975
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceModificationDeleteData, "EOSPresenceModificationDeleteData" }, // 1138572514
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceModificationRelease, "EOSPresenceModificationRelease" }, // 1055958799
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetData, "EOSPresenceModificationSetData" }, // 4121337143
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetJoinInfo, "EOSPresenceModificationSetJoinInfo" }, // 482743393
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetRawRichText, "EOSPresenceModificationSetRawRichText" }, // 1993822281
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceModificationSetStatus, "EOSPresenceModificationSetStatus" }, // 686156978
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceQueryPresence, "EOSPresenceQueryPresence" }, // 2979175515
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted, "EOSPresenceRemoveNotifyJoinGameAccepted" }, // 1092781702
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged, "EOSPresenceRemoveNotifyOnPresenceChanged" }, // 2605429646
		{ &Z_Construct_UFunction_UCorePresence_EOSPresenceSetPresence, "EOSPresenceSetPresence" }, // 2865432268
		{ &Z_Construct_UFunction_UCorePresence_GetPresence, "GetPresence" }, // 855614106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Presence/EOSPresence.h" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceChangedCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Presence|Delegates" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceChangedCallbackDelegate = { "OnPresenceChangedCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresence, OnPresenceChangedCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnPresenceChangedCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceChangedCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceChangedCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceOnJoinGameAcceptedCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Presence|Delegates" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceOnJoinGameAcceptedCallbackDelegate = { "OnPresenceOnJoinGameAcceptedCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresence, OnPresenceOnJoinGameAcceptedCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnPresenceOnJoinGameAcceptedCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceOnJoinGameAcceptedCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceOnJoinGameAcceptedCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceSetPresenceCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Presence|Delegates" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceSetPresenceCompleteCallbackDelegate = { "OnPresenceSetPresenceCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresence, OnPresenceSetPresenceCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnPresenceSetPresenceCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceSetPresenceCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceSetPresenceCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceQueryPresenceCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Presence|Delegates" },
		{ "ModuleRelativePath", "Public/Presence/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceQueryPresenceCompleteCallbackDelegate = { "OnPresenceQueryPresenceCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePresence, OnPresenceQueryPresenceCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnPresenceQueryPresenceCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceQueryPresenceCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceQueryPresenceCompleteCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceChangedCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceOnJoinGameAcceptedCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceSetPresenceCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePresence_Statics::NewProp_OnPresenceQueryPresenceCompleteCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePresence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePresence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePresence_Statics::ClassParams = {
		&UCorePresence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePresence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresence_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePresence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePresence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePresence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePresence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePresence, 903015582);
	template<> EOSCORE_API UClass* StaticClass<UCorePresence>()
	{
		return UCorePresence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePresence(Z_Construct_UClass_UCorePresence, &UCorePresence::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCorePresence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePresence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
