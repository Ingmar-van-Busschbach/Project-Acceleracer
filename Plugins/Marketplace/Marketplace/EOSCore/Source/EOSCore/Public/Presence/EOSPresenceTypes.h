/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_presence_types.h"
#include "Core/EOSHelpers.h"
#include "EOSPresenceTypes.generated.h"

class UCorePresence;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/**
 * Presence Status states of a user
 *
 * @see EOS_Presence_CopyPresence
 * @see EOS_PresenceModification_SetStatus
 */
UENUM(BlueprintType)
enum class EEOSPresenceEStatus : uint8
{
	/** The status of the account is offline or not known */
	EOS_PS_Offline = 0,
	/** The status of the account is online */
	EOS_PS_Online = 1,
	/** The status of the account is away */
	EOS_PS_Away = 2,
	/** The status of the account is away, and has been away for a while */
	EOS_PS_ExtendedAway = 3,
	/** The status of the account is do-not-disturb */
	EOS_PS_DoNotDisturb = 4
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct FEOSHPresence
{
	GENERATED_BODY()
public:
	EOS_PresenceHandle* Handle;
public:
	explicit FEOSHPresence()
		: Handle(nullptr) { }
	FEOSHPresence(const EOS_HPresence& handle)
		: Handle(handle) { }
public:
	operator EOS_HPresence() { return Handle; }
	operator EOS_HPresence() const { return Handle; }
};

USTRUCT(BlueprintType)
struct FEOSHPresenceModification
{
	GENERATED_BODY()
public:
	EOS_PresenceModificationHandle* Handle;
public:
	explicit FEOSHPresenceModification()
		: Handle(NULL) { }
	FEOSHPresenceModification(const EOS_HPresenceModification& handle)
		: Handle(handle) { }
public:
	operator EOS_HPresenceModification() { return Handle; }
	operator EOS_HPresenceModification() const { return Handle; }
};

/**
 * An individual presence data record that belongs to a EOS_Presence_Info object. This object is released when its parent EOS_Presence_Info object is released.
 *
 * @see EOS_Presence_Info
 */
USTRUCT(BlueprintType)
struct FEOSPresenceDataRecord
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The name of this data */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString Key;
	/** The value of this data */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString Value;
public:
	explicit FEOSPresenceDataRecord()
		: ApiVersion(EOS_PRESENCE_DATARECORD_API_LATEST) { }
	FEOSPresenceDataRecord(const EOS_Presence_DataRecord& data)
		: ApiVersion(EOS_PRESENCE_DATARECORD_API_LATEST) 
		, Key(data.Key)
		, Value(data.Value)
		{ }
};

/**
 * All the known presence information for a specific user. This object must be released by calling EOS_Presence_Info_Release.
 *
 * @see EOS_Presence_CopyPresence
 * @see EOS_Presence_Info_Release
 */
USTRUCT(BlueprintType)
struct FEOSPresenceInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The status of the user */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		EEOSPresenceEStatus Status;
	/** The account id of the user */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId UserId;
	/** The product id that the user is logged in from */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString ProductId;
	/** The version of the product the user is logged in from */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString ProductVersion;
	/** The platform of that the user is logged in from */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString	Platform;
	/** The rich-text of the user */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString RichText;
	/** The count of records available */
		int32_t RecordsCount;
	/** The first data record, or NULL if RecordsCount is not at least 1 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		TArray<FEOSPresenceDataRecord> Records;
	/** The user-facing name for the product the user is logged in from */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString ProductName;
public:
	explicit FEOSPresenceInfo()
		: ApiVersion(EOS_PRESENCE_INFO_API_LATEST) 
		, Status(EEOSPresenceEStatus::EOS_PS_Offline)
		{ }
	FEOSPresenceInfo(const EOS_Presence_Info& data)
		: ApiVersion(EOS_PRESENCE_INFO_API_LATEST)
		, Status(static_cast<EEOSPresenceEStatus>(data.Status))
		, UserId(data.UserId)
		, ProductId(data.ProductId)
		, ProductVersion(data.ProductVersion)
		, Platform(data.Platform)
		, RichText(data.RichText)
		, RecordsCount(data.RecordsCount)
		, ProductName(data.ProductName)
	{
		for (int32 i = 0; i < data.RecordsCount; i++)
		{
			Records.Add(data.Records[i]);
		}
	}
};

/**
 * Data for the EOS_Presence_QueryPresence function
 */
USTRUCT(BlueprintType)
struct FEOSPresenceQueryPresenceOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The account id of the local user starting this query */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
	/** The account id of the user to query presence for */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSPresenceQueryPresenceOptions()
		: ApiVersion(EOS_PRESENCE_QUERYPRESENCE_API_LATEST) { }
};

