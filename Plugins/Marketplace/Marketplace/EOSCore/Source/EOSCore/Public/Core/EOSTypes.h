/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_auth_types.h"
#include "eos_ui_types.h"
#include "eos_titlestorage_types.h"
#include <string>
#include "EOSTypes.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogEOSCore, Log, All);

UENUM(BlueprintType)
enum class EEOSChannelType : uint8
{
	DEFAULT = 0,
	DATA_REQUEST = 251,
	DATA_HANDSHAKE = 252,
	DATA_SUBSYSTEM = 253,
	DATA_CHAT = 254
};

USTRUCT(BlueprintType)
struct FEOSEpicAccountId
{
	GENERATED_BODY()
public:
	std::string accountId;
public:
	FEOSEpicAccountId() {}
	FEOSEpicAccountId(const EOS_EpicAccountId& data) 
		{
			char m_Buffer[EOS_EPICACCOUNTID_MAX_LENGTH+1];
			int32_t m_OutBuffer = EOS_EPICACCOUNTID_MAX_LENGTH+1;

			if (EOS_EpicAccountId_ToString(data, m_Buffer, &m_OutBuffer) == EOS_EResult::EOS_Success)
			{
				accountId = m_Buffer;
			}
		}
public:
	operator EOS_EpicAccountId() {return EOS_EpicAccountId_FromString(accountId.c_str());}
	operator EOS_EpicAccountId() const { return EOS_EpicAccountId_FromString(accountId.c_str());}
};

USTRUCT(BlueprintType)
struct FEOSProductUserId
{
	GENERATED_BODY()
public:
	std::string accountId;
public:
	FEOSProductUserId() {}
	FEOSProductUserId(const FString& string)
	{
		accountId = TCHAR_TO_UTF8(*string);
	}
	FEOSProductUserId(const EOS_ProductUserId& data)
	{
		char m_Buffer[EOS_EPICACCOUNTID_MAX_LENGTH+1];
		int32_t m_OutBuffer = EOS_EPICACCOUNTID_MAX_LENGTH+1;

		if (EOS_ProductUserId_ToString(data, m_Buffer, &m_OutBuffer) == EOS_EResult::EOS_Success)
		{
			accountId = m_Buffer;
		}
	}
public:
	operator EOS_ProductUserId() {return EOS_ProductUserId_FromString(accountId.c_str());}
	operator EOS_ProductUserId() const {return EOS_ProductUserId_FromString(accountId.c_str());}
};

/** All lobbies are referenced by a unique lobby id */
USTRUCT(BlueprintType, meta = (HasNativeBreak = "EOSCore.EOSCoreLibrary.BreakLobbyIdStruct"))
struct FEOSLobbyId
{
	GENERATED_BODY()
public:
	std::string LobbyID;
public:
	FEOSLobbyId() {}
	FEOSLobbyId(const char* data) { if (data && strlen(data) > 0) LobbyID = data; }
};

USTRUCT(BlueprintType)
struct FEOSTitleStorageFileTransferRequestHandle
{
	GENERATED_BODY()
public:
	EOS_HTitleStorageFileTransferRequest Token;
public:
	FEOSTitleStorageFileTransferRequestHandle() {}
	FEOSTitleStorageFileTransferRequestHandle(EOS_HTitleStorageFileTransferRequest data)
		: Token(data) {}
public:
	operator EOS_HTitleStorageFileTransferRequest() { return Token; }
	operator EOS_HTitleStorageFileTransferRequest() const { return Token; }
};

USTRUCT(BlueprintType)
struct FContinuanceToken
{
	GENERATED_BODY()
public:
	EOS_ContinuanceTokenDetails* Token;
public:
	FContinuanceToken() {}
	FContinuanceToken(const EOS_ContinuanceToken& data)
		: Token(data) {}
public:
	operator EOS_ContinuanceToken() { return Token; }
	operator EOS_ContinuanceToken() const { return Token; }
};

USTRUCT(BlueprintType)
struct FEOSNotificationId
{
	GENERATED_BODY()
public:
	uint64_t Id;
public:
	FEOSNotificationId() {}
	FEOSNotificationId(const EOS_NotificationId& data)
		: Id(data) {}
	FEOSNotificationId(const EOS_NotificationId* data)
		: Id(*data) {}
public:
	bool operator==(const FEOSNotificationId& other)
	{
		return Id == other.Id;
	}
	operator uint64_t() { return Id; }
	operator uint64_t() const { return Id; }
};

