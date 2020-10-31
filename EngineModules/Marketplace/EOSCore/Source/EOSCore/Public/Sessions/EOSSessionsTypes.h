/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_sessions_types.h"
#include "Core/EOSHelpers.h"
#include "EOSSessionsTypes.generated.h"

class UCoreSessions;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/** All possible states of an existing named session */
UENUM(BlueprintType)
enum class EEOSEOnlineSessionState : uint8
{
	/** An online session has not been created yet */
	EOS_OSS_NoSession = 0,
	/** An online session is in the process of being created */
	EOS_OSS_Creating = 1,
	/** Session has been created but the session hasn't started (pre match lobby) */
	EOS_OSS_Pending = 2,
	/** Session has been asked to start (may take time due to communication with backend) */
	EOS_OSS_Starting = 3,
	/** The current session has started. Sessions with join in progress disabled are no longer joinable */
	EOS_OSS_InProgress = 4,
	/** The session is still valid, but the session is no longer being played (post match lobby) */
	EOS_OSS_Ending = 5,
	/** The session is closed and any stats committed */
	EOS_OSS_Ended = 6,
	/** The session is being destroyed */
	EOS_OSS_Destroying = 7
};

/** Advertisement properties for a single attribute associated with a session */
UENUM(BlueprintType)
enum class EEOSESessionAttributeAdvertisementType : uint8
{
	/** Don't advertise via the online service */
	EOS_SAAT_DontAdvertise = 0,
	/** Advertise via the online service only */
	EOS_SAAT_Advertise = 1
};

/** Permission level gets more restrictive further down */
UENUM(BlueprintType)
enum class EEOSEOnlineSessionPermissionLevel : uint8
{
	/** Anyone can find this session as long as it isn't full */
	EOS_OSPF_PublicAdvertised = 0,
	/** Players who have access to presence can see this session */
	EOS_OSPF_JoinViaPresence = 1,
	/** Only players with invites registered can see this session */
	EOS_OSPF_InviteOnly = 2
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/** Bucket id associated with the session */
USTRUCT(BlueprintType, meta = (HasNativeBreak = "EOSCore.EOSCoreLibrary.BreakBucketId", HasNativeMake = "EOSCore.EOSCoreLibrary.MakeBucketId"))
struct FBucketId
{
	GENERATED_BODY()
public:
	std::string Data;
public:
	explicit FBucketId() { }
	FBucketId(const char* data)
		: Data(data) {}
	FBucketId(std::string&& data)
		: Data(MoveTemp(data)) {}
};

USTRUCT(BlueprintType, meta = (HasNativeBreak = "EOSCore.EOSCoreLibrary.BreakSessionsInviteId", HasNativeMake = "EOSCore.EOSCoreLibrary.MakeSessionsInviteId"))
struct FSessionInviteId
{
	GENERATED_BODY()
public:
	std::string Data;
public:
	explicit FSessionInviteId() { }
	FSessionInviteId(const char* data)
		: Data(data) {}
	FSessionInviteId(std::string&& data) 
		: Data(MoveTemp(data)) {}
};

/** Handle to the sessions interface */
USTRUCT(BlueprintType)
struct FEOSHSessions
{
	GENERATED_BODY()
public:
	EOS_HSessions Handle;
public:
	explicit FEOSHSessions()
		: Handle(nullptr) {}
	FEOSHSessions(const EOS_HSessions& data) 
		: Handle(data)
	{}
public:
	operator EOS_HSessions() { return Handle; }
};

/** Handle to the calls responsible for creating/updating sessions */
USTRUCT(BlueprintType)
struct FEOSHSessionModification
{
	GENERATED_BODY()
public:
	EOS_HSessionModification Handle;
public:
	explicit FEOSHSessionModification()
		: Handle(nullptr) {}
	FEOSHSessionModification(const EOS_HSessionModification& data)
		: Handle(data)
	{}
public:
	operator EOS_HSessionModification() const { return Handle; }
};

/** Handle to a single named session that exists locally */
USTRUCT(BlueprintType)
struct FEOSHActiveSession
{
	GENERATED_BODY()
public:
	EOS_HActiveSession Handle;
public:
	explicit FEOSHActiveSession()
		: Handle(nullptr) {}
	FEOSHActiveSession(const EOS_HActiveSession& data)
		: Handle(data)
	{}
public:
	operator EOS_HActiveSession() const { return Handle; }
};

/** Handle to a single session that may be part of a named session, search result, or invite */
USTRUCT(BlueprintType)
struct FEOSHSessionDetails
{
	GENERATED_BODY()
public:
	EOS_HSessionDetails Handle;
public:
	explicit FEOSHSessionDetails()
		: Handle(nullptr) {}
	FEOSHSessionDetails(const EOS_HSessionDetails& data)
		: Handle(data)
	{}
public:
	operator EOS_HSessionDetails() const { return Handle; }
};

/** Handle to the calls responsible for creating a search object */
USTRUCT(BlueprintType)
struct FEOSHSessionSearch
{
	GENERATED_BODY()
public:
	EOS_HSessionSearch Handle;
public:
	explicit FEOSHSessionSearch()
		: Handle(nullptr) {}
	FEOSHSessionSearch(const EOS_HSessionSearch& data)
		: Handle(data)
	{}
public:
	operator EOS_HSessionSearch() const { return Handle; }
};


/**
 * Input parameters for the EOS_Sessions_CreateSessionModification Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsCreateSessionModificationOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session to create */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
	/** Bucket id associated with the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FBucketId BucketId;
	/** Maximum number of players allowed in the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 MaxPlayers;
	/** Local user id associated with the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
	/**
	 * If true than this session will be used as the session associated with presence.
	 * Only one session at a time can have this flag true.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		bool bPresenceEnabled;
public:
	explicit FEOSSessionsCreateSessionModificationOptions()
		: ApiVersion(EOS_SESSIONS_CREATESESSIONMODIFICATION_API_LATEST)
		, MaxPlayers(0) 
		, bPresenceEnabled(false) {}
	FEOSSessionsCreateSessionModificationOptions(const EOS_Sessions_CreateSessionModificationOptions& data)
		: ApiVersion(EOS_SESSIONS_CREATESESSIONMODIFICATION_API_LATEST)
		, SessionName(data.SessionName)
		, BucketId(data.BucketId)
		, MaxPlayers(data.MaxPlayers)
		, LocalUserId(data.LocalUserId)
		, bPresenceEnabled((data.bPresenceEnabled > 0))
		{}
};

/** The most recent version of the EOS_Sessions_UpdateSessionModification API. */
USTRUCT(BlueprintType)
struct FEOSSessionsUpdateSessionModificationOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session to update */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
public:
	explicit FEOSSessionsUpdateSessionModificationOptions()
		: ApiVersion(EOS_SESSIONS_UPDATESESSIONMODIFICATION_API_LATEST) { }
};

