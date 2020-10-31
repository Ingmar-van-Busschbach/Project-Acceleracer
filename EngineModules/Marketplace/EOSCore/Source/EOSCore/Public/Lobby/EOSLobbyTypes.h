/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_lobby_types.h"
#include "Core/EOSHelpers.h"
#include "EOSLobbyTypes.generated.h"

class UCoreLobby;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/** Permission level gets more restrictive further down */
UENUM(BlueprintType)
enum class EEOSELobbyPermissionLevel : uint8
{
	/** Anyone can find this lobby as long as it isn't full */
	EOS_LPL_PUBLICADVERTISED = 0,
	/** Players who have access to presence can see this lobby */
	EOS_LPL_JOINVIAPRESENCE = 1,
	/** Only players with invites registered can see this lobby */
	EOS_LPL_INVITEONLY = 2
};


/** Advertisement properties for a single attribute associated with a lobby */
UENUM(BlueprintType)
enum class EEOSELobbyAttributeVisibility : uint8
{
	/*&, data is visible outside the lobby */
	EOS_LAT_PUBLIC = 0,
	/** Only members in the lobby can see this data */
	EOS_LAT_PRIVATE = 1
};

/** Various types of lobby member updates */
UENUM(BlueprintType)
enum class EEOSELobbyMemberStatus : uint8
{
	/** The user has joined the lobby */
	EOS_LMS_JOINED = 0,
	/** The user has explicitly left the lobby */
	EOS_LMS_LEFT = 1,
	/** The user has unexpectedly left the lobby */
	EOS_LMS_DISCONNECTED = 2,
	/** The user has been kicked from the lobby */
	EOS_LMS_KICKED = 3,
	/** The user has been promoted to lobby owner */
	EOS_LMS_PROMOTED = 4,
	/** The lobby has been closed and user has been removed */
	EOS_LMS_CLOSED = 5
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/** Handle to a single lobby */
USTRUCT(BlueprintType)
struct FEOSHLobbyDetails
{
	GENERATED_BODY()
public:
	EOS_HLobbyDetails Handle;
public:
	explicit FEOSHLobbyDetails()
		: Handle(nullptr) { }
	FEOSHLobbyDetails(const EOS_HLobbyDetails& data)
		: Handle(data) {}
public:
	operator EOS_HLobbyDetails() const
	{
		return Handle;
	}
};

/** Handle to a lobby modification object */
USTRUCT(BlueprintType)
struct FEOSHLobbyModification
{
	GENERATED_BODY()
public:
	EOS_HLobbyModification Handle;
public:
	explicit FEOSHLobbyModification()
		: Handle(nullptr) { }
	FEOSHLobbyModification(const EOS_HLobbyModification& data)
		: Handle(data) {}
public:
	operator EOS_HLobbyModification() const
	{
		return Handle;
	}
};

USTRUCT(BlueprintType)
struct FEOSLobbyDetailsInfo
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Lobby id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
	/** Current owner of the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LobbyOwnerUserId;
	/** Permission level of the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EEOSELobbyPermissionLevel PermissionLevel;
	/** Current available space */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 AvailableSlots;
	/** Max allowed members in the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 MaxMembers;
	/** Are invites allowed */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		bool bAllowInvites;
public:
	explicit FEOSLobbyDetailsInfo()
		: ApiVersion(EOS_LOBBYDETAILS_INFO_API_LATEST)
		, PermissionLevel(EEOSELobbyPermissionLevel::EOS_LPL_PUBLICADVERTISED)
		, AvailableSlots(10)
		, MaxMembers(10)
		, bAllowInvites(true) {}
	FEOSLobbyDetailsInfo(const EOS_LobbyDetails_Info& data)
		: ApiVersion(EOS_LOBBYDETAILS_INFO_API_LATEST)
		, LobbyId(data.LobbyId)
		, LobbyOwnerUserId(data.LobbyOwnerUserId)
		, PermissionLevel(static_cast<EEOSELobbyPermissionLevel>(data.PermissionLevel))
		, AvailableSlots(data.AvailableSlots)
		, MaxMembers(data.MaxMembers)
		, bAllowInvites(data.bAllowInvites > 0)
		{ }
};

/**
 * Input parameters for the EOS_Lobby_CreateLobby Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyCreateLobbyOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Local user creating the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** Max members allowed in the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 MaxLobbyMembers;
	/** The initial permission level of the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EEOSELobbyPermissionLevel PermissionLevel;
public:
	explicit FEOSLobbyCreateLobbyOptions()
		: ApiVersion(EOS_LOBBY_CREATELOBBY_API_LATEST) 
		, MaxLobbyMembers(10)
		, PermissionLevel(EEOSELobbyPermissionLevel::EOS_LPL_PUBLICADVERTISED) {}
	FEOSLobbyCreateLobbyOptions(const EOS_Lobby_CreateLobbyOptions& data)
		: ApiVersion(EOS_LOBBY_CREATELOBBY_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, MaxLobbyMembers(data.MaxLobbyMembers)
		, PermissionLevel(static_cast<EEOSELobbyPermissionLevel>(data.PermissionLevel))
		{ }
};

/**
 * Output parameters for the EOS_Lobby_CreateLobby function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyCreateLobbyCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_CreateLobby */
		void* ClientData;
	/** Newly created lobby id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:

public:
	FEOSLobbyCreateLobbyCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbyCreateLobbyCallbackInfo(const EOS_Lobby_CreateLobbyCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_DestroyLobby Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDestroyLobbyOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Local user destroying the lobby, must own the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** Lobby Id to destroy */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:

public:
	FEOSLobbyDestroyLobbyOptions()
		: ApiVersion(EOS_LOBBY_DESTROYLOBBY_API_LATEST){ }
	FEOSLobbyDestroyLobbyOptions(const EOS_Lobby_DestroyLobbyOptions& data)
		: ApiVersion(EOS_LOBBY_DESTROYLOBBY_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, LobbyId(data.LobbyId)
		{ }
};

