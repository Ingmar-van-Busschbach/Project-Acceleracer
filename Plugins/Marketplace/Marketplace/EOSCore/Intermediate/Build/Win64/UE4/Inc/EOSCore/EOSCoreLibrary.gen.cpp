// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Core/EOSCoreLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCoreLibrary() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreLibrary_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAccessToken();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBucketId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLobbyId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSessionInviteId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUIEventId();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_ESuccessFail();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FContinuanceToken();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSEpicAccountId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSProductUserId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLobbyAttributeData();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSContinuanceTokenToString)
	{
		P_GET_STRUCT(FContinuanceToken,Z_Param_id);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UEOSCoreLibrary::EOSContinuanceTokenToString(Z_Param_id,Z_Param_Out_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetCurrentAccountId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSEpicAccountId*)Z_Param__Result=UEOSCoreLibrary::GetCurrentAccountId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetCurrentProductId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSProductUserId*)Z_Param__Result=UEOSCoreLibrary::GetCurrentProductId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execCoreBytesToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEOSCoreLibrary::CoreBytesToString(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execCoreStringToByte)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UEOSCoreLibrary::CoreStringToByte(Z_Param_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSProductUserIdFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSProductUserId*)Z_Param__Result=UEOSCoreLibrary::EOSProductUserIdFromString(Z_Param_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSProductUserIdToString)
	{
		P_GET_STRUCT(FEOSProductUserId,Z_Param_id);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UEOSCoreLibrary::EOSProductUserIdToString(Z_Param_id,Z_Param_Out_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSProductUserIdIsValidPure)
	{
		P_GET_STRUCT(FEOSProductUserId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::EOSProductUserIdIsValidPure(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSProductUserIdIsValid)
	{
		P_GET_STRUCT(FEOSProductUserId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::EOSProductUserIdIsValid(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSEpicAccountIdFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSEpicAccountId*)Z_Param__Result=UEOSCoreLibrary::EOSEpicAccountIdFromString(Z_Param_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSEpicAccountIdToString)
	{
		P_GET_STRUCT(FEOSEpicAccountId,Z_Param_id);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UEOSCoreLibrary::EOSEpicAccountIdToString(Z_Param_id,Z_Param_Out_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSEpicAccountIdIsValidPure)
	{
		P_GET_STRUCT(FEOSEpicAccountId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::EOSEpicAccountIdIsValidPure(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSEpicAccountIdIsValid)
	{
		P_GET_STRUCT(FEOSEpicAccountId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::EOSEpicAccountIdIsValid(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSByteArrayToString)
	{
		P_GET_TARRAY(uint8,Z_Param_array);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UEOSCoreLibrary::EOSByteArrayToString(Z_Param_array,Z_Param_length,Z_Param_Out_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSEResultIsOperationComplete)
	{
		P_GET_ENUM(EOSResult,Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::EOSEResultIsOperationComplete(EOSResult(Z_Param_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOSEResultToString)
	{
		P_GET_ENUM(EOSResult,Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEOSCoreLibrary::EOSEResultToString(EOSResult(Z_Param_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execBreakSessionsInviteId)
	{
		P_GET_STRUCT(FSessionInviteId,Z_Param_id);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSCoreLibrary::BreakSessionsInviteId(Z_Param_id,Z_Param_Out_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execMakeSessionsInviteId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSessionInviteId*)Z_Param__Result=UEOSCoreLibrary::MakeSessionsInviteId(Z_Param_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execBreakBucketId)
	{
		P_GET_STRUCT(FBucketId,Z_Param_bucket);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSCoreLibrary::BreakBucketId(Z_Param_bucket,Z_Param_Out_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execMakeBucketId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBucketId*)Z_Param__Result=UEOSCoreLibrary::MakeBucketId(Z_Param_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetLobbyAttributeString)
	{
		P_GET_STRUCT_REF(FEOSLobbyAttributeData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEOSCoreLibrary::GetLobbyAttributeString(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetLobbyAttributeDouble)
	{
		P_GET_STRUCT_REF(FEOSLobbyAttributeData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEOSCoreLibrary::GetLobbyAttributeDouble(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetLobbyAttributeInt64)
	{
		P_GET_STRUCT_REF(FEOSLobbyAttributeData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEOSCoreLibrary::GetLobbyAttributeInt64(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetLobbyAttributeBool)
	{
		P_GET_STRUCT_REF(FEOSLobbyAttributeData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::GetLobbyAttributeBool(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetSessionAttributeString)
	{
		P_GET_STRUCT_REF(FEOSSessionsAttributeData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEOSCoreLibrary::GetSessionAttributeString(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetSessionAttributeDouble)
	{
		P_GET_STRUCT_REF(FEOSSessionsAttributeData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEOSCoreLibrary::GetSessionAttributeDouble(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetSessionAttributeInt64)
	{
		P_GET_STRUCT_REF(FEOSSessionsAttributeData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEOSCoreLibrary::GetSessionAttributeInt64(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execGetSessionAttributeBool)
	{
		P_GET_STRUCT_REF(FEOSSessionsAttributeData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::GetSessionAttributeBool(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execIsLobbyIdIdenticalWith)
	{
		P_GET_STRUCT(FEOSLobbyId,Z_Param_a);
		P_GET_STRUCT(FEOSLobbyId,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::IsLobbyIdIdenticalWith(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execIsEpicAccountIdIdenticalWith)
	{
		P_GET_STRUCT(FEOSEpicAccountId,Z_Param_a);
		P_GET_STRUCT(FEOSEpicAccountId,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::IsEpicAccountIdIdenticalWith(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execIsProductUserIdIdenticalWith)
	{
		P_GET_STRUCT(FEOSProductUserId,Z_Param_a);
		P_GET_STRUCT(FEOSProductUserId,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::IsProductUserIdIdenticalWith(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execEOS_Success)
	{
		P_GET_ENUM(EOSResult,Z_Param_status);
		P_GET_ENUM_REF(ESuccessFail,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSCoreLibrary::EOS_Success(EOSResult(Z_Param_status),(ESuccessFail&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execIsLobbyIdValid)
	{
		P_GET_STRUCT(FEOSLobbyId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSCoreLibrary::IsLobbyIdValid(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execBreakUIEventIdStruct)
	{
		P_GET_STRUCT(FEOSUIEventId,Z_Param_eventId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outEventId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSCoreLibrary::BreakUIEventIdStruct(Z_Param_eventId,Z_Param_Out_outEventId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execMakeLobbyInviteIdStruct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_inviteId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLobbyInviteId*)Z_Param__Result=UEOSCoreLibrary::MakeLobbyInviteIdStruct(Z_Param_inviteId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execBreakLobbyInviteIdStruct)
	{
		P_GET_STRUCT(FLobbyInviteId,Z_Param_inviteId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outinviteId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSCoreLibrary::BreakLobbyInviteIdStruct(Z_Param_inviteId,Z_Param_Out_outinviteId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execMakeAccessTokenStruct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAccessToken*)Z_Param__Result=UEOSCoreLibrary::MakeAccessTokenStruct(Z_Param_token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execBreakAccessTokenStruct)
	{
		P_GET_STRUCT(FAccessToken,Z_Param_token);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSCoreLibrary::BreakAccessTokenStruct(Z_Param_token,Z_Param_Out_outToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreLibrary::execBreakLobbyIdStruct)
	{
		P_GET_STRUCT(FEOSLobbyId,Z_Param_id);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSCoreLibrary::BreakLobbyIdStruct(Z_Param_id,Z_Param_Out_outId);
		P_NATIVE_END;
	}
	void UEOSCoreLibrary::StaticRegisterNativesUEOSCoreLibrary()
	{
		UClass* Class = UEOSCoreLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakAccessTokenStruct", &UEOSCoreLibrary::execBreakAccessTokenStruct },
			{ "BreakBucketId", &UEOSCoreLibrary::execBreakBucketId },
			{ "BreakLobbyIdStruct", &UEOSCoreLibrary::execBreakLobbyIdStruct },
			{ "BreakLobbyInviteIdStruct", &UEOSCoreLibrary::execBreakLobbyInviteIdStruct },
			{ "BreakSessionsInviteId", &UEOSCoreLibrary::execBreakSessionsInviteId },
			{ "BreakUIEventIdStruct", &UEOSCoreLibrary::execBreakUIEventIdStruct },
			{ "CoreBytesToString", &UEOSCoreLibrary::execCoreBytesToString },
			{ "CoreStringToByte", &UEOSCoreLibrary::execCoreStringToByte },
			{ "EOS_Success", &UEOSCoreLibrary::execEOS_Success },
			{ "EOSByteArrayToString", &UEOSCoreLibrary::execEOSByteArrayToString },
			{ "EOSContinuanceTokenToString", &UEOSCoreLibrary::execEOSContinuanceTokenToString },
			{ "EOSEpicAccountIdFromString", &UEOSCoreLibrary::execEOSEpicAccountIdFromString },
			{ "EOSEpicAccountIdIsValid", &UEOSCoreLibrary::execEOSEpicAccountIdIsValid },
			{ "EOSEpicAccountIdIsValidPure", &UEOSCoreLibrary::execEOSEpicAccountIdIsValidPure },
			{ "EOSEpicAccountIdToString", &UEOSCoreLibrary::execEOSEpicAccountIdToString },
			{ "EOSEResultIsOperationComplete", &UEOSCoreLibrary::execEOSEResultIsOperationComplete },
			{ "EOSEResultToString", &UEOSCoreLibrary::execEOSEResultToString },
			{ "EOSProductUserIdFromString", &UEOSCoreLibrary::execEOSProductUserIdFromString },
			{ "EOSProductUserIdIsValid", &UEOSCoreLibrary::execEOSProductUserIdIsValid },
			{ "EOSProductUserIdIsValidPure", &UEOSCoreLibrary::execEOSProductUserIdIsValidPure },
			{ "EOSProductUserIdToString", &UEOSCoreLibrary::execEOSProductUserIdToString },
			{ "GetCurrentAccountId", &UEOSCoreLibrary::execGetCurrentAccountId },
			{ "GetCurrentProductId", &UEOSCoreLibrary::execGetCurrentProductId },
			{ "GetLobbyAttributeBool", &UEOSCoreLibrary::execGetLobbyAttributeBool },
			{ "GetLobbyAttributeDouble", &UEOSCoreLibrary::execGetLobbyAttributeDouble },
			{ "GetLobbyAttributeInt64", &UEOSCoreLibrary::execGetLobbyAttributeInt64 },
			{ "GetLobbyAttributeString", &UEOSCoreLibrary::execGetLobbyAttributeString },
			{ "GetSessionAttributeBool", &UEOSCoreLibrary::execGetSessionAttributeBool },
			{ "GetSessionAttributeDouble", &UEOSCoreLibrary::execGetSessionAttributeDouble },
			{ "GetSessionAttributeInt64", &UEOSCoreLibrary::execGetSessionAttributeInt64 },
			{ "GetSessionAttributeString", &UEOSCoreLibrary::execGetSessionAttributeString },
			{ "IsEpicAccountIdIdenticalWith", &UEOSCoreLibrary::execIsEpicAccountIdIdenticalWith },
			{ "IsLobbyIdIdenticalWith", &UEOSCoreLibrary::execIsLobbyIdIdenticalWith },
			{ "IsLobbyIdValid", &UEOSCoreLibrary::execIsLobbyIdValid },
			{ "IsProductUserIdIdenticalWith", &UEOSCoreLibrary::execIsProductUserIdIdenticalWith },
			{ "MakeAccessTokenStruct", &UEOSCoreLibrary::execMakeAccessTokenStruct },
			{ "MakeBucketId", &UEOSCoreLibrary::execMakeBucketId },
			{ "MakeLobbyInviteIdStruct", &UEOSCoreLibrary::execMakeLobbyInviteIdStruct },
			{ "MakeSessionsInviteId", &UEOSCoreLibrary::execMakeSessionsInviteId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics
	{
		struct EOSCoreLibrary_eventBreakAccessTokenStruct_Parms
		{
			FAccessToken token;
			FString outToken;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outToken;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::NewProp_outToken = { "outToken", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakAccessTokenStruct_Parms, outToken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakAccessTokenStruct_Parms, token), Z_Construct_UScriptStruct_FAccessToken, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::NewProp_outToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::NewProp_token,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "BreakAccessTokenStruct", nullptr, nullptr, sizeof(EOSCoreLibrary_eventBreakAccessTokenStruct_Parms), Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics
	{
		struct EOSCoreLibrary_eventBreakBucketId_Parms
		{
			FBucketId bucket;
			FString string;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bucket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakBucketId_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::NewProp_bucket = { "bucket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakBucketId_Parms, bucket), Z_Construct_UScriptStruct_FBucketId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::NewProp_string,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::NewProp_bucket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "BreakBucketId", nullptr, nullptr, sizeof(EOSCoreLibrary_eventBreakBucketId_Parms), Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics
	{
		struct EOSCoreLibrary_eventBreakLobbyIdStruct_Parms
		{
			FEOSLobbyId id;
			FString outId;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::NewProp_outId = { "outId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakLobbyIdStruct_Parms, outId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakLobbyIdStruct_Parms, id), Z_Construct_UScriptStruct_FEOSLobbyId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::NewProp_outId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "BreakLobbyIdStruct", nullptr, nullptr, sizeof(EOSCoreLibrary_eventBreakLobbyIdStruct_Parms), Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics
	{
		struct EOSCoreLibrary_eventBreakLobbyInviteIdStruct_Parms
		{
			FLobbyInviteId inviteId;
			FString outinviteId;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outinviteId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inviteId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::NewProp_outinviteId = { "outinviteId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakLobbyInviteIdStruct_Parms, outinviteId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::NewProp_inviteId = { "inviteId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakLobbyInviteIdStruct_Parms, inviteId), Z_Construct_UScriptStruct_FLobbyInviteId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::NewProp_outinviteId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::NewProp_inviteId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "BreakLobbyInviteIdStruct", nullptr, nullptr, sizeof(EOSCoreLibrary_eventBreakLobbyInviteIdStruct_Parms), Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics
	{
		struct EOSCoreLibrary_eventBreakSessionsInviteId_Parms
		{
			FSessionInviteId id;
			FString string;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakSessionsInviteId_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakSessionsInviteId_Parms, id), Z_Construct_UScriptStruct_FSessionInviteId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::NewProp_string,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "BreakSessionsInviteId", nullptr, nullptr, sizeof(EOSCoreLibrary_eventBreakSessionsInviteId_Parms), Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics
	{
		struct EOSCoreLibrary_eventBreakUIEventIdStruct_Parms
		{
			FEOSUIEventId eventId;
			FString outEventId;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outEventId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_eventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::NewProp_outEventId = { "outEventId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakUIEventIdStruct_Parms, outEventId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::NewProp_eventId = { "eventId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventBreakUIEventIdStruct_Parms, eventId), Z_Construct_UScriptStruct_FEOSUIEventId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::NewProp_outEventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::NewProp_eventId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "BreakUIEventIdStruct", nullptr, nullptr, sizeof(EOSCoreLibrary_eventBreakUIEventIdStruct_Parms), Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics
	{
		struct EOSCoreLibrary_eventCoreBytesToString_Parms
		{
			TArray<uint8> data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventCoreBytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventCoreBytesToString_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::NewProp_data_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Convert a byte array to a string, useful when receiving chat messages for example\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Convert a byte array to a string, useful when receiving chat messages for example" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "CoreBytesToString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventCoreBytesToString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics
	{
		struct EOSCoreLibrary_eventCoreStringToByte_Parms
		{
			FString string;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventCoreStringToByte_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventCoreStringToByte_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::NewProp_string,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Convert a string to a byte array, useful when sending chat messages\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Convert a string to a byte array, useful when sending chat messages" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "CoreStringToByte", nullptr, nullptr, sizeof(EOSCoreLibrary_eventCoreStringToByte_Parms), Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics
	{
		struct EOSCoreLibrary_eventEOS_Success_Parms
		{
			EOSResult status;
			ESuccessFail result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_status_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOS_Success_Parms, result), Z_Construct_UEnum_EOSCore_ESuccessFail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOS_Success_Parms, status), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::NewProp_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::NewProp_status_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOS_Success", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOS_Success_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics
	{
		struct EOSCoreLibrary_eventEOSByteArrayToString_Parms
		{
			TArray<uint8> array;
			int32 length;
			FString string;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_array;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSByteArrayToString_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSByteArrayToString_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSByteArrayToString_Parms, length), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_array = { "array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSByteArrayToString_Parms, array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_array_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_array_Inner = { "array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_string,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::NewProp_array_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Encode a byte array into hex encoded string\n\x09 *\n\x09 * @return An EOS_EResult that indicates whether the byte array was converted and copied into the OutBuffer.\n\x09 *         EOS_Success if the encoding was successful and passed out in OutBuffer\n\x09 *         EOS_InvalidParameters if you pass a null pointer on invalid length for any of the parameters\n\x09 *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the encoding. InOutBufferLength contains the required minimum length to perform the operation successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Encode a byte array into hex encoded string\n\n@return An EOS_EResult that indicates whether the byte array was converted and copied into the OutBuffer.\n        EOS_Success if the encoding was successful and passed out in OutBuffer\n        EOS_InvalidParameters if you pass a null pointer on invalid length for any of the parameters\n        EOS_LimitExceeded - The OutBuffer is not large enough to receive the encoding. InOutBufferLength contains the required minimum length to perform the operation successfully." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSByteArrayToString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSByteArrayToString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics
	{
		struct EOSCoreLibrary_eventEOSContinuanceTokenToString_Parms
		{
			FContinuanceToken id;
			FString string;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSContinuanceTokenToString_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSContinuanceTokenToString_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSContinuanceTokenToString_Parms, id), Z_Construct_UScriptStruct_FContinuanceToken, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::NewProp_string,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Retrieve a null-terminated string-ified continuance token from an EOS_ContinuanceToken.\n\x09 *\n\x09 * To get the required buffer size, call once with OutBuffer set to NULL, InOutBufferLength will contain the buffer size needed.\n\x09 * Call again with valid params to get the string-ified continuance token which will only contain UTF8-encoded printable characters (excluding the null-terminator).\n\x09 *\n\x09 * @param ContinuanceToken The continuance token for which to retrieve the string-ified version.\n\x09 * @param OutBuffer The buffer into which the character data should be written\n\x09 * @param InOutBufferLength The size of the OutBuffer in characters.\n\x09 *                          The input buffer should include enough space to be null-terminated.\n\x09 *                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer including the null termination character.\n\x09 *\n\x09 * @return An EOS_EResult that indicates whether the Epic Online Services Account ID string was copied into the OutBuffer.\n\x09 *         EOS_Success - The OutBuffer was filled, and InOutBufferLength contains the number of characters copied into OutBuffer including the null terminator.\n\x09 *         EOS_InvalidParameters - Either OutBuffer or InOutBufferLength were passed as NULL parameters.\n\x09 *         EOS_InvalidUser - The AccountId is invalid and cannot be string-ified\n\x09 *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the continuance token string. InOutBufferLength contains the required minimum length to perform the operation successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Retrieve a null-terminated string-ified continuance token from an EOS_ContinuanceToken.\n\nTo get the required buffer size, call once with OutBuffer set to NULL, InOutBufferLength will contain the buffer size needed.\nCall again with valid params to get the string-ified continuance token which will only contain UTF8-encoded printable characters (excluding the null-terminator).\n\n@param ContinuanceToken The continuance token for which to retrieve the string-ified version.\n@param OutBuffer The buffer into which the character data should be written\n@param InOutBufferLength The size of the OutBuffer in characters.\n                         The input buffer should include enough space to be null-terminated.\n                         When the function returns, this parameter will be filled with the length of the string copied into OutBuffer including the null termination character.\n\n@return An EOS_EResult that indicates whether the Epic Online Services Account ID string was copied into the OutBuffer.\n        EOS_Success - The OutBuffer was filled, and InOutBufferLength contains the number of characters copied into OutBuffer including the null terminator.\n        EOS_InvalidParameters - Either OutBuffer or InOutBufferLength were passed as NULL parameters.\n        EOS_InvalidUser - The AccountId is invalid and cannot be string-ified\n        EOS_LimitExceeded - The OutBuffer is not large enough to receive the continuance token string. InOutBufferLength contains the required minimum length to perform the operation successfully." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSContinuanceTokenToString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSContinuanceTokenToString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics
	{
		struct EOSCoreLibrary_eventEOSEpicAccountIdFromString_Parms
		{
			FString string;
			FEOSEpicAccountId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEpicAccountIdFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEpicAccountIdFromString_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::NewProp_string,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Retrieve an EOS_EpicAccountId from a raw account ID string. The input string must be null-terminated.\n\x09 *\n\x09 * @param AccountIdString The string-ified account ID for which to retrieve the EOS_EpicAccountId\n\x09 * @return The EOS_EpicAccountId that corresponds to the AccountIdString\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Retrieve an EOS_EpicAccountId from a raw account ID string. The input string must be null-terminated.\n\n@param AccountIdString The string-ified account ID for which to retrieve the EOS_EpicAccountId\n@return The EOS_EpicAccountId that corresponds to the AccountIdString" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSEpicAccountIdFromString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSEpicAccountIdFromString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics
	{
		struct EOSCoreLibrary_eventEOSEpicAccountIdIsValid_Parms
		{
			FEOSEpicAccountId id;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventEOSEpicAccountIdIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventEOSEpicAccountIdIsValid_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEpicAccountIdIsValid_Parms, id), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Check whether or not the given account unique id is considered valid\n\x09 *\n\x09 * @param AccountId The account id to check for validity\n\x09 * @return EOS_TRUE if the EOS_EpicAccountId is valid, otherwise EOS_FALSE\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Check whether or not the given account unique id is considered valid\n\n@param AccountId The account id to check for validity\n@return EOS_TRUE if the EOS_EpicAccountId is valid, otherwise EOS_FALSE" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSEpicAccountIdIsValid", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSEpicAccountIdIsValid_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics
	{
		struct EOSCoreLibrary_eventEOSEpicAccountIdIsValidPure_Parms
		{
			FEOSEpicAccountId id;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventEOSEpicAccountIdIsValidPure_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventEOSEpicAccountIdIsValidPure_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEpicAccountIdIsValidPure_Parms, id), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Check whether or not the given account unique id is considered valid\n\x09 *\n\x09 * @param AccountId The account id to check for validity\n\x09 * @return EOS_TRUE if the EOS_EpicAccountId is valid, otherwise EOS_FALSE\n\x09 */" },
		{ "DisplayName", "EOSEpic Account Id is Valid (Pure)" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Check whether or not the given account unique id is considered valid\n\n@param AccountId The account id to check for validity\n@return EOS_TRUE if the EOS_EpicAccountId is valid, otherwise EOS_FALSE" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSEpicAccountIdIsValidPure", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSEpicAccountIdIsValidPure_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics
	{
		struct EOSCoreLibrary_eventEOSEpicAccountIdToString_Parms
		{
			FEOSEpicAccountId id;
			FString string;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEpicAccountIdToString_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEpicAccountIdToString_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEpicAccountIdToString_Parms, id), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::NewProp_string,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Retrieve a string-ified account ID from an EOS_EpicAccountId. This is useful for replication of Epic account IDs in multiplayer games.\n\x09 *\n\x09 * @param AccountId The account ID for which to retrieve the string-ified version.\n\x09 * @param OutBuffer The buffer into which the character data should be written\n\x09 * @param InOutBufferLength The size of the OutBuffer in characters.\n\x09 *                          The input buffer should include enough space to be null-terminated.\n\x09 *                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.\n\x09 *\n\x09 * @return An EOS_EResult that indicates whether the account ID string was copied into the OutBuffer.\n\x09 *         EOS_Success - The OutBuffer was filled, and InOutBufferLength contains the number of characters copied into OutBuffer excluding the null terminator.\n\x09 *         EOS_InvalidParameters - Either OutBuffer or InOutBufferLength were passed as NULL parameters.\n\x09 *         EOS_InvalidUser - The AccountId is invalid and cannot be string-ified\n\x09 *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the account ID string. InOutBufferLength contains the required minimum length to perform the operation successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Retrieve a string-ified account ID from an EOS_EpicAccountId. This is useful for replication of Epic account IDs in multiplayer games.\n\n@param AccountId The account ID for which to retrieve the string-ified version.\n@param OutBuffer The buffer into which the character data should be written\n@param InOutBufferLength The size of the OutBuffer in characters.\n                         The input buffer should include enough space to be null-terminated.\n                         When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.\n\n@return An EOS_EResult that indicates whether the account ID string was copied into the OutBuffer.\n        EOS_Success - The OutBuffer was filled, and InOutBufferLength contains the number of characters copied into OutBuffer excluding the null terminator.\n        EOS_InvalidParameters - Either OutBuffer or InOutBufferLength were passed as NULL parameters.\n        EOS_InvalidUser - The AccountId is invalid and cannot be string-ified\n        EOS_LimitExceeded - The OutBuffer is not large enough to receive the account ID string. InOutBufferLength contains the required minimum length to perform the operation successfully." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSEpicAccountIdToString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSEpicAccountIdToString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics
	{
		struct EOSCoreLibrary_eventEOSEResultIsOperationComplete_Parms
		{
			EOSResult result;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventEOSEResultIsOperationComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventEOSEResultIsOperationComplete_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEResultIsOperationComplete_Parms, result), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::NewProp_result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Returns whether a result is to be considered the final result, or false if the callback that returned this result\n\x09 * will be called again either after some time or from another action.\n\x09 *\n\x09 * @param Result The result to check against being a final result for an operation\n\x09 * @return True if this result means the operation is complete, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Returns whether a result is to be considered the final result, or false if the callback that returned this result\nwill be called again either after some time or from another action.\n\n@param Result The result to check against being a final result for an operation\n@return True if this result means the operation is complete, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSEResultIsOperationComplete", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSEResultIsOperationComplete_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics
	{
		struct EOSCoreLibrary_eventEOSEResultToString_Parms
		{
			EOSResult result;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEResultToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSEResultToString_Parms, result), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::NewProp_result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09* Returns a string representation of an EOS_EResult.\n\x09* The return value is never null.\n\x09* The return value must not be freed.\n\x09*\n\x09* Example: EOS_EResult_ToString(EOS_Success) returns \"EOS_Success\"\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Returns a string representation of an EOS_EResult.\nThe return value is never null.\nThe return value must not be freed.\n\nExample: EOS_EResult_ToString(EOS_Success) returns \"EOS_Success\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSEResultToString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSEResultToString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics
	{
		struct EOSCoreLibrary_eventEOSProductUserIdFromString_Parms
		{
			FString string;
			FEOSProductUserId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSProductUserIdFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSProductUserIdFromString_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::NewProp_string,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Retrieve an EOS_EpicAccountId from a raw account ID string. The input string must be null-terminated.\n\x09 *\n\x09 * @param AccountIdString The string-ified account ID for which to retrieve the EOS_ProductUserId\n\x09 * @return The EOS_ProductUserId that corresponds to the AccountIdString\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Retrieve an EOS_EpicAccountId from a raw account ID string. The input string must be null-terminated.\n\n@param AccountIdString The string-ified account ID for which to retrieve the EOS_ProductUserId\n@return The EOS_ProductUserId that corresponds to the AccountIdString" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSProductUserIdFromString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSProductUserIdFromString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics
	{
		struct EOSCoreLibrary_eventEOSProductUserIdIsValid_Parms
		{
			FEOSProductUserId id;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventEOSProductUserIdIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventEOSProductUserIdIsValid_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSProductUserIdIsValid_Parms, id), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Check whether or not the given account unique id is considered valid\n\x09 *\n\x09 * @param AccountId The account id to check for validity\n\x09 * @return EOS_TRUE if the EOS_ProductUserId is valid, otherwise EOS_FALSE\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Check whether or not the given account unique id is considered valid\n\n@param AccountId The account id to check for validity\n@return EOS_TRUE if the EOS_ProductUserId is valid, otherwise EOS_FALSE" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSProductUserIdIsValid", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSProductUserIdIsValid_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics
	{
		struct EOSCoreLibrary_eventEOSProductUserIdIsValidPure_Parms
		{
			FEOSProductUserId id;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventEOSProductUserIdIsValidPure_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventEOSProductUserIdIsValidPure_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSProductUserIdIsValidPure_Parms, id), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Check whether or not the given account unique id is considered valid\n\x09 *\n\x09 * @param AccountId The account id to check for validity\n\x09 * @return EOS_TRUE if the EOS_ProductUserId is valid, otherwise EOS_FALSE\n\x09 */" },
		{ "DisplayName", "EOSProduct User Id is Valid (Pure)" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Check whether or not the given account unique id is considered valid\n\n@param AccountId The account id to check for validity\n@return EOS_TRUE if the EOS_ProductUserId is valid, otherwise EOS_FALSE" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSProductUserIdIsValidPure", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSProductUserIdIsValidPure_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics
	{
		struct EOSCoreLibrary_eventEOSProductUserIdToString_Parms
		{
			FEOSProductUserId id;
			FString string;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSProductUserIdToString_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSProductUserIdToString_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventEOSProductUserIdToString_Parms, id), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::NewProp_string,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/**\n\x09 * Retrieve a string-ified account ID from an EOS_ProductUserId. This is useful for replication of Product User IDs in multiplayer games.\n\x09 *\n\x09 * @param AccountId The account ID for which to retrieve the string-ified version.\n\x09 * @param OutBuffer The buffer into which the character data should be written\n\x09 * @param InOutBufferLength The size of the OutBuffer in characters.\n\x09 *                          The input buffer should include enough space to be null-terminated.\n\x09 *                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.\n\x09 *\n\x09 * @return An EOS_EResult that indicates whether the account ID string was copied into the OutBuffer.\n\x09 *         EOS_Success - The OutBuffer was filled, and InOutBufferLength contains the number of characters copied into OutBuffer excluding the null terminator.\n\x09 *         EOS_InvalidParameters - Either OutBuffer or InOutBufferLength were passed as NULL parameters.\n\x09 *         EOS_InvalidUser - The AccountId is invalid and cannot be string-ified\n\x09 *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the account ID string. InOutBufferLength contains the required minimum length to perform the operation successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "Retrieve a string-ified account ID from an EOS_ProductUserId. This is useful for replication of Product User IDs in multiplayer games.\n\n@param AccountId The account ID for which to retrieve the string-ified version.\n@param OutBuffer The buffer into which the character data should be written\n@param InOutBufferLength The size of the OutBuffer in characters.\n                         The input buffer should include enough space to be null-terminated.\n                         When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.\n\n@return An EOS_EResult that indicates whether the account ID string was copied into the OutBuffer.\n        EOS_Success - The OutBuffer was filled, and InOutBufferLength contains the number of characters copied into OutBuffer excluding the null terminator.\n        EOS_InvalidParameters - Either OutBuffer or InOutBufferLength were passed as NULL parameters.\n        EOS_InvalidUser - The AccountId is invalid and cannot be string-ified\n        EOS_LimitExceeded - The OutBuffer is not large enough to receive the account ID string. InOutBufferLength contains the required minimum length to perform the operation successfully." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "EOSProductUserIdToString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventEOSProductUserIdToString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics
	{
		struct EOSCoreLibrary_eventGetCurrentAccountId_Parms
		{
			FEOSEpicAccountId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetCurrentAccountId_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/*\n\x09* Get the current account id of the last successful login\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "* Get the current account id of the last successful login" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetCurrentAccountId", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetCurrentAccountId_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics
	{
		struct EOSCoreLibrary_eventGetCurrentProductId_Parms
		{
			FEOSProductUserId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetCurrentProductId_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "Comment", "/*\n\x09* Get the current product id of the last successful login\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
		{ "ToolTip", "* Get the current product id of the last successful login" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetCurrentProductId", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetCurrentProductId_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics
	{
		struct EOSCoreLibrary_eventGetLobbyAttributeBool_Parms
		{
			FEOSLobbyAttributeData data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventGetLobbyAttributeBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventGetLobbyAttributeBool_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetLobbyAttributeBool_Parms, data), Z_Construct_UScriptStruct_FEOSLobbyAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Lobby|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetLobbyAttributeBool", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetLobbyAttributeBool_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics
	{
		struct EOSCoreLibrary_eventGetLobbyAttributeDouble_Parms
		{
			FEOSLobbyAttributeData data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetLobbyAttributeDouble_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetLobbyAttributeDouble_Parms, data), Z_Construct_UScriptStruct_FEOSLobbyAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Lobby|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetLobbyAttributeDouble", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetLobbyAttributeDouble_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics
	{
		struct EOSCoreLibrary_eventGetLobbyAttributeInt64_Parms
		{
			FEOSLobbyAttributeData data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetLobbyAttributeInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetLobbyAttributeInt64_Parms, data), Z_Construct_UScriptStruct_FEOSLobbyAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Lobby|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetLobbyAttributeInt64", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetLobbyAttributeInt64_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics
	{
		struct EOSCoreLibrary_eventGetLobbyAttributeString_Parms
		{
			FEOSLobbyAttributeData data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetLobbyAttributeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetLobbyAttributeString_Parms, data), Z_Construct_UScriptStruct_FEOSLobbyAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Lobby|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetLobbyAttributeString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetLobbyAttributeString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics
	{
		struct EOSCoreLibrary_eventGetSessionAttributeBool_Parms
		{
			FEOSSessionsAttributeData data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventGetSessionAttributeBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventGetSessionAttributeBool_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetSessionAttributeBool_Parms, data), Z_Construct_UScriptStruct_FEOSSessionsAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetSessionAttributeBool", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetSessionAttributeBool_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics
	{
		struct EOSCoreLibrary_eventGetSessionAttributeDouble_Parms
		{
			FEOSSessionsAttributeData data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetSessionAttributeDouble_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetSessionAttributeDouble_Parms, data), Z_Construct_UScriptStruct_FEOSSessionsAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetSessionAttributeDouble", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetSessionAttributeDouble_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics
	{
		struct EOSCoreLibrary_eventGetSessionAttributeInt64_Parms
		{
			FEOSSessionsAttributeData data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetSessionAttributeInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetSessionAttributeInt64_Parms, data), Z_Construct_UScriptStruct_FEOSSessionsAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetSessionAttributeInt64", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetSessionAttributeInt64_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics
	{
		struct EOSCoreLibrary_eventGetSessionAttributeString_Parms
		{
			FEOSSessionsAttributeData data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetSessionAttributeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventGetSessionAttributeString_Parms, data), Z_Construct_UScriptStruct_FEOSSessionsAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "GetSessionAttributeString", nullptr, nullptr, sizeof(EOSCoreLibrary_eventGetSessionAttributeString_Parms), Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics
	{
		struct EOSCoreLibrary_eventIsEpicAccountIdIdenticalWith_Parms
		{
			FEOSEpicAccountId a;
			FEOSEpicAccountId b;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventIsEpicAccountIdIdenticalWith_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventIsEpicAccountIdIdenticalWith_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventIsEpicAccountIdIdenticalWith_Parms, b), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventIsEpicAccountIdIdenticalWith_Parms, a), Z_Construct_UScriptStruct_FEOSEpicAccountId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "IsEpicAccountIdIdenticalWith", nullptr, nullptr, sizeof(EOSCoreLibrary_eventIsEpicAccountIdIdenticalWith_Parms), Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics
	{
		struct EOSCoreLibrary_eventIsLobbyIdIdenticalWith_Parms
		{
			FEOSLobbyId a;
			FEOSLobbyId b;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventIsLobbyIdIdenticalWith_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventIsLobbyIdIdenticalWith_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventIsLobbyIdIdenticalWith_Parms, b), Z_Construct_UScriptStruct_FEOSLobbyId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventIsLobbyIdIdenticalWith_Parms, a), Z_Construct_UScriptStruct_FEOSLobbyId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "IsLobbyIdIdenticalWith", nullptr, nullptr, sizeof(EOSCoreLibrary_eventIsLobbyIdIdenticalWith_Parms), Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics
	{
		struct EOSCoreLibrary_eventIsLobbyIdValid_Parms
		{
			FEOSLobbyId id;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventIsLobbyIdValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventIsLobbyIdValid_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventIsLobbyIdValid_Parms, id), Z_Construct_UScriptStruct_FEOSLobbyId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "IsLobbyIdValid", nullptr, nullptr, sizeof(EOSCoreLibrary_eventIsLobbyIdValid_Parms), Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics
	{
		struct EOSCoreLibrary_eventIsProductUserIdIdenticalWith_Parms
		{
			FEOSProductUserId a;
			FEOSProductUserId b;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCoreLibrary_eventIsProductUserIdIdenticalWith_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreLibrary_eventIsProductUserIdIdenticalWith_Parms), &Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventIsProductUserIdIdenticalWith_Parms, b), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventIsProductUserIdIdenticalWith_Parms, a), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "IsProductUserIdIdenticalWith", nullptr, nullptr, sizeof(EOSCoreLibrary_eventIsProductUserIdIdenticalWith_Parms), Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics
	{
		struct EOSCoreLibrary_eventMakeAccessTokenStruct_Parms
		{
			FString token;
			FAccessToken ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventMakeAccessTokenStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FAccessToken, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventMakeAccessTokenStruct_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::NewProp_token,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "MakeAccessTokenStruct", nullptr, nullptr, sizeof(EOSCoreLibrary_eventMakeAccessTokenStruct_Parms), Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics
	{
		struct EOSCoreLibrary_eventMakeBucketId_Parms
		{
			FString string;
			FBucketId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventMakeBucketId_Parms, ReturnValue), Z_Construct_UScriptStruct_FBucketId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventMakeBucketId_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::NewProp_string,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "MakeBucketId", nullptr, nullptr, sizeof(EOSCoreLibrary_eventMakeBucketId_Parms), Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics
	{
		struct EOSCoreLibrary_eventMakeLobbyInviteIdStruct_Parms
		{
			FString inviteId;
			FLobbyInviteId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inviteId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventMakeLobbyInviteIdStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FLobbyInviteId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::NewProp_inviteId = { "inviteId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventMakeLobbyInviteIdStruct_Parms, inviteId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::NewProp_inviteId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "MakeLobbyInviteIdStruct", nullptr, nullptr, sizeof(EOSCoreLibrary_eventMakeLobbyInviteIdStruct_Parms), Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics
	{
		struct EOSCoreLibrary_eventMakeSessionsInviteId_Parms
		{
			FString string;
			FSessionInviteId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventMakeSessionsInviteId_Parms, ReturnValue), Z_Construct_UScriptStruct_FSessionInviteId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreLibrary_eventMakeSessionsInviteId_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::NewProp_string,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Utilities" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreLibrary, nullptr, "MakeSessionsInviteId", nullptr, nullptr, sizeof(EOSCoreLibrary_eventMakeSessionsInviteId_Parms), Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreLibrary_NoRegister()
	{
		return UEOSCoreLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCoreLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreLibrary_BreakAccessTokenStruct, "BreakAccessTokenStruct" }, // 463840681
		{ &Z_Construct_UFunction_UEOSCoreLibrary_BreakBucketId, "BreakBucketId" }, // 3101491313
		{ &Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyIdStruct, "BreakLobbyIdStruct" }, // 4076851884
		{ &Z_Construct_UFunction_UEOSCoreLibrary_BreakLobbyInviteIdStruct, "BreakLobbyInviteIdStruct" }, // 3501544263
		{ &Z_Construct_UFunction_UEOSCoreLibrary_BreakSessionsInviteId, "BreakSessionsInviteId" }, // 96351073
		{ &Z_Construct_UFunction_UEOSCoreLibrary_BreakUIEventIdStruct, "BreakUIEventIdStruct" }, // 1987261414
		{ &Z_Construct_UFunction_UEOSCoreLibrary_CoreBytesToString, "CoreBytesToString" }, // 721316764
		{ &Z_Construct_UFunction_UEOSCoreLibrary_CoreStringToByte, "CoreStringToByte" }, // 855665609
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOS_Success, "EOS_Success" }, // 3953441342
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSByteArrayToString, "EOSByteArrayToString" }, // 3137795355
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSContinuanceTokenToString, "EOSContinuanceTokenToString" }, // 443500613
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdFromString, "EOSEpicAccountIdFromString" }, // 845829892
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValid, "EOSEpicAccountIdIsValid" }, // 1493776047
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdIsValidPure, "EOSEpicAccountIdIsValidPure" }, // 2116457475
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSEpicAccountIdToString, "EOSEpicAccountIdToString" }, // 2125003949
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultIsOperationComplete, "EOSEResultIsOperationComplete" }, // 545189280
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSEResultToString, "EOSEResultToString" }, // 3056847713
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdFromString, "EOSProductUserIdFromString" }, // 3718675008
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValid, "EOSProductUserIdIsValid" }, // 3502365416
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdIsValidPure, "EOSProductUserIdIsValidPure" }, // 1347978563
		{ &Z_Construct_UFunction_UEOSCoreLibrary_EOSProductUserIdToString, "EOSProductUserIdToString" }, // 1664428812
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentAccountId, "GetCurrentAccountId" }, // 186610175
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetCurrentProductId, "GetCurrentProductId" }, // 2825936750
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeBool, "GetLobbyAttributeBool" }, // 2110041315
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeDouble, "GetLobbyAttributeDouble" }, // 1024133960
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeInt64, "GetLobbyAttributeInt64" }, // 168775560
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetLobbyAttributeString, "GetLobbyAttributeString" }, // 1601577863
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeBool, "GetSessionAttributeBool" }, // 2222757574
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeDouble, "GetSessionAttributeDouble" }, // 1180341299
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeInt64, "GetSessionAttributeInt64" }, // 1160839080
		{ &Z_Construct_UFunction_UEOSCoreLibrary_GetSessionAttributeString, "GetSessionAttributeString" }, // 3509526483
		{ &Z_Construct_UFunction_UEOSCoreLibrary_IsEpicAccountIdIdenticalWith, "IsEpicAccountIdIdenticalWith" }, // 3321391844
		{ &Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdIdenticalWith, "IsLobbyIdIdenticalWith" }, // 172403339
		{ &Z_Construct_UFunction_UEOSCoreLibrary_IsLobbyIdValid, "IsLobbyIdValid" }, // 1797949653
		{ &Z_Construct_UFunction_UEOSCoreLibrary_IsProductUserIdIdenticalWith, "IsProductUserIdIdenticalWith" }, // 2342080407
		{ &Z_Construct_UFunction_UEOSCoreLibrary_MakeAccessTokenStruct, "MakeAccessTokenStruct" }, // 3953538190
		{ &Z_Construct_UFunction_UEOSCoreLibrary_MakeBucketId, "MakeBucketId" }, // 405977399
		{ &Z_Construct_UFunction_UEOSCoreLibrary_MakeLobbyInviteIdStruct, "MakeLobbyInviteIdStruct" }, // 1101590165
		{ &Z_Construct_UFunction_UEOSCoreLibrary_MakeSessionsInviteId, "MakeSessionsInviteId" }, // 2165480049
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/EOSCoreLibrary.h" },
		{ "ModuleRelativePath", "Public/Core/EOSCoreLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreLibrary_Statics::ClassParams = {
		&UEOSCoreLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreLibrary, 3752732204);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreLibrary>()
	{
		return UEOSCoreLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreLibrary(Z_Construct_UClass_UEOSCoreLibrary, &UEOSCoreLibrary::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