/**
 * The result meta-data for a presence query.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceQueryPresenceCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, other codes indicate an error */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		EOSResult ResultCode;
	/** Client-specified data passed into EOS_Presence_QueryPresence */
		void* ClientData;
	/** The Local User who made this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
	/** The user whose presence was potentially queried */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSPresenceQueryPresenceCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) {}
	FEOSPresenceQueryPresenceCallbackInfo(const EOS_Presence_QueryPresenceCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
	{}
};

/**
 * Data for the EOS_Presence_HasPresence function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceHasPresenceOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The local user's cache to check for TargetUserId */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
	/** The user to check if we have presence information for */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSPresenceHasPresenceOptions()
		: ApiVersion(EOS_PRESENCE_HASPRESENCE_API_LATEST) { }
};

/**
 * Data for the EOS_Presence_CopyPresenceOptions function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceCopyPresenceOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The local user account id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
	/** The account id of the presence info to retrieve */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSPresenceCopyPresenceOptions()
		: ApiVersion(EOS_PRESENCE_COPYPRESENCE_API_LATEST) { }
};

/**
 * Data for the EOS_Presence_CreatePresenceModificationOptions function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceCreatePresenceModificationOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The local user account id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSPresenceCreatePresenceModificationOptions()
		: ApiVersion(EOS_PRESENCE_CREATEPRESENCEMODIFICATION_API_LATEST) { }
};

/**
 * Data for the EOS_Presence_SetPresenceOptions function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceSetPresenceOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The local user account id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
	/** The handle to the presence update */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSHPresenceModification PresenceModificationHandle;
public:
	explicit FEOSPresenceSetPresenceOptions()
		: ApiVersion(EOS_PRESENCE_SETPRESENCE_API_LATEST)
		, PresenceModificationHandle(nullptr) { }
};

/**
 * The result meta-data from setting a user's presence.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceSetPresenceCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, other codes indicate an error */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		EOSResult ResultCode;
	/** Client-specified data passed into EOS_Presence_SetPresence */
		void* ClientData;
		/** The local user that had their presence set */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSPresenceSetPresenceCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) {}
	FEOSPresenceSetPresenceCallbackInfo(const EOS_Presence_SetPresenceCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Data for the EOS_Presence_AddNotifyOnPresenceChangedOptions function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceAddNotifyOnPresenceChangedOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSPresenceAddNotifyOnPresenceChangedOptions()
		: ApiVersion(EOS_PRESENCE_SETPRESENCE_API_LATEST) { }
};

/**
 * Data containing which users presence has changed
 */
USTRUCT(BlueprintType)
struct FEOSPresencePresenceChangedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Client-specified data passed into EOS_Presence_SetPresence */
		void* ClientData;
	/** The local user who is being informed for PresenceUserId's presence change */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
	/** The user who had their presence changed */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId PresenceUserId;
public:
	explicit FEOSPresencePresenceChangedCallbackInfo()
		: ClientData(nullptr) {}
	FEOSPresencePresenceChangedCallbackInfo(const EOS_Presence_PresenceChangedCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, PresenceUserId(data.PresenceUserId)
	{}
};

/** The most recent version of the EOS_Presence_AddNotifyJoinGameAccepted API. */
USTRUCT(BlueprintType)
struct FEOSPresenceAddNotifyJoinGameAcceptedOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSPresenceAddNotifyJoinGameAcceptedOptions()
		: ApiVersion(EOS_PRESENCE_ADDNOTIFYJOINGAMEACCEPTED_API_LATEST) { }
};

/**
 * Output parameters for the EOS_Presence_OnJoinGameAcceptedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceJoinGameAcceptedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Client-specified data passed into EOS_Presence_SetPresence */
	void* ClientData;
	/**
	* The Join Info custom game-data string to use to join the target user.
	* Set to a null pointer to delete the value.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString JoinInfo;
	/** User that accepted the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
	/** Target user that sent the invite */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId TargetUserId;
	/**
	* If the value is not EOS_UI_EVENTID_INVALID then it must be passed back to the SDK using EOS_UI_AcknowledgeEventId.
	* This should be done after attempting to join the game and either succeeding or failing to connect.
	* This is necessary to allow the Social Overlay UI to manage the `Join` button.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSUIEventId UiEventId;
public:
	explicit FEOSPresenceJoinGameAcceptedCallbackInfo()
		: ClientData(nullptr) {}
	FEOSPresenceJoinGameAcceptedCallbackInfo(const EOS_Presence_JoinGameAcceptedCallbackInfo& data)
		: ClientData(data.ClientData)
		, JoinInfo(data.JoinInfo)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		, UiEventId(data.UiEventId)
	{}
};

/**
 * Data for the EOS_Presence_GetJoinInfo function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceGetJoinInfoOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The local user account id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId LocalUserId;
	/** The target user account id to get the join info for */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSPresenceGetJoinInfoOptions()
		: ApiVersion(EOS_PRESENCE_GETJOININFO_API_LATEST) { }
};