/**
 * Output parameters for the EOS_Lobby_DestroyLobby function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDestroyLobbyCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_DestroyLobby */
		void* ClientData;
	/** Destroyed lobby id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:

public:
	FEOSLobbyDestroyLobbyCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbyDestroyLobbyCallbackInfo(const EOS_Lobby_DestroyLobbyCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_JoinLobby Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyJoinLobbyOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public: 
	/** Lobby handle to join */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSHLobbyDetails LobbyDetailsHandle;
	/** Local user joining the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
public:

public:
	FEOSLobbyJoinLobbyOptions()
		: ApiVersion(EOS_LOBBY_JOINLOBBY_API_LATEST){ }
	FEOSLobbyJoinLobbyOptions(const EOS_Lobby_JoinLobbyOptions& data)
		: ApiVersion(EOS_LOBBY_JOINLOBBY_API_LATEST)
		, LobbyDetailsHandle(data.LobbyDetailsHandle)
		, LocalUserId(data.LocalUserId)
		{ }
};

/**
 * Output parameters for the EOS_Lobby_JoinLobby function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyJoinLobbyCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_JoinLobby */
		void* ClientData;
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:

public:
	FEOSLobbyJoinLobbyCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbyJoinLobbyCallbackInfo(const EOS_Lobby_JoinLobbyCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_LeaveLobby Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyLeaveLobbyOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Local user leaving the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:

public:
	FEOSLobbyLeaveLobbyOptions()
		: ApiVersion(EOS_LOBBY_LEAVELOBBY_API_LATEST){ }
	FEOSLobbyLeaveLobbyOptions(const EOS_Lobby_LeaveLobbyOptions& data)
		: ApiVersion(EOS_LOBBY_LEAVELOBBY_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, LobbyId(data.LobbyId)
		{ }
};

/**
 * Output parameters for the EOS_Lobby_LeaveLobby function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyLeaveLobbyCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_LeaveLobby */
		void* ClientData;
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:

public:
	FEOSLobbyLeaveLobbyCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbyLeaveLobbyCallbackInfo(const EOS_Lobby_LeaveLobbyCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_UpdateLobbyModification Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyUpdateLobbyModificationOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** The id of the local user making modifications, must be the owner to modify lobby data, but may be a lobby member to modify their own attributes */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:

public:
	FEOSLobbyUpdateLobbyModificationOptions()
		: ApiVersion(EOS_LOBBY_UPDATELOBBYMODIFICATION_API_LATEST){ }
	FEOSLobbyUpdateLobbyModificationOptions(const EOS_Lobby_UpdateLobbyModificationOptions& data)
		: ApiVersion(EOS_LOBBY_UPDATELOBBYMODIFICATION_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, LobbyId(data.LobbyId)
		{ }
};

/**
 * Input parameters for the EOS_Lobby_UpdateLobby Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyUpdateLobbyOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Builder handle */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSHLobbyModification LobbyModificationHandle;
public:

public:
	FEOSLobbyUpdateLobbyOptions()
		: ApiVersion(EOS_LOBBY_UPDATELOBBY_API_LATEST){ }
	FEOSLobbyUpdateLobbyOptions(const EOS_Lobby_UpdateLobbyOptions& data)
		: ApiVersion(EOS_LOBBY_UPDATELOBBY_API_LATEST)
		, LobbyModificationHandle(data.LobbyModificationHandle)
		{ }
};

/**
 * Output parameters for the EOS_Lobby_UpdateLobby function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyUpdateLobbyCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_UpdateLobby */
	void* ClientData;
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:
	FEOSLobbyUpdateLobbyCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbyUpdateLobbyCallbackInfo(const EOS_Lobby_UpdateLobbyCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_PromoteMember Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyPromoteMemberOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Lobby id of interest */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
	/** Local User making the request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** Member to promote to owner of the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
public:

public:
	FEOSLobbyPromoteMemberOptions()
		: ApiVersion(EOS_LOBBY_PROMOTEMEMBER_API_LATEST){ }
	FEOSLobbyPromoteMemberOptions(const EOS_Lobby_PromoteMemberOptions& data)
		: ApiVersion(EOS_LOBBY_PROMOTEMEMBER_API_LATEST)
		, LobbyId(data.LobbyId)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		{ }
};

/**
 * Output parameters for the EOS_Lobby_PromoteMember function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyPromoteMemberCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_PromoteMember */
	void* ClientData;
	/** Lobby id of interest */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:
	FEOSLobbyPromoteMemberCallbackInfo()
	    : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbyPromoteMemberCallbackInfo(const EOS_Lobby_PromoteMemberCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_KickMember Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyKickMemberOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Lobby id of interest */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
	/** Local User making the request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** Member to kick from the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
public:

public:
	FEOSLobbyKickMemberOptions()
		: ApiVersion(EOS_LOBBY_KICKMEMBER_API_LATEST){ }
	FEOSLobbyKickMemberOptions(const EOS_Lobby_KickMemberOptions& data)
		: ApiVersion(EOS_LOBBY_KICKMEMBER_API_LATEST)
		, LobbyId(data.LobbyId)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		{ }
};

/**
 * Output parameters for the EOS_Lobby_KickMember function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyKickMemberCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_KickMember */
	void* ClientData;
	/** Lobby id of interest */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:
	FEOSLobbyKickMemberCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbyKickMemberCallbackInfo(const EOS_Lobby_KickMemberCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		{}
};

USTRUCT(BlueprintType)
struct FEOSLobbyAddNotifyLobbyUpdateReceivedOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSNotificationId NotificationID;
public:
	FEOSLobbyAddNotifyLobbyUpdateReceivedOptions()
		: ApiVersion(EOS_LOBBY_ADDNOTIFYLOBBYUPDATERECEIVED_API_LATEST){ }
	FEOSLobbyAddNotifyLobbyUpdateReceivedOptions(const EOS_Lobby_AddNotifyLobbyUpdateReceivedOptions& data)
		: ApiVersion(EOS_LOBBY_ADDNOTIFYLOBBYUPDATERECEIVED_API_LATEST) { }
};

/**
 * Output parameters for the EOS_Lobby_OnLobbyUpdateReceivedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyUpdateReceivedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Lobby_KickMember */
	void* ClientData;
	/** Lobby id of interest */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:
	FEOSLobbyUpdateReceivedCallbackInfo()
        : ClientData(nullptr){ }
	FEOSLobbyUpdateReceivedCallbackInfo(const EOS_Lobby_LobbyUpdateReceivedCallbackInfo& data)
		: ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		{}
};

USTRUCT(BlueprintType)
struct FEOSLobbyAddNotifyLobbyMemberUpdateReceivedOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSNotificationId NotificationID;
public:
	FEOSLobbyAddNotifyLobbyMemberUpdateReceivedOptions()
		: ApiVersion(EOS_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVED_API_LATEST){ }
};