/**
 * Input parameters for the EOS_Sessions_SendInvite Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsSendInviteOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session associated with the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
	/** The local user inviting */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
	/** The remote user being invited */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSSessionsSendInviteOptions()
		: ApiVersion(EOS_SESSIONS_SENDINVITE_API_LATEST) { }
};

/**
 * Output parameters for the EOS_Sessions_SendInvite function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsSendInviteCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_SendInvite */
		void* ClientData;
public:
	explicit FEOSSessionsSendInviteCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsSendInviteCallbackInfo(const EOS_Sessions_SendInviteCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

/**
 * Input parameters for the EOS_Sessions_RejectInvite Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsRejectInviteOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The local user rejecting the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
	/** The invite id to reject */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FSessionInviteId InviteId;
public:
	explicit FEOSSessionsRejectInviteOptions()
		: ApiVersion(EOS_SESSIONS_REJECTINVITE_API_LATEST) {}
};

/**
 * Output parameters for the EOS_Sessions_RejectInvite function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsRejectInviteCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_RejectInvite */
		void* ClientData;
public:
	explicit FEOSSessionsRejectInviteCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsRejectInviteCallbackInfo(const EOS_Sessions_RejectInviteCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

/**
 * Input parameters for the EOS_Sessions_QueryInvites Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsQueryInvitesOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local User Id to query invites */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSSessionsQueryInvitesOptions()
		: ApiVersion(EOS_SESSIONS_QUERYINVITES_API_LATEST) {}
};

/**
 * Output parameters for the EOS_Sessions_QueryInvites function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsQueryInvitesCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_QueryInvites */
		void* ClientData;
	/** Local User Id that made the request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSSessionsQueryInvitesCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsQueryInvitesCallbackInfo(const EOS_Sessions_QueryInvitesCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Input parameters for the EOS_Sessions_GetInviteCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsGetInviteCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local User Id to query invites */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSSessionsGetInviteCountOptions()
		: ApiVersion(EOS_SESSIONS_GETINVITECOUNT_API_LATEST) {}
};

/**
 * Input parameters for the EOS_Sessions_GetInviteIdByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsGetInviteIdByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user that has invites */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
	/** Index of the invite id to retrieve */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 Index;
public:
	explicit FEOSSessionsGetInviteIdByIndexOptions()
		: ApiVersion(EOS_SESSIONS_GETINVITEIDBYINDEX_API_LATEST) 
		, Index(0) {}
};

/**
 * Input parameters for the EOS_Sessions_CreateSessionSearch Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsCreateSessionSearchOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Max number of results to return */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 MaxSearchResults;
public:
	explicit FEOSSessionsCreateSessionSearchOptions()
		: ApiVersion(EOS_SESSIONS_CREATESESSIONSEARCH_API_LATEST)
		, MaxSearchResults(50) {}
};

