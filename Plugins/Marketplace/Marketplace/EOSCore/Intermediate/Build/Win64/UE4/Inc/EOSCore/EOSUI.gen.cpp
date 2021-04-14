// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/UI/EOSUI.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUI() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreUI_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreUI();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIAcknowledgeEventIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDisplaySettingsUpdatedCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIAddNotifyDisplaySettingsUpdatedOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIGetFriendsVisibleOptions();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSUIENotificationLocation();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIGetToggleFriendsKeyOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnHideFriendsCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIHideFriendsOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUISetDisplayPreferenceOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUISetToggleFriendsKeyOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnShowFriendsCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIShowFriendsOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDisplaySettingsUpdatedCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnHideFriendsCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnShowFriendsCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreUI::execEOSUIRemoveNotifyDisplaySettingsUpdated)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreUI::EOSUIRemoveNotifyDisplaySettingsUpdated(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUIAddNotifyDisplaySettingsUpdated)
	{
		P_GET_STRUCT(FEOSUIAddNotifyDisplaySettingsUpdatedOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCoreUI::EOSUIAddNotifyDisplaySettingsUpdated(Z_Param_options,FOnDisplaySettingsUpdatedCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUIAcknowledgeEventId)
	{
		P_GET_STRUCT(FEOSUIAcknowledgeEventIdOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreUI::EOSUIAcknowledgeEventId(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUIGetNotificationLocationPreference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSUIENotificationLocation*)Z_Param__Result=UCoreUI::EOSUIGetNotificationLocationPreference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUISetDisplayPreference)
	{
		P_GET_STRUCT(FEOSUISetDisplayPreferenceOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreUI::EOSUISetDisplayPreference(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUIIsValidKeyCombination)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_keyCombination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCoreUI::EOSUIIsValidKeyCombination(Z_Param_keyCombination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUIGetToggleFriendsKey)
	{
		P_GET_STRUCT(FEOSUIGetToggleFriendsKeyOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreUI::EOSUIGetToggleFriendsKey(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUISetToggleFriendsKey)
	{
		P_GET_STRUCT(FEOSUISetToggleFriendsKeyOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreUI::EOSUISetToggleFriendsKey(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUIGetFriendsVisible)
	{
		P_GET_STRUCT(FEOSUIGetFriendsVisibleOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCoreUI::EOSUIGetFriendsVisible(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUIHideFriends)
	{
		P_GET_STRUCT(FEOSUIHideFriendsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSUIHideFriends(Z_Param_options,FOnHideFriendsCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execEOSUIShowFriends)
	{
		P_GET_STRUCT(FEOSUIShowFriendsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSUIShowFriends(Z_Param_options,FOnShowFriendsCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUI::execGetUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreUI**)Z_Param__Result=UCoreUI::GetUI();
		P_NATIVE_END;
	}
	void UCoreUI::StaticRegisterNativesUCoreUI()
	{
		UClass* Class = UCoreUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSUIAcknowledgeEventId", &UCoreUI::execEOSUIAcknowledgeEventId },
			{ "EOSUIAddNotifyDisplaySettingsUpdated", &UCoreUI::execEOSUIAddNotifyDisplaySettingsUpdated },
			{ "EOSUIGetFriendsVisible", &UCoreUI::execEOSUIGetFriendsVisible },
			{ "EOSUIGetNotificationLocationPreference", &UCoreUI::execEOSUIGetNotificationLocationPreference },
			{ "EOSUIGetToggleFriendsKey", &UCoreUI::execEOSUIGetToggleFriendsKey },
			{ "EOSUIHideFriends", &UCoreUI::execEOSUIHideFriends },
			{ "EOSUIIsValidKeyCombination", &UCoreUI::execEOSUIIsValidKeyCombination },
			{ "EOSUIRemoveNotifyDisplaySettingsUpdated", &UCoreUI::execEOSUIRemoveNotifyDisplaySettingsUpdated },
			{ "EOSUISetDisplayPreference", &UCoreUI::execEOSUISetDisplayPreference },
			{ "EOSUISetToggleFriendsKey", &UCoreUI::execEOSUISetToggleFriendsKey },
			{ "EOSUIShowFriends", &UCoreUI::execEOSUIShowFriends },
			{ "GetUI", &UCoreUI::execGetUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics
	{
		struct CoreUI_eventEOSUIAcknowledgeEventId_Parms
		{
			FEOSUIAcknowledgeEventIdOptions options;
			EOSResult ReturnValue;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIAcknowledgeEventId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIAcknowledgeEventId_Parms, options), Z_Construct_UScriptStruct_FEOSUIAcknowledgeEventIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Lets the SDK know that the given UI event ID has been acknowledged and should be released.\n     *\n     * @return An EOSResult is returned to indicate success or an error.\n     *\n     * EOS_Success is returned if the UI event ID has been acknowledged.\n     * EOS_NotFound is returned if the UI event ID does not exist.\n     *\n     * @see EOS_Presence_JoinGameAcceptedCallbackInfo\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Lets the SDK know that the given UI event ID has been acknowledged and should be released.\n\n@return An EOSResult is returned to indicate success or an error.\n\nEOS_Success is returned if the UI event ID has been acknowledged.\nEOS_NotFound is returned if the UI event ID does not exist.\n\n@see EOS_Presence_JoinGameAcceptedCallbackInfo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUIAcknowledgeEventId", nullptr, nullptr, sizeof(CoreUI_eventEOSUIAcknowledgeEventId_Parms), Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics
	{
		struct CoreUI_eventEOSUIAddNotifyDisplaySettingsUpdated_Parms
		{
			FEOSUIAddNotifyDisplaySettingsUpdatedOptions options;
			FScriptDelegate callback;
			FEOSNotificationId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIAddNotifyDisplaySettingsUpdated_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIAddNotifyDisplaySettingsUpdated_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnDisplaySettingsUpdatedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIAddNotifyDisplaySettingsUpdated_Parms, options), Z_Construct_UScriptStruct_FEOSUIAddNotifyDisplaySettingsUpdatedOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n    * Register to receive notifications when the overlay display settings are updated.\n    * Newly registered handlers will always be called the next tick with the current state.\n    * @note must call RemoveNotifyDisplaySettingsUpdated to remove the notification.\n    *\n    * @param Options Structure containing information about the request.\n    * @param ClientData Arbitrary data that is passed back to you in the NotificationFn.\n    * @param Notification A callback that is fired when the overlay display settings are updated.\n    *\n    * @return handle representing the registered callback\n    */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Register to receive notifications when the overlay display settings are updated.\nNewly registered handlers will always be called the next tick with the current state.\n@note must call RemoveNotifyDisplaySettingsUpdated to remove the notification.\n\n@param Options Structure containing information about the request.\n@param ClientData Arbitrary data that is passed back to you in the NotificationFn.\n@param Notification A callback that is fired when the overlay display settings are updated.\n\n@return handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUIAddNotifyDisplaySettingsUpdated", nullptr, nullptr, sizeof(CoreUI_eventEOSUIAddNotifyDisplaySettingsUpdated_Parms), Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics
	{
		struct CoreUI_eventEOSUIGetFriendsVisible_Parms
		{
			FEOSUIGetFriendsVisibleOptions options;
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
	void Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreUI_eventEOSUIGetFriendsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreUI_eventEOSUIGetFriendsVisible_Parms), &Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIGetFriendsVisible_Parms, options), Z_Construct_UScriptStruct_FEOSUIGetFriendsVisibleOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Gets the friends overlay visibility.\n     *\n     * @param Options Structure containing the account id of the overlay owner.\n     *\n     * @return EOS_TRUE If the overlay is visible.\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Gets the friends overlay visibility.\n\n@param Options Structure containing the account id of the overlay owner.\n\n@return EOS_TRUE If the overlay is visible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUIGetFriendsVisible", nullptr, nullptr, sizeof(CoreUI_eventEOSUIGetFriendsVisible_Parms), Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics
	{
		struct CoreUI_eventEOSUIGetNotificationLocationPreference_Parms
		{
			EEOSUIENotificationLocation ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIGetNotificationLocationPreference_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EEOSUIENotificationLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Returns the current notification location display preference.\n     * @return The current notification location display preference.\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Returns the current notification location display preference.\n@return The current notification location display preference." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUIGetNotificationLocationPreference", nullptr, nullptr, sizeof(CoreUI_eventEOSUIGetNotificationLocationPreference_Parms), Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics
	{
		struct CoreUI_eventEOSUIGetToggleFriendsKey_Parms
		{
			FEOSUIGetToggleFriendsKeyOptions options;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIGetToggleFriendsKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIGetToggleFriendsKey_Parms, options), Z_Construct_UScriptStruct_FEOSUIGetToggleFriendsKeyOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Returns the current Toggle Friends Key.  This key can be used by the user to toggle the friends\n      overlay when available. The default value represents `Shift + F3` as `((int32_t)EOS_UIK_Shift | (int32_t)EOS_UIK_F3)`.\n     *\n     * @param Options Structure containing any options that are needed to retrieve the key.\n     * @return A valid key combination which represent a single key with zero or more modifier keys.\n     *         EOS_UIK_None will be returned if any error occurs.\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Returns the current Toggle Friends Key.  This key can be used by the user to toggle the friends\n      overlay when available. The default value represents `Shift + F3` as `((int32_t)EOS_UIK_Shift | (int32_t)EOS_UIK_F3)`.\n\n@param Options Structure containing any options that are needed to retrieve the key.\n@return A valid key combination which represent a single key with zero or more modifier keys.\n        EOS_UIK_None will be returned if any error occurs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUIGetToggleFriendsKey", nullptr, nullptr, sizeof(CoreUI_eventEOSUIGetToggleFriendsKey_Parms), Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics
	{
		struct CoreUI_eventEOSUIHideFriends_Parms
		{
			FEOSUIHideFriendsOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIHideFriends_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnHideFriendsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIHideFriends_Parms, options), Z_Construct_UScriptStruct_FEOSUIHideFriendsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Hides the active overlay.\n     *\n     * @param Options Structure containing the account id of the browser to close.\n     * @param ClientData Arbitrary data that is passed back to you in the callback.\n     * @param callback A callback that is fired when the request to hide the friends list has been processed, or on an error.\n     *\n     * @return EOS_Success If the overlay has been notified about the request.\n     *         EOS_InvalidParameters If any of the options are incorrect.\n     *         EOS_NotConfigured If the overlay is not properly configured.\n     *         EOS_NoChange If the overlay is already hidden.\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Hides the active overlay.\n\n@param Options Structure containing the account id of the browser to close.\n@param ClientData Arbitrary data that is passed back to you in the callback.\n@param callback A callback that is fired when the request to hide the friends list has been processed, or on an error.\n\n@return EOS_Success If the overlay has been notified about the request.\n        EOS_InvalidParameters If any of the options are incorrect.\n        EOS_NotConfigured If the overlay is not properly configured.\n        EOS_NoChange If the overlay is already hidden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUIHideFriends", nullptr, nullptr, sizeof(CoreUI_eventEOSUIHideFriends_Parms), Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUIHideFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUIHideFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics
	{
		struct CoreUI_eventEOSUIIsValidKeyCombination_Parms
		{
			int32 keyCombination;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_keyCombination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreUI_eventEOSUIIsValidKeyCombination_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreUI_eventEOSUIIsValidKeyCombination_Parms), &Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::NewProp_keyCombination = { "keyCombination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIIsValidKeyCombination_Parms, keyCombination), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::NewProp_keyCombination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Determine if a key combination is valid. A key combinations must have a single key and at least one modifier.\n     * The single key must be one of the following: F1 through F12, Space, Backspace, Escape, or Tab.\n     * The modifier key must be one or more of the following: Shift, Control, or Alt.\n     *\n     * @param KeyCombination The key to test.\n     * @return  EOS_TRUE if the provided key combination is valid.\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Determine if a key combination is valid. A key combinations must have a single key and at least one modifier.\nThe single key must be one of the following: F1 through F12, Space, Backspace, Escape, or Tab.\nThe modifier key must be one or more of the following: Shift, Control, or Alt.\n\n@param KeyCombination The key to test.\n@return  EOS_TRUE if the provided key combination is valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUIIsValidKeyCombination", nullptr, nullptr, sizeof(CoreUI_eventEOSUIIsValidKeyCombination_Parms), Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics
	{
		struct CoreUI_eventEOSUIRemoveNotifyDisplaySettingsUpdated_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIRemoveNotifyDisplaySettingsUpdated_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Unregister from receiving notifications when the overlay display settings are updated.\n     *\n     * @param InId Handle representing the registered callback\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Unregister from receiving notifications when the overlay display settings are updated.\n\n@param InId Handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUIRemoveNotifyDisplaySettingsUpdated", nullptr, nullptr, sizeof(CoreUI_eventEOSUIRemoveNotifyDisplaySettingsUpdated_Parms), Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics
	{
		struct CoreUI_eventEOSUISetDisplayPreference_Parms
		{
			FEOSUISetDisplayPreferenceOptions options;
			EOSResult ReturnValue;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUISetDisplayPreference_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUISetDisplayPreference_Parms, options), Z_Construct_UScriptStruct_FEOSUISetDisplayPreferenceOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Define any preferences for any display settings.\n     *\n     * @param Options Structure containing any options that are needed to set\n     * @return EOS_Success If the overlay has been notified about the request.\n     *         EOS_InvalidParameters If any of the options are incorrect.\n     *         EOS_NotConfigured If the overlay is not properly configured.\n     *         EOS_NoChange If the preferences did not change.\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Define any preferences for any display settings.\n\n@param Options Structure containing any options that are needed to set\n@return EOS_Success If the overlay has been notified about the request.\n        EOS_InvalidParameters If any of the options are incorrect.\n        EOS_NotConfigured If the overlay is not properly configured.\n        EOS_NoChange If the preferences did not change." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUISetDisplayPreference", nullptr, nullptr, sizeof(CoreUI_eventEOSUISetDisplayPreference_Parms), Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics
	{
		struct CoreUI_eventEOSUISetToggleFriendsKey_Parms
		{
			FEOSUISetToggleFriendsKeyOptions options;
			EOSResult ReturnValue;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUISetToggleFriendsKey_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUISetToggleFriendsKey_Parms, options), Z_Construct_UScriptStruct_FEOSUISetToggleFriendsKeyOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Updates the current Toggle Friends Key.  This key can be used by the user to toggle the friends\n      overlay when available. The default value represents `Shift + F3` as `((int32_t)EOS_UIK_Shift | (int32_t)EOS_UIK_F3)`.\n     * The provided key should satisfy EOS_UI_IsValidKeyCombination. The value EOS_UIK_None is specially handled\n     * by resetting the key binding to the system default.\n     *\n     * @param Options Structure containing the key combination to use.\n     *\n     * @return EOS_Success If the overlay has been notified about the request.\n     *         EOS_InvalidParameters If any of the options are incorrect.\n     *         EOS_NotConfigured If the overlay is not properly configured.\n     *         EOS_NoChange If the key combination did not change.\n     *\n     * @see EOS_UI_IsValidKeyCombination\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Updates the current Toggle Friends Key.  This key can be used by the user to toggle the friends\n      overlay when available. The default value represents `Shift + F3` as `((int32_t)EOS_UIK_Shift | (int32_t)EOS_UIK_F3)`.\nThe provided key should satisfy EOS_UI_IsValidKeyCombination. The value EOS_UIK_None is specially handled\nby resetting the key binding to the system default.\n\n@param Options Structure containing the key combination to use.\n\n@return EOS_Success If the overlay has been notified about the request.\n        EOS_InvalidParameters If any of the options are incorrect.\n        EOS_NotConfigured If the overlay is not properly configured.\n        EOS_NoChange If the key combination did not change.\n\n@see EOS_UI_IsValidKeyCombination" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUISetToggleFriendsKey", nullptr, nullptr, sizeof(CoreUI_eventEOSUISetToggleFriendsKey_Parms), Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics
	{
		struct CoreUI_eventEOSUIShowFriends_Parms
		{
			FEOSUIShowFriendsOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIShowFriends_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnShowFriendsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventEOSUIShowFriends_Parms, options), Z_Construct_UScriptStruct_FEOSUIShowFriendsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|UI" },
		{ "Comment", "/**\n     * Opens the overlay with a request to show the friends list.\n     *\n     * @param Options Structure containing the account id of the friends list to show.\n     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate.\n     * @param CompletionDelegate A callback that is fired when the request to show the friends list has been sent to the overlay, or on an error.\n     *\n     * @return EOS_Success If the overlay has been notified about the request.\n     *         EOS_InvalidParameters If any of the options are incorrect.\n     *         EOS_NotConfigured If the overlay is not properly configured.\n     *         EOS_NoChange If the overlay is already visible.\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "Opens the overlay with a request to show the friends list.\n\n@param Options Structure containing the account id of the friends list to show.\n@param ClientData Arbitrary data that is passed back to you in the CompletionDelegate.\n@param CompletionDelegate A callback that is fired when the request to show the friends list has been sent to the overlay, or on an error.\n\n@return EOS_Success If the overlay has been notified about the request.\n        EOS_InvalidParameters If any of the options are incorrect.\n        EOS_NotConfigured If the overlay is not properly configured.\n        EOS_NoChange If the overlay is already visible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "EOSUIShowFriends", nullptr, nullptr, sizeof(CoreUI_eventEOSUIShowFriends_Parms), Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_EOSUIShowFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_EOSUIShowFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUI_GetUI_Statics
	{
		struct CoreUI_eventGetUI_Parms
		{
			UCoreUI* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreUI_GetUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUI_eventGetUI_Parms, ReturnValue), Z_Construct_UClass_UCoreUI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUI_GetUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUI_GetUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUI_GetUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n     * The UI Interface is used to access the overlay UI.  Each UI component will have a function for\n     * opening it.  All UI Interface calls take a handle of type EOS_HUI as the first parameter.\n     * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUIInterface function.\n     *\n     * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n     *\n     * @see EOS_Platform_GetUIInterface\n     */" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "The UI Interface is used to access the overlay UI.  Each UI component will have a function for\nopening it.  All UI Interface calls take a handle of type EOS_HUI as the first parameter.\nThis handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUIInterface function.\n\nNOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n\n@see EOS_Platform_GetUIInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUI_GetUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUI, nullptr, "GetUI", nullptr, nullptr, sizeof(CoreUI_eventGetUI_Parms), Z_Construct_UFunction_UCoreUI_GetUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_GetUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUI_GetUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUI_GetUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUI_GetUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUI_GetUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreUI_NoRegister()
	{
		return UCoreUI::StaticClass();
	}
	struct Z_Construct_UClass_UCoreUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisplaySettingsUpdatedCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisplaySettingsUpdatedCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHideFriendsCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHideFriendsCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShowFriendsCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShowFriendsCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreUI_EOSUIAcknowledgeEventId, "EOSUIAcknowledgeEventId" }, // 1840263424
		{ &Z_Construct_UFunction_UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated, "EOSUIAddNotifyDisplaySettingsUpdated" }, // 2279007131
		{ &Z_Construct_UFunction_UCoreUI_EOSUIGetFriendsVisible, "EOSUIGetFriendsVisible" }, // 388188317
		{ &Z_Construct_UFunction_UCoreUI_EOSUIGetNotificationLocationPreference, "EOSUIGetNotificationLocationPreference" }, // 542786213
		{ &Z_Construct_UFunction_UCoreUI_EOSUIGetToggleFriendsKey, "EOSUIGetToggleFriendsKey" }, // 3734357634
		{ &Z_Construct_UFunction_UCoreUI_EOSUIHideFriends, "EOSUIHideFriends" }, // 74340311
		{ &Z_Construct_UFunction_UCoreUI_EOSUIIsValidKeyCombination, "EOSUIIsValidKeyCombination" }, // 4174267489
		{ &Z_Construct_UFunction_UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated, "EOSUIRemoveNotifyDisplaySettingsUpdated" }, // 915814561
		{ &Z_Construct_UFunction_UCoreUI_EOSUISetDisplayPreference, "EOSUISetDisplayPreference" }, // 1525475872
		{ &Z_Construct_UFunction_UCoreUI_EOSUISetToggleFriendsKey, "EOSUISetToggleFriendsKey" }, // 3176771866
		{ &Z_Construct_UFunction_UCoreUI_EOSUIShowFriends, "EOSUIShowFriends" }, // 3198478032
		{ &Z_Construct_UFunction_UCoreUI_GetUI, "GetUI" }, // 2948572855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The UI Interface is used to access the overlay UI.  Each UI component will have a function for\n * opening it.  All UI Interface calls take a handle of type EOS_HUI as the first parameter.\n * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUIInterface function.\n *\n * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n *\n * @see EOS_Platform_GetUIInterface\n */" },
		{ "IncludePath", "UI/EOSUI.h" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
		{ "ToolTip", "The UI Interface is used to access the overlay UI.  Each UI component will have a function for\nopening it.  All UI Interface calls take a handle of type EOS_HUI as the first parameter.\nThis handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetUIInterface function.\n\nNOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n\n@see EOS_Platform_GetUIInterface" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUI_Statics::NewProp_OnDisplaySettingsUpdatedCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|UI|Delegates" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreUI_Statics::NewProp_OnDisplaySettingsUpdatedCallbackDelegate = { "OnDisplaySettingsUpdatedCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUI, OnDisplaySettingsUpdatedCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnDisplaySettingsUpdatedCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreUI_Statics::NewProp_OnDisplaySettingsUpdatedCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUI_Statics::NewProp_OnDisplaySettingsUpdatedCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUI_Statics::NewProp_OnHideFriendsCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|UI|Delegates" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreUI_Statics::NewProp_OnHideFriendsCallbackDelegate = { "OnHideFriendsCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUI, OnHideFriendsCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnHideFriendsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreUI_Statics::NewProp_OnHideFriendsCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUI_Statics::NewProp_OnHideFriendsCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUI_Statics::NewProp_OnShowFriendsCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|UI|Delegates" },
		{ "ModuleRelativePath", "Public/UI/EOSUI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreUI_Statics::NewProp_OnShowFriendsCallbackDelegate = { "OnShowFriendsCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreUI, OnShowFriendsCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnShowFriendsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreUI_Statics::NewProp_OnShowFriendsCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUI_Statics::NewProp_OnShowFriendsCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUI_Statics::NewProp_OnDisplaySettingsUpdatedCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUI_Statics::NewProp_OnHideFriendsCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreUI_Statics::NewProp_OnShowFriendsCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreUI_Statics::ClassParams = {
		&UCoreUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreUI, 600082022);
	template<> EOSCORE_API UClass* StaticClass<UCoreUI>()
	{
		return UCoreUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreUI(Z_Construct_UClass_UCoreUI, &UCoreUI::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