/**
 * Output parameters for the EOS_Lobby_OnLobbyMemberUpdateReceivedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyMemberUpdateReceivedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Lobby_AddNotifyLobbyMemberUpdateReceived */
		void* ClientData;
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
	/** Target user that was affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
public:
	FEOSLobbyMemberUpdateReceivedCallbackInfo()
        : ClientData(nullptr){ }
	FEOSLobbyMemberUpdateReceivedCallbackInfo(const EOS_Lobby_LobbyMemberUpdateReceivedCallbackInfo& data)
		: ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		, TargetUserId(data.TargetUserId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_AddNotifyLobbyMemberStatusReceived Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyAddNotifyLobbyMemberStatusReceivedOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSNotificationId NotificationID;
public:
	FEOSLobbyAddNotifyLobbyMemberStatusReceivedOptions()
		: ApiVersion(EOS_LOBBY_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_API_LATEST){ }
	FEOSLobbyAddNotifyLobbyMemberStatusReceivedOptions(const EOS_Lobby_AddNotifyLobbyMemberStatusReceivedOptions& data)
		: ApiVersion(EOS_LOBBY_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_API_LATEST) { }
};

/**
 * Output parameters for the EOS_Lobby_AddNotifyLobbyMemberStatusReceived function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyMemberStatusReceivedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Lobby_AddNotifyLobbyMemberStatusReceived */
		void* ClientData;
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
	/** Target user that was affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
	/** Latest status of the user */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EEOSELobbyMemberStatus CurrentStatus;
public:
	FEOSLobbyMemberStatusReceivedCallbackInfo()
        : ClientData(nullptr)
		, CurrentStatus(EEOSELobbyMemberStatus::EOS_LMS_CLOSED) {}
	FEOSLobbyMemberStatusReceivedCallbackInfo(const EOS_Lobby_LobbyMemberStatusReceivedCallbackInfo& data)
		: ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		, TargetUserId(data.TargetUserId)
		, CurrentStatus(static_cast<EEOSELobbyMemberStatus>(data.CurrentStatus))
		{}
};

USTRUCT(BlueprintType)
struct FEOSLobbyAddNotifyLobbyInviteReceivedOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSNotificationId NotificationID;
public:
	FEOSLobbyAddNotifyLobbyInviteReceivedOptions()
		: ApiVersion(EOS_LOBBY_ADDNOTIFYLOBBYINVITERECEIVED_API_LATEST){ }
	FEOSLobbyAddNotifyLobbyInviteReceivedOptions(const EOS_Lobby_AddNotifyLobbyInviteReceivedOptions& data)
		: ApiVersion(EOS_LOBBY_ADDNOTIFYLOBBYINVITERECEIVED_API_LATEST) { }
};

/**
 * Output parameters for the EOS_Lobby_OnLobbyInviteReceivedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyInviteReceivedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Lobby_AddNotifyLobbyInviteReceived */
		void* ClientData;
		/** The invite id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FLobbyInviteId InviteId;
	/** User that received the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** Target user that sent the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
public:
	FEOSLobbyInviteReceivedCallbackInfo()
        : ClientData(nullptr){ }
	FEOSLobbyInviteReceivedCallbackInfo(const EOS_Lobby_LobbyInviteReceivedCallbackInfo& data)
		: ClientData(data.ClientData)
		, InviteId(data.InviteId)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		{}
};

/** The most recent version of the EOS_Lobby_AddNotifyLobbyInviteAccepted API. */
USTRUCT(BlueprintType)
struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSLobbyAddNotifyLobbyInviteAcceptedOptions()
		: ApiVersion(EOS_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTED_API_LATEST){}
};

/**
 * Output parameters for the EOS_Lobby_OnLobbyInviteAcceptedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyLobbyInviteAcceptedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Lobby_AddNotifyLobbyInviteReceived */
		void* ClientData;
	/** The invite id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FString InviteId;
	/** User that received the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** Target user that sent the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
public:
	FEOSLobbyLobbyInviteAcceptedCallbackInfo()
        : ClientData(nullptr){ }
	FEOSLobbyLobbyInviteAcceptedCallbackInfo(const EOS_Lobby_LobbyInviteAcceptedCallbackInfo& data)
		: ClientData(data.ClientData)
		, InviteId(data.InviteId)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		{}
};

/** The most recent version of the EOS_Lobby_AddNotifyJoinGameAccepted API. */
USTRUCT(BlueprintType)
struct FEOSLobbyAddNotifyJoinLobbyAcceptedOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSLobbyAddNotifyJoinLobbyAcceptedOptions()
		: ApiVersion(EOS_LOBBY_ADDNOTIFYJOINLOBBYACCEPTED_API_LATEST){}
};

