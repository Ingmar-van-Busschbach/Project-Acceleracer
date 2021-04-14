// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/P2P/EOSP2P.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSP2P() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreP2P_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreP2P();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PAcceptConnectionOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PAddNotifyPeerConnectionClosedOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnP2PIncomingConnectionRequestCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PAddNotifyPeerConnectionRequestOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PCloseConnectionOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PCloseConnectionsOptions();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSENATType();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PGetNATTypeOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PGetNextReceivedPacketSizeOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PGetPortRangeOptions();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSERelayControl();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PGetRelayControlOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnP2PQueryNATTypeCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PSocketId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSProductUserId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PReceivePacketOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PSendPacketOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PSetPortRangeOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSP2PSetRelayControlOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnP2PQueryNATTypeCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnP2PRemoteConnectionClosedCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnP2PIncomingConnectionRequestCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PGetPortRange)
	{
		P_GET_STRUCT(FEOSP2PGetPortRangeOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outPort);
		P_GET_PROPERTY(FIntProperty,Z_Param_outNumAdditionalPortsToTry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PGetPortRange(Z_Param_options,Z_Param_Out_outPort,Z_Param_outNumAdditionalPortsToTry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PSetPortRange)
	{
		P_GET_STRUCT(FEOSP2PSetPortRangeOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PSetPortRange(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PGetRelayControl)
	{
		P_GET_STRUCT(FEOSP2PGetRelayControlOptions,Z_Param_options);
		P_GET_ENUM_REF(EEOSERelayControl,Z_Param_Out_outRelayControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PGetRelayControl(Z_Param_options,(EEOSERelayControl&)(Z_Param_Out_outRelayControl));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PSetRelayControl)
	{
		P_GET_STRUCT(FEOSP2PSetRelayControlOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PSetRelayControl(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PGetNATType)
	{
		P_GET_STRUCT(FEOSP2PGetNATTypeOptions,Z_Param_options);
		P_GET_ENUM_REF(EEOSENATType,Z_Param_Out_outNATType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PGetNATType(Z_Param_options,(EEOSENATType&)(Z_Param_Out_outNATType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PQueryNATType)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSP2PQueryNATType(FOnP2PQueryNATTypeCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PCloseConnections)
	{
		P_GET_STRUCT(FEOSP2PCloseConnectionsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PCloseConnections(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PCloseConnection)
	{
		P_GET_STRUCT(FEOSP2PCloseConnectionOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PCloseConnection(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PAcceptConnection)
	{
		P_GET_STRUCT(FEOSP2PAcceptConnectionOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PAcceptConnection(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PRemoveNotifyPeerConnectionClosed)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSP2PRemoveNotifyPeerConnectionClosed(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PAddNotifyPeerConnectionClosed)
	{
		P_GET_STRUCT(FEOSP2PAddNotifyPeerConnectionClosedOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=P_THIS->EOSP2PAddNotifyPeerConnectionClosed(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PRemoveNotifyPeerConnectionRequest)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSP2PRemoveNotifyPeerConnectionRequest(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PAddNotifyPeerConnectionRequest)
	{
		P_GET_STRUCT(FEOSP2PAddNotifyPeerConnectionRequestOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=P_THIS->EOSP2PAddNotifyPeerConnectionRequest(Z_Param_options,FOnP2PIncomingConnectionRequestCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PReceivePacket)
	{
		P_GET_STRUCT(FEOSP2PReceivePacketOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSProductUserId,Z_Param_Out_outPeerId);
		P_GET_STRUCT_REF(FEOSP2PSocketId,Z_Param_Out_outSocketId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outChannel);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_outData);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outBytesWritten);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PReceivePacket(Z_Param_options,Z_Param_Out_outPeerId,Z_Param_Out_outSocketId,Z_Param_Out_outChannel,Z_Param_Out_outData,Z_Param_Out_outBytesWritten);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PGetNextReceivedPacketSize)
	{
		P_GET_STRUCT(FEOSP2PGetNextReceivedPacketSizeOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outPacketSizeBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PGetNextReceivedPacketSize(Z_Param_options,Z_Param_Out_outPacketSizeBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execEOSP2PSendPacket)
	{
		P_GET_STRUCT(FEOSP2PSendPacketOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreP2P::EOSP2PSendPacket(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreP2P::execGetP2P)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreP2P**)Z_Param__Result=UCoreP2P::GetP2P();
		P_NATIVE_END;
	}
	void UCoreP2P::StaticRegisterNativesUCoreP2P()
	{
		UClass* Class = UCoreP2P::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSP2PAcceptConnection", &UCoreP2P::execEOSP2PAcceptConnection },
			{ "EOSP2PAddNotifyPeerConnectionClosed", &UCoreP2P::execEOSP2PAddNotifyPeerConnectionClosed },
			{ "EOSP2PAddNotifyPeerConnectionRequest", &UCoreP2P::execEOSP2PAddNotifyPeerConnectionRequest },
			{ "EOSP2PCloseConnection", &UCoreP2P::execEOSP2PCloseConnection },
			{ "EOSP2PCloseConnections", &UCoreP2P::execEOSP2PCloseConnections },
			{ "EOSP2PGetNATType", &UCoreP2P::execEOSP2PGetNATType },
			{ "EOSP2PGetNextReceivedPacketSize", &UCoreP2P::execEOSP2PGetNextReceivedPacketSize },
			{ "EOSP2PGetPortRange", &UCoreP2P::execEOSP2PGetPortRange },
			{ "EOSP2PGetRelayControl", &UCoreP2P::execEOSP2PGetRelayControl },
			{ "EOSP2PQueryNATType", &UCoreP2P::execEOSP2PQueryNATType },
			{ "EOSP2PReceivePacket", &UCoreP2P::execEOSP2PReceivePacket },
			{ "EOSP2PRemoveNotifyPeerConnectionClosed", &UCoreP2P::execEOSP2PRemoveNotifyPeerConnectionClosed },
			{ "EOSP2PRemoveNotifyPeerConnectionRequest", &UCoreP2P::execEOSP2PRemoveNotifyPeerConnectionRequest },
			{ "EOSP2PSendPacket", &UCoreP2P::execEOSP2PSendPacket },
			{ "EOSP2PSetPortRange", &UCoreP2P::execEOSP2PSetPortRange },
			{ "EOSP2PSetRelayControl", &UCoreP2P::execEOSP2PSetRelayControl },
			{ "GetP2P", &UCoreP2P::execGetP2P },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics
	{
		struct CoreP2P_eventEOSP2PAcceptConnection_Parms
		{
			FEOSP2PAcceptConnectionOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PAcceptConnection_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PAcceptConnection_Parms, options), Z_Construct_UScriptStruct_FEOSP2PAcceptConnectionOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Accept connections from a specific peer. If this peer has not attempted to connect yet, when they do, they will automatically be accepted.\n\x09 *\n\x09 * @param Options Information about who would like to accept a connection, and which connection\n\x09 * @return EOSResult::EOS_Success - if the provided data is valid\n\x09 *         EOSResult::EOS_InvalidParameters - if the provided data is invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Accept connections from a specific peer. If this peer has not attempted to connect yet, when they do, they will automatically be accepted.\n\n@param Options Information about who would like to accept a connection, and which connection\n@return EOSResult::EOS_Success - if the provided data is valid\n        EOSResult::EOS_InvalidParameters - if the provided data is invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PAcceptConnection", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PAcceptConnection_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics
	{
		struct CoreP2P_eventEOSP2PAddNotifyPeerConnectionClosed_Parms
		{
			FEOSP2PAddNotifyPeerConnectionClosedOptions options;
			FEOSNotificationId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PAddNotifyPeerConnectionClosed_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PAddNotifyPeerConnectionClosed_Parms, options), Z_Construct_UScriptStruct_FEOSP2PAddNotifyPeerConnectionClosedOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Listen for when a previously opened connection is closed\n\x09 *\n\x09 * @param Options Information about who would like notifications about closed connections, and for which socket\n\x09 * @param ConnectionClosedHandler The callback to be fired when we an open connection has been closed\n\x09 * @return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Listen for when a previously opened connection is closed\n\n@param Options Information about who would like notifications about closed connections, and for which socket\n@param ConnectionClosedHandler The callback to be fired when we an open connection has been closed\n@return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PAddNotifyPeerConnectionClosed", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PAddNotifyPeerConnectionClosed_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics
	{
		struct CoreP2P_eventEOSP2PAddNotifyPeerConnectionRequest_Parms
		{
			FEOSP2PAddNotifyPeerConnectionRequestOptions options;
			FScriptDelegate callback;
			FEOSNotificationId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PAddNotifyPeerConnectionRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PAddNotifyPeerConnectionRequest_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnP2PIncomingConnectionRequestCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PAddNotifyPeerConnectionRequest_Parms, options), Z_Construct_UScriptStruct_FEOSP2PAddNotifyPeerConnectionRequestOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Listen for incoming connection requests on a particular Socket ID, or optionally all Socket IDs. The bound function\n\x09 * will only be called if the connection has not already been accepted.\n\x09 *\n\x09 * @param Options Information about who would like notifications, and (optionally) only for a specific socket\n\x09 * @param ClientData This value is returned to the caller when ConnectionRequestHandler is invoked\n\x09 * @param ConnectionRequestHandler The callback to be fired when we receive a connection request\n\x09 * @return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Listen for incoming connection requests on a particular Socket ID, or optionally all Socket IDs. The bound function\nwill only be called if the connection has not already been accepted.\n\n@param Options Information about who would like notifications, and (optionally) only for a specific socket\n@param ClientData This value is returned to the caller when ConnectionRequestHandler is invoked\n@param ConnectionRequestHandler The callback to be fired when we receive a connection request\n@return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PAddNotifyPeerConnectionRequest", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PAddNotifyPeerConnectionRequest_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics
	{
		struct CoreP2P_eventEOSP2PCloseConnection_Parms
		{
			FEOSP2PCloseConnectionOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PCloseConnection_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PCloseConnection_Parms, options), Z_Construct_UScriptStruct_FEOSP2PCloseConnectionOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Stop accepting new connections from a specific peer and close any open connections.\n\x09 *\n\x09 * @param Options Information about who would like to close a connection, and which connection.\n\x09 * @return EOSResult::EOS_Success - if the provided data is valid\n\x09 *         EOSResult::EOS_InvalidParameters - if the provided data is invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Stop accepting new connections from a specific peer and close any open connections.\n\n@param Options Information about who would like to close a connection, and which connection.\n@return EOSResult::EOS_Success - if the provided data is valid\n        EOSResult::EOS_InvalidParameters - if the provided data is invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PCloseConnection", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PCloseConnection_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics
	{
		struct CoreP2P_eventEOSP2PCloseConnections_Parms
		{
			FEOSP2PCloseConnectionsOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PCloseConnections_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PCloseConnections_Parms, options), Z_Construct_UScriptStruct_FEOSP2PCloseConnectionsOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Close any open Connections for a specific Peer Connection ID.\n\x09 *\n\x09 * @param Options Information about who would like to close connections, and by what socket ID\n\x09 * @return EOSResult::EOS_Success - if the provided data is valid\n\x09 *         EOSResult::EOS_InvalidParameters - if the provided data is invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Close any open Connections for a specific Peer Connection ID.\n\n@param Options Information about who would like to close connections, and by what socket ID\n@return EOSResult::EOS_Success - if the provided data is valid\n        EOSResult::EOS_InvalidParameters - if the provided data is invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PCloseConnections", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PCloseConnections_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics
	{
		struct CoreP2P_eventEOSP2PGetNATType_Parms
		{
			FEOSP2PGetNATTypeOptions options;
			EEOSENATType outNATType;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_outNATType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_outNATType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetNATType_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_outNATType = { "outNATType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetNATType_Parms, outNATType), Z_Construct_UEnum_EOSCore_EEOSENATType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_outNATType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetNATType_Parms, options), Z_Construct_UScriptStruct_FEOSP2PGetNATTypeOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_outNATType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_outNATType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Get our last-queried NAT-type, if it has been successfully queried.\n\x09 *\n\x09 * @param Options Information about what version of the EOS_P2P_GetNATType API they support\n\x09 * @param OutNATType The queried NAT Type, or unknown if unknown\n\x09 * @return EOSResult::EOS_Success - if we have cached data\n\x09 *         EOSResult::EOS_NotFound - If we do not have queried data cached\n\x09 *         EOSResult::EOS_IncompatibleVersion - If the provided version is unknown\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Get our last-queried NAT-type, if it has been successfully queried.\n\n@param Options Information about what version of the EOS_P2P_GetNATType API they support\n@param OutNATType The queried NAT Type, or unknown if unknown\n@return EOSResult::EOS_Success - if we have cached data\n        EOSResult::EOS_NotFound - If we do not have queried data cached\n        EOSResult::EOS_IncompatibleVersion - If the provided version is unknown" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PGetNATType", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PGetNATType_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics
	{
		struct CoreP2P_eventEOSP2PGetNextReceivedPacketSize_Parms
		{
			FEOSP2PGetNextReceivedPacketSizeOptions options;
			int32 outPacketSizeBytes;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outPacketSizeBytes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetNextReceivedPacketSize_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::NewProp_outPacketSizeBytes = { "outPacketSizeBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetNextReceivedPacketSize_Parms, outPacketSizeBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetNextReceivedPacketSize_Parms, options), Z_Construct_UScriptStruct_FEOSP2PGetNextReceivedPacketSizeOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::NewProp_outPacketSizeBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Gets the size of the packet that will be returned by ReceivePacket for a particular user, if there is any available\n\x09 * packets to be retrieved.\n\x09 *\n\x09 * @param Options Information about who is requesting the size of their next packet\n\x09 * @param OutPacketSize The amount of bytes required to store the data of the next packet for the requested user\n\x09 * @return EOSResult::EOS_Success - If OutPacketSize was successfully set and there is data to be received\n\x09 *         EOSResult::EOS_InvalidParameters - If input was invalid\n\x09 *         EOSResult::EOS_NotFound  - If there are no packets available for the requesting user\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Gets the size of the packet that will be returned by ReceivePacket for a particular user, if there is any available\npackets to be retrieved.\n\n@param Options Information about who is requesting the size of their next packet\n@param OutPacketSize The amount of bytes required to store the data of the next packet for the requested user\n@return EOSResult::EOS_Success - If OutPacketSize was successfully set and there is data to be received\n        EOSResult::EOS_InvalidParameters - If input was invalid\n        EOSResult::EOS_NotFound  - If there are no packets available for the requesting user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PGetNextReceivedPacketSize", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PGetNextReceivedPacketSize_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics
	{
		struct CoreP2P_eventEOSP2PGetPortRange_Parms
		{
			FEOSP2PGetPortRangeOptions options;
			int32 outPort;
			int32 outNumAdditionalPortsToTry;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outNumAdditionalPortsToTry;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outPort;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetPortRange_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_outNumAdditionalPortsToTry = { "outNumAdditionalPortsToTry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetPortRange_Parms, outNumAdditionalPortsToTry), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_outPort = { "outPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetPortRange_Parms, outPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetPortRange_Parms, options), Z_Construct_UScriptStruct_FEOSP2PGetPortRangeOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_outNumAdditionalPortsToTry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_outPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Get the current chosen port and the amount of other ports to try above the chosen port if the chosen port is unavailable.\n\x09 *\n\x09 * @param Options Information about what version of the EOS_P2P_GetPortRange API is supported\n\x09 * @param OutPort The port that will be tried first\n\x09 * @param OutNumAdditionalPortsToTry The amount of ports to try above the value in OutPort, if OutPort is unavailable\n\x09 * @return EOSResult::EOS_Success - if the input options were valid\n\x09 *         EOSResult::EOS_InvalidParameters - if the input was invalid in some way\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Get the current chosen port and the amount of other ports to try above the chosen port if the chosen port is unavailable.\n\n@param Options Information about what version of the EOS_P2P_GetPortRange API is supported\n@param OutPort The port that will be tried first\n@param OutNumAdditionalPortsToTry The amount of ports to try above the value in OutPort, if OutPort is unavailable\n@return EOSResult::EOS_Success - if the input options were valid\n        EOSResult::EOS_InvalidParameters - if the input was invalid in some way" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PGetPortRange", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PGetPortRange_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics
	{
		struct CoreP2P_eventEOSP2PGetRelayControl_Parms
		{
			FEOSP2PGetRelayControlOptions options;
			EEOSERelayControl outRelayControl;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_outRelayControl;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_outRelayControl_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetRelayControl_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_outRelayControl = { "outRelayControl", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetRelayControl_Parms, outRelayControl), Z_Construct_UEnum_EOSCore_EEOSERelayControl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_outRelayControl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PGetRelayControl_Parms, options), Z_Construct_UScriptStruct_FEOSP2PGetRelayControlOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_outRelayControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_outRelayControl_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09* Get the current relay control setting.\n\x09*\n\x09* @param Options Information about what version of the EOS_P2P_GetRelayControl API is supported\n\x09* @param OutRelayControl The relay control setting currently configured\n\x09* @return EOSResult::EOS_Success - if the input was valid\n\x09*         EOSResult::EOS_InvalidParameters - if the input was invalid in some way\n\x09*/" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Get the current relay control setting.\n\n@param Options Information about what version of the EOS_P2P_GetRelayControl API is supported\n@param OutRelayControl The relay control setting currently configured\n@return EOSResult::EOS_Success - if the input was valid\n        EOSResult::EOS_InvalidParameters - if the input was invalid in some way" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PGetRelayControl", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PGetRelayControl_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics
	{
		struct CoreP2P_eventEOSP2PQueryNATType_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PQueryNATType_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnP2PQueryNATTypeCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Query the current NAT-type of our connection.\n\x09 *\n\x09 * @param Options Information about what version of the EOS_P2P_QueryNATType API they support\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Query the current NAT-type of our connection.\n\n@param Options Information about what version of the EOS_P2P_QueryNATType API they support" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PQueryNATType", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PQueryNATType_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics
	{
		struct CoreP2P_eventEOSP2PReceivePacket_Parms
		{
			FEOSP2PReceivePacketOptions options;
			FEOSProductUserId outPeerId;
			FEOSP2PSocketId outSocketId;
			int32 outChannel;
			TArray<uint8> outData;
			int32 outBytesWritten;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outBytesWritten;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_outData_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSocketId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outPeerId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PReceivePacket_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outBytesWritten = { "outBytesWritten", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PReceivePacket_Parms, outBytesWritten), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PReceivePacket_Parms, outData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outData_Inner = { "outData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outChannel = { "outChannel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PReceivePacket_Parms, outChannel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outSocketId = { "outSocketId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PReceivePacket_Parms, outSocketId), Z_Construct_UScriptStruct_FEOSP2PSocketId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outPeerId = { "outPeerId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PReceivePacket_Parms, outPeerId), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PReceivePacket_Parms, options), Z_Construct_UScriptStruct_FEOSP2PReceivePacketOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outBytesWritten,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outSocketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_outPeerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Receive the next packet for the local user, and information associated with this packet, if it exists.\n\x09 *\n\x09 * @param Options Information about who is requesting the size of their next packet, and how much data can be stored safely\n\x09 * @param OutPeerId The Remote User who sent data. Only set if there was a packet to receive.\n\x09 * @param OutSocketId The Socket ID of the data that was sent. Only set if there was a packet to receive.\n\x09 * @param OutChannel The channel the data was sent on. Only set if there was a packet to receive.\n\x09 * @param OutData Buffer to store the data being received. Must be at least EOS_P2P_GetNextReceivedPacketSize in length or data will be truncated\n\x09 * @param OutBytesWritten The amount of bytes written to OutData. Only set if there was a packet to receive.\n\x09 * @return EOSResult::EOS_Success - If the packet was received successfully\n\x09 *         EOSResult::EOS_InvalidParameters - If input was invalid\n\x09 *         EOSResult::EOS_NotFound - If there are no packets available for the requesting user\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Receive the next packet for the local user, and information associated with this packet, if it exists.\n\n@param Options Information about who is requesting the size of their next packet, and how much data can be stored safely\n@param OutPeerId The Remote User who sent data. Only set if there was a packet to receive.\n@param OutSocketId The Socket ID of the data that was sent. Only set if there was a packet to receive.\n@param OutChannel The channel the data was sent on. Only set if there was a packet to receive.\n@param OutData Buffer to store the data being received. Must be at least EOS_P2P_GetNextReceivedPacketSize in length or data will be truncated\n@param OutBytesWritten The amount of bytes written to OutData. Only set if there was a packet to receive.\n@return EOSResult::EOS_Success - If the packet was received successfully\n        EOSResult::EOS_InvalidParameters - If input was invalid\n        EOSResult::EOS_NotFound - If there are no packets available for the requesting user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PReceivePacket", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PReceivePacket_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics
	{
		struct CoreP2P_eventEOSP2PRemoveNotifyPeerConnectionClosed_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PRemoveNotifyPeerConnectionClosed_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Stop notifications for connections being closed on a previously bound handler\n\x09 *\n\x09 * @param NotificationId The previously bound notification ID\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Stop notifications for connections being closed on a previously bound handler\n\n@param NotificationId The previously bound notification ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PRemoveNotifyPeerConnectionClosed", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PRemoveNotifyPeerConnectionClosed_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics
	{
		struct CoreP2P_eventEOSP2PRemoveNotifyPeerConnectionRequest_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PRemoveNotifyPeerConnectionRequest_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Stop listening for connection requests on a previously bound handler\n\x09 *\n\x09 * @param NotificationId The previously bound notification ID\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Stop listening for connection requests on a previously bound handler\n\n@param NotificationId The previously bound notification ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PRemoveNotifyPeerConnectionRequest", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PRemoveNotifyPeerConnectionRequest_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics
	{
		struct CoreP2P_eventEOSP2PSendPacket_Parms
		{
			FEOSP2PSendPacketOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PSendPacket_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PSendPacket_Parms, options), Z_Construct_UScriptStruct_FEOSP2PSendPacketOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Send a packet to a peer at the specified address. If there is already an open connection to this peer, it will be\n\x09 * sent immediately. If there is no open connection, an attempt to connect to the peer will be made. A EOS_Success\n\x09 * result does not guarantee the packet will be delivered to the peer, as data is sent unreliably.\n\x09 *\n\x09 * @param Options Information about the data being sent, by who, to who\n\x09 * @return EOSResult::EOS_Success           - If packet was queued to be sent successfully\n\x09 *         EOSResult::EOS_InvalidParameters - If input was invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Send a packet to a peer at the specified address. If there is already an open connection to this peer, it will be\nsent immediately. If there is no open connection, an attempt to connect to the peer will be made. A EOS_Success\nresult does not guarantee the packet will be delivered to the peer, as data is sent unreliably.\n\n@param Options Information about the data being sent, by who, to who\n@return EOSResult::EOS_Success           - If packet was queued to be sent successfully\n        EOSResult::EOS_InvalidParameters - If input was invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PSendPacket", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PSendPacket_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics
	{
		struct CoreP2P_eventEOSP2PSetPortRange_Parms
		{
			FEOSP2PSetPortRangeOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PSetPortRange_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PSetPortRange_Parms, options), Z_Construct_UScriptStruct_FEOSP2PSetPortRangeOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Set configuration options related to network ports.\n\x09 *\n\x09 * @param Options Information about network ports config options\n\x09 * @return EOSResult::EOS_Success - if the options were set successfully\n\x09 *         EOSResult::EOS_InvalidParameters - if the options are invalid in some way\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Set configuration options related to network ports.\n\n@param Options Information about network ports config options\n@return EOSResult::EOS_Success - if the options were set successfully\n        EOSResult::EOS_InvalidParameters - if the options are invalid in some way" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PSetPortRange", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PSetPortRange_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics
	{
		struct CoreP2P_eventEOSP2PSetRelayControl_Parms
		{
			FEOSP2PSetRelayControlOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PSetRelayControl_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventEOSP2PSetRelayControl_Parms, options), Z_Construct_UScriptStruct_FEOSP2PSetRelayControlOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|P2P" },
		{ "Comment", "/**\n\x09 * Set how relay servers are to be used. This setting does not immediately apply to existing connections, but may apply to existing\n\x09 * connections if the connection requires renegotiation.\n\x09 *\n\x09 * @param Options Information about relay server config options\n\x09 * @return EOSResult::EOS_Success - if the options were set successfully\n\x09 *         EOSResult::EOS_InvalidParameters - if the options are invalid in some way\n\x09 */" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "Set how relay servers are to be used. This setting does not immediately apply to existing connections, but may apply to existing\nconnections if the connection requires renegotiation.\n\n@param Options Information about relay server config options\n@return EOSResult::EOS_Success - if the options were set successfully\n        EOSResult::EOS_InvalidParameters - if the options are invalid in some way" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "EOSP2PSetRelayControl", nullptr, nullptr, sizeof(CoreP2P_eventEOSP2PSetRelayControl_Parms), Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreP2P_GetP2P_Statics
	{
		struct CoreP2P_eventGetP2P_Parms
		{
			UCoreP2P* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreP2P_eventGetP2P_Parms, ReturnValue), Z_Construct_UClass_UCoreP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreP2P, nullptr, "GetP2P", nullptr, nullptr, sizeof(CoreP2P_eventGetP2P_Parms), Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreP2P_GetP2P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreP2P_GetP2P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreP2P_NoRegister()
	{
		return UCoreP2P::StaticClass();
	}
	struct Z_Construct_UClass_UCoreP2P_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnP2PQueryNATTypeCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PQueryNATTypeCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnP2PRemoteConnectionClosedCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PRemoteConnectionClosedCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnP2PIncomingConnectionRequestCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PIncomingConnectionRequestCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreP2P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreP2P_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PAcceptConnection, "EOSP2PAcceptConnection" }, // 3346423318
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed, "EOSP2PAddNotifyPeerConnectionClosed" }, // 2199488781
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest, "EOSP2PAddNotifyPeerConnectionRequest" }, // 1278308994
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnection, "EOSP2PCloseConnection" }, // 2017084217
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PCloseConnections, "EOSP2PCloseConnections" }, // 2591040529
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PGetNATType, "EOSP2PGetNATType" }, // 2768060390
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PGetNextReceivedPacketSize, "EOSP2PGetNextReceivedPacketSize" }, // 2174865390
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PGetPortRange, "EOSP2PGetPortRange" }, // 3932198397
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PGetRelayControl, "EOSP2PGetRelayControl" }, // 2638744543
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PQueryNATType, "EOSP2PQueryNATType" }, // 1082654455
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PReceivePacket, "EOSP2PReceivePacket" }, // 932354165
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed, "EOSP2PRemoveNotifyPeerConnectionClosed" }, // 476079752
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest, "EOSP2PRemoveNotifyPeerConnectionRequest" }, // 882614180
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PSendPacket, "EOSP2PSendPacket" }, // 1298289085
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PSetPortRange, "EOSP2PSetPortRange" }, // 4263365812
		{ &Z_Construct_UFunction_UCoreP2P_EOSP2PSetRelayControl, "EOSP2PSetRelayControl" }, // 2830873955
		{ &Z_Construct_UFunction_UCoreP2P_GetP2P, "GetP2P" }, // 1002896817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreP2P_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * P2P functions to help manage sending and receiving of messages to peers\n *\n * These functions will attempt to perform NAT-punching, but will fallback to relays if a direct connection cannot be established\n */" },
		{ "IncludePath", "P2P/EOSP2P.h" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
		{ "ToolTip", "P2P functions to help manage sending and receiving of messages to peers\n\nThese functions will attempt to perform NAT-punching, but will fallback to relays if a direct connection cannot be established" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PQueryNATTypeCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|P2P|Delegates" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PQueryNATTypeCompleteCallbackDelegate = { "OnP2PQueryNATTypeCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreP2P, OnP2PQueryNATTypeCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnP2PQueryNATTypeCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PQueryNATTypeCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PQueryNATTypeCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PRemoteConnectionClosedCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|P2P|Delegates" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PRemoteConnectionClosedCallbackDelegate = { "OnP2PRemoteConnectionClosedCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreP2P, OnP2PRemoteConnectionClosedCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnP2PRemoteConnectionClosedCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PRemoteConnectionClosedCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PRemoteConnectionClosedCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PIncomingConnectionRequestCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|P2P|Delegates" },
		{ "ModuleRelativePath", "Public/P2P/EOSP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PIncomingConnectionRequestCallbackDelegate = { "OnP2PIncomingConnectionRequestCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreP2P, OnP2PIncomingConnectionRequestCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnP2PIncomingConnectionRequestCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PIncomingConnectionRequestCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PIncomingConnectionRequestCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PQueryNATTypeCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PRemoteConnectionClosedCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreP2P_Statics::NewProp_OnP2PIncomingConnectionRequestCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreP2P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreP2P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreP2P_Statics::ClassParams = {
		&UCoreP2P::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreP2P_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreP2P_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreP2P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreP2P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreP2P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreP2P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreP2P, 3504972848);
	template<> EOSCORE_API UClass* StaticClass<UCoreP2P>()
	{
		return UCoreP2P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreP2P(Z_Construct_UClass_UCoreP2P, &UCoreP2P::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreP2P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreP2P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