FORCEINLINE uint32 GetTypeHash(const FEOSNotificationId& b)
{
	return FCrc::MemCrc_DEPRECATED(&b, sizeof(FEOSNotificationId));
}

USTRUCT(BlueprintType, meta = (HasNativeBreak = "EOSCore.EOSCoreLibrary.BreakAccessTokenStruct", HasNativeMake = "EOSCore.EOSCoreLibrary.MakeAccessTokenStruct"))
struct FAccessToken
{
	GENERATED_BODY()
public:
	std::string AccessToken;
public:
	FAccessToken() {}
	FAccessToken(const char* token)
		: AccessToken(token) {}
	FAccessToken(std::string&& token)
		: AccessToken(MoveTemp(token)) {}
};

USTRUCT(BlueprintType, meta = (HasNativeBreak = "EOSCore.EOSCoreLibrary.BreakLobbyInviteIdStruct", HasNativeMake = "EOSCore.EOSCoreLibrary.MakeLobbyInviteIdStruct"))
struct FLobbyInviteId
{
	GENERATED_BODY()
public:
	std::string InviteId;
public:
	FLobbyInviteId() { }
	FLobbyInviteId(const char* data) { if (data && strlen(data) > 0) InviteId = data; }
public:
	operator std::string() { return InviteId; }
	operator std::string() const { return InviteId; }
	operator const char*() { return InviteId.c_str(); }
	operator const char*() const { return InviteId.c_str(); }
};

/** ID representing a specific UI event. */
USTRUCT(BlueprintType, meta = (HasNativeBreak = "EOSCore.EOSCoreLibrary.BreakUIEventIdStruct"))
struct FEOSUIEventId
{
	GENERATED_BODY()
public:
	uint64_t EventId;
public:
	FEOSUIEventId()
		: EventId(EOS_UI_EVENTID_INVALID) { }
	FEOSUIEventId(const EOS_UI_EventId& data)
		: EventId(data)
	{}
public:
	operator uint64_t() { return EventId; }
	operator uint64_t() const { return EventId; }
};