/**
 * Input parameters for the EOS_Lobby_CopyLobbyDetailsHandleByInviteId Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Lobby invite id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FLobbyInviteId InviteId;
public:
	FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions()
		: ApiVersion(EOS_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEID_API_LATEST){ }
	FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions(const EOS_Lobby_CopyLobbyDetailsHandleByInviteIdOptions& data)
		: ApiVersion(EOS_LOBBY_COPYLOBBYDETAILSHANDLEBYINVITEID_API_LATEST)
		, InviteId(data.InviteId)
		{ }
};

/**
 * Input parameters for the EOS_Lobby_CreateLobbySearch Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyCreateLobbySearchOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Maximum number of results allowed from the search */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 MaxResults;
public:
	explicit FEOSLobbyCreateLobbySearchOptions()
		: ApiVersion(EOS_LOBBY_CREATELOBBYSEARCH_API_LATEST)
		, MaxResults(50) {}
	FEOSLobbyCreateLobbySearchOptions(const EOS_Lobby_CreateLobbySearchOptions& data)
		: ApiVersion(EOS_LOBBY_CREATELOBBYSEARCH_API_LATEST)
		, MaxResults(data.MaxResults)
		{ }
};

/**
 * Input parameters for the EOS_Lobby_SendInvite Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySendInviteOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
	/** Local user sending the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** Target user receiving the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
public:
	FEOSLobbySendInviteOptions()
		: ApiVersion(EOS_LOBBY_SENDINVITE_API_LATEST){ }
	FEOSLobbySendInviteOptions(const EOS_Lobby_SendInviteOptions& data)
		: ApiVersion(EOS_LOBBY_SENDINVITE_API_LATEST)
		, LobbyId(data.LobbyId)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		{ }
};

/**
 * Output parameters for the EOS_Lobby_SendInvite function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySendInviteCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_SendInvite */
		void* ClientData;
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:
	FEOSLobbySendInviteCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbySendInviteCallbackInfo(const EOS_Lobby_SendInviteCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LobbyId(data.LobbyId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_RejectInvite Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyRejectInviteOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** The invite id to reject */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FLobbyInviteId InviteId;
	/** Local user rejecting the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
public:
	FEOSLobbyRejectInviteOptions()
		: ApiVersion(EOS_LOBBY_REJECTINVITE_API_LATEST){ }
	FEOSLobbyRejectInviteOptions(const EOS_Lobby_RejectInviteOptions& data)
		: ApiVersion(EOS_LOBBY_REJECTINVITE_API_LATEST)
		, InviteId(data.InviteId)
		, LocalUserId(data.LocalUserId)
		{ }
};

/**
 * Output parameters for the EOS_Lobby_RejectInvite function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyRejectInviteCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_RejectInvite */
	void* ClientData;
	/** The invite id to reject */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FLobbyInviteId InviteId;
public:
	FEOSLobbyRejectInviteCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbyRejectInviteCallbackInfo(const EOS_Lobby_RejectInviteCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, InviteId(data.InviteId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_QueryInvites Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyQueryInvitesOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Local User Id to query invites */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
public:
	FEOSLobbyQueryInvitesOptions()
		: ApiVersion(EOS_LOBBY_QUERYINVITES_API_LATEST){ }
	FEOSLobbyQueryInvitesOptions(const EOS_Lobby_QueryInvitesOptions& data)
		: ApiVersion(EOS_LOBBY_QUERYINVITES_API_LATEST)
		, LocalUserId(data.LocalUserId)
		{ }
};

/**
 * Output parameters for the EOS_Lobby_QueryInvites function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyQueryInvitesCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Lobby_QueryInvites */
		void* ClientData;
	/** Local User Id that made the request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
public:
	FEOSLobbyQueryInvitesCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbyQueryInvitesCallbackInfo(const EOS_Lobby_QueryInvitesCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		{}
};

/**
 * Input parameters for the EOS_Lobby_GetInviteCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyGetInviteCountOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Local user that has invites */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
public:
	FEOSLobbyGetInviteCountOptions()
		: ApiVersion(EOS_LOBBY_GETINVITECOUNT_API_LATEST){ }
	FEOSLobbyGetInviteCountOptions(const EOS_Lobby_GetInviteCountOptions& data)
		: ApiVersion(EOS_LOBBY_GETINVITECOUNT_API_LATEST)
		, LocalUserId(data.LocalUserId)
		{ }
};

/**
 * Input parameters for the EOS_Lobby_GetInviteIdByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyGetInviteIdByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Local user that has invites */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
	/** Index of the invite id to retrieve */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 Index;
public:
	explicit FEOSLobbyGetInviteIdByIndexOptions()
		: ApiVersion(EOS_LOBBY_GETINVITEIDBYINDEX_API_LATEST)
		, Index(0) {}
	FEOSLobbyGetInviteIdByIndexOptions(const EOS_Lobby_GetInviteIdByIndexOptions& data)
		: ApiVersion(EOS_LOBBY_GETINVITEIDBYINDEX_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, Index(data.Index)
		{ }
};

/**
 * Input parameters for the EOS_Lobby_CopyLobbyDetailsHandle Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyCopyLobbyDetailsHandleOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** The id of the lobby affected */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
	/** Local user making the request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
public:
	FEOSLobbyCopyLobbyDetailsHandleOptions()
		: ApiVersion(EOS_LOBBY_COPYLOBBYDETAILSHANDLE_API_LATEST)
	{}
	FEOSLobbyCopyLobbyDetailsHandleOptions(const EOS_Lobby_CopyLobbyDetailsHandleOptions& data)
		: ApiVersion(EOS_LOBBY_COPYLOBBYDETAILSHANDLE_API_LATEST)
		, LobbyId(data.LobbyId)
		, LocalUserId(data.LocalUserId)
		{}
};

/**
 * Contains information about lobby and lobby member data
 */
USTRUCT(BlueprintType)
struct FEOSLobbyAttributeData
{
	GENERATED_BODY()
public:
	/** API Version */
	int32 ApiVersion;
	/** Contains information about lobby and lobby member data */
	EOS_Lobby_AttributeData AttributeData;
public:
	FEOSLobbyAttributeData()
		: ApiVersion(EOS_LOBBY_ATTRIBUTEDATA_API_LATEST) {}
	FEOSLobbyAttributeData(const EOS_Lobby_AttributeData& data)
		: ApiVersion(EOS_LOBBY_ATTRIBUTEDATA_API_LATEST) 
		, AttributeData(data)
		{}
};

/**
 *  An attribute and its visibility setting stored with a lobby.
 *  Used to store both lobby and lobby member data
 */
USTRUCT(BlueprintType)
struct FEOSLobbyAttribute
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Key/Value pair describing the attribute */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyAttributeData Data;
	/** Is this attribute public or private to the lobby and its members */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EEOSELobbyAttributeVisibility Visbility;
public:
	explicit FEOSLobbyAttribute()
		: ApiVersion(EOS_LOBBY_ATTRIBUTE_API_LATEST)
		, Visbility(EEOSELobbyAttributeVisibility::EOS_LAT_PUBLIC) {}
	FEOSLobbyAttribute(const EOS_Lobby_Attribute& data)
		: ApiVersion(EOS_LOBBY_ATTRIBUTE_API_LATEST)
		, Data(*data.Data)
		, Visbility(static_cast<EEOSELobbyAttributeVisibility>(data.Visibility)) {}
};

/**
 * Input parameters for the EOS_LobbyModification_SetPermissionLevel Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyModificationSetPermissionLevelOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Permission level of the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EEOSELobbyPermissionLevel PermissionLevel;
public:
	explicit FEOSLobbyModificationSetPermissionLevelOptions()
		: ApiVersion(EOS_LOBBYMODIFICATION_SETPERMISSIONLEVEL_API_LATEST)
		, PermissionLevel(EEOSELobbyPermissionLevel::EOS_LPL_PUBLICADVERTISED) {}
	FEOSLobbyModificationSetPermissionLevelOptions(const EOS_LobbyModification_SetPermissionLevelOptions& data)
		: ApiVersion(EOS_LOBBYMODIFICATION_SETPERMISSIONLEVEL_API_LATEST)
		, PermissionLevel(static_cast<EEOSELobbyPermissionLevel>(data.PermissionLevel))
		{ }
};

/**
 * Input parameters for the EOS_LobbyModification_SetMaxMembers Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyModificationSetMaxMembersOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** New maximum number of lobby members */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 MaxMembers;
public:
	explicit FEOSLobbyModificationSetMaxMembersOptions()
		: ApiVersion(EOS_LOBBYMODIFICATION_SETMAXMEMBERS_API_LATEST) 
		, MaxMembers(10) {}
	FEOSLobbyModificationSetMaxMembersOptions(const EOS_LobbyModification_SetMaxMembersOptions& data)
		: ApiVersion(EOS_LOBBYMODIFICATION_SETMAXMEMBERS_API_LATEST)
		, MaxMembers(data.MaxMembers)
		{ }
};

