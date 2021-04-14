// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Achievements/EOSAchievements.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAchievements() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreAchievements_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreAchievements();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockedV2Callback__DelegateSignature();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsDefinitionV2();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsPlayerAchievement();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsCopyPlayerAchievementByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsGetAchievementDefinitionCountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsGetPlayerAchievementCountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryDefinitionsCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsQueryDefinitionsOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryPlayerAchievementsCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsQueryPlayerAchievementsOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockAchievementsCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementsUnlockAchievementsOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockedCallbackV2Delegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockAchievementsCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryPlayerAchievementsCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryDefinitionsCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsRemoveNotifyAchievementsUnlocked)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreAchievements::EOSAchievementsRemoveNotifyAchievementsUnlocked(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsAddNotifyAchievementsUnlockedV2)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCoreAchievements::EOSAchievementsAddNotifyAchievementsUnlockedV2(FOnAchievementsUnlockedV2Callback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsUnlockAchievements)
	{
		P_GET_STRUCT(FEOSAchievementsUnlockAchievementsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSAchievementsUnlockAchievements(Z_Param_options,FOnAchievementsUnlockAchievementsCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsCopyPlayerAchievementByIndex)
	{
		P_GET_STRUCT(FEOSAchievementsCopyPlayerAchievementByIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSAchievementsPlayerAchievement,Z_Param_Out_outAchievement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreAchievements::EOSAchievementsCopyPlayerAchievementByIndex(Z_Param_options,Z_Param_Out_outAchievement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsGetPlayerAchievementCount)
	{
		P_GET_STRUCT(FEOSAchievementsGetPlayerAchievementCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreAchievements::EOSAchievementsGetPlayerAchievementCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsQueryPlayerAchievements)
	{
		P_GET_STRUCT(FEOSAchievementsQueryPlayerAchievementsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSAchievementsQueryPlayerAchievements(Z_Param_options,FOnAchievementsQueryPlayerAchievementsCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsCopyAchievementDefinitionV2ByAchievementId)
	{
		P_GET_STRUCT(FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSAchievementsDefinitionV2,Z_Param_Out_outDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreAchievements::EOSAchievementsCopyAchievementDefinitionV2ByAchievementId(Z_Param_options,Z_Param_Out_outDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsCopyAchievementDefinitionV2ByIndex)
	{
		P_GET_STRUCT(FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSAchievementsDefinitionV2,Z_Param_Out_outDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreAchievements::EOSAchievementsCopyAchievementDefinitionV2ByIndex(Z_Param_options,Z_Param_Out_outDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsGetAchievementDefinitionCount)
	{
		P_GET_STRUCT(FEOSAchievementsGetAchievementDefinitionCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreAchievements::EOSAchievementsGetAchievementDefinitionCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execEOSAchievementsQueryDefinitions)
	{
		P_GET_STRUCT(FEOSAchievementsQueryDefinitionsOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSAchievementsQueryDefinitions(Z_Param_options,FOnAchievementsQueryDefinitionsCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreAchievements::execGetAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreAchievements**)Z_Param__Result=UCoreAchievements::GetAchievements();
		P_NATIVE_END;
	}
	void UCoreAchievements::StaticRegisterNativesUCoreAchievements()
	{
		UClass* Class = UCoreAchievements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSAchievementsAddNotifyAchievementsUnlockedV2", &UCoreAchievements::execEOSAchievementsAddNotifyAchievementsUnlockedV2 },
			{ "EOSAchievementsCopyAchievementDefinitionV2ByAchievementId", &UCoreAchievements::execEOSAchievementsCopyAchievementDefinitionV2ByAchievementId },
			{ "EOSAchievementsCopyAchievementDefinitionV2ByIndex", &UCoreAchievements::execEOSAchievementsCopyAchievementDefinitionV2ByIndex },
			{ "EOSAchievementsCopyPlayerAchievementByIndex", &UCoreAchievements::execEOSAchievementsCopyPlayerAchievementByIndex },
			{ "EOSAchievementsGetAchievementDefinitionCount", &UCoreAchievements::execEOSAchievementsGetAchievementDefinitionCount },
			{ "EOSAchievementsGetPlayerAchievementCount", &UCoreAchievements::execEOSAchievementsGetPlayerAchievementCount },
			{ "EOSAchievementsQueryDefinitions", &UCoreAchievements::execEOSAchievementsQueryDefinitions },
			{ "EOSAchievementsQueryPlayerAchievements", &UCoreAchievements::execEOSAchievementsQueryPlayerAchievements },
			{ "EOSAchievementsRemoveNotifyAchievementsUnlocked", &UCoreAchievements::execEOSAchievementsRemoveNotifyAchievementsUnlocked },
			{ "EOSAchievementsUnlockAchievements", &UCoreAchievements::execEOSAchievementsUnlockAchievements },
			{ "GetAchievements", &UCoreAchievements::execGetAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics
	{
		struct CoreAchievements_eventEOSAchievementsAddNotifyAchievementsUnlockedV2_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsAddNotifyAchievementsUnlockedV2_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsAddNotifyAchievementsUnlockedV2_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockedV2Callback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n     * Register to receive achievement unlocked notifications.\n     * @note must call EOS_Achievements_RemoveNotifyAchievementsUnlocked to remove the notification\n     *\n     * @see EOS_Achievements_RemoveNotifyAchievementsUnlocked\n     *\n     * @param Options Structure containing information about the achievement unlocked notification\n     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n     * @param NotificationFn A callback that is fired when an achievement unlocked notification for a user has been received\n     *\n     * @return handle representing the registered callback\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Register to receive achievement unlocked notifications.\n@note must call EOS_Achievements_RemoveNotifyAchievementsUnlocked to remove the notification\n\n@see EOS_Achievements_RemoveNotifyAchievementsUnlocked\n\n@param Options Structure containing information about the achievement unlocked notification\n@param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n@param NotificationFn A callback that is fired when an achievement unlocked notification for a user has been received\n\n@return handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsAddNotifyAchievementsUnlockedV2", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsAddNotifyAchievementsUnlockedV2_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics
	{
		struct CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Parms
		{
			FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions options;
			FEOSAchievementsDefinitionV2 outDefinition;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outDefinition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_outDefinition = { "outDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Parms, outDefinition), Z_Construct_UScriptStruct_FEOSAchievementsDefinitionV2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_outDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n    * Fetches an achievement definition from a given achievement ID.\n    *\n    * @param Options Structure containing the achievement ID being accessed\n    * @param OutDefinition The achievement definition for the given achievement ID, if it exists and is valid, use EOS_Achievements_Definition_Release when finished\n    *\n    * @see EOS_Achievements_DefinitionV2_Release\n    *\n    * @return EOS_Success if the information is available and passed out in OutDefinition\n    *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n    *         EOS_NotFound if the achievement definition is not found\n    */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Fetches an achievement definition from a given achievement ID.\n\n@param Options Structure containing the achievement ID being accessed\n@param OutDefinition The achievement definition for the given achievement ID, if it exists and is valid, use EOS_Achievements_Definition_Release when finished\n\n@see EOS_Achievements_DefinitionV2_Release\n\n@return EOS_Success if the information is available and passed out in OutDefinition\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the achievement definition is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsCopyAchievementDefinitionV2ByAchievementId", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics
	{
		struct CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByIndex_Parms
		{
			FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions options;
			FEOSAchievementsDefinitionV2 outDefinition;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outDefinition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::NewProp_outDefinition = { "outDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByIndex_Parms, outDefinition), Z_Construct_UScriptStruct_FEOSAchievementsDefinitionV2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::NewProp_outDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n    * Fetches an achievement definition from a given index.\n    *\n    * @param Options Structure containing the index being accessed\n    * @param OutDefinition The achievement definition for the given index, if it exists and is valid, use EOS_Achievements_Definition_Release when finished\n    *\n    * @see EOS_Achievements_DefinitionV2_Release\n    *\n    * @return EOS_Success if the information is available and passed out in OutDefinition\n    *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n    *         EOS_NotFound if the achievement definition is not found\n    */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Fetches an achievement definition from a given index.\n\n@param Options Structure containing the index being accessed\n@param OutDefinition The achievement definition for the given index, if it exists and is valid, use EOS_Achievements_Definition_Release when finished\n\n@see EOS_Achievements_DefinitionV2_Release\n\n@return EOS_Success if the information is available and passed out in OutDefinition\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the achievement definition is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsCopyAchievementDefinitionV2ByIndex", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsCopyAchievementDefinitionV2ByIndex_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics
	{
		struct CoreAchievements_eventEOSAchievementsCopyPlayerAchievementByIndex_Parms
		{
			FEOSAchievementsCopyPlayerAchievementByIndexOptions options;
			FEOSAchievementsPlayerAchievement outAchievement;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outAchievement;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsCopyPlayerAchievementByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::NewProp_outAchievement = { "outAchievement", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsCopyPlayerAchievementByIndex_Parms, outAchievement), Z_Construct_UScriptStruct_FEOSAchievementsPlayerAchievement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsCopyPlayerAchievementByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsCopyPlayerAchievementByIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::NewProp_outAchievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n     * Fetches a player achievement from a given index.\n     *\n     * @param Options Structure containing the account id and index being accessed\n     * @param OutAchievement The player achievement data for the given index, if it exists and is valid, use EOS_Achievements_PlayerAchievement_Release when finished\n     *\n     * @see EOS_Achievements_PlayerAchievement_Release\n     *\n     * @return EOS_Success if the information is available and passed out in OutAchievement\n     *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n     *         EOS_NotFound if the player achievement is not found\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Fetches a player achievement from a given index.\n\n@param Options Structure containing the account id and index being accessed\n@param OutAchievement The player achievement data for the given index, if it exists and is valid, use EOS_Achievements_PlayerAchievement_Release when finished\n\n@see EOS_Achievements_PlayerAchievement_Release\n\n@return EOS_Success if the information is available and passed out in OutAchievement\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_NotFound if the player achievement is not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsCopyPlayerAchievementByIndex", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsCopyPlayerAchievementByIndex_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics
	{
		struct CoreAchievements_eventEOSAchievementsGetAchievementDefinitionCount_Parms
		{
			FEOSAchievementsGetAchievementDefinitionCountOptions options;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsGetAchievementDefinitionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsGetAchievementDefinitionCount_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsGetAchievementDefinitionCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n     * Fetch the number of achievement definitions that are cached locally.\n     *\n     * @param Options The Options associated with retrieving the achievement definition count\n     *\n     * @see EOS_Achievements_CopyAchievementDefinitionByIndex\n     *\n     * @return Number of achievement definitions or 0 if there is an error\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Fetch the number of achievement definitions that are cached locally.\n\n@param Options The Options associated with retrieving the achievement definition count\n\n@see EOS_Achievements_CopyAchievementDefinitionByIndex\n\n@return Number of achievement definitions or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsGetAchievementDefinitionCount", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsGetAchievementDefinitionCount_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics
	{
		struct CoreAchievements_eventEOSAchievementsGetPlayerAchievementCount_Parms
		{
			FEOSAchievementsGetPlayerAchievementCountOptions options;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsGetPlayerAchievementCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsGetPlayerAchievementCount_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsGetPlayerAchievementCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n     * Fetch the number of player achievements that are cached locally.\n     *\n     * @param Options The Options associated with retrieving the player achievement count\n     *\n     * @see EOS_Achievements_CopyPlayerAchievementByIndex\n     *\n     * @return Number of player achievements or 0 if there is an error\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Fetch the number of player achievements that are cached locally.\n\n@param Options The Options associated with retrieving the player achievement count\n\n@see EOS_Achievements_CopyPlayerAchievementByIndex\n\n@return Number of player achievements or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsGetPlayerAchievementCount", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsGetPlayerAchievementCount_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics
	{
		struct CoreAchievements_eventEOSAchievementsQueryDefinitions_Parms
		{
			FEOSAchievementsQueryDefinitionsOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsQueryDefinitions_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryDefinitionsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsQueryDefinitions_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsQueryDefinitionsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n     * Query for a list of definitions for all existing achievements, including localized text, icon IDs and whether an achievement is hidden.\n     *\n     * @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n     *\n     * @param options       Structure containing information about the application whose achievement definitions we're retrieving.\n     * @param callback      This function is called when the query definitions operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Query for a list of definitions for all existing achievements, including localized text, icon IDs and whether an achievement is hidden.\n\n@note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n\n@param options       Structure containing information about the application whose achievement definitions we're retrieving.\n@param callback      This function is called when the query definitions operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsQueryDefinitions", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsQueryDefinitions_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics
	{
		struct CoreAchievements_eventEOSAchievementsQueryPlayerAchievements_Parms
		{
			FEOSAchievementsQueryPlayerAchievementsOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsQueryPlayerAchievements_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryPlayerAchievementsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsQueryPlayerAchievements_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsQueryPlayerAchievementsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n     * Query for a list of achievements for a specific player, including progress towards completion for each achievement.\n     *\n     * @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n     *\n     * @param Options Structure containing information about the player whose achievements we're retrieving.\n     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n     * @param CompletionDelegate This function is called when the query player achievements operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Query for a list of achievements for a specific player, including progress towards completion for each achievement.\n\n@note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).\n\n@param Options Structure containing information about the player whose achievements we're retrieving.\n@param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate This function is called when the query player achievements operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsQueryPlayerAchievements", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsQueryPlayerAchievements_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics
	{
		struct CoreAchievements_eventEOSAchievementsRemoveNotifyAchievementsUnlocked_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsRemoveNotifyAchievementsUnlocked_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n     * Unregister from receiving achievement unlocked notifications.\n     *\n     * @see EOS_Achievements_AddNotifyAchievementsUnlocked\n     *\n     * @param InId Handle representing the registered callback\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Unregister from receiving achievement unlocked notifications.\n\n@see EOS_Achievements_AddNotifyAchievementsUnlocked\n\n@param InId Handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsRemoveNotifyAchievementsUnlocked", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsRemoveNotifyAchievementsUnlocked_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics
	{
		struct CoreAchievements_eventEOSAchievementsUnlockAchievements_Parms
		{
			FEOSAchievementsUnlockAchievementsOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsUnlockAchievements_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockAchievementsCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventEOSAchievementsUnlockAchievements_Parms, options), Z_Construct_UScriptStruct_FEOSAchievementsUnlockAchievementsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Achievements" },
		{ "Comment", "/**\n     * Unlocks a number of achievements for a specific player.\n     *\n     * @param Options Structure containing information about the achievements and the player whose achievements we're unlocking.\n     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n     * @param CompletionDelegate This function is called when the unlock achievements operation completes.\n     *\n     * @return EOS_Success if the operation completes successfully\n     *         EOS_InvalidParameters if any of the options are incorrect\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "Unlocks a number of achievements for a specific player.\n\n@param Options Structure containing information about the achievements and the player whose achievements we're unlocking.\n@param ClientData Arbitrary data that is passed back to you in the CompletionDelegate\n@param CompletionDelegate This function is called when the unlock achievements operation completes.\n\n@return EOS_Success if the operation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "EOSAchievementsUnlockAchievements", nullptr, nullptr, sizeof(CoreAchievements_eventEOSAchievementsUnlockAchievements_Parms), Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics
	{
		struct CoreAchievements_eventGetAchievements_Parms
		{
			UCoreAchievements* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreAchievements_eventGetAchievements_Parms, ReturnValue), Z_Construct_UClass_UCoreAchievements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n     * The following EOS_Achievements_* functions allow you to query existing achievement definitions that have been defined for your application.\n     * You can also query achievement progress data for users.\n     * In addition, you can also unlock one or more achievements directly.\n     * You can also receive notifications when achievements are unlocked.\n     */" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "The following EOS_Achievements_* functions allow you to query existing achievement definitions that have been defined for your application.\nYou can also query achievement progress data for users.\nIn addition, you can also unlock one or more achievements directly.\nYou can also receive notifications when achievements are unlocked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreAchievements, nullptr, "GetAchievements", nullptr, nullptr, sizeof(CoreAchievements_eventGetAchievements_Parms), Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreAchievements_GetAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreAchievements_GetAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreAchievements_NoRegister()
	{
		return UCoreAchievements::StaticClass();
	}
	struct Z_Construct_UClass_UCoreAchievements_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAchievementsUnlockedCallbackV2Delegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAchievementsUnlockedCallbackV2Delegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAchievementsUnlockAchievementsCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAchievementsUnlockAchievementsCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryPlayerAchievementsCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryPlayerAchievementsCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryDefinitionsCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryDefinitionsCompleteCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreAchievements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreAchievements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2, "EOSAchievementsAddNotifyAchievementsUnlockedV2" }, // 607639132
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId, "EOSAchievementsCopyAchievementDefinitionV2ByAchievementId" }, // 1902767787
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex, "EOSAchievementsCopyAchievementDefinitionV2ByIndex" }, // 922331876
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex, "EOSAchievementsCopyPlayerAchievementByIndex" }, // 2763868004
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount, "EOSAchievementsGetAchievementDefinitionCount" }, // 1581972758
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsGetPlayerAchievementCount, "EOSAchievementsGetPlayerAchievementCount" }, // 3639143008
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryDefinitions, "EOSAchievementsQueryDefinitions" }, // 3782158086
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsQueryPlayerAchievements, "EOSAchievementsQueryPlayerAchievements" }, // 3280111977
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked, "EOSAchievementsRemoveNotifyAchievementsUnlocked" }, // 1843890349
		{ &Z_Construct_UFunction_UCoreAchievements_EOSAchievementsUnlockAchievements, "EOSAchievementsUnlockAchievements" }, // 3012763606
		{ &Z_Construct_UFunction_UCoreAchievements_GetAchievements, "GetAchievements" }, // 3039018173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAchievements_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The following EOS_Achievements_* functions allow you to query existing achievement definitions that have been defined for your application.\n * You can also query achievement progress data for users.\n * In addition, you can also unlock one or more achievements directly.\n * You can also receive notifications when achievements are unlocked.\n */" },
		{ "IncludePath", "Achievements/EOSAchievements.h" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
		{ "ToolTip", "The following EOS_Achievements_* functions allow you to query existing achievement definitions that have been defined for your application.\nYou can also query achievement progress data for users.\nIn addition, you can also unlock one or more achievements directly.\nYou can also receive notifications when achievements are unlocked." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockedCallbackV2Delegate_MetaData[] = {
		{ "Category", "EOSCore|Achievements|Delegates" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockedCallbackV2Delegate = { "OnAchievementsUnlockedCallbackV2Delegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAchievements, OnAchievementsUnlockedCallbackV2Delegate), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockedCallbackV2Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockedCallbackV2Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockedCallbackV2Delegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockAchievementsCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Achievements|Delegates" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockAchievementsCallbackDelegate = { "OnAchievementsUnlockAchievementsCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAchievements, OnAchievementsUnlockAchievementsCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsUnlockAchievementsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockAchievementsCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockAchievementsCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryPlayerAchievementsCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Achievements|Delegates" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryPlayerAchievementsCompleteCallbackDelegate = { "OnQueryPlayerAchievementsCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAchievements, OnQueryPlayerAchievementsCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryPlayerAchievementsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryPlayerAchievementsCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryPlayerAchievementsCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryDefinitionsCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Achievements|Delegates" },
		{ "ModuleRelativePath", "Public/Achievements/EOSAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryDefinitionsCompleteCallbackDelegate = { "OnQueryDefinitionsCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreAchievements, OnQueryDefinitionsCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnAchievementsQueryDefinitionsCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryDefinitionsCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryDefinitionsCompleteCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockedCallbackV2Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnAchievementsUnlockAchievementsCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryPlayerAchievementsCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAchievements_Statics::NewProp_OnQueryDefinitionsCompleteCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreAchievements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAchievements>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreAchievements_Statics::ClassParams = {
		&UCoreAchievements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreAchievements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAchievements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreAchievements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAchievements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreAchievements()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreAchievements_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreAchievements, 3817282915);
	template<> EOSCORE_API UClass* StaticClass<UCoreAchievements>()
	{
		return UCoreAchievements::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreAchievements(Z_Construct_UClass_UCoreAchievements, &UCoreAchievements::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreAchievements"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAchievements);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