/** The most recent version of the EOS_Sessions_UpdateSession API. */
USTRUCT(BlueprintType)
struct FEOSSessionsUpdateSessionOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Builder handle */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSHSessionModification SessionModificationHandle;
public:
	explicit FEOSSessionsUpdateSessionOptions()
		: ApiVersion(EOS_SESSIONS_UPDATESESSION_API_LATEST) {}
};

/**
 * Output parameters for the EOS_Sessions_UpdateSession function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsUpdateSessionCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_UpdateSession */
		void* ClientData;
	/** Name of the session that was created/modified */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
	/** Id of the session that was created/modified */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionId;
public:
	explicit FEOSSessionsUpdateSessionCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsUpdateSessionCallbackInfo(const EOS_Sessions_UpdateSessionCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, SessionName(data.SessionName)
		, SessionId(data.SessionId)
	{}
};

/**
 * Input parameters for the EOS_Sessions_DestroySession function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsDestroySessionOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session to destroy */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
public:
	explicit FEOSSessionsDestroySessionOptions()
		: ApiVersion(EOS_SESSIONS_DESTROYSESSION_API_LATEST) {}
};

/**
 * Output parameters for the EOS_Sessions_DestroySession function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsDestroySessionCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_DestroySession */
		void* ClientData;
public:
	explicit FEOSSessionsDestroySessionCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsDestroySessionCallbackInfo(const EOS_Sessions_DestroySessionCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

USTRUCT(BlueprintType)
struct FEOSSessionsJoinSessionOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session to create after joining session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
	/** Session handle to join */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSHSessionDetails SessionHandle;
	/** Local user joining the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
	/**
	 * If true than this session will be used as the session associated with presence.
	 * Only one session at a time can have this flag true.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		bool bPresenceEnabled;
public:
	explicit FEOSSessionsJoinSessionOptions()
		: ApiVersion(EOS_SESSIONS_JOINSESSION_API_LATEST) 
		, bPresenceEnabled(false) {}
};

/**
 * Output parameters for the EOS_Sessions_JoinSession function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsJoinSessionCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_JoinSession */
		void* ClientData;
public:
	explicit FEOSSessionsJoinSessionCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsJoinSessionCallbackInfo(const EOS_Sessions_JoinSessionCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

/**
 * Input parameters for the EOS_Sessions_StartSessionOptions Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsStartSessionOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session to set in progress */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
public:
	explicit FEOSSessionsStartSessionOptions()
		: ApiVersion(EOS_SESSIONS_STARTSESSION_API_LATEST) {}
};

USTRUCT(BlueprintType)
struct FEOSSessionsStartSessionCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_StartSession */
		void* ClientData;
public:
	explicit FEOSSessionsStartSessionCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsStartSessionCallbackInfo(const EOS_Sessions_StartSessionCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

/**
 * Input parameters for the EOS_Sessions_EndSessionOptions Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsEndSessionOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session to set as no long in progress */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
public:
	explicit FEOSSessionsEndSessionOptions()
		: ApiVersion(EOS_SESSIONS_STARTSESSION_API_LATEST) {}
};

USTRUCT(BlueprintType)
struct FEOSSessionsEndSessionCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_EndSession */
		void* ClientData;
public:
	explicit FEOSSessionsEndSessionCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsEndSessionCallbackInfo(const EOS_Sessions_EndSessionCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

/**
 * Input parameters for the EOS_Sessions_RegisterPlayers Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsRegisterPlayersOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session for which to register players */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
	/** Array of players to register with the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		TArray<FEOSProductUserId> PlayersToRegister;
	/** Number of players in the array */
		uint32_t PlayersToRegisterCount;
public:
	explicit FEOSSessionsRegisterPlayersOptions()
		: ApiVersion(EOS_SESSIONS_REGISTERPLAYERS_API_LATEST) {}
};

USTRUCT(BlueprintType)
struct FEOSSessionsRegisterPlayersCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_RegisterPlayers */
		void* ClientData;
public:
	explicit FEOSSessionsRegisterPlayersCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsRegisterPlayersCallbackInfo(const EOS_Sessions_RegisterPlayersCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

/**
 * Input parameters for the EOS_Sessions_UnregisterPlayers Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsUnregisterPlayersOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session for which to unregister players */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
	/** Array of players to unregister from the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		TArray<FEOSProductUserId> PlayersToUnregister;
	/** Number of players in the array */
	uint32_t PlayersToUnregisterCount;
public:
	explicit FEOSSessionsUnregisterPlayersOptions()
		: ApiVersion(EOS_SESSIONS_UNREGISTERPLAYERS_API_LATEST) {}
};

USTRUCT(BlueprintType)
struct FEOSSessionsUnregisterPlayersCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Sessions_UnregisterPlayers */
		void* ClientData;
public:
	explicit FEOSSessionsUnregisterPlayersCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionsUnregisterPlayersCallbackInfo(const EOS_Sessions_UnregisterPlayersCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

/**
 * Input parameters for the EOS_SessionModification_SetBucketId Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionModificationSetBucketIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FBucketId BucketId;
public:
	explicit FEOSSessionModificationSetBucketIdOptions()
		: ApiVersion(EOS_SESSIONMODIFICATION_SETBUCKETID_API_LATEST) {}
};

/**
 * Input parameters for the EOS_SessionModification_SetHostAddress Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionModificationSetHostAddressOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString HostAddress;
public:
	explicit FEOSSessionModificationSetHostAddressOptions()
		: ApiVersion(EOS_SESSIONMODIFICATION_SETHOSTADDRESS_API_LATEST) {}
};

/**
 * Input parameters for the EOS_SessionModification_SetPermissionLevel Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionModificationSetPermissionLevelOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Permission level to set on the sesion */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EEOSEOnlineSessionPermissionLevel PermissionLevel;
public:
	explicit FEOSSessionModificationSetPermissionLevelOptions()
		: ApiVersion(EOS_SESSIONMODIFICATION_SETHOSTADDRESS_API_LATEST) 
		, PermissionLevel(EEOSEOnlineSessionPermissionLevel::EOS_OSPF_PublicAdvertised) {}
};

/**
 * Input parameters for the EOS_SessionModification_SetJoinInProgressAllowed Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionModificationSetJoinInProgressAllowedOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Does the session allow join in progress */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		bool bAllowJoinInProgress;
public:
	explicit FEOSSessionModificationSetJoinInProgressAllowedOptions()
		: ApiVersion(EOS_SESSIONMODIFICATION_SETJOININPROGRESSALLOWED_API_LATEST) 
		, bAllowJoinInProgress(false) {}
};