/**
 * Input parameters for the EOS_LobbyModification_AddAttribute Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyModificationAddAttributeOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Key/Value pair describing the attribute to add to the lobby */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyAttributeData Attribute;
	/** Is this attribute public or private to the lobby and its members */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EEOSELobbyAttributeVisibility Visibility;
public:
	explicit FEOSLobbyModificationAddAttributeOptions()
		: ApiVersion(EOS_LOBBYMODIFICATION_ADDATTRIBUTE_API_LATEST)
		, Visibility(EEOSELobbyAttributeVisibility::EOS_LAT_PUBLIC) {}
	FEOSLobbyModificationAddAttributeOptions(const EOS_LobbyModification_AddAttributeOptions& data)
		: ApiVersion(EOS_LOBBYMODIFICATION_ADDATTRIBUTE_API_LATEST)
		, Attribute(*data.Attribute)
		, Visibility(static_cast<EEOSELobbyAttributeVisibility>(data.Visibility))
		{ }
};

/**
 * Input parameters for the EOS_LobbyModification_RemoveAttribute Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyModificationRemoveAttributeOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Name of the key */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FString Key;
public:
	FEOSLobbyModificationRemoveAttributeOptions()
		: ApiVersion(EOS_LOBBYMODIFICATION_REMOVEATTRIBUTE_API_LATEST){ }
	FEOSLobbyModificationRemoveAttributeOptions(const EOS_LobbyModification_RemoveAttributeOptions& data)
		: ApiVersion(EOS_LOBBYMODIFICATION_REMOVEATTRIBUTE_API_LATEST)
		, Key(data.Key)
		{ }
};

/**
 * Input parameters for the EOS_LobbyModification_AddMemberAttribute Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyModificationAddMemberAttributeOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Key/Value pair describing the attribute to add to the lobby member */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyAttributeData Attribute;
	/** Is this attribute public or private to the rest of the lobby members */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EEOSELobbyAttributeVisibility Visibility;
public:
	explicit FEOSLobbyModificationAddMemberAttributeOptions()
		: ApiVersion(EOS_LOBBYMODIFICATION_ADDMEMBERATTRIBUTE_API_LATEST)
		, Visibility(EEOSELobbyAttributeVisibility::EOS_LAT_PUBLIC) {}
	FEOSLobbyModificationAddMemberAttributeOptions(const EOS_LobbyModification_AddMemberAttributeOptions& data)
		: ApiVersion(EOS_LOBBYMODIFICATION_ADDMEMBERATTRIBUTE_API_LATEST)
		, Attribute(*data.Attribute)
		, Visibility(static_cast<EEOSELobbyAttributeVisibility>(data.Visibility))
		{ }
};

/**
 * Input parameters for the EOS_LobbyModification_RemoveMemberAttribute Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyModificationRemoveMemberAttributeOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Name of the key */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FString Key;