USTRUCT(BlueprintType)
struct FEOSPageQuery
{
	GENERATED_BODY()
public:
	/** Version of the API */
	int32 ApiVersion;
public:
	/** The index into the ordered query results to start the page at. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EOSCore")
		int32 StartIndex;
	/** The maximum number of results to have in the page. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EOSCore")
		int32 MaxCount;
public:
	explicit FEOSPageQuery()
		: ApiVersion(EOS_PAGINATION_API_LATEST) {}
};

UENUM(BlueprintType)
enum class EOSResult : uint8
{
	/** Successful result. no further error processing needed */
	EOS_Success = 0,
	/** Failed due to no connection */
	EOS_NoConnection,
	/** Failed login due to invalid credentials */
	EOS_InvalidCredentials,
	/** Failed due to invalid or missing user */
	EOS_InvalidUser,
	/** Failed due to invalid or missing authentication token for user (e.g. not logged in) */
	EOS_InvalidAuth,
	/** Failed due to invalid access */
	EOS_AccessDenied,
	/** If the client does not possess the permission required */
	EOS_MissingPermissions,
	/** If the token provided does not represent an account */
	EOS_Token_Not_Account,
	/** Throttled due to too many requests */
	EOS_TooManyRequests,
	/** Async request was already pending */
	EOS_AlreadyPending,
	/** Invalid parameters specified for request */
	EOS_InvalidParameters,
	/** Invalid request */
	EOS_InvalidRequest,
	/** Failed due to unable to parse or recognize a backend response */
	EOS_UnrecognizedResponse,
	/** Incompatible client for backend version */
	EOS_IncompatibleVersion,
	/** Not configured correctly for use */
	EOS_NotConfigured,
	/** Already configured for use. */
	EOS_AlreadyConfigured,
	/** Feature not available on this implementation */
	EOS_NotImplemented,
	/** Operation was canceled (likely by user) */
	EOS_Canceled,
	/** The requested information was not found */
	EOS_NotFound,
	/** An error occurred during an asynchronous operation, and it will be retried. Callbacks receiving this result will be called again in the future. */
	EOS_OperationWillRetry,
	/** The request had no effect */
	EOS_NoChange,
	/** The request attempted to use multiple or inconsistent API versions */
	EOS_VersionMismatch,
	/** A maximum limit was exceeded on the client, different from EOS_TooManyRequests */
	EOS_LimitExceeded,
	/** Feature or client ID performing the operation has been disabled. */
	EOS_Disabled,
	/** Duplicate entry not allowed */
	EOS_DuplicateNotAllowed,
	/** Required parameters are missing. DEPRECATED: This error is no longer used. */
	EOS_MissingParameters_DEPRECATED,
	/** Sandbox id is invalid */
	EOS_InvalidSandboxId,
	/** Request timed out */
	EOS_TimedOut,
	/** A query returned some but not all of the requested results.  */
	EOS_PartialResult,
	/** Client is missing the whitelisted role */
	EOS_Missing_Role,
	/** Client is missing the whitelisted feature */
	EOS_Missing_Feature,
	/** The sandbox given to the backend is invalid */
	EOS_Invalid_Sandbox,
	/** The deployment given to the backend is invalid */
	EOS_Invalid_Deployment,
	/** The product id specified to the backend is invalid */
	EOS_Invalid_Product,
	/** The product user id specified to the backend is invalid */
	EOS_Invalid_ProductUserID,
	/** There was a failure with the backend service */
	EOS_ServiceFailure,
	/** Cache directory is not set in platform options. */
	EOS_CacheDirectoryMissing,
	/** Cache directory is not accessible. */
	EOS_CacheDirectoryInvalid,
	/** The request failed because resource was in an invalid state */
	EOS_InvalidState,
	/** Account locked due to login failures */
	EOS_Auth_AccountLocked,
	/** Account locked by update operation. */
	EOS_Auth_AccountLockedForUpdate,
	/** Refresh token used was invalid */
	EOS_Auth_InvalidRefreshToken,
	/** Invalid access token =  typically when switching between backend environments */
	EOS_Auth_InvalidToken,
	/** Invalid bearer token */
	EOS_Auth_AuthenticationFailure,
	/** Invalid platform token */
	EOS_Auth_InvalidPlatformToken,
	/** Auth parameters are not associated with this account */
	EOS_Auth_WrongAccount,
	/** Auth parameters are not associated with this client */
	EOS_Auth_WrongClient,
	/** Full account is required */
	EOS_Auth_FullAccountRequired,
	/** Headless account is required */
	EOS_Auth_HeadlessAccountRequired,
	/** Password reset is required */
	EOS_Auth_PasswordResetRequired,
	/** Password was previously used and cannot be reused */
	EOS_Auth_PasswordCannotBeReused,
	/** Authorization code/exchange code has expired */
	EOS_Auth_Expired,
	/** Consent has not been given by the user */
	EOS_Auth_ScopeConsentRequired,
	/** The application has no profile on the backend */
	EOS_Auth_ApplicationNotFound,
	/** The requested consent wasn't found on the backend */
	EOS_Auth_ScopeNotFound,
	/** This account has been denied access to login */
	EOS_Auth_AccountFeatureRestricted,
	/** Pin grant code initiated */
	EOS_Auth_PinGrantCode,
	/** Pin grant code attempt expired */
	EOS_Auth_PinGrantExpired,
	/** Pin grant code attempt pending */
	EOS_Auth_PinGrantPending,

	/** External auth source did not yield an account */
	EOS_Auth_ExternalAuthNotLinked,
	/** External auth access revoked */
	EOS_Auth_ExternalAuthRevoked,
	/** External auth token cannot be interpreted */
	EOS_Auth_ExternalAuthInvalid,
	/** External auth cannot be linked to his account due to restrictions */
	EOS_Auth_ExternalAuthRestricted,
	/** External auth cannot be used for login */
	EOS_Auth_ExternalAuthCannotLogin,
	/** External auth is expired */
	EOS_Auth_ExternalAuthExpired,
	/** External auth cannot be removed since it's the last possible way to login */
	EOS_Auth_ExternalAuthIsLastLoginType,

	/** Exchange code not found */
	EOS_Auth_ExchangeCodeNotFound,
	/** Originating exchange code session has expired */
	EOS_Auth_OriginatingExchangeCodeSessionExpired,

