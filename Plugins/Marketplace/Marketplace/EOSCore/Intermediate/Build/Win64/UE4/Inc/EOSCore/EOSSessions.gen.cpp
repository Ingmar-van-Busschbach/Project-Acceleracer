// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/Sessions/EOSSessions.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreSessions_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreSessions();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSActiveSessionInfo();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSActiveSessionCopyInfoOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSHActiveSession();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSProductUserId();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSActiveSessionGetRegisteredPlayerByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSActiveSessionGetRegisteredPlayerCountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionDetailsInfo();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionDetailsCopyInfoOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSHSessionDetails();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionDetailsAttribute();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionDetailsCopySessionAttributeByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionDetailsCopySessionAttributeByKeyOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionDetailsGetSessionAttributeCountOptions();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSESessionAttributeAdvertisementType();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSHSessionModification();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionModificationRemoveAttributeOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionModificationSetBucketIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionModificationSetHostAddressOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionModificationSetInvitesAllowedOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionModificationSetJoinInProgressAllowedOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionModificationSetMaxPlayersOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionModificationSetPermissionLevelOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNotificationId();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionJoinSessionAcceptedCallback__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionInviteAcceptedCallback__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionInviteReceivedCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsCopyActiveSessionHandleOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsCopySessionHandleByInviteIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsCopySessionHandleByUiEventIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsCopySessionHandleForPresenceOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsCreateSessionModificationOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSHSessionSearch();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsCreateSessionSearchOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionDestroySessionCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsDestroySessionOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsDumpSessionStateOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSearchCopySearchResultByIndexOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionFindCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSearchFindOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSearchGetSearchResultCountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSearchRemoveParameterOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSearchSetMaxResultsOptions();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EEOSEComparisonOp();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSearchSetSessionIdOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSearchSetTargetUserIdOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionEndSessionCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsEndSessionOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsGetInviteCountOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsGetInviteIdByIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsIsUserInSessionOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionJoinSessionCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsJoinSessionOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionQueryInvitesCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsQueryInvitesOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionRegisterPlayersCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsRegisterPlayersOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionRejectInviteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsRejectInviteOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionSessionSendInviteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsSendInviteOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionStartSessionCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsStartSessionOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionUnregisterPlayersCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsUnregisterPlayersOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionUpdateSessionCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsUpdateSessionOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionsUpdateSessionModificationOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionJoinSessionAcceptedCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionInviteAcceptedCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionInviteReceivedCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionFindCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionUnregisterPlayersCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionRegisterPlayersCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionEndSessionCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionStartSessionCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionJoinSessionCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionDestroySessionCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionUpdateSessionCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionQueryInvitesCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionRejectInviteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnSessionSessionSendInviteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchRelease)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreSessions::EOSSessionSearchRelease(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionDetailsRelease)
	{
		P_GET_STRUCT_REF(FEOSHSessionDetails,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreSessions::EOSSessionDetailsRelease(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSActiveSessionRelease)
	{
		P_GET_STRUCT_REF(FEOSHActiveSession,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreSessions::EOSActiveSessionRelease(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationRelease)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreSessions::EOSSessionModificationRelease(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchCopySearchResultByIndex)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_STRUCT_REF(FEOSSessionSearchCopySearchResultByIndexOptions,Z_Param_Out_options);
		P_GET_STRUCT_REF(FEOSHSessionDetails,Z_Param_Out_outSessionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionSearchCopySearchResultByIndex(Z_Param_Out_handle,Z_Param_Out_options,Z_Param_Out_outSessionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchGetSearchResultCount)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionSearchGetSearchResultCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreSessions::EOSSessionSearchGetSearchResultCount(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchFind)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionSearchFindOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionSearchFind(Z_Param_Out_handle,Z_Param_options,FOnSessionFindCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchSetMaxResults)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionSearchSetMaxResultsOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionSearchSetMaxResults(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchRemoveParameter)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionSearchRemoveParameterOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionSearchRemoveParameter(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchSetParameterString)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_ENUM(EEOSEComparisonOp,Z_Param_comparisonOp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionSearchSetParameterString(Z_Param_Out_handle,Z_Param_key,Z_Param_value,EEOSEComparisonOp(Z_Param_comparisonOp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchSetParameterInt64)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_ENUM(EEOSEComparisonOp,Z_Param_comparisonOp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionSearchSetParameterInt64(Z_Param_Out_handle,Z_Param_key,Z_Param_value,EEOSEComparisonOp(Z_Param_comparisonOp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchSetParameterDouble)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_ENUM(EEOSEComparisonOp,Z_Param_comparisonOp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionSearchSetParameterDouble(Z_Param_Out_handle,Z_Param_key,Z_Param_value,EEOSEComparisonOp(Z_Param_comparisonOp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchSetParameterBool)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_bValue);
		P_GET_ENUM(EEOSEComparisonOp,Z_Param_comparisonOp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionSearchSetParameterBool(Z_Param_Out_handle,Z_Param_key,Z_Param_bValue,EEOSEComparisonOp(Z_Param_comparisonOp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchSetTargetUserId)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionSearchSetTargetUserIdOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionSearchSetTargetUserId(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionSearchSetSessionId)
	{
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionSearchSetSessionIdOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionSearchSetSessionId(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionDetailsCopySessionAttributeByKey)
	{
		P_GET_STRUCT_REF(FEOSHSessionDetails,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionDetailsCopySessionAttributeByKeyOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSSessionDetailsAttribute,Z_Param_Out_outSessionAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionDetailsCopySessionAttributeByKey(Z_Param_Out_handle,Z_Param_options,Z_Param_Out_outSessionAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionDetailsCopySessionAttributeByIndex)
	{
		P_GET_STRUCT_REF(FEOSHSessionDetails,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionDetailsCopySessionAttributeByIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSSessionDetailsAttribute,Z_Param_Out_outSessionAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionDetailsCopySessionAttributeByIndex(Z_Param_Out_handle,Z_Param_options,Z_Param_Out_outSessionAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionDetailsGetSessionAttributeCount)
	{
		P_GET_STRUCT_REF(FEOSHSessionDetails,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionDetailsGetSessionAttributeCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreSessions::EOSSessionDetailsGetSessionAttributeCount(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionDetailsCopyInfo)
	{
		P_GET_STRUCT_REF(FEOSHSessionDetails,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionDetailsCopyInfoOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSSessionDetailsInfo,Z_Param_Out_outSessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionDetailsCopyInfo(Z_Param_Out_handle,Z_Param_options,Z_Param_Out_outSessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSActiveSessionGetRegisteredPlayerByIndex)
	{
		P_GET_STRUCT_REF(FEOSHActiveSession,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSActiveSessionGetRegisteredPlayerByIndexOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSProductUserId*)Z_Param__Result=UCoreSessions::EOSActiveSessionGetRegisteredPlayerByIndex(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSActiveSessionGetRegisteredPlayerCount)
	{
		P_GET_STRUCT_REF(FEOSHActiveSession,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSActiveSessionGetRegisteredPlayerCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreSessions::EOSActiveSessionGetRegisteredPlayerCount(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSActiveSessionCopyInfo)
	{
		P_GET_STRUCT_REF(FEOSHActiveSession,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSActiveSessionCopyInfoOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSActiveSessionInfo,Z_Param_Out_outActiveSessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSActiveSessionCopyInfo(Z_Param_Out_handle,Z_Param_options,Z_Param_Out_outActiveSessionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationRemoveAttribute)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_STRUCT_REF(FEOSSessionModificationRemoveAttributeOptions,Z_Param_Out_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationRemoveAttribute(Z_Param_Out_handle,Z_Param_Out_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationAddAttributeString)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_ENUM(EEOSESessionAttributeAdvertisementType,Z_Param_advertisementType);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationAddAttributeString(Z_Param_Out_handle,EEOSESessionAttributeAdvertisementType(Z_Param_advertisementType),Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationAddAttributeInt64)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_ENUM(EEOSESessionAttributeAdvertisementType,Z_Param_advertisementType);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationAddAttributeInt64(Z_Param_Out_handle,EEOSESessionAttributeAdvertisementType(Z_Param_advertisementType),Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationAddAttributeDouble)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_ENUM(EEOSESessionAttributeAdvertisementType,Z_Param_advertisementType);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationAddAttributeDouble(Z_Param_Out_handle,EEOSESessionAttributeAdvertisementType(Z_Param_advertisementType),Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationAddAttributeBool)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_ENUM(EEOSESessionAttributeAdvertisementType,Z_Param_advertisementType);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationAddAttributeBool(Z_Param_Out_handle,EEOSESessionAttributeAdvertisementType(Z_Param_advertisementType),Z_Param_key,Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationSetInvitesAllowed)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionModificationSetInvitesAllowedOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationSetInvitesAllowed(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationSetMaxPlayers)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionModificationSetMaxPlayersOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationSetMaxPlayers(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationSetJoinInProgressAllowed)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionModificationSetJoinInProgressAllowedOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationSetJoinInProgressAllowed(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationSetPermissionLevel)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionModificationSetPermissionLevelOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationSetPermissionLevel(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationSetHostAddress)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionModificationSetHostAddressOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationSetHostAddress(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionModificationSetBucketId)
	{
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_handle);
		P_GET_STRUCT(FEOSSessionModificationSetBucketIdOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionModificationSetBucketId(Z_Param_Out_handle,Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsDumpSessionState)
	{
		P_GET_STRUCT(FEOSSessionsDumpSessionStateOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsDumpSessionState(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsIsUserInSession)
	{
		P_GET_STRUCT(FEOSSessionsIsUserInSessionOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsIsUserInSession(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsCopySessionHandleForPresence)
	{
		P_GET_STRUCT(FEOSSessionsCopySessionHandleForPresenceOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSHSessionDetails,Z_Param_Out_outSessionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsCopySessionHandleForPresence(Z_Param_options,Z_Param_Out_outSessionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsCopySessionHandleByUiEventId)
	{
		P_GET_STRUCT(FEOSSessionsCopySessionHandleByUiEventIdOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSHSessionDetails,Z_Param_Out_outSessionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsCopySessionHandleByUiEventId(Z_Param_options,Z_Param_Out_outSessionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsCopySessionHandleByInviteId)
	{
		P_GET_STRUCT(FEOSSessionsCopySessionHandleByInviteIdOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSHSessionDetails,Z_Param_Out_outSessionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsCopySessionHandleByInviteId(Z_Param_options,Z_Param_Out_outSessionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsRemoveNotifyJoinSessionAccepted)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreSessions::EOSSessionsRemoveNotifyJoinSessionAccepted(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsAddNotifyJoinSessionAccepted)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCoreSessions::EOSSessionsAddNotifyJoinSessionAccepted(FOnSessionJoinSessionAcceptedCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsRemoveNotifySessionInviteAccepted)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreSessions::EOSSessionsRemoveNotifySessionInviteAccepted(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsAddNotifySessionInviteAccepted)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCoreSessions::EOSSessionsAddNotifySessionInviteAccepted(FOnSessionInviteAcceptedCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsRemoveNotifySessionInviteReceived)
	{
		P_GET_STRUCT(FEOSNotificationId,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsRemoveNotifySessionInviteReceived(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsAddNotifySessionInviteReceived)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSNotificationId*)Z_Param__Result=UCoreSessions::EOSSessionsAddNotifySessionInviteReceived(FOnSessionInviteReceivedCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsCopyActiveSessionHandle)
	{
		P_GET_STRUCT(FEOSSessionsCopyActiveSessionHandleOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSHActiveSession,Z_Param_Out_outSessionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsCopyActiveSessionHandle(Z_Param_options,Z_Param_Out_outSessionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsCreateSessionSearch)
	{
		P_GET_STRUCT(FEOSSessionsCreateSessionSearchOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSHSessionSearch,Z_Param_Out_outSessionSearchHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsCreateSessionSearch(Z_Param_options,Z_Param_Out_outSessionSearchHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsGetInviteIdByIndex)
	{
		P_GET_STRUCT(FEOSSessionsGetInviteIdByIndexOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsGetInviteIdByIndex(Z_Param_options,Z_Param_Out_outBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsGetInviteCount)
	{
		P_GET_STRUCT(FEOSSessionsGetInviteCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreSessions::EOSSessionsGetInviteCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsQueryInvites)
	{
		P_GET_STRUCT(FEOSSessionsQueryInvitesOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsQueryInvites(Z_Param_options,FOnSessionQueryInvitesCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsRejectInvite)
	{
		P_GET_STRUCT(FEOSSessionsRejectInviteOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsRejectInvite(Z_Param_options,FOnSessionRejectInviteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsSendInvite)
	{
		P_GET_STRUCT(FEOSSessionsSendInviteOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsSendInvite(Z_Param_options,FOnSessionSessionSendInviteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsUnregisterPlayers)
	{
		P_GET_STRUCT(FEOSSessionsUnregisterPlayersOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsUnregisterPlayers(Z_Param_options,FOnSessionUnregisterPlayersCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsRegisterPlayers)
	{
		P_GET_STRUCT(FEOSSessionsRegisterPlayersOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsRegisterPlayers(Z_Param_options,FOnSessionRegisterPlayersCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsEndSession)
	{
		P_GET_STRUCT(FEOSSessionsEndSessionOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsEndSession(Z_Param_options,FOnSessionEndSessionCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsStartSession)
	{
		P_GET_STRUCT(FEOSSessionsStartSessionOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsStartSession(Z_Param_options,FOnSessionStartSessionCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsJoinSession)
	{
		P_GET_STRUCT(FEOSSessionsJoinSessionOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsJoinSession(Z_Param_options,FOnSessionJoinSessionCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsDestroySession)
	{
		P_GET_STRUCT(FEOSSessionsDestroySessionOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsDestroySession(Z_Param_options,FOnSessionDestroySessionCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsUpdateSession)
	{
		P_GET_STRUCT_REF(FEOSSessionsUpdateSessionOptions,Z_Param_Out_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSSessionsUpdateSession(Z_Param_Out_options,FOnSessionUpdateSessionCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsUpdateSessionModification)
	{
		P_GET_STRUCT(FEOSSessionsUpdateSessionModificationOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_outSessionModificationHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsUpdateSessionModification(Z_Param_options,Z_Param_Out_outSessionModificationHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execEOSSessionsCreateSessionModification)
	{
		P_GET_STRUCT(FEOSSessionsCreateSessionModificationOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSHSessionModification,Z_Param_Out_outSessionModificationHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreSessions::EOSSessionsCreateSessionModification(Z_Param_options,Z_Param_Out_outSessionModificationHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSessions::execGetSessions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreSessions**)Z_Param__Result=UCoreSessions::GetSessions();
		P_NATIVE_END;
	}
	void UCoreSessions::StaticRegisterNativesUCoreSessions()
	{
		UClass* Class = UCoreSessions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSActiveSessionCopyInfo", &UCoreSessions::execEOSActiveSessionCopyInfo },
			{ "EOSActiveSessionGetRegisteredPlayerByIndex", &UCoreSessions::execEOSActiveSessionGetRegisteredPlayerByIndex },
			{ "EOSActiveSessionGetRegisteredPlayerCount", &UCoreSessions::execEOSActiveSessionGetRegisteredPlayerCount },
			{ "EOSActiveSessionRelease", &UCoreSessions::execEOSActiveSessionRelease },
			{ "EOSSessionDetailsCopyInfo", &UCoreSessions::execEOSSessionDetailsCopyInfo },
			{ "EOSSessionDetailsCopySessionAttributeByIndex", &UCoreSessions::execEOSSessionDetailsCopySessionAttributeByIndex },
			{ "EOSSessionDetailsCopySessionAttributeByKey", &UCoreSessions::execEOSSessionDetailsCopySessionAttributeByKey },
			{ "EOSSessionDetailsGetSessionAttributeCount", &UCoreSessions::execEOSSessionDetailsGetSessionAttributeCount },
			{ "EOSSessionDetailsRelease", &UCoreSessions::execEOSSessionDetailsRelease },
			{ "EOSSessionModificationAddAttributeBool", &UCoreSessions::execEOSSessionModificationAddAttributeBool },
			{ "EOSSessionModificationAddAttributeDouble", &UCoreSessions::execEOSSessionModificationAddAttributeDouble },
			{ "EOSSessionModificationAddAttributeInt64", &UCoreSessions::execEOSSessionModificationAddAttributeInt64 },
			{ "EOSSessionModificationAddAttributeString", &UCoreSessions::execEOSSessionModificationAddAttributeString },
			{ "EOSSessionModificationRelease", &UCoreSessions::execEOSSessionModificationRelease },
			{ "EOSSessionModificationRemoveAttribute", &UCoreSessions::execEOSSessionModificationRemoveAttribute },
			{ "EOSSessionModificationSetBucketId", &UCoreSessions::execEOSSessionModificationSetBucketId },
			{ "EOSSessionModificationSetHostAddress", &UCoreSessions::execEOSSessionModificationSetHostAddress },
			{ "EOSSessionModificationSetInvitesAllowed", &UCoreSessions::execEOSSessionModificationSetInvitesAllowed },
			{ "EOSSessionModificationSetJoinInProgressAllowed", &UCoreSessions::execEOSSessionModificationSetJoinInProgressAllowed },
			{ "EOSSessionModificationSetMaxPlayers", &UCoreSessions::execEOSSessionModificationSetMaxPlayers },
			{ "EOSSessionModificationSetPermissionLevel", &UCoreSessions::execEOSSessionModificationSetPermissionLevel },
			{ "EOSSessionsAddNotifyJoinSessionAccepted", &UCoreSessions::execEOSSessionsAddNotifyJoinSessionAccepted },
			{ "EOSSessionsAddNotifySessionInviteAccepted", &UCoreSessions::execEOSSessionsAddNotifySessionInviteAccepted },
			{ "EOSSessionsAddNotifySessionInviteReceived", &UCoreSessions::execEOSSessionsAddNotifySessionInviteReceived },
			{ "EOSSessionsCopyActiveSessionHandle", &UCoreSessions::execEOSSessionsCopyActiveSessionHandle },
			{ "EOSSessionsCopySessionHandleByInviteId", &UCoreSessions::execEOSSessionsCopySessionHandleByInviteId },
			{ "EOSSessionsCopySessionHandleByUiEventId", &UCoreSessions::execEOSSessionsCopySessionHandleByUiEventId },
			{ "EOSSessionsCopySessionHandleForPresence", &UCoreSessions::execEOSSessionsCopySessionHandleForPresence },
			{ "EOSSessionsCreateSessionModification", &UCoreSessions::execEOSSessionsCreateSessionModification },
			{ "EOSSessionsCreateSessionSearch", &UCoreSessions::execEOSSessionsCreateSessionSearch },
			{ "EOSSessionsDestroySession", &UCoreSessions::execEOSSessionsDestroySession },
			{ "EOSSessionsDumpSessionState", &UCoreSessions::execEOSSessionsDumpSessionState },
			{ "EOSSessionSearchCopySearchResultByIndex", &UCoreSessions::execEOSSessionSearchCopySearchResultByIndex },
			{ "EOSSessionSearchFind", &UCoreSessions::execEOSSessionSearchFind },
			{ "EOSSessionSearchGetSearchResultCount", &UCoreSessions::execEOSSessionSearchGetSearchResultCount },
			{ "EOSSessionSearchRelease", &UCoreSessions::execEOSSessionSearchRelease },
			{ "EOSSessionSearchRemoveParameter", &UCoreSessions::execEOSSessionSearchRemoveParameter },
			{ "EOSSessionSearchSetMaxResults", &UCoreSessions::execEOSSessionSearchSetMaxResults },
			{ "EOSSessionSearchSetParameterBool", &UCoreSessions::execEOSSessionSearchSetParameterBool },
			{ "EOSSessionSearchSetParameterDouble", &UCoreSessions::execEOSSessionSearchSetParameterDouble },
			{ "EOSSessionSearchSetParameterInt64", &UCoreSessions::execEOSSessionSearchSetParameterInt64 },
			{ "EOSSessionSearchSetParameterString", &UCoreSessions::execEOSSessionSearchSetParameterString },
			{ "EOSSessionSearchSetSessionId", &UCoreSessions::execEOSSessionSearchSetSessionId },
			{ "EOSSessionSearchSetTargetUserId", &UCoreSessions::execEOSSessionSearchSetTargetUserId },
			{ "EOSSessionsEndSession", &UCoreSessions::execEOSSessionsEndSession },
			{ "EOSSessionsGetInviteCount", &UCoreSessions::execEOSSessionsGetInviteCount },
			{ "EOSSessionsGetInviteIdByIndex", &UCoreSessions::execEOSSessionsGetInviteIdByIndex },
			{ "EOSSessionsIsUserInSession", &UCoreSessions::execEOSSessionsIsUserInSession },
			{ "EOSSessionsJoinSession", &UCoreSessions::execEOSSessionsJoinSession },
			{ "EOSSessionsQueryInvites", &UCoreSessions::execEOSSessionsQueryInvites },
			{ "EOSSessionsRegisterPlayers", &UCoreSessions::execEOSSessionsRegisterPlayers },
			{ "EOSSessionsRejectInvite", &UCoreSessions::execEOSSessionsRejectInvite },
			{ "EOSSessionsRemoveNotifyJoinSessionAccepted", &UCoreSessions::execEOSSessionsRemoveNotifyJoinSessionAccepted },
			{ "EOSSessionsRemoveNotifySessionInviteAccepted", &UCoreSessions::execEOSSessionsRemoveNotifySessionInviteAccepted },
			{ "EOSSessionsRemoveNotifySessionInviteReceived", &UCoreSessions::execEOSSessionsRemoveNotifySessionInviteReceived },
			{ "EOSSessionsSendInvite", &UCoreSessions::execEOSSessionsSendInvite },
			{ "EOSSessionsStartSession", &UCoreSessions::execEOSSessionsStartSession },
			{ "EOSSessionsUnregisterPlayers", &UCoreSessions::execEOSSessionsUnregisterPlayers },
			{ "EOSSessionsUpdateSession", &UCoreSessions::execEOSSessionsUpdateSession },
			{ "EOSSessionsUpdateSessionModification", &UCoreSessions::execEOSSessionsUpdateSessionModification },
			{ "GetSessions", &UCoreSessions::execGetSessions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics
	{
		struct CoreSessions_eventEOSActiveSessionCopyInfo_Parms
		{
			FEOSHActiveSession handle;
			FEOSActiveSessionCopyInfoOptions options;
			FEOSActiveSessionInfo outActiveSessionInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outActiveSessionInfo;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionCopyInfo_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_outActiveSessionInfo = { "outActiveSessionInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionCopyInfo_Parms, outActiveSessionInfo), Z_Construct_UScriptStruct_FEOSActiveSessionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionCopyInfo_Parms, options), Z_Construct_UScriptStruct_FEOSActiveSessionCopyInfoOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionCopyInfo_Parms, handle), Z_Construct_UScriptStruct_FEOSHActiveSession, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_outActiveSessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09  * EOS_ActiveSession_CopyInfo is used to immediately retrieve a copy of active session information\n\x09  * If the call returns an EOS_Success result, the out parameter, OutActiveSessionInfo, must be passed to EOS_ActiveSession_Info_Release to release the memory associated with it.\n\x09  *\n\x09  * @param Options Structure containing the input parameters\n\x09  * @param OutActiveSessionInfo Out parameter used to receive the EOS_ActiveSession_Info structure.\n\x09  *\n\x09  * @return EOS_Success if the information is available and passed out in OutActiveSessionInfo\n\x09  *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n\x09  *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09  *\n\x09  * @see EOS_ActiveSession_Info\n\x09  * @see EOS_ActiveSession_CopyInfoOptions\n\x09  * @see EOS_ActiveSession_Info_Release\n\x09  */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_ActiveSession_CopyInfo is used to immediately retrieve a copy of active session information\nIf the call returns an EOS_Success result, the out parameter, OutActiveSessionInfo, must be passed to EOS_ActiveSession_Info_Release to release the memory associated with it.\n\n@param Options Structure containing the input parameters\n@param OutActiveSessionInfo Out parameter used to receive the EOS_ActiveSession_Info structure.\n\n@return EOS_Success if the information is available and passed out in OutActiveSessionInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n\n@see EOS_ActiveSession_Info\n@see EOS_ActiveSession_CopyInfoOptions\n@see EOS_ActiveSession_Info_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSActiveSessionCopyInfo", nullptr, nullptr, sizeof(CoreSessions_eventEOSActiveSessionCopyInfo_Parms), Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics
	{
		struct CoreSessions_eventEOSActiveSessionGetRegisteredPlayerByIndex_Parms
		{
			FEOSHActiveSession handle;
			FEOSActiveSessionGetRegisteredPlayerByIndexOptions options;
			FEOSProductUserId ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionGetRegisteredPlayerByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSProductUserId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionGetRegisteredPlayerByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSActiveSessionGetRegisteredPlayerByIndexOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionGetRegisteredPlayerByIndex_Parms, handle), Z_Construct_UScriptStruct_FEOSHActiveSession, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * EOS_ActiveSession_GetRegisteredPlayerByIndex is used to immediately retrieve individual players registered with the active session.\n\x09 *\n\x09 * @param Options Structure containing the input parameters\n\x09 *\n\x09 * @return the product user id for the registered player at a given index or null if that index is invalid\n\x09 *\n\x09 * @see EOS_ActiveSession_GetRegisteredPlayerCount\n\x09 * @see EOS_ActiveSession_GetRegisteredPlayerByIndexOptions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_ActiveSession_GetRegisteredPlayerByIndex is used to immediately retrieve individual players registered with the active session.\n\n@param Options Structure containing the input parameters\n\n@return the product user id for the registered player at a given index or null if that index is invalid\n\n@see EOS_ActiveSession_GetRegisteredPlayerCount\n@see EOS_ActiveSession_GetRegisteredPlayerByIndexOptions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSActiveSessionGetRegisteredPlayerByIndex", nullptr, nullptr, sizeof(CoreSessions_eventEOSActiveSessionGetRegisteredPlayerByIndex_Parms), Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics
	{
		struct CoreSessions_eventEOSActiveSessionGetRegisteredPlayerCount_Parms
		{
			FEOSHActiveSession handle;
			FEOSActiveSessionGetRegisteredPlayerCountOptions options;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionGetRegisteredPlayerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionGetRegisteredPlayerCount_Parms, options), Z_Construct_UScriptStruct_FEOSActiveSessionGetRegisteredPlayerCountOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionGetRegisteredPlayerCount_Parms, handle), Z_Construct_UScriptStruct_FEOSHActiveSession, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Get the number of registered players associated with this active session\n\x09 *\n\x09 * @param Options the Options associated with retrieving the registered player count\n\x09 *\n\x09 * @return number of registered players in the active session or 0 if there is an error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Get the number of registered players associated with this active session\n\n@param Options the Options associated with retrieving the registered player count\n\n@return number of registered players in the active session or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSActiveSessionGetRegisteredPlayerCount", nullptr, nullptr, sizeof(CoreSessions_eventEOSActiveSessionGetRegisteredPlayerCount_Parms), Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics
	{
		struct CoreSessions_eventEOSActiveSessionRelease_Parms
		{
			FEOSHActiveSession handle;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSActiveSessionRelease_Parms, handle), Z_Construct_UScriptStruct_FEOSHActiveSession, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Memory" },
		{ "Comment", "/**\n\x09 * Release the memory associated with an active session.\n\x09 * This must be called on data retrieved from EOS_Sessions_CopyActiveSessionHandle\n\x09 *\n\x09 * @param ActiveSessionHandle - The active session handle to release\n\x09 *\n\x09 * @see EOS_Sessions_CopyActiveSessionHandle\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Release the memory associated with an active session.\nThis must be called on data retrieved from EOS_Sessions_CopyActiveSessionHandle\n\n@param ActiveSessionHandle - The active session handle to release\n\n@see EOS_Sessions_CopyActiveSessionHandle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSActiveSessionRelease", nullptr, nullptr, sizeof(CoreSessions_eventEOSActiveSessionRelease_Parms), Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics
	{
		struct CoreSessions_eventEOSSessionDetailsCopyInfo_Parms
		{
			FEOSHSessionDetails handle;
			FEOSSessionDetailsCopyInfoOptions options;
			FEOSSessionDetailsInfo outSessionInfo;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionInfo;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopyInfo_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_outSessionInfo = { "outSessionInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopyInfo_Parms, outSessionInfo), Z_Construct_UScriptStruct_FEOSSessionDetailsInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopyInfo_Parms, options), Z_Construct_UScriptStruct_FEOSSessionDetailsCopyInfoOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopyInfo_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionDetails, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_outSessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09  * EOS_SessionDetails_CopyInfo is used to immediately retrieve a copy of session information from a given source such as a active session or a search result.\n\x09  * If the call returns an EOS_Success result, the out parameter, OutSessionInfo, must be passed to EOS_SessionDetails_Info_Release to release the memory associated with it.\n\x09  *\n\x09  * @param Options Structure containing the input parameters\n\x09  * @param OutSessionInfo Out parameter used to receive the EOS_SessionDetails_Info structure.\n\x09  *\n\x09  * @return EOS_Success if the information is available and passed out in OutSessionInfo\n\x09  *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n\x09  *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09  *\n\x09  * @see EOS_SessionDetails_Info\n\x09  * @see EOS_SessionDetails_CopyInfoOptions\n\x09  * @see EOS_SessionDetails_Info_Release\n\x09  */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_SessionDetails_CopyInfo is used to immediately retrieve a copy of session information from a given source such as a active session or a search result.\nIf the call returns an EOS_Success result, the out parameter, OutSessionInfo, must be passed to EOS_SessionDetails_Info_Release to release the memory associated with it.\n\n@param Options Structure containing the input parameters\n@param OutSessionInfo Out parameter used to receive the EOS_SessionDetails_Info structure.\n\n@return EOS_Success if the information is available and passed out in OutSessionInfo\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n\n@see EOS_SessionDetails_Info\n@see EOS_SessionDetails_CopyInfoOptions\n@see EOS_SessionDetails_Info_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionDetailsCopyInfo", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionDetailsCopyInfo_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics
	{
		struct CoreSessions_eventEOSSessionDetailsCopySessionAttributeByIndex_Parms
		{
			FEOSHSessionDetails handle;
			FEOSSessionDetailsCopySessionAttributeByIndexOptions options;
			FEOSSessionDetailsAttribute outSessionAttribute;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionAttribute;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_outSessionAttribute = { "outSessionAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByIndex_Parms, outSessionAttribute), Z_Construct_UScriptStruct_FEOSSessionDetailsAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSSessionDetailsCopySessionAttributeByIndexOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByIndex_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionDetails, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_outSessionAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * EOS_SessionDetails_CopySessionAttributeByIndex is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result.\n\x09 * If the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it.\n\x09 *\n\x09 * @param Options Structure containing the input parameters\n\x09 * @param OutSessionAttribute Out parameter used to receive the EOS_SessionDetails_Attribute structure.\n\x09 *\n\x09 * @return EOS_Success if the information is available and passed out in OutSessionAttribute\n\x09 *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *\n\x09 * @see EOS_SessionDetails_Attribute\n\x09 * @see EOS_SessionDetails_CopySessionAttributeByIndexOptions\n\x09 * @see EOS_SessionDetails_Attribute_Release\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_SessionDetails_CopySessionAttributeByIndex is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result.\nIf the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it.\n\n@param Options Structure containing the input parameters\n@param OutSessionAttribute Out parameter used to receive the EOS_SessionDetails_Attribute structure.\n\n@return EOS_Success if the information is available and passed out in OutSessionAttribute\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n\n@see EOS_SessionDetails_Attribute\n@see EOS_SessionDetails_CopySessionAttributeByIndexOptions\n@see EOS_SessionDetails_Attribute_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionDetailsCopySessionAttributeByIndex", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByIndex_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics
	{
		struct CoreSessions_eventEOSSessionDetailsCopySessionAttributeByKey_Parms
		{
			FEOSHSessionDetails handle;
			FEOSSessionDetailsCopySessionAttributeByKeyOptions options;
			FEOSSessionDetailsAttribute outSessionAttribute;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionAttribute;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByKey_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_outSessionAttribute = { "outSessionAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByKey_Parms, outSessionAttribute), Z_Construct_UScriptStruct_FEOSSessionDetailsAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByKey_Parms, options), Z_Construct_UScriptStruct_FEOSSessionDetailsCopySessionAttributeByKeyOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByKey_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionDetails, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_outSessionAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * EOS_SessionDetails_CopySessionAttributeByKey is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result.\n\x09 * If the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it.\n\x09 *\n\x09 * @param Options Structure containing the input parameters\n\x09 * @param OutSessionAttribute Out parameter used to receive the EOS_SessionDetails_Attribute structure.\n\x09 *\n\x09 * @return EOS_Success if the information is available and passed out in OutSessionAttribute\n\x09 *         EOS_InvalidParameters if you pass a null pointer for the out parameter\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *\n\x09 * @see EOS_SessionDetails_Attribute\n\x09 * @see EOS_SessionDetails_CopySessionAttributeByKeyOptions\n\x09 * @see EOS_SessionDetails_Attribute_Release\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_SessionDetails_CopySessionAttributeByKey is used to immediately retrieve a copy of session attribution from a given source such as a active session or a search result.\nIf the call returns an EOS_Success result, the out parameter, OutSessionAttribute, must be passed to EOS_SessionDetails_Attribute_Release to release the memory associated with it.\n\n@param Options Structure containing the input parameters\n@param OutSessionAttribute Out parameter used to receive the EOS_SessionDetails_Attribute structure.\n\n@return EOS_Success if the information is available and passed out in OutSessionAttribute\n        EOS_InvalidParameters if you pass a null pointer for the out parameter\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n\n@see EOS_SessionDetails_Attribute\n@see EOS_SessionDetails_CopySessionAttributeByKeyOptions\n@see EOS_SessionDetails_Attribute_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionDetailsCopySessionAttributeByKey", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionDetailsCopySessionAttributeByKey_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics
	{
		struct CoreSessions_eventEOSSessionDetailsGetSessionAttributeCount_Parms
		{
			FEOSHSessionDetails handle;
			FEOSSessionDetailsGetSessionAttributeCountOptions options;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsGetSessionAttributeCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsGetSessionAttributeCount_Parms, options), Z_Construct_UScriptStruct_FEOSSessionDetailsGetSessionAttributeCountOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsGetSessionAttributeCount_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionDetails, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Get the number of attributes associated with this session\n\x09 *\n\x09 * @param Options the Options associated with retrieving the attribute count\n\x09 *\n\x09 * @return number of attributes on the session or 0 if there is an error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Get the number of attributes associated with this session\n\n@param Options the Options associated with retrieving the attribute count\n\n@return number of attributes on the session or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionDetailsGetSessionAttributeCount", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionDetailsGetSessionAttributeCount_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics
	{
		struct CoreSessions_eventEOSSessionDetailsRelease_Parms
		{
			FEOSHSessionDetails handle;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionDetailsRelease_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionDetails, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Memory" },
		{ "Comment", "/**\n\x09 * Release the memory associated with a single session. This must be called on data retrieved from EOS_SessionSearch_CopySearchResultByIndex.\n\x09 *\n\x09 * @param SessionHandle - The session handle to release\n\x09 *\n\x09 * @see EOS_SessionSearch_CopySearchResultByIndex\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Release the memory associated with a single session. This must be called on data retrieved from EOS_SessionSearch_CopySearchResultByIndex.\n\n@param SessionHandle - The session handle to release\n\n@see EOS_SessionSearch_CopySearchResultByIndex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionDetailsRelease", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionDetailsRelease_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics
	{
		struct CoreSessions_eventEOSSessionModificationAddAttributeBool_Parms
		{
			FEOSHSessionModification handle;
			EEOSESessionAttributeAdvertisementType advertisementType;
			FString key;
			bool bValue;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_advertisementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_advertisementType_Underlying;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeBool_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((CoreSessions_eventEOSSessionModificationAddAttributeBool_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreSessions_eventEOSSessionModificationAddAttributeBool_Parms), &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeBool_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_advertisementType = { "advertisementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeBool_Parms, advertisementType), Z_Construct_UEnum_EOSCore_EEOSESessionAttributeAdvertisementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_advertisementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeBool_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_bValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_advertisementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_advertisementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Associate an attribute with this session\n\x09 * An attribute is something that may or may not be advertised with the session.\n\x09 * If advertised, it can be queried for in a search, otherwise the data remains local to the client\n\x09 *\n\x09 * @param Options Options to set the attribute and its advertised state\n\x09 *\n\x09 * @return EOS_Success if setting this parameter was successful\n\x09 *\x09\x09   EOS_InvalidParameters if the attribution is missing information or otherwise invalid\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Associate an attribute with this session\nAn attribute is something that may or may not be advertised with the session.\nIf advertised, it can be queried for in a search, otherwise the data remains local to the client\n\n@param Options Options to set the attribute and its advertised state\n\n@return EOS_Success if setting this parameter was successful\n                EOS_InvalidParameters if the attribution is missing information or otherwise invalid\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationAddAttributeBool", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationAddAttributeBool_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics
	{
		struct CoreSessions_eventEOSSessionModificationAddAttributeDouble_Parms
		{
			FEOSHSessionModification handle;
			EEOSESessionAttributeAdvertisementType advertisementType;
			FString key;
			FString value;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_advertisementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_advertisementType_Underlying;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeDouble_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeDouble_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeDouble_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_advertisementType = { "advertisementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeDouble_Parms, advertisementType), Z_Construct_UEnum_EOSCore_EEOSESessionAttributeAdvertisementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_advertisementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeDouble_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_advertisementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_advertisementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09* Associate an attribute with this session\n\x09* An attribute is something that may or may not be advertised with the session.\n\x09* If advertised, it can be queried for in a search, otherwise the data remains local to the client\n\x09*\n\x09* @param Options Options to set the attribute and its advertised state\n\x09*\n\x09* @return EOS_Success if setting this parameter was successful\n\x09*\x09\x09   EOS_InvalidParameters if the attribution is missing information or otherwise invalid\n\x09*         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09*/" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Associate an attribute with this session\nAn attribute is something that may or may not be advertised with the session.\nIf advertised, it can be queried for in a search, otherwise the data remains local to the client\n\n@param Options Options to set the attribute and its advertised state\n\n@return EOS_Success if setting this parameter was successful\n                 EOS_InvalidParameters if the attribution is missing information or otherwise invalid\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationAddAttributeDouble", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationAddAttributeDouble_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics
	{
		struct CoreSessions_eventEOSSessionModificationAddAttributeInt64_Parms
		{
			FEOSHSessionModification handle;
			EEOSESessionAttributeAdvertisementType advertisementType;
			FString key;
			FString value;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_advertisementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_advertisementType_Underlying;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeInt64_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeInt64_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeInt64_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_advertisementType = { "advertisementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeInt64_Parms, advertisementType), Z_Construct_UEnum_EOSCore_EEOSESessionAttributeAdvertisementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_advertisementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeInt64_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_advertisementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_advertisementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Associate an attribute with this session\n\x09 * An attribute is something that may or may not be advertised with the session.\n\x09 * If advertised, it can be queried for in a search, otherwise the data remains local to the client\n\x09 *\n\x09 * @param Options Options to set the attribute and its advertised state\n\x09 *\n\x09 * @return EOS_Success if setting this parameter was successful\n\x09 *\x09\x09   EOS_InvalidParameters if the attribution is missing information or otherwise invalid\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Associate an attribute with this session\nAn attribute is something that may or may not be advertised with the session.\nIf advertised, it can be queried for in a search, otherwise the data remains local to the client\n\n@param Options Options to set the attribute and its advertised state\n\n@return EOS_Success if setting this parameter was successful\n                EOS_InvalidParameters if the attribution is missing information or otherwise invalid\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationAddAttributeInt64", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationAddAttributeInt64_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics
	{
		struct CoreSessions_eventEOSSessionModificationAddAttributeString_Parms
		{
			FEOSHSessionModification handle;
			EEOSESessionAttributeAdvertisementType advertisementType;
			FString key;
			FString value;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_advertisementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_advertisementType_Underlying;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeString_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeString_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeString_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_advertisementType = { "advertisementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeString_Parms, advertisementType), Z_Construct_UEnum_EOSCore_EEOSESessionAttributeAdvertisementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_advertisementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationAddAttributeString_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_advertisementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_advertisementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Associate an attribute with this session\n\x09 * An attribute is something that may or may not be advertised with the session.\n\x09 * If advertised, it can be queried for in a search, otherwise the data remains local to the client\n\x09 *\n\x09 * @param Options Options to set the attribute and its advertised state\n\x09 *\n\x09 * @return EOS_Success if setting this parameter was successful\n\x09 *\x09\x09   EOS_InvalidParameters if the attribution is missing information or otherwise invalid\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Associate an attribute with this session\nAn attribute is something that may or may not be advertised with the session.\nIf advertised, it can be queried for in a search, otherwise the data remains local to the client\n\n@param Options Options to set the attribute and its advertised state\n\n@return EOS_Success if setting this parameter was successful\n                EOS_InvalidParameters if the attribution is missing information or otherwise invalid\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationAddAttributeString", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationAddAttributeString_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics
	{
		struct CoreSessions_eventEOSSessionModificationRelease_Parms
		{
			FEOSHSessionModification handle;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationRelease_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Memory" },
		{ "Comment", "/**\n\x09* Release the memory associated with session modification.\n\x09* This must be called on data retrieved from EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification\n\x09*\n\x09* @param SessionModificationHandle - The session modification handle to release\n\x09*\n\x09* @see EOS_Sessions_CreateSessionModification\n\x09* @see EOS_Sessions_UpdateSessionModification\n\x09*/" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Release the memory associated with session modification.\nThis must be called on data retrieved from EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification\n\n@param SessionModificationHandle - The session modification handle to release\n\n@see EOS_Sessions_CreateSessionModification\n@see EOS_Sessions_UpdateSessionModification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationRelease", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationRelease_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics
	{
		struct CoreSessions_eventEOSSessionModificationRemoveAttribute_Parms
		{
			FEOSHSessionModification handle;
			FEOSSessionModificationRemoveAttributeOptions options;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_options_MetaData[];
#endif
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationRemoveAttribute_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationRemoveAttribute_Parms, options), Z_Construct_UScriptStruct_FEOSSessionModificationRemoveAttributeOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationRemoveAttribute_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Remove an attribute from this session\n\x09 *\n\x09 * @param Options Specify the key of the attribute to remove\n\x09 *\n\x09 * @return EOS_Success if removing this parameter was successful\n\x09 *\x09\x09   EOS_InvalidParameters if the key is null or empty\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Remove an attribute from this session\n\n@param Options Specify the key of the attribute to remove\n\n@return EOS_Success if removing this parameter was successful\n                EOS_InvalidParameters if the key is null or empty\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationRemoveAttribute", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationRemoveAttribute_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics
	{
		struct CoreSessions_eventEOSSessionModificationSetBucketId_Parms
		{
			FEOSHSessionModification handle;
			FEOSSessionModificationSetBucketIdOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetBucketId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetBucketId_Parms, options), Z_Construct_UScriptStruct_FEOSSessionModificationSetBucketIdOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetBucketId_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09  * Set the bucket id associated with this session.\n\x09  * Values such as region, game mode, etc can be combined here depending on game need.\n\x09  * Setting this is strongly recommended to improve search performance.\n\x09  *\n\x09  * @param Options Options associated with the bucket id of the session\n\x09  *\n\x09  * @return EOS_Success if setting this parameter was successful\n\x09  *         EOS_InvalidParameters if the bucket id is invalid or null\n\x09  *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09  */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Set the bucket id associated with this session.\nValues such as region, game mode, etc can be combined here depending on game need.\nSetting this is strongly recommended to improve search performance.\n\n@param Options Options associated with the bucket id of the session\n\n@return EOS_Success if setting this parameter was successful\n        EOS_InvalidParameters if the bucket id is invalid or null\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationSetBucketId", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationSetBucketId_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics
	{
		struct CoreSessions_eventEOSSessionModificationSetHostAddress_Parms
		{
			FEOSHSessionModification handle;
			FEOSSessionModificationSetHostAddressOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetHostAddress_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetHostAddress_Parms, options), Z_Construct_UScriptStruct_FEOSSessionModificationSetHostAddressOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetHostAddress_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Set the host address associated with this session\n\x09 * Setting this is optional, if the value is not set the SDK will fill the value in from the service.\n\x09 * It is useful to set if other addressing mechanisms are desired or if LAN addresses are preferred during development\n\x09 *\n\x09 * NOTE: No validation of this value occurs to allow for flexibility in addressing methods\n\x09 *\n\x09 * @param Options Options associated with the host address of the session\n\x09 *\n\x09 * @return EOS_Success if setting this parameter was successful\n\x09 *         EOS_InvalidParameters if the host id is an empty string\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Set the host address associated with this session\nSetting this is optional, if the value is not set the SDK will fill the value in from the service.\nIt is useful to set if other addressing mechanisms are desired or if LAN addresses are preferred during development\n\nNOTE: No validation of this value occurs to allow for flexibility in addressing methods\n\n@param Options Options associated with the host address of the session\n\n@return EOS_Success if setting this parameter was successful\n        EOS_InvalidParameters if the host id is an empty string\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationSetHostAddress", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationSetHostAddress_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics
	{
		struct CoreSessions_eventEOSSessionModificationSetInvitesAllowed_Parms
		{
			FEOSHSessionModification handle;
			FEOSSessionModificationSetInvitesAllowedOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetInvitesAllowed_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetInvitesAllowed_Parms, options), Z_Construct_UScriptStruct_FEOSSessionModificationSetInvitesAllowedOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetInvitesAllowed_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Allows enabling or disabling invites for this session.\n\x09 * The session will also need to have `bPresenceEnabled` true.\n\x09 *\n\x09 * @param Options Options associated with invites allowed flag for this session.\n\x09 *\n\x09 * @return EOS_Success if setting this parameter was successful\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Allows enabling or disabling invites for this session.\nThe session will also need to have `bPresenceEnabled` true.\n\n@param Options Options associated with invites allowed flag for this session.\n\n@return EOS_Success if setting this parameter was successful\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationSetInvitesAllowed", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationSetInvitesAllowed_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics
	{
		struct CoreSessions_eventEOSSessionModificationSetJoinInProgressAllowed_Parms
		{
			FEOSHSessionModification handle;
			FEOSSessionModificationSetJoinInProgressAllowedOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetJoinInProgressAllowed_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetJoinInProgressAllowed_Parms, options), Z_Construct_UScriptStruct_FEOSSessionModificationSetJoinInProgressAllowedOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetJoinInProgressAllowed_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Set whether or not join in progress is allowed\n\x09 * Once a session is started, it will no longer be visible to search queries unless this flag is set or the session returns to the pending or ended state\n\x09 *\n\x09 * @param Options Options associated with setting the join in progress state the session\n\x09 *\n\x09 * @return EOS_Success if setting this parameter was successful\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Set whether or not join in progress is allowed\nOnce a session is started, it will no longer be visible to search queries unless this flag is set or the session returns to the pending or ended state\n\n@param Options Options associated with setting the join in progress state the session\n\n@return EOS_Success if setting this parameter was successful\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationSetJoinInProgressAllowed", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationSetJoinInProgressAllowed_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics
	{
		struct CoreSessions_eventEOSSessionModificationSetMaxPlayers_Parms
		{
			FEOSHSessionModification handle;
			FEOSSessionModificationSetMaxPlayersOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetMaxPlayers_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetMaxPlayers_Parms, options), Z_Construct_UScriptStruct_FEOSSessionModificationSetMaxPlayersOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetMaxPlayers_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Set the maximum number of players allowed in this session.\n\x09 * When updating the session, it is not possible to reduce this number below the current number of existing players\n\x09 *\n\x09 * @param Options Options associated with max number of players in this session\n\x09 *\n\x09 * @return EOS_Success if setting this parameter was successful\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Set the maximum number of players allowed in this session.\nWhen updating the session, it is not possible to reduce this number below the current number of existing players\n\n@param Options Options associated with max number of players in this session\n\n@return EOS_Success if setting this parameter was successful\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationSetMaxPlayers", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationSetMaxPlayers_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics
	{
		struct CoreSessions_eventEOSSessionModificationSetPermissionLevel_Parms
		{
			FEOSHSessionModification handle;
			FEOSSessionModificationSetPermissionLevelOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetPermissionLevel_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetPermissionLevel_Parms, options), Z_Construct_UScriptStruct_FEOSSessionModificationSetPermissionLevelOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionModificationSetPermissionLevel_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Set the session permissions associated with this session.\n\x09 * The permissions range from \"public\" to \"invite only\" and are described by EOS_EOnlineSessionPermissionLevel\n\x09 *\n\x09 * @param Options Options associated with the permission level of the session\n\x09 *\n\x09 * @return EOS_Success if setting this parameter was successful\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Set the session permissions associated with this session.\nThe permissions range from \"public\" to \"invite only\" and are described by EOS_EOnlineSessionPermissionLevel\n\n@param Options Options associated with the permission level of the session\n\n@return EOS_Success if setting this parameter was successful\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionModificationSetPermissionLevel", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionModificationSetPermissionLevel_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics
	{
		struct CoreSessions_eventEOSSessionsAddNotifyJoinSessionAccepted_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsAddNotifyJoinSessionAccepted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsAddNotifyJoinSessionAccepted_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionJoinSessionAcceptedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Register to receive notifications when a user accepts a session join game via the social overlay.\n\x09 * @note must call RemoveNotifyJoinSessionAccepted to remove the notification\n\x09 *\n\x09 * @param Options Structure containing information about the request.\n\x09 * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate.\n\x09 * @param Notification A callback that is fired when a a notification is received.\n\x09 *\n\x09 * @return handle representing the registered callback\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Register to receive notifications when a user accepts a session join game via the social overlay.\n@note must call RemoveNotifyJoinSessionAccepted to remove the notification\n\n@param Options Structure containing information about the request.\n@param ClientData Arbitrary data that is passed back to you in the CompletionDelegate.\n@param Notification A callback that is fired when a a notification is received.\n\n@return handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsAddNotifyJoinSessionAccepted", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsAddNotifyJoinSessionAccepted_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics
	{
		struct CoreSessions_eventEOSSessionsAddNotifySessionInviteAccepted_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsAddNotifySessionInviteAccepted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsAddNotifySessionInviteAccepted_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionInviteAcceptedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Register to receive notifications when a user accepts a session invite via the social overlay.\n\x09 * @note must call RemoveNotifySessionInviteAccepted to remove the notification\n\x09 *\n\x09 * @param Options Structure containing information about the request.\n\x09 * @param Notification A callback that is fired when a a notification is received.\n\x09 *\n\x09 * @return handle representing the registered callback\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Register to receive notifications when a user accepts a session invite via the social overlay.\n@note must call RemoveNotifySessionInviteAccepted to remove the notification\n\n@param Options Structure containing information about the request.\n@param Notification A callback that is fired when a a notification is received.\n\n@return handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsAddNotifySessionInviteAccepted", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsAddNotifySessionInviteAccepted_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics
	{
		struct CoreSessions_eventEOSSessionsAddNotifySessionInviteReceived_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsAddNotifySessionInviteReceived_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsAddNotifySessionInviteReceived_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionInviteReceivedCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Register to receive session invites.\n\x09 * @note must call RemoveNotifySessionInviteReceived to remove the notification\n\x09 *\n\x09 * @param Options Structure containing information about the session invite notification\n\x09 * @param Notification A callback that is fired when a session invite for a user has been received\n\x09 *\n\x09 * @return handle representing the registered callback\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Register to receive session invites.\n@note must call RemoveNotifySessionInviteReceived to remove the notification\n\n@param Options Structure containing information about the session invite notification\n@param Notification A callback that is fired when a session invite for a user has been received\n\n@return handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsAddNotifySessionInviteReceived", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsAddNotifySessionInviteReceived_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics
	{
		struct CoreSessions_eventEOSSessionsCopyActiveSessionHandle_Parms
		{
			FEOSSessionsCopyActiveSessionHandleOptions options;
			FEOSHActiveSession outSessionHandle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopyActiveSessionHandle_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::NewProp_outSessionHandle = { "outSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopyActiveSessionHandle_Parms, outSessionHandle), Z_Construct_UScriptStruct_FEOSHActiveSession, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopyActiveSessionHandle_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsCopyActiveSessionHandleOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::NewProp_outSessionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Create a handle to an existing active session.\n\x09 *\n\x09 * @param Options Structure containing information about the active session to retrieve\n\x09 * @param OutSessionHandle The new active session handle or null if there was an error\n\x09 *\n\x09 * @return EOS_Success if the session handle was created successfully\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *         EOS_NotFound if the active session doesn't exist\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Create a handle to an existing active session.\n\n@param Options Structure containing information about the active session to retrieve\n@param OutSessionHandle The new active session handle or null if there was an error\n\n@return EOS_Success if the session handle was created successfully\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n        EOS_NotFound if the active session doesn't exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsCopyActiveSessionHandle", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsCopyActiveSessionHandle_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics
	{
		struct CoreSessions_eventEOSSessionsCopySessionHandleByInviteId_Parms
		{
			FEOSSessionsCopySessionHandleByInviteIdOptions options;
			FEOSHSessionDetails outSessionHandle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopySessionHandleByInviteId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::NewProp_outSessionHandle = { "outSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopySessionHandleByInviteId_Parms, outSessionHandle), Z_Construct_UScriptStruct_FEOSHSessionDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopySessionHandleByInviteId_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsCopySessionHandleByInviteIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::NewProp_outSessionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * EOS_Sessions_CopySessionHandleByInviteId is used to immediately retrieve a handle to the session information from after notification of an invite\n\x09 * If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n\x09 *\n\x09 * @param Options Structure containing the input parameters\n\x09 * @param OutSessionHandle out parameter used to receive the session handle\n\x09 *\n\x09 * @return EOS_Success if the information is available and passed out in OutSessionHandle\n\x09 *         EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *         EOS_NotFound if the invite id cannot be found\n\x09 *\n\x09 * @see EOS_Sessions_CopySessionHandleByInviteIdOptions\n\x09 * @see EOS_SessionDetails_Release\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_Sessions_CopySessionHandleByInviteId is used to immediately retrieve a handle to the session information from after notification of an invite\nIf the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n\n@param Options Structure containing the input parameters\n@param OutSessionHandle out parameter used to receive the session handle\n\n@return EOS_Success if the information is available and passed out in OutSessionHandle\n        EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n        EOS_NotFound if the invite id cannot be found\n\n@see EOS_Sessions_CopySessionHandleByInviteIdOptions\n@see EOS_SessionDetails_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsCopySessionHandleByInviteId", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsCopySessionHandleByInviteId_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics
	{
		struct CoreSessions_eventEOSSessionsCopySessionHandleByUiEventId_Parms
		{
			FEOSSessionsCopySessionHandleByUiEventIdOptions options;
			FEOSHSessionDetails outSessionHandle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopySessionHandleByUiEventId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::NewProp_outSessionHandle = { "outSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopySessionHandleByUiEventId_Parms, outSessionHandle), Z_Construct_UScriptStruct_FEOSHSessionDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopySessionHandleByUiEventId_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsCopySessionHandleByUiEventIdOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::NewProp_outSessionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * EOS_Sessions_CopySessionHandleByUiEventId is used to immediately retrieve a handle to the session information from after notification of a join game event.\n\x09 * If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n\x09 *\n\x09 * @param Options Structure containing the input parameters\n\x09 * @param OutSessionHandle out parameter used to receive the session handle\n\x09 *\n\x09 * @return EOS_Success if the information is available and passed out in OutSessionHandle\n\x09 *         EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *         EOS_NotFound if the invite id cannot be found\n\x09 *\n\x09 * @see EOS_Sessions_CopySessionHandleByUiEventIdOptions\n\x09 * @see EOS_SessionDetails_Release\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_Sessions_CopySessionHandleByUiEventId is used to immediately retrieve a handle to the session information from after notification of a join game event.\nIf the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n\n@param Options Structure containing the input parameters\n@param OutSessionHandle out parameter used to receive the session handle\n\n@return EOS_Success if the information is available and passed out in OutSessionHandle\n        EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n        EOS_NotFound if the invite id cannot be found\n\n@see EOS_Sessions_CopySessionHandleByUiEventIdOptions\n@see EOS_SessionDetails_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsCopySessionHandleByUiEventId", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsCopySessionHandleByUiEventId_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics
	{
		struct CoreSessions_eventEOSSessionsCopySessionHandleForPresence_Parms
		{
			FEOSSessionsCopySessionHandleForPresenceOptions options;
			FEOSHSessionDetails outSessionHandle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopySessionHandleForPresence_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::NewProp_outSessionHandle = { "outSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopySessionHandleForPresence_Parms, outSessionHandle), Z_Construct_UScriptStruct_FEOSHSessionDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCopySessionHandleForPresence_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsCopySessionHandleForPresenceOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::NewProp_outSessionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * EOS_Sessions_CopySessionHandleForPresence is used to immediately retrieve a handle to the session information which was marked with bPresenceEnabled on create or join.\n\x09 * If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n\x09 *\n\x09 * @param Options Structure containing the input parameters\n\x09 * @param OutSessionHandle out parameter used to receive the session handle\n\x09 *\n\x09 * @return EOS_Success if the information is available and passed out in OutSessionHandle\n\x09 *         EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *         EOS_NotFound if there is no session with bPresenceEnabled\n\x09 *\n\x09 * @see EOS_Sessions_CopySessionHandleForPresenceOptions\n\x09 * @see EOS_SessionDetails_Release\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_Sessions_CopySessionHandleForPresence is used to immediately retrieve a handle to the session information which was marked with bPresenceEnabled on create or join.\nIf the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n\n@param Options Structure containing the input parameters\n@param OutSessionHandle out parameter used to receive the session handle\n\n@return EOS_Success if the information is available and passed out in OutSessionHandle\n        EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n        EOS_NotFound if there is no session with bPresenceEnabled\n\n@see EOS_Sessions_CopySessionHandleForPresenceOptions\n@see EOS_SessionDetails_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsCopySessionHandleForPresence", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsCopySessionHandleForPresence_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics
	{
		struct CoreSessions_eventEOSSessionsCreateSessionModification_Parms
		{
			FEOSSessionsCreateSessionModificationOptions options;
			FEOSHSessionModification outSessionModificationHandle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionModificationHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCreateSessionModification_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::NewProp_outSessionModificationHandle = { "outSessionModificationHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCreateSessionModification_Parms, outSessionModificationHandle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCreateSessionModification_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsCreateSessionModificationOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::NewProp_outSessionModificationHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09* Creates a session modification handle (EOS_HSessionModification).  The session modification handle is used to build a new session and can be applied with EOS_Sessions_UpdateSession\n\x09* The EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it no longer needed.\n\x09*\n\x09* @param Options Required fields for the creation of a session such as a name, bucketid, and max players\n\x09* @param OutSessionModificationHandle Pointer to a Session Modification Handle only set if successful\n\x09* @return EOS_Success if we successfully created the Session Modification Handle pointed at in OutSessionModificationHandle, or an error result if the input data was invalid\n\x09*\n\x09* @see EOS_SessionModification_Release\n\x09* @see EOS_Sessions_UpdateSession\n\x09* @see EOS_HSessionModification\n\x09*/" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Creates a session modification handle (EOS_HSessionModification).  The session modification handle is used to build a new session and can be applied with EOS_Sessions_UpdateSession\nThe EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it no longer needed.\n\n@param Options Required fields for the creation of a session such as a name, bucketid, and max players\n@param OutSessionModificationHandle Pointer to a Session Modification Handle only set if successful\n@return EOS_Success if we successfully created the Session Modification Handle pointed at in OutSessionModificationHandle, or an error result if the input data was invalid\n\n@see EOS_SessionModification_Release\n@see EOS_Sessions_UpdateSession\n@see EOS_HSessionModification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsCreateSessionModification", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsCreateSessionModification_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics
	{
		struct CoreSessions_eventEOSSessionsCreateSessionSearch_Parms
		{
			FEOSSessionsCreateSessionSearchOptions options;
			FEOSHSessionSearch outSessionSearchHandle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionSearchHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCreateSessionSearch_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::NewProp_outSessionSearchHandle = { "outSessionSearchHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCreateSessionSearch_Parms, outSessionSearchHandle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsCreateSessionSearch_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsCreateSessionSearchOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::NewProp_outSessionSearchHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Create a session search handle.  This handle may be modified to include various search parameters.\n\x09 * Searching is possible in three methods, all mutually exclusive\n\x09 * - set the session id to find a specific session\n\x09 * - set the target user id to find a specific user\n\x09 * - set session parameters to find an array of sessions that match the search criteria\n\x09 *\n\x09 * @param Options Structure containing required parameters such as the maximum number of search results\n\x09 * @param OutSessionSearchHandle The new search handle or null if there was an error creating the search handle\n\x09 *\n\x09 * @return EOS_Success if the search creation completes successfully\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Create a session search handle.  This handle may be modified to include various search parameters.\nSearching is possible in three methods, all mutually exclusive\n- set the session id to find a specific session\n- set the target user id to find a specific user\n- set session parameters to find an array of sessions that match the search criteria\n\n@param Options Structure containing required parameters such as the maximum number of search results\n@param OutSessionSearchHandle The new search handle or null if there was an error creating the search handle\n\n@return EOS_Success if the search creation completes successfully\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsCreateSessionSearch", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsCreateSessionSearch_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics
	{
		struct CoreSessions_eventEOSSessionsDestroySession_Parms
		{
			FEOSSessionsDestroySessionOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsDestroySession_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionDestroySessionCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsDestroySession_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsDestroySessionOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Destroy a session given a session name\n\x09 *\n\x09 * @param Options Structure containing information about the session to be destroyed\n\x09 * @param callback A callback that is fired when the destroy operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the destroy completes successfully\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_AlreadyPending if the session is already marked for destroy\n\x09 *         EOS_NotFound if a session to be destroyed does not exist\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Destroy a session given a session name\n\n@param Options Structure containing information about the session to be destroyed\n@param callback A callback that is fired when the destroy operation completes, either successfully or in error\n\n@return EOS_Success if the destroy completes successfully\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_AlreadyPending if the session is already marked for destroy\n        EOS_NotFound if a session to be destroyed does not exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsDestroySession", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsDestroySession_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics
	{
		struct CoreSessions_eventEOSSessionsDumpSessionState_Parms
		{
			FEOSSessionsDumpSessionStateOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsDumpSessionState_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsDumpSessionState_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsDumpSessionStateOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Dump the contents of active sessions that exist locally to the log output, purely for debug purposes\n\x09 *\n\x09 * @param Options Options related to dumping session state such as the session name\n\x09 *\n\x09 * @return EOS_Success if the output operation completes successfully\n\x09 *         EOS_NotFound if the session specified does not exist\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Dump the contents of active sessions that exist locally to the log output, purely for debug purposes\n\n@param Options Options related to dumping session state such as the session name\n\n@return EOS_Success if the output operation completes successfully\n        EOS_NotFound if the session specified does not exist\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsDumpSessionState", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsDumpSessionState_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics
	{
		struct CoreSessions_eventEOSSessionSearchCopySearchResultByIndex_Parms
		{
			FEOSHSessionSearch handle;
			FEOSSessionSearchCopySearchResultByIndexOptions options;
			FEOSHSessionDetails outSessionHandle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_options_MetaData[];
#endif
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchCopySearchResultByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_outSessionHandle = { "outSessionHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchCopySearchResultByIndex_Parms, outSessionHandle), Z_Construct_UScriptStruct_FEOSHSessionDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchCopySearchResultByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSSessionSearchCopySearchResultByIndexOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchCopySearchResultByIndex_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_outSessionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * EOS_SessionSearch_CopySearchResultByIndex is used to immediately retrieve a handle to the session information from a given search result.\n\x09 * If the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n\x09 *\n\x09 * @param Options Structure containing the input parameters\n\x09 * @param OutSessionHandle out parameter used to receive the session handle\n\x09 *\n\x09 * @return EOS_Success if the information is available and passed out in OutSessionHandle\n\x09 *         EOS_InvalidParameters if you pass an invalid index or a null pointer for the out parameter\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *\n\x09 * @see EOS_SessionSearch_CopySearchResultByIndexOptions\n\x09 * @see EOS_SessionDetails_Release\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_SessionSearch_CopySearchResultByIndex is used to immediately retrieve a handle to the session information from a given search result.\nIf the call returns an EOS_Success result, the out parameter, OutSessionHandle, must be passed to EOS_SessionDetails_Release to release the memory associated with it.\n\n@param Options Structure containing the input parameters\n@param OutSessionHandle out parameter used to receive the session handle\n\n@return EOS_Success if the information is available and passed out in OutSessionHandle\n        EOS_InvalidParameters if you pass an invalid index or a null pointer for the out parameter\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n\n@see EOS_SessionSearch_CopySearchResultByIndexOptions\n@see EOS_SessionDetails_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchCopySearchResultByIndex", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchCopySearchResultByIndex_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics
	{
		struct CoreSessions_eventEOSSessionSearchFind_Parms
		{
			FEOSHSessionSearch handle;
			FEOSSessionSearchFindOptions options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchFind_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionFindCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchFind_Parms, options), Z_Construct_UScriptStruct_FEOSSessionSearchFindOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchFind_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Find sessions matching the search criteria setup via this session search handle.\n\x09 * When the operation completes, this handle will have the search results that can be parsed\n\x09 *\n\x09 * @param Options Structure containing information about the search criteria to use\n\x09 * @param callback A callback that is fired when the search operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the find operation completes successfully\n\x09 *         EOS_NotFound if searching for an individual session by sessionid or targetuserid returns no results\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Find sessions matching the search criteria setup via this session search handle.\nWhen the operation completes, this handle will have the search results that can be parsed\n\n@param Options Structure containing information about the search criteria to use\n@param callback A callback that is fired when the search operation completes, either successfully or in error\n\n@return EOS_Success if the find operation completes successfully\n        EOS_NotFound if searching for an individual session by sessionid or targetuserid returns no results\n        EOS_InvalidParameters if any of the options are incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchFind", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchFind_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics
	{
		struct CoreSessions_eventEOSSessionSearchGetSearchResultCount_Parms
		{
			FEOSHSessionSearch handle;
			FEOSSessionSearchGetSearchResultCountOptions options;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchGetSearchResultCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchGetSearchResultCount_Parms, options), Z_Construct_UScriptStruct_FEOSSessionSearchGetSearchResultCountOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchGetSearchResultCount_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Get the number of search results found by the search parameters in this search\n\x09 *\n\x09 * @param Options Options associated with the search count\n\x09 *\n\x09 * @return return the number of search results found by the query or 0 if search is not complete\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Get the number of search results found by the search parameters in this search\n\n@param Options Options associated with the search count\n\n@return return the number of search results found by the query or 0 if search is not complete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchGetSearchResultCount", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchGetSearchResultCount_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics
	{
		struct CoreSessions_eventEOSSessionSearchRelease_Parms
		{
			FEOSHSessionSearch handle;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchRelease_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions|Memory" },
		{ "Comment", "/**\n\x09 * Release the memory associated with a session search. This must be called on data retrieved from EOS_Sessions_CreateSessionSearch.\n\x09 *\n\x09 * @param SessionSearchHandle - The session search handle to release\n\x09 *\n\x09 * @see EOS_Sessions_CreateSessionSearch\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Release the memory associated with a session search. This must be called on data retrieved from EOS_Sessions_CreateSessionSearch.\n\n@param SessionSearchHandle - The session search handle to release\n\n@see EOS_Sessions_CreateSessionSearch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchRelease", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchRelease_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics
	{
		struct CoreSessions_eventEOSSessionSearchRemoveParameter_Parms
		{
			FEOSHSessionSearch handle;
			FEOSSessionSearchRemoveParameterOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchRemoveParameter_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchRemoveParameter_Parms, options), Z_Construct_UScriptStruct_FEOSSessionSearchRemoveParameterOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchRemoveParameter_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Remove a parameter from the array of search criteria.\n\x09 *\n\x09 * @params Options a search parameter key name to remove\n\x09 *\n\x09 * @return EOS_Success if removing this search parameter was successful\n\x09 *         EOS_InvalidParameters if the search key is invalid or null\n\x09 *\x09\x09   EOS_NotFound if the parameter was not a part of the search criteria\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Remove a parameter from the array of search criteria.\n\n@params Options a search parameter key name to remove\n\n@return EOS_Success if removing this search parameter was successful\n        EOS_InvalidParameters if the search key is invalid or null\n                EOS_NotFound if the parameter was not a part of the search criteria\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchRemoveParameter", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchRemoveParameter_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics
	{
		struct CoreSessions_eventEOSSessionSearchSetMaxResults_Parms
		{
			FEOSHSessionSearch handle;
			FEOSSessionSearchSetMaxResultsOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetMaxResults_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetMaxResults_Parms, options), Z_Construct_UScriptStruct_FEOSSessionSearchSetMaxResultsOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetMaxResults_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Set the maximum number of search results to return in the query, can't be more than EOS_SESSIONS_MAX_SEARCH_RESULTS\n\x09 *\n\x09 * @param Options maximum number of search results to return in the query\n\x09 *\n\x09 * @return EOS_Success if setting the max results was successful\n\x09 *         EOS_InvalidParameters if the number of results requested is invalid\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Set the maximum number of search results to return in the query, can't be more than EOS_SESSIONS_MAX_SEARCH_RESULTS\n\n@param Options maximum number of search results to return in the query\n\n@return EOS_Success if setting the max results was successful\n        EOS_InvalidParameters if the number of results requested is invalid\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchSetMaxResults", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchSetMaxResults_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics
	{
		struct CoreSessions_eventEOSSessionSearchSetParameterBool_Parms
		{
			FEOSHSessionSearch handle;
			FString key;
			bool bValue;
			EEOSEComparisonOp comparisonOp;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_comparisonOp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_comparisonOp_Underlying;
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterBool_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_comparisonOp = { "comparisonOp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterBool_Parms, comparisonOp), Z_Construct_UEnum_EOSCore_EEOSEComparisonOp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_comparisonOp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((CoreSessions_eventEOSSessionSearchSetParameterBool_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreSessions_eventEOSSessionSearchSetParameterBool_Parms), &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterBool_Parms, key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterBool_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_comparisonOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_comparisonOp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_bValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing\n\x09 *\n\x09 * @param Options a search parameter and its comparison op\n\x09 *\n\x09 * @return EOS_Success if setting this search parameter was successful\n\x09 *         EOS_InvalidParameters if the search criteria is invalid or null\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *\n\x09 * @see EOS_Sessions_AttributeData\n\x09 * @see EOS_EComparisonOp\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing\n\n@param Options a search parameter and its comparison op\n\n@return EOS_Success if setting this search parameter was successful\n        EOS_InvalidParameters if the search criteria is invalid or null\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n\n@see EOS_Sessions_AttributeData\n@see EOS_EComparisonOp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchSetParameterBool", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchSetParameterBool_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics
	{
		struct CoreSessions_eventEOSSessionSearchSetParameterDouble_Parms
		{
			FEOSHSessionSearch handle;
			FString key;
			FString value;
			EEOSEComparisonOp comparisonOp;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_comparisonOp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_comparisonOp_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterDouble_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_comparisonOp = { "comparisonOp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterDouble_Parms, comparisonOp), Z_Construct_UEnum_EOSCore_EEOSEComparisonOp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_comparisonOp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterDouble_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterDouble_Parms, key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterDouble_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_comparisonOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_comparisonOp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09* Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing\n\x09*\n\x09* @param Options a search parameter and its comparison op\n\x09*\n\x09* @return EOS_Success if setting this search parameter was successful\n\x09*         EOS_InvalidParameters if the search criteria is invalid or null\n\x09*         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09*\n\x09* @see EOS_Sessions_AttributeData\n\x09* @see EOS_EComparisonOp\n\x09*/" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing\n\n@param Options a search parameter and its comparison op\n\n@return EOS_Success if setting this search parameter was successful\n        EOS_InvalidParameters if the search criteria is invalid or null\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n\n@see EOS_Sessions_AttributeData\n@see EOS_EComparisonOp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchSetParameterDouble", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchSetParameterDouble_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics
	{
		struct CoreSessions_eventEOSSessionSearchSetParameterInt64_Parms
		{
			FEOSHSessionSearch handle;
			FString key;
			FString value;
			EEOSEComparisonOp comparisonOp;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_comparisonOp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_comparisonOp_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterInt64_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_comparisonOp = { "comparisonOp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterInt64_Parms, comparisonOp), Z_Construct_UEnum_EOSCore_EEOSEComparisonOp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_comparisonOp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterInt64_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterInt64_Parms, key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterInt64_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_comparisonOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_comparisonOp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing\n\x09 *\n\x09 * @param Options a search parameter and its comparison op\n\x09 *\n\x09 * @return EOS_Success if setting this search parameter was successful\n\x09 *         EOS_InvalidParameters if the search criteria is invalid or null\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *\n\x09 * @see EOS_Sessions_AttributeData\n\x09 * @see EOS_EComparisonOp\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing\n\n@param Options a search parameter and its comparison op\n\n@return EOS_Success if setting this search parameter was successful\n        EOS_InvalidParameters if the search criteria is invalid or null\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n\n@see EOS_Sessions_AttributeData\n@see EOS_EComparisonOp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchSetParameterInt64", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchSetParameterInt64_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics
	{
		struct CoreSessions_eventEOSSessionSearchSetParameterString_Parms
		{
			FEOSHSessionSearch handle;
			FString key;
			FString value;
			EEOSEComparisonOp comparisonOp;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_comparisonOp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_comparisonOp_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterString_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_comparisonOp = { "comparisonOp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterString_Parms, comparisonOp), Z_Construct_UEnum_EOSCore_EEOSEComparisonOp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_comparisonOp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterString_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterString_Parms, key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetParameterString_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_comparisonOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_comparisonOp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing\n\x09 *\n\x09 * @param Options a search parameter and its comparison op\n\x09 *\n\x09 * @return EOS_Success if setting this search parameter was successful\n\x09 *         EOS_InvalidParameters if the search criteria is invalid or null\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *\n\x09 * @see EOS_Sessions_AttributeData\n\x09 * @see EOS_EComparisonOp\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Add a parameter to an array of search criteria combined via an AND operator.  Setting SessionId or TargetUserId will result in EOS_SessionSearch_Find failing\n\n@param Options a search parameter and its comparison op\n\n@return EOS_Success if setting this search parameter was successful\n        EOS_InvalidParameters if the search criteria is invalid or null\n        EOS_IncompatibleVersion if the API version passed in is incorrect\n\n@see EOS_Sessions_AttributeData\n@see EOS_EComparisonOp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchSetParameterString", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchSetParameterString_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics
	{
		struct CoreSessions_eventEOSSessionSearchSetSessionId_Parms
		{
			FEOSHSessionSearch handle;
			FEOSSessionSearchSetSessionIdOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetSessionId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetSessionId_Parms, options), Z_Construct_UScriptStruct_FEOSSessionSearchSetSessionIdOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetSessionId_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09  * Set a session id to find and will return at most one search result.  Setting TargetUserId or SearchParameters will result in EOS_SessionSearch_Find failing\n\x09  *\n\x09  * @param Options A specific session id for which to search\n\x09  *\n\x09  * @return EOS_Success if setting this session id was successful\n\x09  *         EOS_InvalidParameters if the session id is invalid or null\n\x09  *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09  */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Set a session id to find and will return at most one search result.  Setting TargetUserId or SearchParameters will result in EOS_SessionSearch_Find failing\n\n@param Options A specific session id for which to search\n\n@return EOS_Success if setting this session id was successful\n        EOS_InvalidParameters if the session id is invalid or null\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchSetSessionId", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchSetSessionId_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics
	{
		struct CoreSessions_eventEOSSessionSearchSetTargetUserId_Parms
		{
			FEOSHSessionSearch handle;
			FEOSSessionSearchSetTargetUserIdOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetTargetUserId_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetTargetUserId_Parms, options), Z_Construct_UScriptStruct_FEOSSessionSearchSetTargetUserIdOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionSearchSetTargetUserId_Parms, handle), Z_Construct_UScriptStruct_FEOSHSessionSearch, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Set a target user id to find and will return at most one search result.  Setting SessionId or SearchParameters will result in EOS_SessionSearch_Find failing\n\x09 * NOTE: a search result will only be found if this user is in a public session\n\x09 *\n\x09 * @param Options a specific target user id to find\n\x09 *\n\x09 * @return EOS_Success if setting this target user id was successful\n\x09 *         EOS_InvalidParameters if the target user id is invalid or null\n\x09 *         EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Set a target user id to find and will return at most one search result.  Setting SessionId or SearchParameters will result in EOS_SessionSearch_Find failing\nNOTE: a search result will only be found if this user is in a public session\n\n@param Options a specific target user id to find\n\n@return EOS_Success if setting this target user id was successful\n        EOS_InvalidParameters if the target user id is invalid or null\n        EOS_IncompatibleVersion if the API version passed in is incorrect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionSearchSetTargetUserId", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionSearchSetTargetUserId_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics
	{
		struct CoreSessions_eventEOSSessionsEndSession_Parms
		{
			FEOSSessionsEndSessionOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsEndSession_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionEndSessionCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsEndSession_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsEndSessionOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Mark a session as ended, making it available to find if \"join in progress\" was disabled.  The session may be started again if desired\n\x09 *\n\x09 * @param Options Structure containing information about the session to be ended\n\x09 * @param callback A callback that is fired when the end operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the end completes successfully\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n\x09 *         EOS_NotFound if a session to be ended does not exist\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Mark a session as ended, making it available to find if \"join in progress\" was disabled.  The session may be started again if desired\n\n@param Options Structure containing information about the session to be ended\n@param callback A callback that is fired when the end operation completes, either successfully or in error\n\n@return EOS_Success if the end completes successfully\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n        EOS_NotFound if a session to be ended does not exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsEndSession", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsEndSession_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics
	{
		struct CoreSessions_eventEOSSessionsGetInviteCount_Parms
		{
			FEOSSessionsGetInviteCountOptions options;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsGetInviteCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsGetInviteCount_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsGetInviteCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Get the number of known invites for a given user\n\x09 *\n\x09 * @param Options the Options associated with retrieving the current invite count\n\x09 *\n\x09 * @return number of known invites for a given user or 0 if there is an error\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Get the number of known invites for a given user\n\n@param Options the Options associated with retrieving the current invite count\n\n@return number of known invites for a given user or 0 if there is an error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsGetInviteCount", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsGetInviteCount_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics
	{
		struct CoreSessions_eventEOSSessionsGetInviteIdByIndex_Parms
		{
			FEOSSessionsGetInviteIdByIndexOptions options;
			FString outBuffer;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outBuffer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsGetInviteIdByIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::NewProp_outBuffer = { "outBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsGetInviteIdByIndex_Parms, outBuffer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsGetInviteIdByIndex_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsGetInviteIdByIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::NewProp_outBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Retrieve an invite id from a list of active invites for a given user\n\x09 *\n\x09 * @param Options Structure containing the input parameters\n\x09 *\n\x09 * @return EOS_Success if the input is valid and an invite id was returned\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_NotFound if the invite doesn't exist\n\x09 *\n\x09 * @see EOS_Sessions_GetInviteCount\n\x09 * @see EOS_Sessions_CopySessionHandleByInviteId\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Retrieve an invite id from a list of active invites for a given user\n\n@param Options Structure containing the input parameters\n\n@return EOS_Success if the input is valid and an invite id was returned\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_NotFound if the invite doesn't exist\n\n@see EOS_Sessions_GetInviteCount\n@see EOS_Sessions_CopySessionHandleByInviteId" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsGetInviteIdByIndex", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsGetInviteIdByIndex_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics
	{
		struct CoreSessions_eventEOSSessionsIsUserInSession_Parms
		{
			FEOSSessionsIsUserInSessionOptions options;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsIsUserInSession_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsIsUserInSession_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsIsUserInSessionOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * EOS_Sessions_IsUserInSession returns whether or not a given user can be found in a specified session\n\x09 *\n\x09 * @param Options Structure containing the input parameters\n\x09 *\n\x09 * @return EOS_Success if the user is found in the specified session\n\x09 *\x09\x09   EOS_NotFound if the user is not found in the specified session\n\x09 *\x09\x09   EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter\n\x09 *\x09\x09   EOS_IncompatibleVersion if the API version passed in is incorrect\n\x09 *\x09\x09   EOS_Invalid_ProductUserID if an invalid target user is specified\n\x09 *\x09\x09   EOS_Sessions_InvalidSession if the session specified is invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "EOS_Sessions_IsUserInSession returns whether or not a given user can be found in a specified session\n\n@param Options Structure containing the input parameters\n\n@return EOS_Success if the user is found in the specified session\n                EOS_NotFound if the user is not found in the specified session\n                EOS_InvalidParameters if you pass an invalid invite id or a null pointer for the out parameter\n                EOS_IncompatibleVersion if the API version passed in is incorrect\n                EOS_Invalid_ProductUserID if an invalid target user is specified\n                EOS_Sessions_InvalidSession if the session specified is invalid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsIsUserInSession", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsIsUserInSession_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics
	{
		struct CoreSessions_eventEOSSessionsJoinSession_Parms
		{
			FEOSSessionsJoinSessionOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsJoinSession_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionJoinSessionCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsJoinSession_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsJoinSessionOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Join a session, creating a local session under a given session name.  Backend will validate various conditions to make sure it is possible to join the session.\n\x09 *\n\x09 * @param Options Structure containing information about the session to be joined\n\x09 * @param callback A callback that is fired when the join operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the join completes successfully\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_Sessions_SessionAlreadyExists if the session is already exists or is in the process of being joined\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Join a session, creating a local session under a given session name.  Backend will validate various conditions to make sure it is possible to join the session.\n\n@param Options Structure containing information about the session to be joined\n@param callback A callback that is fired when the join operation completes, either successfully or in error\n\n@return EOS_Success if the join completes successfully\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_Sessions_SessionAlreadyExists if the session is already exists or is in the process of being joined" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsJoinSession", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsJoinSession_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics
	{
		struct CoreSessions_eventEOSSessionsQueryInvites_Parms
		{
			FEOSSessionsQueryInvitesOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsQueryInvites_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionQueryInvitesCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsQueryInvites_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsQueryInvitesOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Retrieve all existing invites for a single user\n\x09 *\n\x09 * @param Options Structure containing information about the invites to query\n\x09 * @param callback A callback that is fired when the query invites operation completes, either successfully or in error\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Retrieve all existing invites for a single user\n\n@param Options Structure containing information about the invites to query\n@param callback A callback that is fired when the query invites operation completes, either successfully or in error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsQueryInvites", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsQueryInvites_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics
	{
		struct CoreSessions_eventEOSSessionsRegisterPlayers_Parms
		{
			FEOSSessionsRegisterPlayersOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsRegisterPlayers_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionRegisterPlayersCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsRegisterPlayers_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsRegisterPlayersOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Register a group of players with the session, allowing them to invite others or otherwise indicate they are part of the session for determining a full session\n\x09 *\n\x09 * @param Options Structure containing information about the session and players to be registered\n\x09 * @param callback A callback that is fired when the registration operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the register completes successfully\n\x09 *         EOS_NoChange if the players to register registered previously\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n\x09 *         EOS_NotFound if a session to register players does not exist\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Register a group of players with the session, allowing them to invite others or otherwise indicate they are part of the session for determining a full session\n\n@param Options Structure containing information about the session and players to be registered\n@param callback A callback that is fired when the registration operation completes, either successfully or in error\n\n@return EOS_Success if the register completes successfully\n        EOS_NoChange if the players to register registered previously\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n        EOS_NotFound if a session to register players does not exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsRegisterPlayers", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsRegisterPlayers_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics
	{
		struct CoreSessions_eventEOSSessionsRejectInvite_Parms
		{
			FEOSSessionsRejectInviteOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsRejectInvite_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionRejectInviteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsRejectInvite_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsRejectInviteOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Reject an invite from another player.\n\x09 *\n\x09 * @param Options Structure containing information about the invite to reject\n\x09 * @param callback A callback that is fired when the reject invite operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the invite rejection completes successfully\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_NotFound if the invite does not exist\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Reject an invite from another player.\n\n@param Options Structure containing information about the invite to reject\n@param callback A callback that is fired when the reject invite operation completes, either successfully or in error\n\n@return EOS_Success if the invite rejection completes successfully\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_NotFound if the invite does not exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsRejectInvite", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsRejectInvite_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics
	{
		struct CoreSessions_eventEOSSessionsRemoveNotifyJoinSessionAccepted_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsRemoveNotifyJoinSessionAccepted_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Unregister from receiving notifications when a user accepts a session join game via the social overlay.\n\x09 *\n\x09 * @param InId Handle representing the registered callback\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Unregister from receiving notifications when a user accepts a session join game via the social overlay.\n\n@param InId Handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsRemoveNotifyJoinSessionAccepted", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsRemoveNotifyJoinSessionAccepted_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics
	{
		struct CoreSessions_eventEOSSessionsRemoveNotifySessionInviteAccepted_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsRemoveNotifySessionInviteAccepted_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Unregister from receiving notifications when a user accepts a session invite via the social overlay.\n\x09 *\n\x09 * @param InId Handle representing the registered callback\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Unregister from receiving notifications when a user accepts a session invite via the social overlay.\n\n@param InId Handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsRemoveNotifySessionInviteAccepted", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsRemoveNotifySessionInviteAccepted_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics
	{
		struct CoreSessions_eventEOSSessionsRemoveNotifySessionInviteReceived_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsRemoveNotifySessionInviteReceived_Parms, id), Z_Construct_UScriptStruct_FEOSNotificationId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Unregister from receiving session invites.\n\x09 *\n\x09 * @param InId Handle representing the registered callback\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Unregister from receiving session invites.\n\n@param InId Handle representing the registered callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsRemoveNotifySessionInviteReceived", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsRemoveNotifySessionInviteReceived_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics
	{
		struct CoreSessions_eventEOSSessionsSendInvite_Parms
		{
			FEOSSessionsSendInviteOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsSendInvite_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionSessionSendInviteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsSendInvite_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsSendInviteOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Send an invite to another player.  User must have created the session or be registered in the session or else the call will fail\n\x09 *\n\x09 * @param Options Structure containing information about the session and player to invite\n\x09 * @param callback A callback that is fired when the send invite operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the send invite completes successfully\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_NotFound if the session to send the invite from does not exist\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Send an invite to another player.  User must have created the session or be registered in the session or else the call will fail\n\n@param Options Structure containing information about the session and player to invite\n@param callback A callback that is fired when the send invite operation completes, either successfully or in error\n\n@return EOS_Success if the send invite completes successfully\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_NotFound if the session to send the invite from does not exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsSendInvite", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsSendInvite_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics
	{
		struct CoreSessions_eventEOSSessionsStartSession_Parms
		{
			FEOSSessionsStartSessionOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsStartSession_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionStartSessionCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsStartSession_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsStartSessionOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Mark a session as started, making it unable to find if session properties indicate \"join in progress\" is not available\n\x09 *\n\x09 * @param Options Structure containing information about the session to be started\n\x09 * @param callback A callback that is fired when the start operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the start completes successfully\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n\x09 *         EOS_NotFound if a session to be started does not exist\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Mark a session as started, making it unable to find if session properties indicate \"join in progress\" is not available\n\n@param Options Structure containing information about the session to be started\n@param callback A callback that is fired when the start operation completes, either successfully or in error\n\n@return EOS_Success if the start completes successfully\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n        EOS_NotFound if a session to be started does not exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsStartSession", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsStartSession_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics
	{
		struct CoreSessions_eventEOSSessionsUnregisterPlayers_Parms
		{
			FEOSSessionsUnregisterPlayersOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsUnregisterPlayers_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionUnregisterPlayersCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsUnregisterPlayers_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsUnregisterPlayersOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Unregister a group of players with the session, freeing up space for others to join\n\x09 *\n\x09 * @param Options Structure containing information about the session and players to be unregistered\n\x09 * @param callback A callback that is fired when the unregistration operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the unregister completes successfully\n\x09 *         EOS_NoChange if the players to unregister were not found\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n\x09 *         EOS_NotFound if a session to be unregister players does not exist\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Unregister a group of players with the session, freeing up space for others to join\n\n@param Options Structure containing information about the session and players to be unregistered\n@param callback A callback that is fired when the unregistration operation completes, either successfully or in error\n\n@return EOS_Success if the unregister completes successfully\n        EOS_NoChange if the players to unregister were not found\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n        EOS_NotFound if a session to be unregister players does not exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsUnregisterPlayers", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsUnregisterPlayers_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics
	{
		struct CoreSessions_eventEOSSessionsUpdateSession_Parms
		{
			FEOSSessionsUpdateSessionOptions options;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsUpdateSession_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnSessionUpdateSessionCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsUpdateSession_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsUpdateSessionOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Update a session given a session modification handle created via EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification\n\x09 *\n\x09 * @param Options Structure containing information about the session to be updated\n\x09 * @param callback A callback that is fired when the update operation completes, either successfully or in error\n\x09 *\n\x09 * @return EOS_Success if the update completes successfully\n\x09 *         EOS_InvalidParameters if any of the options are incorrect\n\x09 *         EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n\x09 *         EOS_NotFound if a session to be updated does not exist\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Update a session given a session modification handle created via EOS_Sessions_CreateSessionModification or EOS_Sessions_UpdateSessionModification\n\n@param Options Structure containing information about the session to be updated\n@param callback A callback that is fired when the update operation completes, either successfully or in error\n\n@return EOS_Success if the update completes successfully\n        EOS_InvalidParameters if any of the options are incorrect\n        EOS_Sessions_OutOfSync if the session is out of sync and will be updated on the next connection with the backend\n        EOS_NotFound if a session to be updated does not exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsUpdateSession", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsUpdateSession_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics
	{
		struct CoreSessions_eventEOSSessionsUpdateSessionModification_Parms
		{
			FEOSSessionsUpdateSessionModificationOptions options;
			FEOSHSessionModification outSessionModificationHandle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSessionModificationHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsUpdateSessionModification_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::NewProp_outSessionModificationHandle = { "outSessionModificationHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsUpdateSessionModification_Parms, outSessionModificationHandle), Z_Construct_UScriptStruct_FEOSHSessionModification, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventEOSSessionsUpdateSessionModification_Parms, options), Z_Construct_UScriptStruct_FEOSSessionsUpdateSessionModificationOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::NewProp_outSessionModificationHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Sessions" },
		{ "Comment", "/**\n\x09 * Creates a session modification handle (EOS_HSessionModification). The session modification handle is used to modify an existing session and can be applied with EOS_Sessions_UpdateSession.\n\x09 * The EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it is no longer needed.\n\x09 *\n\x09 * @param Options Required fields such as session name\n\x09 * @param OutSessionModificationHandle Pointer to a Session Modification Handle only set if successful\n\x09 * @return EOS_Success if we successfully created the Session Modification Handle pointed at in OutSessionModificationHandle, or an error result if the input data was invalid\n\x09 *\n\x09 * @see EOS_SessionModification_Release\n\x09 * @see EOS_Sessions_UpdateSession\n\x09 * @see EOS_HSessionModification\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "Creates a session modification handle (EOS_HSessionModification). The session modification handle is used to modify an existing session and can be applied with EOS_Sessions_UpdateSession.\nThe EOS_HSessionModification must be released by calling EOS_SessionModification_Release once it is no longer needed.\n\n@param Options Required fields such as session name\n@param OutSessionModificationHandle Pointer to a Session Modification Handle only set if successful\n@return EOS_Success if we successfully created the Session Modification Handle pointed at in OutSessionModificationHandle, or an error result if the input data was invalid\n\n@see EOS_SessionModification_Release\n@see EOS_Sessions_UpdateSession\n@see EOS_HSessionModification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "EOSSessionsUpdateSessionModification", nullptr, nullptr, sizeof(CoreSessions_eventEOSSessionsUpdateSessionModification_Parms), Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSessions_GetSessions_Statics
	{
		struct CoreSessions_eventGetSessions_Parms
		{
			UCoreSessions* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSessions_eventGetSessions_Parms, ReturnValue), Z_Construct_UClass_UCoreSessions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n\x09 * The Session Interface is used to manage sessions that can be advertised with the backend service\n\x09 * All Session Interface calls take a handle of type EOS_HSessions as the first parameter.\n\x09 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetSessionsInterface function.\n\x09 *\n\x09 * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n\x09 *\n\x09 * @see EOS_Platform_GetSessionsInterface\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
		{ "ToolTip", "The Session Interface is used to manage sessions that can be advertised with the backend service\nAll Session Interface calls take a handle of type EOS_HSessions as the first parameter.\nThis handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetSessionsInterface function.\n\nNOTE: At this time, this feature is only available for products that are part of the Epic Games store.\n\n@see EOS_Platform_GetSessionsInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSessions, nullptr, "GetSessions", nullptr, nullptr, sizeof(CoreSessions_eventGetSessions_Parms), Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSessions_GetSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSessions_GetSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreSessions_NoRegister()
	{
		return UCoreSessions::StaticClass();
	}
	struct Z_Construct_UClass_UCoreSessions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionJoinSessionAcceptedCallbackInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionJoinSessionAcceptedCallbackInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionInviteAcceptedCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionInviteAcceptedCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionInviteReceivedCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionInviteReceivedCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionFindCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionFindCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionUnregisterPlayersCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionUnregisterPlayersCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionRegisterPlayersCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionRegisterPlayersCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionEndSessionCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionEndSessionCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionStartSessionCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionStartSessionCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionJoinSessionCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionJoinSessionCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionDestroySessionCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionDestroySessionCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionUpdateSessionCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionUpdateSessionCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionQueryInvitesCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionQueryInvitesCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionRejectInviteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionRejectInviteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionSessionSendInviteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionSessionSendInviteCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreSessions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreSessions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreSessions_EOSActiveSessionCopyInfo, "EOSActiveSessionCopyInfo" }, // 1298950479
		{ &Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex, "EOSActiveSessionGetRegisteredPlayerByIndex" }, // 2550325760
		{ &Z_Construct_UFunction_UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount, "EOSActiveSessionGetRegisteredPlayerCount" }, // 126334547
		{ &Z_Construct_UFunction_UCoreSessions_EOSActiveSessionRelease, "EOSActiveSessionRelease" }, // 1317629548
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopyInfo, "EOSSessionDetailsCopyInfo" }, // 3783082091
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex, "EOSSessionDetailsCopySessionAttributeByIndex" }, // 1583528386
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey, "EOSSessionDetailsCopySessionAttributeByKey" }, // 1222284650
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsGetSessionAttributeCount, "EOSSessionDetailsGetSessionAttributeCount" }, // 3284926429
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionDetailsRelease, "EOSSessionDetailsRelease" }, // 3800069254
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeBool, "EOSSessionModificationAddAttributeBool" }, // 2855565603
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeDouble, "EOSSessionModificationAddAttributeDouble" }, // 2759578740
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeInt64, "EOSSessionModificationAddAttributeInt64" }, // 1323641446
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationAddAttributeString, "EOSSessionModificationAddAttributeString" }, // 3346180603
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRelease, "EOSSessionModificationRelease" }, // 1686846915
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationRemoveAttribute, "EOSSessionModificationRemoveAttribute" }, // 2983597697
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetBucketId, "EOSSessionModificationSetBucketId" }, // 2104499065
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetHostAddress, "EOSSessionModificationSetHostAddress" }, // 2808619827
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetInvitesAllowed, "EOSSessionModificationSetInvitesAllowed" }, // 1115269578
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed, "EOSSessionModificationSetJoinInProgressAllowed" }, // 1799509095
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetMaxPlayers, "EOSSessionModificationSetMaxPlayers" }, // 3609558870
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionModificationSetPermissionLevel, "EOSSessionModificationSetPermissionLevel" }, // 1371308153
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted, "EOSSessionsAddNotifyJoinSessionAccepted" }, // 96141394
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted, "EOSSessionsAddNotifySessionInviteAccepted" }, // 1226606865
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsAddNotifySessionInviteReceived, "EOSSessionsAddNotifySessionInviteReceived" }, // 379690992
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsCopyActiveSessionHandle, "EOSSessionsCopyActiveSessionHandle" }, // 3474306633
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByInviteId, "EOSSessionsCopySessionHandleByInviteId" }, // 686971492
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleByUiEventId, "EOSSessionsCopySessionHandleByUiEventId" }, // 3800814445
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsCopySessionHandleForPresence, "EOSSessionsCopySessionHandleForPresence" }, // 1571810876
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionModification, "EOSSessionsCreateSessionModification" }, // 1706749368
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsCreateSessionSearch, "EOSSessionsCreateSessionSearch" }, // 1225773601
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsDestroySession, "EOSSessionsDestroySession" }, // 3406044539
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsDumpSessionState, "EOSSessionsDumpSessionState" }, // 3876005501
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchCopySearchResultByIndex, "EOSSessionSearchCopySearchResultByIndex" }, // 1688805906
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchFind, "EOSSessionSearchFind" }, // 2169835376
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchGetSearchResultCount, "EOSSessionSearchGetSearchResultCount" }, // 3044905039
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRelease, "EOSSessionSearchRelease" }, // 3942980138
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchRemoveParameter, "EOSSessionSearchRemoveParameter" }, // 3669125907
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetMaxResults, "EOSSessionSearchSetMaxResults" }, // 1415104792
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterBool, "EOSSessionSearchSetParameterBool" }, // 1300309209
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterDouble, "EOSSessionSearchSetParameterDouble" }, // 3960541146
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterInt64, "EOSSessionSearchSetParameterInt64" }, // 3035500781
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetParameterString, "EOSSessionSearchSetParameterString" }, // 2492399695
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetSessionId, "EOSSessionSearchSetSessionId" }, // 2393023026
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionSearchSetTargetUserId, "EOSSessionSearchSetTargetUserId" }, // 4190477232
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsEndSession, "EOSSessionsEndSession" }, // 2588754377
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteCount, "EOSSessionsGetInviteCount" }, // 614177648
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsGetInviteIdByIndex, "EOSSessionsGetInviteIdByIndex" }, // 3085219654
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsIsUserInSession, "EOSSessionsIsUserInSession" }, // 2757331260
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsJoinSession, "EOSSessionsJoinSession" }, // 2071796639
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsQueryInvites, "EOSSessionsQueryInvites" }, // 2883994916
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsRegisterPlayers, "EOSSessionsRegisterPlayers" }, // 70779485
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsRejectInvite, "EOSSessionsRejectInvite" }, // 233450891
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted, "EOSSessionsRemoveNotifyJoinSessionAccepted" }, // 747899140
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted, "EOSSessionsRemoveNotifySessionInviteAccepted" }, // 1273915281
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived, "EOSSessionsRemoveNotifySessionInviteReceived" }, // 3554479083
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsSendInvite, "EOSSessionsSendInvite" }, // 2219472620
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsStartSession, "EOSSessionsStartSession" }, // 1408201039
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsUnregisterPlayers, "EOSSessionsUnregisterPlayers" }, // 1746081105
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSession, "EOSSessionsUpdateSession" }, // 375301836
		{ &Z_Construct_UFunction_UCoreSessions_EOSSessionsUpdateSessionModification, "EOSSessionsUpdateSessionModification" }, // 1843472355
		{ &Z_Construct_UFunction_UCoreSessions_GetSessions, "GetSessions" }, // 3756869516
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sessions/EOSSessions.h" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionAcceptedCallbackInfo_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionAcceptedCallbackInfo = { "OnSessionJoinSessionAcceptedCallbackInfo", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionJoinSessionAcceptedCallbackInfo), Z_Construct_UDelegateFunction_EOSCore_OnSessionJoinSessionAcceptedCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionAcceptedCallbackInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionAcceptedCallbackInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteAcceptedCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteAcceptedCallbackDelegate = { "OnSessionInviteAcceptedCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionInviteAcceptedCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionInviteAcceptedCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteAcceptedCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteAcceptedCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteReceivedCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteReceivedCallbackDelegate = { "OnSessionInviteReceivedCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionInviteReceivedCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionInviteReceivedCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteReceivedCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteReceivedCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionFindCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionFindCallbackDelegate = { "OnSessionFindCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionFindCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionFindCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionFindCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionFindCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUnregisterPlayersCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUnregisterPlayersCallbackDelegate = { "OnSessionUnregisterPlayersCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionUnregisterPlayersCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionUnregisterPlayersCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUnregisterPlayersCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUnregisterPlayersCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRegisterPlayersCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRegisterPlayersCallbackDelegate = { "OnSessionRegisterPlayersCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionRegisterPlayersCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionRegisterPlayersCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRegisterPlayersCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRegisterPlayersCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionEndSessionCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionEndSessionCallbackDelegate = { "OnSessionEndSessionCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionEndSessionCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionEndSessionCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionEndSessionCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionEndSessionCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionStartSessionCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionStartSessionCallbackDelegate = { "OnSessionStartSessionCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionStartSessionCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionStartSessionCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionStartSessionCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionStartSessionCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionCallbackDelegate = { "OnSessionJoinSessionCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionJoinSessionCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionJoinSessionCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionDestroySessionCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionDestroySessionCallbackDelegate = { "OnSessionDestroySessionCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionDestroySessionCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionDestroySessionCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionDestroySessionCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionDestroySessionCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUpdateSessionCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUpdateSessionCallbackDelegate = { "OnSessionUpdateSessionCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionUpdateSessionCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionUpdateSessionCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUpdateSessionCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUpdateSessionCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionQueryInvitesCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionQueryInvitesCallbackDelegate = { "OnSessionQueryInvitesCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionQueryInvitesCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionQueryInvitesCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionQueryInvitesCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionQueryInvitesCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRejectInviteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRejectInviteCallbackDelegate = { "OnSessionRejectInviteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionRejectInviteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionRejectInviteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRejectInviteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRejectInviteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionSessionSendInviteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|Sessions|Delegates" },
		{ "ModuleRelativePath", "Public/Sessions/EOSSessions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionSessionSendInviteCallbackDelegate = { "OnSessionSessionSendInviteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSessions, OnSessionSessionSendInviteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnSessionSessionSendInviteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionSessionSendInviteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionSessionSendInviteCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionAcceptedCallbackInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteAcceptedCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionInviteReceivedCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionFindCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUnregisterPlayersCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRegisterPlayersCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionEndSessionCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionStartSessionCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionJoinSessionCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionDestroySessionCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionUpdateSessionCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionQueryInvitesCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionRejectInviteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSessions_Statics::NewProp_OnSessionSessionSendInviteCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreSessions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreSessions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreSessions_Statics::ClassParams = {
		&UCoreSessions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreSessions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreSessions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSessions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreSessions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreSessions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreSessions, 337689693);
	template<> EOSCORE_API UClass* StaticClass<UCoreSessions>()
	{
		return UCoreSessions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreSessions(Z_Construct_UClass_UCoreSessions, &UCoreSessions::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreSessions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreSessions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