public:
	FEOSLobbyModificationRemoveMemberAttributeOptions()
		: ApiVersion(EOS_LOBBYMODIFICATION_REMOVEMEMBERATTRIBUTE_API_LATEST){ }
	FEOSLobbyModificationRemoveMemberAttributeOptions(const EOS_LobbyModification_RemoveMemberAttributeOptions& data)
		: ApiVersion(EOS_LOBBYMODIFICATION_REMOVEMEMBERATTRIBUTE_API_LATEST)
		, Key(data.Key)
		{ }
};

/**
 * Input parameters for the EOS_LobbyDetails_GetLobbyOwner Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsGetLobbyOwnerOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSLobbyDetailsGetLobbyOwnerOptions()
		: ApiVersion(EOS_LOBBYDETAILS_GETLOBBYOWNER_API_LATEST){ }
	FEOSLobbyDetailsGetLobbyOwnerOptions(const EOS_LobbyDetails_GetLobbyOwnerOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_GETLOBBYOWNER_API_LATEST) {}
};

/**
 * Input parameters for the EOS_LobbyDetails_CopyInfo Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsCopyInfoOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSLobbyDetailsCopyInfoOptions()
		: ApiVersion(EOS_LOBBYDETAILS_COPYINFO_API_LATEST){ }
	FEOSLobbyDetailsCopyInfoOptions(const EOS_LobbyDetails_CopyInfoOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_COPYINFO_API_LATEST) {}
};

/**
 * Input parameters for the EOS_LobbyDetails_GetAttributeCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsGetAttributeCountOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSLobbyDetailsGetAttributeCountOptions()
		: ApiVersion(EOS_LOBBYDETAILS_GETATTRIBUTECOUNT_API_LATEST){ }
	FEOSLobbyDetailsGetAttributeCountOptions(const EOS_LobbyDetails_GetAttributeCountOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_GETATTRIBUTECOUNT_API_LATEST) {}
};

/**
 * Input parameters for the EOS_LobbyDetails_CopyAttributeByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsCopyAttributeByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/**
	* The index of the attribute to retrieve
	* @see EOS_LobbyDetails_GetAttributeCount
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 AttrIndex;
public:
	explicit FEOSLobbyDetailsCopyAttributeByIndexOptions()
		: ApiVersion(EOS_LOBBYDETAILS_COPYATTRIBUTEBYINDEX_API_LATEST)
		, AttrIndex(0) {}
	FEOSLobbyDetailsCopyAttributeByIndexOptions(const EOS_LobbyDetails_CopyAttributeByIndexOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_COPYATTRIBUTEBYINDEX_API_LATEST) 
		, AttrIndex(data.AttrIndex)
		{}
};

/**
 * Input parameters for the EOS_LobbyDetails_CopyAttributeByKey Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsCopyAttributeByKeyOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Name of the attribute */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FString AttrKey;
public:
	FEOSLobbyDetailsCopyAttributeByKeyOptions()
		: ApiVersion(EOS_LOBBYDETAILS_COPYATTRIBUTEBYINDEX_API_LATEST){ }
	FEOSLobbyDetailsCopyAttributeByKeyOptions(const EOS_LobbyDetails_CopyAttributeByKeyOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_COPYATTRIBUTEBYINDEX_API_LATEST) 
		, AttrKey(data.AttrKey)
		{}
};

/**
 * Input parameters for the EOS_LobbyDetails_GetMemberAttributeCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsGetMemberAttributeCountOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Lobby member of interest */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
public:
	FEOSLobbyDetailsGetMemberAttributeCountOptions()
		: ApiVersion(EOS_LOBBYDETAILS_GETMEMBERATTRIBUTECOUNT_API_LATEST){ }
	FEOSLobbyDetailsGetMemberAttributeCountOptions(const EOS_LobbyDetails_GetMemberAttributeCountOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_GETMEMBERATTRIBUTECOUNT_API_LATEST)
		, TargetUserId(data.TargetUserId)
		{}
};

/**
 * Input parameters for the EOS_LobbyDetails_CopyMemberAttributeByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Lobby member of interest */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
	/** Attribute index */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 AttrIndex;
public:
	explicit FEOSLobbyDetailsCopyMemberAttributeByIndexOptions()
		: ApiVersion(EOS_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYINDEX_API_LATEST)
		, AttrIndex(0) {}
	FEOSLobbyDetailsCopyMemberAttributeByIndexOptions(const EOS_LobbyDetails_CopyMemberAttributeByIndexOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYINDEX_API_LATEST)
		, TargetUserId(data.TargetUserId)
		, AttrIndex(data.AttrIndex)
		{}
};

/**
 * Input parameters for the EOS_LobbyDetails_CopyMemberAttributeByKey Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Lobby member of interest */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
	/** Name of the attribute */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FString AttrKey;
public:
	FEOSLobbyDetailsCopyMemberAttributeByKeyOptions()
		: ApiVersion(EOS_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYKEY_API_LATEST){ }
	FEOSLobbyDetailsCopyMemberAttributeByKeyOptions(const EOS_LobbyDetails_CopyMemberAttributeByKeyOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_COPYMEMBERATTRIBUTEBYKEY_API_LATEST)
		, TargetUserId(data.TargetUserId)
		, AttrKey(data.AttrKey)
		{}
};

/**
 * Input parameters for the EOS_LobbyDetails_GetMemberCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsGetMemberCountOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSLobbyDetailsGetMemberCountOptions()
		: ApiVersion(EOS_LOBBYDETAILS_GETMEMBERCOUNT_API_LATEST){ }
	FEOSLobbyDetailsGetMemberCountOptions(const EOS_LobbyDetails_GetMemberCountOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_GETMEMBERCOUNT_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_LobbyDetails_GetMemberByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbyDetailsGetMemberByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Index of the member to retrieve */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 MemberIndex;