/**
 * Data for the EOS_PresenceModification_SetJoinInfo function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceModificationSetJoinInfoOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/**
	* The string which will be advertised as this player's join info.
	* An application is expected to freely define the meaning of this string to use for connecting to an active game session.
	* The string should not exceed EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH in length.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString JoinInfo;
public:
	explicit FEOSPresenceModificationSetJoinInfoOptions()
		: ApiVersion(EOS_PRESENCE_GETJOININFO_API_LATEST) { }
};

/**
 * Data for the EOS_PresenceModification_SetStatusOptions function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceModificationSetStatusOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The status of the user */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		EEOSPresenceEStatus Status;
public:
	explicit FEOSPresenceModificationSetStatusOptions()
		: ApiVersion(EOS_PRESENCE_SETSTATUS_API_LATEST)
		, Status(EEOSPresenceEStatus::EOS_PS_Offline) { }
};

/**
 * Data for the EOS_PresenceModification_SetRawRichTextOptions function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceModificationSetRawRichTextOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The status of the user */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString RichText;
public:
	explicit FEOSPresenceModificationSetRawRichTextOptions()
		: ApiVersion(EOS_PRESENCE_SETRAWRICHTEXT_API_LATEST) { }
};

/**
 * Data for the EOS_PresenceModification_SetDataOptions function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceModificationSetDataOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The count of records to set */
		int32_t RecordsCount;
	/** The pointer to start of a sequential array of Presence DataRecords */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		TArray<FEOSPresenceDataRecord> Records;
public:
	explicit FEOSPresenceModificationSetDataOptions()
		: ApiVersion(EOS_PRESENCE_SETDATA_API_LATEST) { }
};

/**
 * Data for identifying which data records should be deleted.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceModificationDataRecordId
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The key to be deleted from the data record */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		FString Key;
public:
	explicit FEOSPresenceModificationDataRecordId()
		: ApiVersion(EOS_PRESENCEMODIFICATION_DATARECORDID_API_LATEST) { }
};

/**
 * Data for the EOS_PresenceModification_DeleteDataOptions function.
 */
USTRUCT(BlueprintType)
struct FEOSPresenceModificationDeleteDataOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The count of data keys to delete */
		int32_t RecordsCount;
	/** The pointer to start of a sequential array of EOS_Presence_DataRecordId */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Presence")
		TArray<FEOSPresenceModificationDataRecordId> Records;
public:
	explicit FEOSPresenceModificationDeleteDataOptions()
		: ApiVersion(EOS_PRESENCE_DELETEDATA_API_LATEST) { }
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPresenceQueryPresenceCompleteCallback, const FEOSPresenceQueryPresenceCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPresenceSetPresenceCompleteCallback, const FEOSPresenceSetPresenceCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPresenceOnJoinGameAcceptedCallback, const FEOSPresenceJoinGameAcceptedCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPresenceChangedCallback, const FEOSPresencePresenceChangedCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPresenceQueryPresenceCompleteCallbackDelegate, const FEOSPresenceQueryPresenceCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPresenceSetPresenceCompleteCallbackDelegate, const FEOSPresenceSetPresenceCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPresenceOnJoinGameAcceptedCallbackDelegate, const FEOSPresenceJoinGameAcceptedCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPresenceChangedCallbackDelegate, const FEOSPresencePresenceChangedCallbackInfo&, data);

struct FQueryPresenceCompleteCallback
{
public:
	UCorePresence* PresenceObject;
	FOnPresenceQueryPresenceCompleteCallback Callback;
public:
	FQueryPresenceCompleteCallback(UCorePresence* obj, const FOnPresenceQueryPresenceCompleteCallback& callback)
		: PresenceObject(obj)
		, Callback(callback) {}
};

struct FSetPresenceCompleteCallback
{
public:
	UCorePresence* PresenceObject;
	FOnPresenceSetPresenceCompleteCallback Callback;
public:
	FSetPresenceCompleteCallback(UCorePresence* obj, const FOnPresenceSetPresenceCompleteCallback& callback)
		: PresenceObject(obj)
		, Callback(callback) {}
};