/**
 * Input parameters for the EOS_SessionModification_SetMaxPlayers Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionModificationSetMaxPlayersOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Max number of players to allow in the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 MaxPlayers;
public:
	explicit FEOSSessionModificationSetMaxPlayersOptions()
		: ApiVersion(EOS_SESSIONMODIFICATION_SETMAXPLAYERS_API_LATEST) 
		, MaxPlayers(10) {}
};

/**
 * Input parameters for the EOS_SessionModification_SetInvitesAllowed Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionModificationSetInvitesAllowedOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** If true then invites can currently be sent for the associated session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		bool bInvitesAllowed;
public:
	explicit FEOSSessionModificationSetInvitesAllowedOptions()
		: ApiVersion(EOS_SESSIONMODIFICATION_SETINVITESALLOWED_API_LATEST) 
		, bInvitesAllowed(false) {}
};

/**
 * Contains information about both session and search parameter attribution
 */
USTRUCT(BlueprintType)
struct FEOSSessionsAttributeData
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
	EOS_Sessions_AttributeData AttributeData;
public:
	explicit FEOSSessionsAttributeData()
		: ApiVersion(EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST) {}
	FEOSSessionsAttributeData(const EOS_Sessions_AttributeData& data)
		: ApiVersion(EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST)
		, AttributeData(data) {}
};

/**
 * Input parameters for the EOS_ActiveSession_CopyInfo Function.
 */
USTRUCT(BlueprintType)
struct FEOSActiveSessionCopyInfoOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSActiveSessionCopyInfoOptions()
		: ApiVersion(EOS_ACTIVESESSION_COPYINFO_API_LATEST) {}
};

/**
 * Input parameters for the EOS_ActiveSession_GetRegisteredPlayerCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSActiveSessionGetRegisteredPlayerCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSActiveSessionGetRegisteredPlayerCountOptions()
		: ApiVersion(EOS_ACTIVESESSION_GETREGISTEREDPLAYERCOUNT_API_LATEST) {}
};

/**
 * Input parameters for the EOS_ActiveSession_GetRegisteredPlayerByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Index of the registered player to retrieve */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 PlayerIndex;
public:
	explicit FEOSActiveSessionGetRegisteredPlayerByIndexOptions()
		: ApiVersion(EOS_ACTIVESESSION_GETREGISTEREDPLAYERBYINDEX_API_LATEST) 
		, PlayerIndex(0) {}
};

/**
 *  An attribution value and its advertisement setting stored with a session.
 */
USTRUCT(BlueprintType)
struct FEOSSessionDetailsAttribute
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Key/Value pair describing the attribute */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSSessionsAttributeData Data;
	/** Is this attribution advertised with the backend or simply stored locally */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EEOSESessionAttributeAdvertisementType AdvertisementType;
public:
	explicit FEOSSessionDetailsAttribute()
		: ApiVersion(EOS_SESSIONS_SESSIONATTRIBUTE_API_LATEST) 
		, AdvertisementType(EEOSESessionAttributeAdvertisementType::EOS_SAAT_Advertise) {}
	FEOSSessionDetailsAttribute(const EOS_SessionDetails_Attribute& data)
		: ApiVersion(EOS_SESSIONS_SESSIONATTRIBUTE_API_LATEST)
		, Data(*data.Data)
		, AdvertisementType(static_cast<EEOSESessionAttributeAdvertisementType>(data.AdvertisementType)) {}
};