public:
	explicit FEOSLobbyDetailsGetMemberByIndexOptions()
		: ApiVersion(EOS_LOBBYDETAILS_GETMEMBERBYINDEX_API_LATEST)
		, MemberIndex(0) {}
	FEOSLobbyDetailsGetMemberByIndexOptions(const EOS_LobbyDetails_GetMemberByIndexOptions& data)
		: ApiVersion(EOS_LOBBYDETAILS_GETMEMBERBYINDEX_API_LATEST)
		, MemberIndex(data.MemberIndex)
		{}
};

/**
 * Input parameters for the EOS_LobbySearch_Find Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySearchFindOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** User making the search request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId LocalUserId;
public:
	FEOSLobbySearchFindOptions()
		: ApiVersion(EOS_LOBBYSEARCH_FIND_API_LATEST){ }
	FEOSLobbySearchFindOptions(const EOS_LobbySearch_FindOptions& data)
		: ApiVersion(EOS_LOBBYSEARCH_FIND_API_LATEST)
		, LocalUserId(data.LocalUserId)
		{}
};

/**
 * Output parameters for the EOS_LobbySearch_Find function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySearchFindCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EOSResult ResultCode;
	/** Context that was passed into EOS_LobbySearch_Find */
		void* ClientData;
public:
	FEOSLobbySearchFindCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSLobbySearchFindCallbackInfo(const EOS_LobbySearch_FindCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		{}
};

/**
 * Input parameters for the EOS_LobbySearch_SetLobbyId Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySearchSetLobbyIdOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** The id of the lobby to set */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyId LobbyId;
public:
	FEOSLobbySearchSetLobbyIdOptions()
		: ApiVersion(EOS_LOBBYSEARCH_SETLOBBYID_API_LATEST){ }
	FEOSLobbySearchSetLobbyIdOptions(const EOS_LobbySearch_SetLobbyIdOptions& data)
		: ApiVersion(EOS_LOBBYSEARCH_SETLOBBYID_API_LATEST)
		, LobbyId(data.LobbyId)
		{}
};

/**
 * Input parameters for the EOS_LobbySearch_SetTargetUserId Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySearchSetTargetUserIdOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Search lobbies for given user, returning any lobbies where this user is currently registered */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSProductUserId TargetUserId;
public:
	FEOSLobbySearchSetTargetUserIdOptions()
		: ApiVersion(EOS_LOBBYSEARCH_SETTARGETUSERID_API_LATEST){ }
	FEOSLobbySearchSetTargetUserIdOptions(const EOS_LobbySearch_SetTargetUserIdOptions& data)
		: ApiVersion(EOS_LOBBYSEARCH_SETTARGETUSERID_API_LATEST)
		, TargetUserId(data.TargetUserId)
		{}
};

/**
 * Input parameters for the EOS_LobbySearch_SetParameter Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySearchSetParameterOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Search parameter describing a key and a value to compare */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FEOSLobbyAttributeData Parameter;
	/** The type of comparison to make against the search parameter */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EEOSEComparisonOp ComparisonOp;
public:
	explicit FEOSLobbySearchSetParameterOptions()
		: ApiVersion(EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST)
		, ComparisonOp(EEOSEComparisonOp::EOS_CO_EQUAL) {}
	FEOSLobbySearchSetParameterOptions(const EOS_LobbySearch_SetParameterOptions& data)
		: ApiVersion(EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST)
		, Parameter(*data.Parameter)
		, ComparisonOp(static_cast<EEOSEComparisonOp>(data.ComparisonOp))
		{}
};

/**
 * Input parameters for the EOS_LobbySearch_RemoveParameter Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySearchRemoveParameterOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Search parameter key to remove from the search */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		FString Key;
	/** Search comparison operation associated with the key to remove */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		EEOSEComparisonOp ComparisonOp;
public:
	FEOSLobbySearchRemoveParameterOptions()
		: ApiVersion(EOS_LOBBYSEARCH_REMOVEPARAMETER_API_LATEST)
		, ComparisonOp(EEOSEComparisonOp::EOS_CO_EQUAL)
		{}
	FEOSLobbySearchRemoveParameterOptions(const EOS_LobbySearch_RemoveParameterOptions& data)
		: ApiVersion(EOS_LOBBYSEARCH_REMOVEPARAMETER_API_LATEST)
		, Key(data.Key)
		, ComparisonOp(static_cast<EEOSEComparisonOp>(data.ComparisonOp))
		{}
};

/**
 * Input parameters for the EOS_LobbySearch_SetMaxResults Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySearchSetMaxResultsOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/** Maximum number of search results to return from the query */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 MaxResults;
public:
	FEOSLobbySearchSetMaxResultsOptions()
		: ApiVersion(EOS_LOBBYSEARCH_SETMAXRESULTS_API_LATEST)
		, MaxResults(50) {}
	FEOSLobbySearchSetMaxResultsOptions(const EOS_LobbySearch_SetMaxResultsOptions& data)
		: ApiVersion(EOS_LOBBYSEARCH_SETMAXRESULTS_API_LATEST)
		, MaxResults(data.MaxResults)
		{}
};

/**
 * Input parameters for the EOS_LobbySearch_GetSearchResultCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySearchGetSearchResultCountOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	FEOSLobbySearchGetSearchResultCountOptions()
		: ApiVersion(EOS_LOBBYSEARCH_GETSEARCHRESULTCOUNT_API_LATEST){}
	FEOSLobbySearchGetSearchResultCountOptions(const EOS_LobbySearch_GetSearchResultCountOptions& data)
		: ApiVersion(EOS_LOBBYSEARCH_GETSEARCHRESULTCOUNT_API_LATEST){}
};

/**
 * Input parameters for the EOS_LobbySearch_CopySearchResultByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSLobbySearchCopySearchResultByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version */
		int32 ApiVersion;