	/** The account has been disabled and cannot be used for authentication */
	EOS_Auth_PersistentAuth_AccountNotActive,

	/** MFA challenge required */
	EOS_Auth_MFARequired,

	/** Parental locks are in place */
	EOS_Auth_ParentalControls,

	/** Korea real id association required but missing */
	EOS_Auth_NoRealId,

	/** An outgoing friend invitation is awaiting acceptance; sending another invite to the same user is erroneous */
	EOS_Friends_InviteAwaitingAcceptance,
	/** There is no friend invitation to accept/reject */
	EOS_Friends_NoInvitation,
	/** Users are already friends = so sending another invite is erroneous */
	EOS_Friends_AlreadyFriends,
	/** Users are not friends = so deleting the friend is erroneous */
	EOS_Friends_NotFriends,
	/** Remote user has too many invites to receive new invites */
	EOS_Friends_TargetUserTooManyInvites,
	/** Local user has too many invites to send new invites */
	EOS_Friends_LocalUserTooManyInvites,
	/** Remote user has too many friends to make a new friendship */
	EOS_Friends_TargetUserFriendLimitExceeded,
	/** Local user has too many friends to make a new friendship */
	EOS_Friends_LocalUserFriendLimitExceeded,

	/** Request data was null or invalid */
	EOS_Presence_DataInvalid,
	/** Request contained too many or too few unique data items = or the request would overflow the maximum amount of data allowed */
	EOS_Presence_DataLengthInvalid,
	/** Request contained data with an invalid key */
	EOS_Presence_DataKeyInvalid,
	/** Request contained data with a key too long or too short */
	EOS_Presence_DataKeyLengthInvalid,
	/** Request contained data with an invalid value */
	EOS_Presence_DataValueInvalid,
	/** Request contained data with a value too long */
	EOS_Presence_DataValueLengthInvalid,
	/** Request contained an invalid rich text string */
	EOS_Presence_RichTextInvalid,
	/** Request contained a rich text string that was too long */
	EOS_Presence_RichTextLengthInvalid,
	/** Request contained an invalid status state */
	EOS_Presence_StatusInvalid,

	/** The entitlement retrieved is stale = requery for updated information */
	EOS_Ecom_EntitlementStale,
	/** The offer retrieved is stale = requery for updated information */
	EOS_Ecom_CatalogOfferStale,
	/** The item or associated structure retrieved is stale = requery for updated information */
	EOS_Ecom_CatalogItemStale,
	/** The one or more offers has an invalid price. This may be caused by the price setup. */
	EOS_Ecom_CatalogOfferPriceInvalid,
	/** The checkout page failed to load */
	EOS_Ecom_CheckoutLoadError,

	/** Session is already in progress */
	EOS_Sessions_SessionInProgress,
	/** Too many players to register with this session */
	EOS_Sessions_TooManyPlayers,
	/** Client has no permissions to access this session */
	EOS_Sessions_NoPermission,
	/** Session already exists in the system */
	EOS_Sessions_SessionAlreadyExists,
	/** Session lock required for operation */
	EOS_Sessions_InvalidLock,
	/** Invalid session reference */
	EOS_Sessions_InvalidSession,
	/** Sandbox id associated with auth didn't match */
	EOS_Sessions_SandboxNotAllowed,
	/** Invite failed to send */
	EOS_Sessions_InviteFailed,
	/** Invite was not found with the service */
	EOS_Sessions_InviteNotFound,
	/** This client may not modify the session */
	EOS_Sessions_UpsertNotAllowed,
	/** Backend nodes unavailable to process request */
	EOS_Sessions_AggregationFailed,
	/** Individual backend node is as capacity */
	EOS_Sessions_HostAtCapacity,
	/** Sandbox on node is at capacity */
	EOS_Sessions_SandboxAtCapacity,
	/** An anonymous operation was attempted on a non anonymous session */
	EOS_Sessions_SessionNotAnonymous,
	/** Session is currently out of sync with the backend = data is saved locally but needs to sync with backend */
	EOS_Sessions_OutOfSync,
	/** User has received too many invites */
	EOS_Sessions_TooManyInvites,
	/** Presence session already exists for the client */
	EOS_Sessions_PresenceSessionExists,
	/** Deployment on node is at capacity */
	EOS_Sessions_DeploymentAtCapacity,
	/** Session operation not allowed */
	EOS_Sessions_NotAllowed,

