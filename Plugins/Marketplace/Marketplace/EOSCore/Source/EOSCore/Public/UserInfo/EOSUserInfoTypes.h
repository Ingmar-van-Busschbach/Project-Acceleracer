/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_userinfo_types.h"
#include "Core/EOSHelpers.h"
#include "EOSUserInfoTypes.generated.h"

class UCoreUserInfo;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/**
 * Input parameters for the EOS_UserInfo_QueryUserInfo Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoQueryUserInfoOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** Account ID of the player whose information is being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSUserInfoQueryUserInfoOptions()
		: ApiVersion(EOS_USERINFO_QUERYUSERINFO_API_LATEST) { }
};

/**
 * Output parameters for the EOS_UserInfo_QueryUserInfo Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoQueryUserInfoCallbackInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
		/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats") 
		EOSResult ResultCode;
	/** Context that was passed into EOS_UserInfo_QueryUserInfo */
		void* ClientData;
	/** Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** Account ID of the player whose information is being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSUserInfoQueryUserInfoCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSUserInfoQueryUserInfoCallbackInfo(const EOS_UserInfo_QueryUserInfoCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
	{}
};

/**
 * Input parameters for the EOS_UserInfo_QueryUserInfoByDisplayName Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoQueryUserInfoByDisplayNameOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** Display name of the player being queried */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString	DisplayName;
public:
	explicit FEOSUserInfoQueryUserInfoByDisplayNameOptions()
		: ApiVersion(EOS_USERINFO_QUERYUSERINFOBYDISPLAYNAME_API_LATEST) { }
	FEOSUserInfoQueryUserInfoByDisplayNameOptions(const EOS_UserInfo_QueryUserInfoByDisplayNameOptions& data)
		: ApiVersion(EOS_USERINFO_QUERYUSERINFOBYDISPLAYNAME_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, DisplayName(data.DisplayName)
	{}
};

/**
 * Output parameters for the EOS_UserInfo_QueryUserInfoByDisplayName Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EOSResult ResultCode;
	/** Context that was passed into EOS_UserInfo_QueryUserInfoByDisplayName */
		void* ClientData;
	/** Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** Account ID of the player whose information is being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId TargetUserId;
	/** Display name of the player being queried. This memory is only valid during the scope of the callback. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString DisplayName;
public:
	explicit FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo(const EOS_UserInfo_QueryUserInfoByDisplayNameCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		, DisplayName(data.DisplayName)
	{}
};

/**
 * Input parameters for the EOS_UserInfo_QueryUserInfoByDisplayName Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoQueryUserInfoByExternalAccountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Epic Online Services Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** External account ID of the user whose information is being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString ExternalAccountId;
	/** Account type of the external user info to query */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EEOSEExternalAccountType AccountType;
public:
	explicit FEOSUserInfoQueryUserInfoByExternalAccountOptions()
		: ApiVersion(EOS_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNT_API_LATEST) { }
};

/**
 * Output parameters for the EOS_UserInfo_QueryUserInfoByDisplayName Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EOSResult ResultCode;
	/** Context that was passed into EOS_UserInfo_QueryUserInfoByExternalAccount */
		void* ClientData;
	/** The Epic Online Services Account ID of the local player who requested the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** External account id of the user whose information has been retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString ExternalAccountId;
	/** Account type of the external account id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EEOSEExternalAccountType AccountType;
	/** Account ID of the player whose information has been retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr)
		, AccountType(EEOSEExternalAccountType::EOS_EAT_EPIC)
	{ }
	FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo(const EOS_UserInfo_QueryUserInfoByExternalAccountCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, ExternalAccountId(data.ExternalAccountId)
		, AccountType(static_cast<EEOSEExternalAccountType>(data.AccountType))
		, TargetUserId(data.TargetUserId)
	{}
};

/** A structure that contains the user information. These structures are created by EOS_UserInfo_CopyUserInfo and must be passed to EOS_UserInfo_Release. */
USTRUCT(BlueprintType)
struct FEOSUserInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The account id of the user */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId UserId;
	/** The name of the owner's country. This may be null */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString Country;
	/** The display name. This may be null */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString DisplayName;
	/** The ISO 639 language code for the user's preferred language. This may be null */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString PreferredLanguage;
	/** A nickname/alias for the target user assigned by the local user. This may be null */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString Nickname;
public:
	explicit FEOSUserInfo()
		: ApiVersion(EOS_USERINFO_COPYUSERINFO_API_LATEST) { }
	FEOSUserInfo(const EOS_UserInfo& data)
		: ApiVersion(EOS_USERINFO_COPYUSERINFO_API_LATEST)
		, UserId(data.UserId)
		, Country(data.Country)
		, DisplayName(data.DisplayName)
		, PreferredLanguage(data.PreferredLanguage)
		, Nickname(data.Nickname)
	{}
};

/**
 * Input parameters for the EOS_UserInfo_CopyUserInfo Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoCopyUserInfoOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** Account ID of the player whose information is being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSUserInfoCopyUserInfoOptions()
		: ApiVersion(EOS_USERINFO_COPYUSERINFO_API_LATEST) { }
	FEOSUserInfoCopyUserInfoOptions(const EOS_UserInfo_CopyUserInfoOptions& data)
		: ApiVersion(EOS_USERINFO_COPYUSERINFO_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
	{}
};

/**
 * Contains information about a single external user info.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoExternalUserInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The type of the external account */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EEOSEExternalAccountType AccountType;
	/** The id of the external account. Can be null */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString AccountId;
	/** The display name of the external account. Can be null */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString DisplayName;
