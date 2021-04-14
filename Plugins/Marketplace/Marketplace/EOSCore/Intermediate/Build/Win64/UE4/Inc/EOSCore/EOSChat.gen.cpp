// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Chat/EOSChat.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSChat() {}
// Cross Module References
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSProductUserId();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreChat_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreChat();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSEPacketReliability();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics
	{
		struct _Script_EOSCore_eventOnChatMessageReceivedCallback_Parms
		{
			FEOSProductUserId sender;
			FEOSProductUserId receiver;
			FString message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_receiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_receiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sender_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnChatMessageReceivedCallback_Parms, message), METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_receiver_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_receiver = { "receiver", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnChatMessageReceivedCallback_Parms, receiver), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_receiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_receiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_sender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_sender = { "sender", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnChatMessageReceivedCallback_Parms, sender), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_sender_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_sender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_receiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::NewProp_sender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chat/EOSChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EOSCore, nullptr, "OnChatMessageReceivedCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_EOSCore_eventOnChatMessageReceivedCallback_Parms), Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics
	{
		struct _Script_EOSCore_eventOnChatMessageReceived_Parms
		{
			FEOSProductUserId sender;
			FEOSProductUserId receiver;
			FString message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_receiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_receiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sender_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnChatMessageReceived_Parms, message), METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_receiver_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_receiver = { "receiver", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnChatMessageReceived_Parms, receiver), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_receiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_receiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_sender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_sender = { "sender", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EOSCore_eventOnChatMessageReceived_Parms, sender), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_sender_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_sender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_receiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::NewProp_sender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * The Chat Interface is a exlusive interface to EOSCore::\n * It's purpose is to simplify chat messages\n */" },
		{ "ModuleRelativePath", "Public/Chat/EOSChat.h" },
		{ "ToolTip", "The Chat Interface is a exlusive interface to EOSCore::\nIt's purpose is to simplify chat messages" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EOSCore, nullptr, "OnChatMessageReceived__DelegateSignature", nullptr, nullptr, sizeof(_Script_EOSCore_eventOnChatMessageReceived_Parms), Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCoreChat::execListenForChatMessages)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreChat::ListenForChatMessages(FOnChatMessageReceivedCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreChat::execSendChatMessage)
	{
		P_GET_STRUCT(FEOSProductUserId,Z_Param_target);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_ENUM(EEOSEPacketReliability,Z_Param_reliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreChat::SendChatMessage(Z_Param_target,Z_Param_message,EEOSEPacketReliability(Z_Param_reliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreChat::execGetChat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreChat**)Z_Param__Result=UCoreChat::GetChat();
		P_NATIVE_END;
	}
	void UCoreChat::StaticRegisterNativesUCoreChat()
	{
		UClass* Class = UCoreChat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChat", &UCoreChat::execGetChat },
			{ "ListenForChatMessages", &UCoreChat::execListenForChatMessages },
			{ "SendChatMessage", &UCoreChat::execSendChatMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreChat_GetChat_Statics
	{
		struct CoreChat_eventGetChat_Parms
		{
			UCoreChat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreChat_GetChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreChat_eventGetChat_Parms, ReturnValue), Z_Construct_UClass_UCoreChat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreChat_GetChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreChat_GetChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreChat_GetChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n\x09 * The Chat Interface is a exlusive interface to EOSCore::\n\x09 * It's purpose is to simplify chat messages\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chat/EOSChat.h" },
		{ "ToolTip", "The Chat Interface is a exlusive interface to EOSCore::\nIt's purpose is to simplify chat messages" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreChat_GetChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreChat, nullptr, "GetChat", nullptr, nullptr, sizeof(CoreChat_eventGetChat_Parms), Z_Construct_UFunction_UCoreChat_GetChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreChat_GetChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreChat_GetChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreChat_GetChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreChat_GetChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreChat_GetChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics
	{
		struct CoreChat_eventListenForChatMessages_Parms
		{
			FScriptDelegate callback;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreChat_eventListenForChatMessages_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceivedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Chat" },
		{ "ModuleRelativePath", "Public/Chat/EOSChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreChat, nullptr, "ListenForChatMessages", nullptr, nullptr, sizeof(CoreChat_eventListenForChatMessages_Parms), Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreChat_ListenForChatMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreChat_ListenForChatMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics
	{
		struct CoreChat_eventSendChatMessage_Parms
		{
			FEOSProductUserId target;
			FString message;
			EEOSEPacketReliability reliability;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_reliability;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_reliability_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::NewProp_reliability = { "reliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreChat_eventSendChatMessage_Parms, reliability), Z_Construct_UEnum_EOSCore_EEOSEPacketReliability, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::NewProp_reliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreChat_eventSendChatMessage_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreChat_eventSendChatMessage_Parms, target), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::NewProp_reliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::NewProp_reliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Chat" },
		{ "CPP_Default_reliability", "EOS_PR_UnreliableUnordered" },
		{ "ModuleRelativePath", "Public/Chat/EOSChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreChat, nullptr, "SendChatMessage", nullptr, nullptr, sizeof(CoreChat_eventSendChatMessage_Parms), Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreChat_SendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreChat_SendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreChat_NoRegister()
	{
		return UCoreChat::StaticClass();
	}
	struct Z_Construct_UClass_UCoreChat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChatMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatMessageReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreChat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreChat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreChat_GetChat, "GetChat" }, // 2152694895
		{ &Z_Construct_UFunction_UCoreChat_ListenForChatMessages, "ListenForChatMessages" }, // 3750674263
		{ &Z_Construct_UFunction_UCoreChat_SendChatMessage, "SendChatMessage" }, // 3812905464
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreChat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chat/EOSChat.h" },
		{ "ModuleRelativePath", "Public/Chat/EOSChat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreChat_Statics::NewProp_OnChatMessageReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/EOSChat.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreChat_Statics::NewProp_OnChatMessageReceived = { "OnChatMessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreChat, OnChatMessageReceived), Z_Construct_UDelegateFunction_EOSCore_OnChatMessageReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreChat_Statics::NewProp_OnChatMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreChat_Statics::NewProp_OnChatMessageReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreChat_Statics::NewProp_OnChatMessageReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreChat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreChat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreChat_Statics::ClassParams = {
		&UCoreChat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreChat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreChat_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreChat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreChat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreChat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreChat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreChat, 4272906906);
	template<> EOSCORE_API UClass* StaticClass<UCoreChat>()
	{
		return UCoreChat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreChat(Z_Construct_UClass_UCoreChat, &UCoreChat::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreChat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreChat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