	/** Request filename was invalid */
	EOS_PlayerDataStorage_FilenameInvalid,
	/** Request filename was too long */
	EOS_PlayerDataStorage_FilenameLengthInvalid,
	/** Request filename contained invalid characters */
	EOS_PlayerDataStorage_FilenameInvalidChars,
	/** Request operation would grow file too large */
	EOS_PlayerDataStorage_FileSizeTooLarge,
	/** Request file length is not valid */
	EOS_PlayerDataStorage_FileSizeInvalid,
	/** Request file handle is not valid */
	EOS_PlayerDataStorage_FileHandleInvalid,
	/** Request data is invalid */
	EOS_PlayerDataStorage_DataInvalid,
	/** Request data length was invalid */
	EOS_PlayerDataStorage_DataLengthInvalid,
	/** Request start index was invalid */
	EOS_PlayerDataStorage_StartIndexInvalid,
	/** Request is in progress */
	EOS_PlayerDataStorage_RequestInProgress,
	/** User is marked as throttled which means he can't perform some operations because limits are exceeded.  */
	EOS_PlayerDataStorage_UserThrottled,
	/** Encryption key is not set during SDK init.  */
	EOS_PlayerDataStorage_EncryptionKeyNotSet,
	/** User data callback returned error (EOS_PlayerDataStorage_EWriteResult::EOS_WR_FailRequest or EOS_PlayerDataStorage_EReadResult::EOS_RR_FailRequest, */
	EOS_PlayerDataStorage_UserErrorFromDataCallback,
	/** User is trying to read file that has header from newer version of SDK. Game/SDK needs to be updated. */
	EOS_PlayerDataStorage_FileHeaderHasNewerVersion,
	/** The file is corrupted. In some cases retry can fix the issue. */
	EOS_PlayerDataStorage_FileCorrupted,

	/** EOS Auth service deemed the external token invalid */
	EOS_Connect_ExternalTokenValidationFailed,
	/** EOS Auth user already exists */
	EOS_Connect_UserAlreadyExists,
	/** EOS Auth expired */
	EOS_Connect_AuthExpired,
	/** EOS Auth invalid token */
	EOS_Connect_InvalidToken,
	/** EOS Auth doesn't support this token type */
	EOS_Connect_UnsupportedTokenType,
	/** EOS Auth Account link failure */
	EOS_Connect_LinkAccountFailed,
	/** EOS Auth External service for validation was unavailable */
	EOS_Connect_ExternalServiceUnavailable,
	/** EOS Auth External Service configuration failure with Dev Portal */
	EOS_Connect_ExternalServiceConfigurationFailure,
	/** EOS Auth Account link failure. Tried to link Nintendo Network Service Account without first linking Nintendo Account */
	EOS_Connect_LinkAccountFailedMissingNintendoIdAccount,

	/** The social overlay page failed to load */
	EOS_UI_SocialOverlayLoadError,

	/** Client has no permissions to modify this lobby */
	EOS_Lobby_NotOwner,
	/** Lobby lock required for operation */
	EOS_Lobby_InvalidLock,
	/** Lobby already exists in the system */
	EOS_Lobby_LobbyAlreadyExists,
	/** Lobby is already in progress */
	EOS_Lobby_SessionInProgress,
	/** Too many players to register with this session */
	EOS_Lobby_TooManyPlayers,
	/** Client has no permissions to access this session */
	EOS_Lobby_NoPermission,
	/** Invalid session reference */
	EOS_Lobby_InvalidSession,
	/** Sandbox id associated with auth didn't match */
	EOS_Lobby_SandboxNotAllowed,
	/** Invite failed to send */
	EOS_Lobby_InviteFailed,
	/** Invite was not found with the service */
	EOS_Lobby_InviteNotFound,
	/** This client may not modify the session */
	EOS_Lobby_UpsertNotAllowed,
	/** Backend nodes unavailable to process request */
	EOS_Lobby_AggregationFailed,
	/** Individual backend node is as capacity */
	EOS_Lobby_HostAtCapacity,
	/** Sandbox on node is at capacity */
	EOS_Lobby_SandboxAtCapacity,
	/** User has received too many invites */
	EOS_Lobby_TooManyInvites,
	/** Deployment on node is at capacity */
	EOS_Lobby_DeploymentAtCapacity,
	/** Lobby operation not allowed */
	EOS_Lobby_NotAllowed,
	/** While restoring a lost connection lobby ownership changed and only local member data was updated */
	EOS_Lobby_MemberUpdateOnly,