/**
 * Input parameters for the EOS_SessionModification_AddAttribute Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionModificationAddAttributeOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Key/Value pair describing the attribute to add to the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSSessionsAttributeData Data;
	/** Is this attribution advertised with the backend or simply stored locally */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EEOSESessionAttributeAdvertisementType AdvertisementType;
public:
	explicit FEOSSessionModificationAddAttributeOptions()
		: ApiVersion(EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST) 
		, AdvertisementType(EEOSESessionAttributeAdvertisementType::EOS_SAAT_Advertise) {}
};

/**
 * Input parameters for the EOS_SessionModification_RemoveAttribute Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionModificationRemoveAttributeOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Session attribute to remove from the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString Key;
public:
	explicit FEOSSessionModificationRemoveAttributeOptions()
		: ApiVersion(EOS_SESSIONMODIFICATION_REMOVEATTRIBUTE_API_LATEST) {}
};

/**
 * Input parameters for the EOS_SessionSearch_SetMaxResults Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionSearchSetMaxResultsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Maximum number of search results returned with this query, may not exceed EOS_SESSIONS_MAX_SEARCH_RESULTS */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 MaxSearchResults;
public:
	explicit FEOSSessionSearchSetMaxResultsOptions()
		: ApiVersion(EOS_SESSIONSEARCH_SETMAXSEARCHRESULTS_API_LATEST) 
		, MaxSearchResults(50) {}
};

/**
 * Input parameters for the EOS_SessionSearch_Find Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionSearchFindOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user who is searching */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSSessionSearchFindOptions()
		: ApiVersion(EOS_SESSIONSEARCH_FIND_API_LATEST) {}
};

USTRUCT(BlueprintType)
struct FEOSSessionSearchFindCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EOSResult ResultCode;
	/** Context that was passed into EOS_SessionSearch_Find */
		void* ClientData;
public:
	explicit FEOSSessionSearchFindCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSSessionSearchFindCallbackInfo(const EOS_SessionSearch_FindCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

/**
 * Input parameters for the EOS_SessionSearch_GetSearchResultCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionSearchGetSearchResultCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSSessionSearchGetSearchResultCountOptions()
		: ApiVersion(EOS_SESSIONSEARCH_GETSEARCHRESULTCOUNT_API_LATEST) {}
};

/**
 * Input parameters for the EOS_SessionSearch_CopySearchResultByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionSearchCopySearchResultByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/**
	* The index of the session to retrieve within the completed search query
	* @see EOS_SessionSearch_GetSearchResultCount
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 SessionIndex;
public:
	explicit FEOSSessionSearchCopySearchResultByIndexOptions()
		: ApiVersion(EOS_SESSIONSEARCH_COPYSEARCHRESULTBYINDEX_API_LATEST) 
		, SessionIndex(0) {}
};

/**
 * Input parameters for the EOS_SessionSearch_SetSessionId Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionSearchSetSessionIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Search sessions for a specific session id, returning at most one session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionId;
public:
	explicit FEOSSessionSearchSetSessionIdOptions()
		: ApiVersion(EOS_SESSIONSEARCH_SETSESSIONID_API_LATEST) {}
};

/**
 * Input parameters for the EOS_SessionSearch_SetTargetUserId Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionSearchSetTargetUserIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Search sessions for given user, returning any sessions where this player is currently registered */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSSessionSearchSetTargetUserIdOptions()
		: ApiVersion(EOS_SESSIONSEARCH_SETTARGETUSERID_API_LATEST) {}
};

/**
 * Input parameters for the EOS_SessionSearch_SetParameter Function.
 *
 * A search key may be set more than once to make multiple comparisons
 * The two comparisons are AND'd together
 * (ie, Key GREATER_THAN 5, Key NOT_EQUALS 10)
 */
USTRUCT(BlueprintType)
struct FEOSSessionSearchSetParameterOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Search parameter describing a key and a value to compare */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSSessionsAttributeData Parameter;
	/** The type of comparison to make against the search parameter */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EEOSEComparisonOp ComparisonOp;
public:
	explicit FEOSSessionSearchSetParameterOptions()
		: ApiVersion(EOS_SESSIONSEARCH_SETPARAMETER_API_LATEST) 
		, ComparisonOp(EEOSEComparisonOp::EOS_CO_EQUAL) {}
};

/**
 * Input parameters for the EOS_SessionSearch_RemoveParameter Function.
 *
 * Removal requires both the key and its comparator in order to remove as the same key can be used in more than one operation
 */
USTRUCT(BlueprintType)
struct FEOSSessionSearchRemoveParameterOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Search parameter key to remove from the search */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString Key;
	/** The type of comparison to make against the search parameter */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EEOSEComparisonOp ComparisonOp;
public:
	explicit FEOSSessionSearchRemoveParameterOptions()
		: ApiVersion(EOS_SESSIONSEARCH_REMOVEPARAMETER_API_LATEST)
		, ComparisonOp(EEOSEComparisonOp::EOS_CO_EQUAL) {}
};

