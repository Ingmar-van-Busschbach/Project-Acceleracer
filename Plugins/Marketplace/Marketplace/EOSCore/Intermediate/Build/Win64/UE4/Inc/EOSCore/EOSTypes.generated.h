// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EOSCORE_EOSTypes_generated_h
#error "EOSTypes.generated.h already included, missing '#pragma once' in EOSTypes.h"
#endif
#define EOSCORE_EOSTypes_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSPageQuery_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSPageQuery>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSUIEventId_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSUIEventId>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyInviteId_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FLobbyInviteId>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAccessToken_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FAccessToken>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSNotificationId_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSNotificationId>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContinuanceToken_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FContinuanceToken>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSTitleStorageFileTransferRequestHandle>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSLobbyId_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSLobbyId>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSProductUserId_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSProductUserId>();

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEOSEpicAccountId_Statics; \
	EOSCORE_API static class UScriptStruct* StaticStruct();


template<> EOSCORE_API UScriptStruct* StaticStruct<struct FEOSEpicAccountId>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Core_EOSTypes_h


#define FOREACH_ENUM_ESUCCESSFAIL(op) \
	op(ESuccessFail::Success) \
	op(ESuccessFail::Fail) 

enum class ESuccessFail : uint8;
template<> EOSCORE_API UEnum* StaticEnum<ESuccessFail>();

#define FOREACH_ENUM_EEOSECOMPARISONOP(op) \
	op(EEOSEComparisonOp::EOS_CO_EQUAL) \
	op(EEOSEComparisonOp::EOS_CO_NOTEQUAL) \
	op(EEOSEComparisonOp::EOS_CO_GREATERTHAN) \
	op(EEOSEComparisonOp::EOS_CO_GREATERTHANOREQUAL) \
	op(EEOSEComparisonOp::EOS_CO_LESSTHAN) \
	op(EEOSEComparisonOp::EOS_CO_LESSTHANOREQUAL) \
	op(EEOSEComparisonOp::EOS_CO_DISTANCE) \
	op(EEOSEComparisonOp::EOS_CO_ANYOF) \
	op(EEOSEComparisonOp::EOS_CO_NOTANYOF) 

enum class EEOSEComparisonOp : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EEOSEComparisonOp>();

#define FOREACH_ENUM_EEOSEATTRIBUTETYPE(op) \
	op(EEOSEAttributeType::EOS_AT_BOOLEAN) \
	op(EEOSEAttributeType::EOS_AT_INT64) \
	op(EEOSEAttributeType::EOS_AT_DOUBLE) \
	op(EEOSEAttributeType::EOS_AT_STRING) 

enum class EEOSEAttributeType : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EEOSEAttributeType>();

#define FOREACH_ENUM_EEOSELOGINSTATUS(op) \
	op(EEOSELoginStatus::EOS_LS_NotLoggedIn) \
	op(EEOSELoginStatus::EOS_LS_UsingLocalProfile) \
	op(EEOSELoginStatus::EOS_LS_LoggedIn) 

enum class EEOSELoginStatus : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EEOSELoginStatus>();

#define FOREACH_ENUM_EEOSEEXTERNALACCOUNTTYPE(op) \
	op(EEOSEExternalAccountType::EOS_EAT_EPIC) \
	op(EEOSEExternalAccountType::EOS_EAT_STEAM) \
	op(EEOSEExternalAccountType::EOS_EAT_PSN) \
	op(EEOSEExternalAccountType::EOS_EAT_XBL) \
	op(EEOSEExternalAccountType::EOS_EAT_DISCORD) \
	op(EEOSEExternalAccountType::EOS_EAT_GOG) \
	op(EEOSEExternalAccountType::EOS_EAT_NINTENDO) \
	op(EEOSEExternalAccountType::EOS_EAT_UPLAY) \
	op(EEOSEExternalAccountType::EOS_EAT_OPENID) \
	op(EEOSEExternalAccountType::EOS_EAT_APPLE) 

enum class EEOSEExternalAccountType : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EEOSEExternalAccountType>();