public:
	/**
	* The index of the lobby to retrieve within the completed search query
	 * @see EOS_LobbySearch_GetSearchResultCount
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Lobby")
		int32 LobbyIndex;
public:
	explicit FEOSLobbySearchCopySearchResultByIndexOptions()
		: ApiVersion(EOS_LOBBYSEARCH_COPYSEARCHRESULTBYINDEX_API_LATEST) 
		, LobbyIndex(0) {}
	FEOSLobbySearchCopySearchResultByIndexOptions(const EOS_LobbySearch_CopySearchResultByIndexOptions& data)
		: ApiVersion(EOS_LOBBYSEARCH_COPYSEARCHRESULTBYINDEX_API_LATEST)
		, LobbyIndex(data.LobbyIndex)
		{}
};

/** Handle to the calls responsible for creating a search object */
USTRUCT(BlueprintType)
struct FEOSHLobbySearch
{
	GENERATED_BODY()
public:
	EOS_HLobbySearch Handle;
public:
	FEOSHLobbySearch()
		: Handle(nullptr) { }
	FEOSHLobbySearch(const EOS_HLobbySearch& data)
		: Handle(data) {}
public:
	operator EOS_HLobbySearch() const { return Handle; }
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyCreateLobbyCallback, const FEOSLobbyCreateLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyDestroyLobbyCallback, const FEOSLobbyDestroyLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyJoinLobbyCallback, const FEOSLobbyJoinLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyLeaveLobbyCallback, const FEOSLobbyLeaveLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyUpdateLobbyCallback, const FEOSLobbyUpdateLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyPromoteMemberCallback, const FEOSLobbyPromoteMemberCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyKickMemberCallback, const FEOSLobbyKickMemberCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyUpdateReceivedCallback, const FEOSLobbyUpdateReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyMemberUpdateReceivedCallback, const FEOSLobbyMemberUpdateReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyMemberStatusReceivedCallback, const FEOSLobbyMemberStatusReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyInviteReceivedCallback, const FEOSLobbyInviteReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbySendInviteCallback, const FEOSLobbySendInviteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyRejectInviteCallback, const FEOSLobbyRejectInviteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyQueryInvitesCallback, const FEOSLobbyQueryInvitesCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyFindCallback, const FEOSLobbySearchFindCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLobbyInviteAcceptedCallback, const FEOSLobbyLobbyInviteAcceptedCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyCreateLobbyCallbackDelegate, const FEOSLobbyCreateLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyDestroyLobbyCallbackDelegate, const FEOSLobbyDestroyLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyJoinLobbyCallbackDelegate, const FEOSLobbyJoinLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyLeaveLobbyCallbackDelegate, const FEOSLobbyLeaveLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyUpdateLobbyCallbackDelegate, const FEOSLobbyUpdateLobbyCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyPromoteMemberCallbackDelegate, const FEOSLobbyPromoteMemberCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyKickMemberCallbackDelegate, const FEOSLobbyKickMemberCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyUpdateReceivedCallbackDelegate, const FEOSLobbyUpdateReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyMemberUpdateReceivedCallbackDelegate, const FEOSLobbyMemberUpdateReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyMemberStatusReceivedCallbackDelegate, const FEOSLobbyMemberStatusReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInviteReceivedCallbackDelegate, const FEOSLobbyInviteReceivedCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbySendInviteCallbackDelegate, const FEOSLobbySendInviteCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyRejectInviteCallbacDelegatek, const FEOSLobbyRejectInviteCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyQueryInvitesCallbackDelegate, const FEOSLobbyQueryInvitesCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyFindCallbackDelegate, const FEOSLobbySearchFindCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInviteAcceptedCallbackDelegate, const FEOSLobbyLobbyInviteAcceptedCallbackInfo&, data);

struct FCreateLobbyCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyCreateLobbyCallback Callback;
public:
	FCreateLobbyCallback(UCoreLobby* obj, const FOnLobbyCreateLobbyCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FDestroyLobbyCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyDestroyLobbyCallback Callback;
public:
	FDestroyLobbyCallback(UCoreLobby* obj, const FOnLobbyDestroyLobbyCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FJoinLobbyCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyJoinLobbyCallback Callback;
public:
	FJoinLobbyCallback(UCoreLobby* obj, const FOnLobbyJoinLobbyCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FLeaveLobbyCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyLeaveLobbyCallback Callback;
public:
	FLeaveLobbyCallback(UCoreLobby* obj, const FOnLobbyLeaveLobbyCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FUpdateLobbyCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyUpdateLobbyCallback Callback;
public:
	FUpdateLobbyCallback(UCoreLobby* obj, const FOnLobbyUpdateLobbyCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FLobbyPromoteMemberCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyPromoteMemberCallback Callback;
public:
	FLobbyPromoteMemberCallback(UCoreLobby* obj, const FOnLobbyPromoteMemberCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FLobbyKickMemberCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyKickMemberCallback Callback;
public:
	FLobbyKickMemberCallback(UCoreLobby* obj, const FOnLobbyKickMemberCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FLobbySendInviteCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbySendInviteCallback Callback;
public:
	FLobbySendInviteCallback(UCoreLobby* obj, const FOnLobbySendInviteCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FLobbyRejectInviteCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyRejectInviteCallback Callback;
public:
	FLobbyRejectInviteCallback(UCoreLobby* obj, const FOnLobbyRejectInviteCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FLobbyQueryInvitesCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyQueryInvitesCallback Callback;
public:
	FLobbyQueryInvitesCallback(UCoreLobby* obj, const FOnLobbyQueryInvitesCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};

struct FLobbyFindCallback
{
public:
	UCoreLobby* LobbyObject;
	FOnLobbyFindCallback Callback;
public:
	FLobbyFindCallback(UCoreLobby* obj, const FOnLobbyFindCallback& callback)
		: LobbyObject(obj)
		, Callback(callback) {}
};