/** Common settings associated with a single session */
USTRUCT(BlueprintType)
struct FEOSSessionDetailsSettings
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The main indexed parameter for this session, can be any string (ie "Region:GameMode") */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FBucketId BucketId;
	/** Number of total players allowed in the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 NumPublicConnections;
	/** Are players allowed to join the session while it is in the "in progress" state */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		bool bAllowJoinInProgress;
	/** Permission level describing allowed access to the session when joining or searching for the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EEOSEOnlineSessionPermissionLevel PermissionLevel;
	/** Are players allowed to send invites for the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		bool bInvitesAllowed;
public:
	explicit FEOSSessionDetailsSettings()
		: ApiVersion(EOS_SESSIONDETAILS_SETTINGS_API_LATEST)
		, NumPublicConnections(0)
		, bAllowJoinInProgress(false)
		, PermissionLevel(EEOSEOnlineSessionPermissionLevel::EOS_OSPF_PublicAdvertised)
		, bInvitesAllowed(false) {}
	FEOSSessionDetailsSettings(const EOS_SessionDetails_Settings& data)
		: ApiVersion(EOS_SESSIONDETAILS_SETTINGS_API_LATEST)
		, BucketId(data.BucketId)
		, NumPublicConnections(data.NumPublicConnections)
		, bAllowJoinInProgress((data.bAllowJoinInProgress > 0))
		, PermissionLevel(static_cast<EEOSEOnlineSessionPermissionLevel>(data.PermissionLevel))
		, bInvitesAllowed((data.bInvitesAllowed > 0)) {}
};

/** Internal details about a session, found on both active sessions and within search results */
USTRUCT(BlueprintType)
struct FEOSSessionDetailsInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Session id assigned by the backend service */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionId;
	/** IP address of this session as visible by the backend service */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString HostAddress;
	/** Number of remaining open spaces on the session (NumPublicConnections - RegisteredPlayers */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 NumOpenPublicConnections;
	/** Reference to the additional settings associated with this session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSSessionDetailsSettings Settings;
public:
	explicit FEOSSessionDetailsInfo()
		: ApiVersion(EOS_SESSIONDETAILS_INFO_API_LATEST) 
		, NumOpenPublicConnections(10) {}
	FEOSSessionDetailsInfo(const EOS_SessionDetails_Info& data)
		: ApiVersion(EOS_SESSIONDETAILS_INFO_API_LATEST)
		, SessionId(data.SessionId)
		, HostAddress(data.HostAddress)
		, NumOpenPublicConnections(data.NumOpenPublicConnections)
		, Settings(*data.Settings) {}
};

/**
 * Input parameters for the EOS_SessionDetails_CopyInfo Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionDetailsCopyInfoOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSSessionDetailsCopyInfoOptions()
		: ApiVersion(EOS_SESSIONDETAILS_COPYINFO_API_LATEST) {}
};

/**
 * Input parameters for the EOS_SessionDetails_GetSessionAttributeCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionDetailsGetSessionAttributeCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSSessionDetailsGetSessionAttributeCountOptions()
		: ApiVersion(EOS_SESSIONDETAILS_GETSESSIONATTRIBUTECOUNT_API_LATEST) {}
};

/**
 * Input parameters for the EOS_SessionDetails_CopySessionAttributeByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionDetailsCopySessionAttributeByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/**
	 * The index of the attribute to retrieve
	 * @see EOS_SessionDetails_GetSessionAttributeCount
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		int32 AttrIndex;
public:
	explicit FEOSSessionDetailsCopySessionAttributeByIndexOptions()
		: ApiVersion(EOS_SESSIONDETAILS_COPYSESSIONATTRIBUTEBYINDEX_API_LATEST)
		, AttrIndex(0) {}
};

/**
 * Input parameters for the EOS_SessionDetails_CopySessionAttributeByKey Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionDetailsCopySessionAttributeByKeyOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The name of the key to get the session attribution for
	* @see EOS_SessionModification_AddAttribute
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString AttrKey;
public:
	explicit FEOSSessionDetailsCopySessionAttributeByKeyOptions()
		: ApiVersion(EOS_SESSIONDETAILS_COPYSESSIONATTRIBUTEBYKEY_API_LATEST) {}
};

/**
 * Top level details about an active session
 */
USTRUCT(BlueprintType)
struct FEOSActiveSessionInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
	/** Local user who created or joined the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
	/** Current state of the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		EEOSEOnlineSessionState State;
	/** Session details */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSSessionDetailsInfo SessionDetails;
public:
	explicit FEOSActiveSessionInfo()
		: ApiVersion(EOS_ACTIVESESSION_INFO_API_LATEST)
		, State(EEOSEOnlineSessionState::EOS_OSS_Creating) {}
	FEOSActiveSessionInfo(const EOS_ActiveSession_Info& data) 
		: ApiVersion(EOS_ACTIVESESSION_INFO_API_LATEST)
		, SessionName(data.SessionName)
		, LocalUserId(data.LocalUserId)
		, State(static_cast<EEOSEOnlineSessionState>(data.State))
		, SessionDetails(*data.SessionDetails)
	{}
};