	MAX
};

UENUM(BlueprintType)
enum class EOSELoginStatus : uint8
{
	/** Player has not logged in or chosen a local profile */
	EOS_LS_NotLoggedIn = 0,
	/** Player is using a local profile but is not logged in */
	EOS_LS_UsingLocalProfile = 1,
	/** Player has been validated by the platform specific authentication service */
	EOS_LS_LoggedIn = 2
};

/**
 * All supported external account providers
 *
 * @see EOS_Connect_QueryExternalAccountMappings
 */
UENUM(BlueprintType)
enum class EEOSEExternalAccountType : uint8
{
	/** External account is associated with Epic Games */
	EOS_EAT_EPIC = 0,
	/** External account is associated with Steam */
	EOS_EAT_STEAM = 1,
	/** External account is associated with Playstation */
	EOS_EAT_PSN = 2,
	/** External account is associated with Xbox Live */
	EOS_EAT_XBL = 3,
	/** External account is associated with Discord */
	EOS_EAT_DISCORD = 4,
	/** External account is associated with GOG */
	EOS_EAT_GOG = 5,
	/** External account is associated with Nintendo */
	EOS_EAT_NINTENDO = 6,
	/** External account is associated with Uplay */
	EOS_EAT_UPLAY = 7,
	/** External account is associated with an OpenID Provider */
	EOS_EAT_OPENID = 8,
	/** External account is associated with Apple */
	EOS_EAT_APPLE = 9
};

/**
 * All possible states of a local user
 *
 * @see EOS_Auth_AddNotifyLoginStatusChanged
 * @see EOS_Auth_GetLoginStatus
 * @see EOS_Auth_Login
 * @see EOS_Connect_AddNotifyLoginStatusChanged
 * @see EOS_Connect_GetLoginStatus
 * @see EOS_Connect_Login
 */
UENUM(BlueprintType)
enum class EEOSELoginStatus : uint8
{
	/** Player has not logged in or chosen a local profile */
	EOS_LS_NotLoggedIn = 0,
	/** Player is using a local profile but is not logged in */
	EOS_LS_UsingLocalProfile = 1,
	/** Player has been validated by the platform specific authentication service */
	EOS_LS_LoggedIn = 2
};

/** Supported types of data that can be stored with inside an attribute (used by sessions/lobbies/etc) */
UENUM(BlueprintType)
enum class EEOSEAttributeType : uint8
{
	/** Boolean value (true/false) */
	EOS_AT_BOOLEAN = 0,
	/** 64 bit integers */
	EOS_AT_INT64 = 1,
	/** Double/floating point precision */
	EOS_AT_DOUBLE = 2,
	/** UTF8 Strings */
	EOS_AT_STRING = 3
};

UENUM(BlueprintType)
enum class EEOSEComparisonOp : uint8
{
	/** Value must equal the one stored on the lobby/session */
	EOS_CO_EQUAL = 0,
	/** Value must not equal the one stored on the lobby/session */
	EOS_CO_NOTEQUAL = 1,
	/** Value must be strictly greater than the one stored on the lobby/session */
	EOS_CO_GREATERTHAN = 2,
	/** Value must be greater than or equal to the one stored on the lobby/session */
	EOS_CO_GREATERTHANOREQUAL = 3,
	/** Value must be strictly less than the one stored on the lobby/session */
	EOS_CO_LESSTHAN = 4,
	/** Value must be less than or equal to the one stored on the lobby/session */
	EOS_CO_LESSTHANOREQUAL = 5,
	/** Prefer values nearest the one specified ie. abs(SearchValue-SessionValue) closest to 0 */
	EOS_CO_DISTANCE = 6,
	/** Value stored on the lobby/session may be any from a specified list */
	EOS_CO_ANYOF = 7,
	/** Value stored on the lobby/session may NOT be any from a specified list */
	EOS_CO_NOTANYOF = 8
};

UENUM(BlueprintType)
enum class ESuccessFail : uint8
{
	Success = 0, Fail
};