public:
	explicit FEOSUserInfoExternalUserInfo()
		: ApiVersion(EOS_USERINFO_EXTERNALUSERINFO_API_LATEST) 
		, AccountType(EEOSEExternalAccountType::EOS_EAT_EPIC) {}
	FEOSUserInfoExternalUserInfo(const EOS_UserInfo_ExternalUserInfo& data)
		: ApiVersion(EOS_USERINFO_EXTERNALUSERINFO_API_LATEST)
		, AccountType(static_cast<EEOSEExternalAccountType>(data.AccountType))
		, AccountId(data.AccountId)
		, DisplayName(data.DisplayName)
	{}
};

/**
 * Input parameters for the EOS_UserInfo_GetExternalUserInfoCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoGetExternalUserInfoCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** Account ID of the player whose information is being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId TargetUserId;
public:
	explicit FEOSUserInfoGetExternalUserInfoCountOptions()
		: ApiVersion(EOS_USERINFO_GETEXTERNALUSERINFOCOUNT_API_LATEST) { }
	FEOSUserInfoGetExternalUserInfoCountOptions(const EOS_UserInfo_GetExternalUserInfoCountOptions& data)
		: ApiVersion(EOS_USERINFO_GETEXTERNALUSERINFOCOUNT_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
	{}
};

/**
 * Input parameters for the EOS_UserInfo_CopyExternalUserInfoByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoCopyExternalUserInfoByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** Account ID of the player whose information is being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId TargetUserId;
	/** Index of the external user info to retrieve from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		int32 Index;
public:
	explicit FEOSUserInfoCopyExternalUserInfoByIndexOptions()
		: ApiVersion(EOS_USERINFO_COPYEXTERNALUSERINFOBYINDEX_API_LATEST) 
		, Index(0) {}
	FEOSUserInfoCopyExternalUserInfoByIndexOptions(const EOS_UserInfo_CopyExternalUserInfoByIndexOptions& data)
		: ApiVersion(EOS_USERINFO_COPYEXTERNALUSERINFOBYINDEX_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		, Index(data.Index)
	{}
};

/**
 * Input parameters for the EOS_UserInfo_CopyExternalUserInfoByAccountType function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** Account ID of the player whose information is being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId TargetUserId;
	/** Account type of the external user info to retrieve from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EEOSEExternalAccountType AccountType;
public:
	explicit FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions()
		: ApiVersion(EOS_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPE_API_LATEST) 
		, AccountType(EEOSEExternalAccountType::EOS_EAT_EPIC) {}
	FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions(const EOS_UserInfo_CopyExternalUserInfoByAccountTypeOptions& data)
		: ApiVersion(EOS_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPE_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		, AccountType(static_cast<EEOSEExternalAccountType>(data.AccountType))
	{}
};

/**
 * Input parameters for the EOS_UserInfo_CopyExternalUserInfoByAccountId Function.
 */
USTRUCT(BlueprintType)
struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID of the local player requesting the information */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId LocalUserId;
	/** Account ID of the player whose information is being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSEpicAccountId TargetUserId;
	/** Account ID of the external user info to retrieve from the cache. Cannot be null */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString AccountId;
public:
	explicit FEOSUserInfoCopyExternalUserInfoByAccountIdOptions()
		: ApiVersion(EOS_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTID_API_LATEST) { }
	FEOSUserInfoCopyExternalUserInfoByAccountIdOptions(const EOS_UserInfo_CopyExternalUserInfoByAccountIdOptions& data)
		: ApiVersion(EOS_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTID_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
		, AccountId(data.AccountId)
	{}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryUserInfoCallback, const FEOSUserInfoQueryUserInfoCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryUserInfoByDisplayNameCallback, const FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryUserInfoByExternalAccountCallback, const FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryUserInfoCallbackDelegate, const FEOSUserInfoQueryUserInfoCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryUserInfoByDisplayNameCallbackDelegate, const FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryUserInfoByExternalAccountCallbackDelegate, const FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo&, data);

struct FQueryUserInfoCallback
{
public:
	UCoreUserInfo* UserInfoObject;
	FOnQueryUserInfoCallback Callback;
public:
	FQueryUserInfoCallback(UCoreUserInfo* obj, const FOnQueryUserInfoCallback& callback)
		: UserInfoObject(obj)
		, Callback(callback) {}
};

struct FQueryUserInfoByDisplayNameCallback
{
public:
	UCoreUserInfo* UserInfoObject;
	FOnQueryUserInfoByDisplayNameCallback Callback;
public:
	FQueryUserInfoByDisplayNameCallback(UCoreUserInfo* obj, const FOnQueryUserInfoByDisplayNameCallback& callback)
		: UserInfoObject(obj)
		, Callback(callback) {}
};

struct FQueryUserInfoByExternalAccountCallback
{
public:
	UCoreUserInfo* UserInfoObject;
	FOnQueryUserInfoByExternalAccountCallback Callback;
public:
	FQueryUserInfoByExternalAccountCallback(UCoreUserInfo* obj, const FOnQueryUserInfoByExternalAccountCallback& callback)
		: UserInfoObject(obj)
		, Callback(callback) {}
};