/**
 * Input parameters for the EOS_Sessions_CopyActiveSessionHandle Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsCopyActiveSessionHandleOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session for which to retrieve a session handle */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
public:
	explicit FEOSSessionsCopyActiveSessionHandleOptions()
		: ApiVersion(EOS_SESSIONS_COPYACTIVESESSIONHANDLE_API_LATEST) {}
};

/** The most recent version of the EOS_Sessions_AddNotifySessionInviteReceived API. */
USTRUCT(BlueprintType)
struct FEOSSessionsAddNotifySessionInviteReceivedOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSSessionsAddNotifySessionInviteReceivedOptions()
		: ApiVersion(EOS_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVED_API_LATEST) {}
};

/**
 * Output parameters for the EOS_Sessions_OnSessionInviteReceivedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsSessionInviteReceivedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Sessions_AddNotifySessionInviteReceived */
	void* ClientData;
	/** User that received the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
	/** Target user that sent the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId TargetUserId;
	/** Invite Id used to retrieve the actual session details */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FSessionInviteId InviteId;
public:
	explicit FEOSSessionsSessionInviteReceivedCallbackInfo()
        : ClientData(nullptr){ }
	FEOSSessionsSessionInviteReceivedCallbackInfo(const EOS_Sessions_SessionInviteReceivedCallbackInfo& data) 
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		, InviteId(data.InviteId)
	{}
};

/** The most recent version of the EOS_Sessions_AddNotifySessionInviteAccepted API. */
USTRUCT(BlueprintType)
struct FEOSSessionsAddNotifySessionInviteAcceptedOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSSessionsAddNotifySessionInviteAcceptedOptions()
		: ApiVersion(EOS_SESSIONS_ADDNOTIFYSESSIONINVITEACCEPTED_API_LATEST) {}
};

/**
 * Output parameters for the EOS_Sessions_OnSessionInviteAcceptedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsSessionInviteAcceptedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Sessions_AddNotifySessionInviteReceived */
	void* ClientData;
	/** Session Id that should be used for joining */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionId;
	/** User that accepted the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
	/** Target user that sent the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId TargetUserId;
	/** Invite id that was accepted */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FSessionInviteId InviteId;
public:
	explicit FEOSSessionsSessionInviteAcceptedCallbackInfo()
        : ClientData(nullptr){ }
	FEOSSessionsSessionInviteAcceptedCallbackInfo(const EOS_Sessions_SessionInviteAcceptedCallbackInfo& data)
		: ClientData(data.ClientData)
		, SessionId(data.SessionId)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		, InviteId(data.InviteId)
	{}
};

/**
 * Output parameters for the EOS_Sessions_OnJoinSessionAcceptedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsJoinSessionAcceptedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Sessions_AddNotifyJoinSessionAccepted */
	void* ClientData;
	/** User that initialized the join game */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
	/**
	 * The UI Event associated with this Join Game event.
	 * This should be used with EOS_Sessions_CopySessionHandleByUiEventId to get a handle to be used
	 * when calling EOS_Sessions_JoinSession.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSUIEventId UiEventId;
public:
	explicit FEOSSessionsJoinSessionAcceptedCallbackInfo()
        : ClientData(nullptr){ }
	FEOSSessionsJoinSessionAcceptedCallbackInfo(const EOS_Sessions_JoinSessionAcceptedCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, UiEventId(data.UiEventId)
	{}
};

/**
 * Input parameters for the EOS_Sessions_CopySessionHandleByInviteId Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsCopySessionHandleByInviteIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Invite id for which to retrieve a session handle */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FSessionInviteId InviteId;
public:
	explicit FEOSSessionsCopySessionHandleByInviteIdOptions()
		: ApiVersion(EOS_SESSIONS_COPYSESSIONHANDLEBYINVITEID_API_LATEST) {}
};

/**
 * Input parameters for the EOS_Sessions_CopySessionHandleByUiEventId Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsCopySessionHandleByUiEventIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** UI Event associated with the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSUIEventId UiEventId;
public:
	explicit FEOSSessionsCopySessionHandleByUiEventIdOptions()
		: ApiVersion(EOS_SESSIONS_COPYSESSIONHANDLEBYUIEVENTID_API_LATEST) {}
};

/**
 * Input parameters for the EOS_Sessions_CopySessionHandleForPresence Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsCopySessionHandleForPresenceOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user id associated with the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSSessionsCopySessionHandleForPresenceOptions()
		: ApiVersion(EOS_SESSIONS_COPYSESSIONHANDLEFORPRESENCE_API_LATEST) {}
};

/**
 * Input parameters for the EOS_Sessions_IsUserInSession Function.
 */