#define FOREACH_ENUM_EOSELOGINSTATUS(op) \
	op(EOSELoginStatus::EOS_LS_NotLoggedIn) \
	op(EOSELoginStatus::EOS_LS_UsingLocalProfile) \
	op(EOSELoginStatus::EOS_LS_LoggedIn) 

enum class EOSELoginStatus : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EOSELoginStatus>();

#define FOREACH_ENUM_EOSRESULT(op) \
	op(EOSResult::EOS_Success) \
	op(EOSResult::EOS_NoConnection) \
	op(EOSResult::EOS_InvalidCredentials) \
	op(EOSResult::EOS_InvalidUser) \
	op(EOSResult::EOS_InvalidAuth) \
	op(EOSResult::EOS_AccessDenied) \
	op(EOSResult::EOS_MissingPermissions) \
	op(EOSResult::EOS_Token_Not_Account) \
	op(EOSResult::EOS_TooManyRequests) \
	op(EOSResult::EOS_AlreadyPending) \
	op(EOSResult::EOS_InvalidParameters) \
	op(EOSResult::EOS_InvalidRequest) \
	op(EOSResult::EOS_UnrecognizedResponse) \
	op(EOSResult::EOS_IncompatibleVersion) \
	op(EOSResult::EOS_NotConfigured) \
	op(EOSResult::EOS_AlreadyConfigured) \
	op(EOSResult::EOS_NotImplemented) \
	op(EOSResult::EOS_Canceled) \
	op(EOSResult::EOS_NotFound) \
	op(EOSResult::EOS_OperationWillRetry) \
	op(EOSResult::EOS_NoChange) \
	op(EOSResult::EOS_VersionMismatch) \
	op(EOSResult::EOS_LimitExceeded) \
	op(EOSResult::EOS_Disabled) \
	op(EOSResult::EOS_DuplicateNotAllowed) \
	op(EOSResult::EOS_MissingParameters_DEPRECATED) \
	op(EOSResult::EOS_InvalidSandboxId) \
	op(EOSResult::EOS_TimedOut) \
	op(EOSResult::EOS_PartialResult) \
	op(EOSResult::EOS_Missing_Role) \
	op(EOSResult::EOS_Missing_Feature) \
	op(EOSResult::EOS_Invalid_Sandbox) \
	op(EOSResult::EOS_Invalid_Deployment) \
	op(EOSResult::EOS_Invalid_Product) \
	op(EOSResult::EOS_Invalid_ProductUserID) \
	op(EOSResult::EOS_ServiceFailure) \
	op(EOSResult::EOS_CacheDirectoryMissing) \
	op(EOSResult::EOS_CacheDirectoryInvalid) \
	op(EOSResult::EOS_InvalidState) \
	op(EOSResult::EOS_Auth_AccountLocked) \
	op(EOSResult::EOS_Auth_AccountLockedForUpdate) \
	op(EOSResult::EOS_Auth_InvalidRefreshToken) \
	op(EOSResult::EOS_Auth_InvalidToken) \
	op(EOSResult::EOS_Auth_AuthenticationFailure) \
	op(EOSResult::EOS_Auth_InvalidPlatformToken) \
	op(EOSResult::EOS_Auth_WrongAccount) \
	op(EOSResult::EOS_Auth_WrongClient) \
	op(EOSResult::EOS_Auth_FullAccountRequired) \
	op(EOSResult::EOS_Auth_HeadlessAccountRequired) \
	op(EOSResult::EOS_Auth_PasswordResetRequired) \
	op(EOSResult::EOS_Auth_PasswordCannotBeReused) \
	op(EOSResult::EOS_Auth_Expired) \
	op(EOSResult::EOS_Auth_ScopeConsentRequired) \
	op(EOSResult::EOS_Auth_ApplicationNotFound) \
	op(EOSResult::EOS_Auth_ScopeNotFound) \
	op(EOSResult::EOS_Auth_AccountFeatureRestricted) \
	op(EOSResult::EOS_Auth_PinGrantCode) \
	op(EOSResult::EOS_Auth_PinGrantExpired) \
	op(EOSResult::EOS_Auth_PinGrantPending) \
	op(EOSResult::EOS_Auth_ExternalAuthNotLinked) \
	op(EOSResult::EOS_Auth_ExternalAuthRevoked) \
	op(EOSResult::EOS_Auth_ExternalAuthInvalid) \
	op(EOSResult::EOS_Auth_ExternalAuthRestricted) \
	op(EOSResult::EOS_Auth_ExternalAuthCannotLogin) \
	op(EOSResult::EOS_Auth_ExternalAuthExpired) \
	op(EOSResult::EOS_Auth_ExternalAuthIsLastLoginType) \
	op(EOSResult::EOS_Auth_ExchangeCodeNotFound) \
	op(EOSResult::EOS_Auth_OriginatingExchangeCodeSessionExpired) \
	op(EOSResult::EOS_Auth_PersistentAuth_AccountNotActive) \
	op(EOSResult::EOS_Auth_MFARequired) \
	op(EOSResult::EOS_Auth_ParentalControls) \
	op(EOSResult::EOS_Auth_NoRealId) \
	op(EOSResult::EOS_Friends_InviteAwaitingAcceptance) \
	op(EOSResult::EOS_Friends_NoInvitation) \
	op(EOSResult::EOS_Friends_AlreadyFriends) \
	op(EOSResult::EOS_Friends_NotFriends) \
	op(EOSResult::EOS_Friends_TargetUserTooManyInvites) \
	op(EOSResult::EOS_Friends_LocalUserTooManyInvites) \
	op(EOSResult::EOS_Friends_TargetUserFriendLimitExceeded) \
	op(EOSResult::EOS_Friends_LocalUserFriendLimitExceeded) \
	op(EOSResult::EOS_Presence_DataInvalid) \
	op(EOSResult::EOS_Presence_DataLengthInvalid) \
	op(EOSResult::EOS_Presence_DataKeyInvalid) \
	op(EOSResult::EOS_Presence_DataKeyLengthInvalid) \
	op(EOSResult::EOS_Presence_DataValueInvalid) \
	op(EOSResult::EOS_Presence_DataValueLengthInvalid) \
	op(EOSResult::EOS_Presence_RichTextInvalid) \
	op(EOSResult::EOS_Presence_RichTextLengthInvalid) \
	op(EOSResult::EOS_Presence_StatusInvalid) \
	op(EOSResult::EOS_Ecom_EntitlementStale) \
	op(EOSResult::EOS_Ecom_CatalogOfferStale) \
	op(EOSResult::EOS_Ecom_CatalogItemStale) \
	op(EOSResult::EOS_Ecom_CatalogOfferPriceInvalid) \
	op(EOSResult::EOS_Ecom_CheckoutLoadError) \
	op(EOSResult::EOS_Sessions_SessionInProgress) \
	op(EOSResult::EOS_Sessions_TooManyPlayers) \
	op(EOSResult::EOS_Sessions_NoPermission) \
	op(EOSResult::EOS_Sessions_SessionAlreadyExists) \
	op(EOSResult::EOS_Sessions_InvalidLock) \
	op(EOSResult::EOS_Sessions_InvalidSession) \
	op(EOSResult::EOS_Sessions_SandboxNotAllowed) \
	op(EOSResult::EOS_Sessions_InviteFailed) \
	op(EOSResult::EOS_Sessions_InviteNotFound) \
	op(EOSResult::EOS_Sessions_UpsertNotAllowed) \
	op(EOSResult::EOS_Sessions_AggregationFailed) \
	op(EOSResult::EOS_Sessions_HostAtCapacity) \
	op(EOSResult::EOS_Sessions_SandboxAtCapacity) \
	op(EOSResult::EOS_Sessions_SessionNotAnonymous) \
	op(EOSResult::EOS_Sessions_OutOfSync) \
	op(EOSResult::EOS_Sessions_TooManyInvites) \
	op(EOSResult::EOS_Sessions_PresenceSessionExists) \
	op(EOSResult::EOS_Sessions_DeploymentAtCapacity) \
	op(EOSResult::EOS_Sessions_NotAllowed) \
	op(EOSResult::EOS_PlayerDataStorage_FilenameInvalid) \
	op(EOSResult::EOS_PlayerDataStorage_FilenameLengthInvalid) \
	op(EOSResult::EOS_PlayerDataStorage_FilenameInvalidChars) \
	op(EOSResult::EOS_PlayerDataStorage_FileSizeTooLarge) \
	op(EOSResult::EOS_PlayerDataStorage_FileSizeInvalid) \
	op(EOSResult::EOS_PlayerDataStorage_FileHandleInvalid) \
	op(EOSResult::EOS_PlayerDataStorage_DataInvalid) \
	op(EOSResult::EOS_PlayerDataStorage_DataLengthInvalid) \
	op(EOSResult::EOS_PlayerDataStorage_StartIndexInvalid) \
	op(EOSResult::EOS_PlayerDataStorage_RequestInProgress) \
	op(EOSResult::EOS_PlayerDataStorage_UserThrottled) \
	op(EOSResult::EOS_PlayerDataStorage_EncryptionKeyNotSet) \
	op(EOSResult::EOS_PlayerDataStorage_UserErrorFromDataCallback) \
	op(EOSResult::EOS_PlayerDataStorage_FileHeaderHasNewerVersion) \
	op(EOSResult::EOS_PlayerDataStorage_FileCorrupted) \
	op(EOSResult::EOS_Connect_ExternalTokenValidationFailed) \
	op(EOSResult::EOS_Connect_UserAlreadyExists) \
	op(EOSResult::EOS_Connect_AuthExpired) \
	op(EOSResult::EOS_Connect_InvalidToken) \
	op(EOSResult::EOS_Connect_UnsupportedTokenType) \
	op(EOSResult::EOS_Connect_LinkAccountFailed) \
	op(EOSResult::EOS_Connect_ExternalServiceUnavailable) \
	op(EOSResult::EOS_Connect_ExternalServiceConfigurationFailure) \
	op(EOSResult::EOS_Connect_LinkAccountFailedMissingNintendoIdAccount) \
	op(EOSResult::EOS_UI_SocialOverlayLoadError) \
	op(EOSResult::EOS_Lobby_NotOwner) \
	op(EOSResult::EOS_Lobby_InvalidLock) \
	op(EOSResult::EOS_Lobby_LobbyAlreadyExists) \
	op(EOSResult::EOS_Lobby_SessionInProgress) \
	op(EOSResult::EOS_Lobby_TooManyPlayers) \
	op(EOSResult::EOS_Lobby_NoPermission) \
	op(EOSResult::EOS_Lobby_InvalidSession) \
	op(EOSResult::EOS_Lobby_SandboxNotAllowed) \
	op(EOSResult::EOS_Lobby_InviteFailed) \
	op(EOSResult::EOS_Lobby_InviteNotFound) \
	op(EOSResult::EOS_Lobby_UpsertNotAllowed) \
	op(EOSResult::EOS_Lobby_AggregationFailed) \
	op(EOSResult::EOS_Lobby_HostAtCapacity) \
	op(EOSResult::EOS_Lobby_SandboxAtCapacity) \
	op(EOSResult::EOS_Lobby_TooManyInvites) \
	op(EOSResult::EOS_Lobby_DeploymentAtCapacity) \
	op(EOSResult::EOS_Lobby_NotAllowed) \
	op(EOSResult::EOS_Lobby_MemberUpdateOnly) 

enum class EOSResult : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EOSResult>();

#define FOREACH_ENUM_EEOSCHANNELTYPE(op) \
	op(EEOSChannelType::DEFAULT) \
	op(EEOSChannelType::DATA_REQUEST) \
	op(EEOSChannelType::DATA_HANDSHAKE) \
	op(EEOSChannelType::DATA_SUBSYSTEM) \
	op(EEOSChannelType::DATA_CHAT) 

enum class EEOSChannelType : uint8;
template<> EOSCORE_API UEnum* StaticEnum<EEOSChannelType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