USTRUCT(BlueprintType)
struct FEOSSessionsIsUserInSessionOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Active session name to search within */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
	/** Product User Id to search for in the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSSessionsIsUserInSessionOptions()
		: ApiVersion(EOS_SESSIONS_ISUSERINSESSION_API_LATEST) {}
};

USTRUCT(BlueprintType)
struct FEOSSessionsDumpSessionStateOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the session */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sessions")
		FString SessionName;
public:
	explicit FEOSSessionsDumpSessionStateOptions()
		: ApiVersion(EOS_SESSIONS_DUMPSESSIONSTATE_API_LATEST) {}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionSessionSendInviteCallback, const FEOSSessionsSendInviteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionRejectInviteCallback, const FEOSSessionsRejectInviteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionQueryInvitesCallback, const FEOSSessionsQueryInvitesCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionUpdateSessionCallback, const FEOSSessionsUpdateSessionCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionDestroySessionCallback, const FEOSSessionsDestroySessionCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionJoinSessionCallback, const FEOSSessionsJoinSessionCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionStartSessionCallback, const FEOSSessionsStartSessionCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionEndSessionCallback, const FEOSSessionsEndSessionCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionRegisterPlayersCallback, const FEOSSessionsRegisterPlayersCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionUnregisterPlayersCallback, const FEOSSessionsUnregisterPlayersCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionFindCallback, const FEOSSessionSearchFindCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionInviteReceivedCallback, const FEOSSessionsSessionInviteReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionInviteAcceptedCallback, const FEOSSessionsSessionInviteAcceptedCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionJoinSessionAcceptedCallback, const FEOSSessionsJoinSessionAcceptedCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionSessionSendInviteCallbackDelegate, const FEOSSessionsSendInviteCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionRejectInviteCallbackDelegate, const FEOSSessionsRejectInviteCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionQueryInvitesCallbackDelegate, const FEOSSessionsQueryInvitesCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionUpdateSessionCallbackDelegate, const FEOSSessionsUpdateSessionCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionDestroySessionCallbackDelegate, const FEOSSessionsDestroySessionCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionJoinSessionCallbackDelegate, const FEOSSessionsJoinSessionCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionStartSessionCallbackDelegate, const FEOSSessionsStartSessionCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionEndSessionCallbackDelegate, const FEOSSessionsEndSessionCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionRegisterPlayersCallbackDelegate, const FEOSSessionsRegisterPlayersCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionUnregisterPlayersCallbackDelegate, const FEOSSessionsUnregisterPlayersCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionFindCallbackDelegate, const FEOSSessionSearchFindCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionInviteReceivedCallbackDelegate, const FEOSSessionsSessionInviteReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionInviteAcceptedCallbackDelegate, const FEOSSessionsSessionInviteAcceptedCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionJoinSessionAcceptedCallbackDelegate, const FEOSSessionsJoinSessionAcceptedCallbackInfo&, data);

struct FUpdateSessionCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionUpdateSessionCallback Callback;
public:
	FUpdateSessionCallback(UCoreSessions* obj, const FOnSessionUpdateSessionCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FDestroySessionCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionDestroySessionCallback Callback;
public:
	FDestroySessionCallback(UCoreSessions* obj, const FOnSessionDestroySessionCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FJoinSessionCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionJoinSessionCallback Callback;
public:
	FJoinSessionCallback(UCoreSessions* obj, const FOnSessionJoinSessionCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FStartSessionCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionStartSessionCallback Callback;
public:
	FStartSessionCallback(UCoreSessions* obj, const FOnSessionStartSessionCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FEndSessionCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionEndSessionCallback Callback;
public:
	FEndSessionCallback(UCoreSessions* obj, const FOnSessionEndSessionCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FRegisterPlayersCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionRegisterPlayersCallback Callback;
public:
	FRegisterPlayersCallback(UCoreSessions* obj, const FOnSessionRegisterPlayersCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FUnregisterPlayersCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionUnregisterPlayersCallback Callback;
public:
	FUnregisterPlayersCallback(UCoreSessions* obj, const FOnSessionUnregisterPlayersCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FSendInviteCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionSessionSendInviteCallback Callback;
public:
	FSendInviteCallback(UCoreSessions* obj, const FOnSessionSessionSendInviteCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FRejectInviteCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionRejectInviteCallback Callback;
public:
	FRejectInviteCallback(UCoreSessions* obj, const FOnSessionRejectInviteCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FQueryInvitesCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionQueryInvitesCallback Callback;
public:
	FQueryInvitesCallback(UCoreSessions* obj, const FOnSessionQueryInvitesCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};

struct FSessionFindCallback
{
public:
	UCoreSessions* SessionsObject;
	FOnSessionFindCallback Callback;
public:
	FSessionFindCallback(UCoreSessions* obj, const FOnSessionFindCallback& callback)
		: SessionsObject(obj)
		, Callback(callback) {}
};