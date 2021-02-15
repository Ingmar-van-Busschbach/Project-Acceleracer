/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_connect_types.h"
#include "Core/EOSHelpers.h"
#include "EOSConnectTypes.generated.h"

class UCoreConnect;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/**
 * List of the supported identity providers to authenticate a user.
 *
 * The type of authentication token is specific to each provider.
 * Tokens in string format should be passed as-is to the function,
 * and tokens retrieved as raw byte arrays should be converted to string using
 * the EOS_ByteArray_ToString API before passing them to the Connect Interface API.
 *
 * @see EOS_Connect_Login
 * @see EOS_Connect_Credentials
 */
UENUM(BlueprintType)
enum class EEOSEExternalCredentialType : uint8
{
	/**
	* Epic Games User Token
	*
	* Acquired using EOS_Auth_CopyUserAuthToken that returns EOS_Auth_Token::AccessToken
	*/
	EOS_ECT_EPIC = 0,
	/**
	* Steam Encrypted App Ticket
	*
	* Generated using the ISteamUser::RequestEncryptedAppTicket API of Steamworks SDK.
	* As the ticket generation parameters, use pDataToInclude(NULL) and cbDataToInclude(0).
	*
	* Use the EOS_ByteArray_ToString API to pass the retrieved ticket buffer as a hex-encoded string for the EOS_Connect_Login API.
	*/
	EOS_ECT_STEAM_APP_TICKET = 1,
	/**
	* Playstation ID Token
	*
	* Retrieved from the Playstation SDK. Please see first-party documentation for additional information.
	*/
	EOS_ECT_PSN_ID_TOKEN = 2,
	/**
	* Xbox Live User's XSTS Token
	*
	* Retrieved from the Xbox One XDK. Please see first-party documentation for additional information.
	*/
	EOS_ECT_XBL_XSTS_TOKEN = 3,
	/**
	* Discord Access Token
	*/
	EOS_ECT_DISCORD_ACCESS_TOKEN = 4,
	/**
	* GOG Galaxy Encrypted Session Ticket
	*/
	EOS_ECT_GOG_SESSION_TICKET = 5,
	/**
	* Nintendo Account ID Token
	*
	* This token identifies the user's Nintendo account and is acquired using web flow authentication.
	* On Nintendo Switch, the first time login requires the user to authenticate using their Nintendo account,
	* after which the login is automatic and uses the primary authentication method with NSA ID Token.
	*/
	EOS_ECT_NINTENDO_ID_TOKEN = 6,
	/**
	* Nintendo Service Account ID Token
	*
	* This is the device specific authentication token that is first used on login and will be linked with a Nintendo user account.
	*/
	EOS_ECT_NINTENDO_NSA_ID_TOKEN = 7,
	/**
	* Uplay Access Token
	*/
	EOS_ECT_UPLAY_ACCESS_TOKEN = 8,
	/**
	* OpenID Provider Access Token
	*/
	EOS_ECT_OPENID_ACCESS_TOKEN = 9,
	/**
	* Device ID access token that identifies the current locally logged in user profile on the local device.
	* The local user profile here refers to the operating system user login, for example the user's Windows Account
	* or on a mobile device the default active user profile.
	*
	* This credential type is used to automatically login the local user using the EOS Connect Device ID feature.
	*
	* The intended use of the Device ID feature is to allow automatically logging in the user on a mobile device
	* and to allow playing the game without requiring the user to necessarily login using a real user account at all.
	* This makes a seamless first-time experience possible and allows linking the local device with a real external
	* user account at a later time, sharing the same EOS_ProductUserId that is being used with the Device ID feature.
	*
	* @see EOS_Connect_CreateDeviceId
	*/
	EOS_ECT_DEVICEID_ACCESS_TOKEN = 10,
	/**
	* Apple Identity Token
	*/
	EOS_ECT_APPLE_ID_TOKEN = 11
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/**
 * A structure that contains external login credentials.
 *
 * This is part of the input structure EOS_Connect_LoginOptions
 *
 * @see EOS_EExternalCredentialType
 * @see EOS_Connect_Login
 */
USTRUCT(BlueprintType)
struct FEOSConnectCredentials
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** External token associated with the user logging in */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FAccessToken Token;
	/** Type of external login. Needed to identify the auth method to use */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EEOSEExternalCredentialType Type;
public:
	explicit FEOSConnectCredentials()
		: ApiVersion(EOS_CONNECT_CREDENTIALS_API_LATEST)
		, Type(EEOSEExternalCredentialType::EOS_ECT_EPIC) {}
	FEOSConnectCredentials(const EOS_Connect_Credentials& data)
		: ApiVersion(EOS_CONNECT_CREDENTIALS_API_LATEST)
		, Token(data.Token)
		, Type(static_cast<EEOSEExternalCredentialType>(data.Type)) {}
};

/**
 * Additional information about the local user.
 *
 * As the information passed here is client-controlled and not part of the user authentication tokens, it is only treated as non-authoritative informational data to be used by some of the feature services. For example displaying player names in Leaderboards rankings.
 */
USTRUCT(BlueprintType)
struct FEOSConnectUserLoginInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The user’s display name on the identity provider systems as UTF-8 encoded null-terminated string. The length of the name can be at maximum up to EOS_CONNECT_USERLOGININFO_DISPLAYNAME_MAX_LENGTH bytes. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FString DisplayName;
public:
	explicit FEOSConnectUserLoginInfo()
		: ApiVersion(EOS_CONNECT_USERLOGININFO_API_LATEST) {}
	FEOSConnectUserLoginInfo(const EOS_Connect_UserLoginInfo& data)
		: ApiVersion(EOS_CONNECT_USERLOGININFO_API_LATEST)
		, DisplayName(data.DisplayName)
		{}
};

/**
 * Input parameters for the EOS_Connect_Login Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectLoginOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Credentials specified for a given login method */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSConnectCredentials Credentials;
	/**
	 * Additional non-authoritative information about the local user.
	 *
	 * This field is required to be set for user authentication with Apple and Nintendo, as well as with the Device ID feature login. When using other identity providers, set to NULL.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSConnectUserLoginInfo UserLoginInfo;
public:
	explicit FEOSConnectLoginOptions()
		: ApiVersion(EOS_CONNECT_LOGIN_API_LATEST){}
	FEOSConnectLoginOptions(const EOS_Connect_LoginOptions& data)
		: ApiVersion(EOS_CONNECT_LOGIN_API_LATEST)
		, Credentials(*data.Credentials)
		, UserLoginInfo(*data.UserLoginInfo)
		{}
};

/**
 * Output parameters for the EOS_Connect_Login Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectLoginCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_result.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Connect_Login */
		void* ClientData;
	/** If login was succesful, this is the account ID of the local player that logged in */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
	/**
	 * If the user was not found with credentials passed into EOS_Connect_Login,
	 * this continuance token can be passed to either EOS_Connect_CreateUser
	 * or EOS_Connect_LinkAccount to continue the flow
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FContinuanceToken ContinuanceToken;
public:
	explicit FEOSConnectLoginCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) { }
	FEOSConnectLoginCallbackInfo(const EOS_Connect_LoginCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, ContinuanceToken(data.ContinuanceToken)
		{}
};

/**
 * Input parameters for the EOS_Connect_CreateUser Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectCreateUserOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Continuance token from previous call to EOS_Connect_Login */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FContinuanceToken ContinuanceToken;
public:
	explicit FEOSConnectCreateUserOptions()
		: ApiVersion(EOS_CONNECT_CREATEUSER_API_LATEST){ }
	FEOSConnectCreateUserOptions(const EOS_Connect_CreateUserOptions& data)
		: ApiVersion(EOS_CONNECT_CREATEUSER_API_LATEST)
		, ContinuanceToken(data.ContinuanceToken)
		{}
};

/**
 * Output parameters for the EOS_Connect_CreateUser Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectCreateUserCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_result.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Connect_CreateUser */
		void* ClientData;
	/** Account ID of the local player created by this operation */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSConnectCreateUserCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) { }
	FEOSConnectCreateUserCallbackInfo(const EOS_Connect_CreateUserCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		{}
};

/**
 * Input parameters for the EOS_Connect_LinkAccount Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectLinkAccountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Existing logged in user that will link to the external account referenced by the continuance token */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
	/** Continuance token from previous call to EOS_Connect_Login */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FContinuanceToken ContinuanceToken;
public:
	explicit FEOSConnectLinkAccountOptions()
		: ApiVersion(EOS_CONNECT_LINKACCOUNT_API_LATEST){ }
	FEOSConnectLinkAccountOptions(const EOS_Connect_LinkAccountOptions& data)
		: ApiVersion(EOS_CONNECT_LINKACCOUNT_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, ContinuanceToken(data.ContinuanceToken)
		{}
};

/**
 * Output parameters for the EOS_Connect_LinkAccount Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectLinkAccountCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_result.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Connect_LinkAccount */
		void* ClientData;
	/** Existing logged in user that had external auth linked */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSConnectLinkAccountCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) { }
	FEOSConnectLinkAccountCallbackInfo(const EOS_Connect_LinkAccountCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		{}
};

/**
 * Input parameters for the EOS_Connect_UnlinkAccount Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectUnlinkAccountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/**
	 * Existing logged in product user that is subject for the unlinking operation.
	 * The external account that was used to login to the product user will be unlinked from the owning keychain.
	 *
	 * On a successful operation, the product user will be logged out as the external account used to authenticate the user was unlinked from the owning keychain.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSConnectUnlinkAccountOptions()
		: ApiVersion(EOS_CONNECT_UNLINKACCOUNT_API_LATEST){ }
};

/**
 * Output parameters for the EOS_Connect_UnlinkAccount Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectUnlinkAccountCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_result.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Connect_UnlinkAccount */
		void* ClientData;
	/**
		* The product user that was subject for the unlinking operation.
		*
		* On a successful operation, the local authentication session for the product user will have been invalidated.
		* As such, the LocalUserId value will no longer be valid in any context unless the user is logged into it again.
		*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSConnectUnlinkAccountCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) { }
	FEOSConnectUnlinkAccountCallbackInfo(const EOS_Connect_UnlinkAccountCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		{}
};

USTRUCT(BlueprintType)
struct FEOSConnectCreateDeviceIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/**
	 * A freeform text description identifying the device type and model,
	 * which can be used in account linking management to allow the player
	 * and customer support to identify different devices linked to an EOS
	 * user keychain. For example 'iPhone 6S' or 'PC Windows'.
	 *
	 * The input string must be in UTF-8 character format, with a maximum
	 * length of 64 characters. Longer string will be silently truncated.
	 *
	 * This field is required to be present.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FString DeviceModel;
public:
	explicit FEOSConnectCreateDeviceIdOptions()
		: ApiVersion(EOS_CONNECT_CREATEDEVICEID_API_LATEST){ }
	FEOSConnectCreateDeviceIdOptions(const EOS_Connect_CreateDeviceIdOptions& data)
		: ApiVersion(EOS_CONNECT_CREATEDEVICEID_API_LATEST)
		, DeviceModel(data.DeviceModel)
		{}
};

/**
 * Output parameters for the EOS_Connect_CreateDeviceId Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectCreateDeviceIdCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_result.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Connect_CreateDeviceId */
		void* ClientData;
public:
	explicit FEOSConnectCreateDeviceIdCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) { }
	FEOSConnectCreateDeviceIdCallbackInfo(const EOS_Connect_CreateDeviceIdCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		{}
};

/**
 * Input parameters for the EOS_Connect_DeleteDeviceId Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectDeleteDeviceIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSConnectDeleteDeviceIdOptions()
		: ApiVersion(EOS_CONNECT_DELETEDEVICEID_API_LATEST){ }
	FEOSConnectDeleteDeviceIdOptions(const EOS_Connect_DeleteDeviceIdOptions& data)
		: ApiVersion(EOS_CONNECT_DELETEDEVICEID_API_LATEST) {}
};

/**
 * Output parameters for the EOS_Connect_DeleteDeviceId Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectDeleteDeviceIdCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_result.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Connect_DeleteDeviceId */
		void* ClientData;
public:
	explicit FEOSConnectDeleteDeviceIdCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) { }
	FEOSConnectDeleteDeviceIdCallbackInfo(const EOS_Connect_DeleteDeviceIdCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		{}
};

/**
 * Input parameters for the EOS_Connect_DeleteDeviceId Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectTransferDeviceIdAccountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/**
	 * The primary product user id, currently logged in, that is already associated with a real external user account (such as Epic Games, Playstation, Xbox and other).
	 *
	 * The account linking keychain that owns this product user will be preserved and receive
	 * the Device ID login credentials under it.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId PrimaryLocalUserId;
	/**
	 * The product user id, currently logged in, that has been originally created using the anonymous local Device ID login type,
	 * and whose Device ID login will be transferred to the keychain of the PrimaryLocalUserId.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalDeviceUserId;
	/**
	 * Specifies which FEOSProductUserId (i.e. game progression) will be preserved in the operation.
	 *
	 * After a successful transfer operation, subsequent logins using the same external account or
	 * the same local Device ID login will return user session for the ProductUserIdToPreserve.
	 *
	 * Set to either PrimaryLocalUserId or LocalDeviceUserId.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId ProductUserIdToPreserve;
public:
	explicit FEOSConnectTransferDeviceIdAccountOptions()
		: ApiVersion(EOS_CONNECT_TRANSFERDEVICEIDACCOUNT_API_LATEST){ }
};

/**
 * Output parameters for the EOS_Connect_DeleteDeviceId Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectTransferDeviceIdAccountCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_result.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Connect_DeleteDeviceId */
		void* ClientData;
		/**
	 * The ProductUserIdToPreserve that was passed to the original EOS_Connect_TransferDeviceIdAccount call.
	 *
	 * On successful operation, this EOS_ProductUserId will have a valid authentication session
	 * and the other EOS_ProductUserId value has been discarded and lost forever.
	 *
	 * The application should remove any registered notification callbacks for the discarded EOS_ProductUserId as obsolete.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSConnectTransferDeviceIdAccountCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) { }
	FEOSConnectTransferDeviceIdAccountCallbackInfo(const EOS_Connect_TransferDeviceIdAccountCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		{}
};

USTRUCT(BlueprintType)
struct FEOSConnectQueryExternalAccountMappingsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Existing logged in user that is querying account mappings */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
	/** External auth service supplying the account ids in string form */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EEOSEExternalAccountType AccountIdType;
	/** An array of external account ids to map to the product user id representation */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		TArray<FString> ExternalAccountIds;
	/** Number of account ids to query */
		int32 ExternalAccountIdCount;
public:
	explicit FEOSConnectQueryExternalAccountMappingsOptions()
		: ApiVersion(EOS_CONNECT_QUERYEXTERNALACCOUNTMAPPINGS_API_LATEST)
		, AccountIdType(EEOSEExternalAccountType::EOS_EAT_EPIC)
		, ExternalAccountIdCount(0)
		{ }
	FEOSConnectQueryExternalAccountMappingsOptions(const EOS_Connect_QueryExternalAccountMappingsOptions& data)
		: ApiVersion(EOS_CONNECT_QUERYEXTERNALACCOUNTMAPPINGS_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, AccountIdType(static_cast<EEOSEExternalAccountType>(data.AccountIdType))
		, ExternalAccountIdCount(data.ExternalAccountIdCount) 
	{
		for (int32 i=0; i<ExternalAccountIdCount; i++)
			ExternalAccountIds.Add(data.ExternalAccountIds[i]);
	}
};

/**
 * Output parameters for the EOS_Connect_QueryExternalAccountMappings Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectQueryExternalAccountMappingsCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_result.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Connect_QueryExternalAccountMappings */
		void* ClientData;
	/** Existing logged in user that made the request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSConnectQueryExternalAccountMappingsCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) { }
	FEOSConnectQueryExternalAccountMappingsCallbackInfo(const EOS_Connect_QueryExternalAccountMappingsCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		{}
};

/**
 * Input parameters for the EOS_Connect_GetExternalAccountMappings Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectGetExternalAccountMappingsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Existing logged in user that is querying account mappings */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
	/** External auth service supplying the account ids in string form */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EEOSEExternalAccountType AccountIdType;
	/** Target user to retrieve the mapping for, as an external account id */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FString TargetExternalUserId;
public:
	explicit FEOSConnectGetExternalAccountMappingsOptions()
		: ApiVersion(EOS_CONNECT_GETEXTERNALACCOUNTMAPPINGS_API_LATEST)
		, AccountIdType(EEOSEExternalAccountType::EOS_EAT_EPIC)
		{ }
	FEOSConnectGetExternalAccountMappingsOptions(const EOS_Connect_GetExternalAccountMappingsOptions& data)
		: ApiVersion(EOS_CONNECT_GETEXTERNALACCOUNTMAPPINGS_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, AccountIdType(static_cast<EEOSEExternalAccountType>(data.AccountIdType))
		, TargetExternalUserId(data.TargetExternalUserId)
		{}
};

/**
 * Input parameters for the EOS_Connect_QueryProductUserIdMappings Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectQueryProductUserIdMappingsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Existing logged in user that is querying account mappings */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
	/** Deprecated - all external mappings are included in this call, it is no longer necessary to specify this value */
		EOS_EExternalAccountType AccountIdType_DEPRECATED;
	/** An array of product user ids to query for the given external account representation */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		TArray<FEOSProductUserId> ProductUserIds;
	/** Number of account ids to query */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		int32 ProductUserIdCount;
public:
	explicit FEOSConnectQueryProductUserIdMappingsOptions()
		: ApiVersion(EOS_CONNECT_QUERYPRODUCTUSERIDMAPPINGS_API_LATEST)
		, ProductUserIdCount(0)
		{ }
	FEOSConnectQueryProductUserIdMappingsOptions(const EOS_Connect_QueryProductUserIdMappingsOptions& data)
		: ApiVersion(EOS_CONNECT_QUERYPRODUCTUSERIDMAPPINGS_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, AccountIdType_DEPRECATED(data.AccountIdType_DEPRECATED)
		, ProductUserIdCount(data.ProductUserIdCount)
		{
			for (int32 i=0; i<ProductUserIdCount; i++)
				ProductUserIds.Add(data.ProductUserIds[i]);
		}
};

/**
 * Output parameters for the EOS_Connect_QueryProductUserIdMappings Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectQueryProductUserIdMappingsCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_result.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Connect_QueryProductUserIdMappings */
		void* ClientData;
	/** Existing logged in user that made the request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSConnectQueryProductUserIdMappingsCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) { }
	FEOSConnectQueryProductUserIdMappingsCallbackInfo(const EOS_Connect_QueryProductUserIdMappingsCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		{}
};

/**
 * Input parameters for the EOS_Connect_GetProductUserIdMapping Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectGetProductUserIdMappingOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Existing logged in user that is querying account mappings */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
	/** External auth service supplying the account ids in string form */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EEOSEExternalAccountType AccountIdType;
	/** Target product user id to retrieve */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId TargetProductUserId;
public:
	explicit FEOSConnectGetProductUserIdMappingOptions()
		: ApiVersion(EOS_CONNECT_GETPRODUCTUSERIDMAPPING_API_LATEST)
		, AccountIdType(EEOSEExternalAccountType::EOS_EAT_EPIC) { }
	FEOSConnectGetProductUserIdMappingOptions(const EOS_Connect_GetProductUserIdMappingOptions& data)
		: ApiVersion(EOS_CONNECT_GETPRODUCTUSERIDMAPPING_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, AccountIdType(static_cast<EEOSEExternalAccountType>(data.AccountIdType))
		, TargetProductUserId(data.TargetProductUserId)
		{}
};

/**
 * Input parameters for the EOS_Connect_GetProductUserExternalAccountCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectGetProductUserExternalAccountCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product user id to look for when getting external account info count from the cache. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSConnectGetProductUserExternalAccountCountOptions()
		: ApiVersion(EOS_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNT_API_LATEST){ }
	FEOSConnectGetProductUserExternalAccountCountOptions(const EOS_Connect_GetProductUserExternalAccountCountOptions& data)
		: ApiVersion(EOS_CONNECT_GETPRODUCTUSEREXTERNALACCOUNTCOUNT_API_LATEST)
		, TargetUserId(data.TargetUserId)
		{}
};

/**
 * Input parameters for the EOS_Connect_CopyProductUserExternalAccountByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectCopyProductUserExternalAccountByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product user id to look for when copying external account info from the cache. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId TargetUserId;
	/** Index of the external account info to retrieve from the cache. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		int32 ExternalAccountInfoIndex;
public:
	explicit FEOSConnectCopyProductUserExternalAccountByIndexOptions()
		: ApiVersion(EOS_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEX_API_LATEST)
		, ExternalAccountInfoIndex(0)
		{ }
	FEOSConnectCopyProductUserExternalAccountByIndexOptions(const EOS_Connect_CopyProductUserExternalAccountByIndexOptions& data)
		: ApiVersion(EOS_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYINDEX_API_LATEST)
		, TargetUserId(data.TargetUserId)
		, ExternalAccountInfoIndex(data.ExternalAccountInfoIndex)
		{}
};

/**
 * Input parameters for the EOS_Connect_CopyProductUserExternalAccountByAccountType Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product user id to look for when copying external account info from the cache. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId TargetUserId;
	/** External auth service account type to look for when copying external account info from the cache. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EEOSEExternalAccountType AccountIdType;
public:
	explicit FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions()
		: ApiVersion(EOS_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPE_API_LATEST) 
		, AccountIdType(EEOSEExternalAccountType::EOS_EAT_EPIC)
		{}
	FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions(const EOS_Connect_CopyProductUserExternalAccountByAccountTypeOptions& data)
		: ApiVersion(EOS_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPE_API_LATEST)
		, TargetUserId(data.TargetUserId)
		, AccountIdType(static_cast<EEOSEExternalAccountType>(data.AccountIdType))
		{}
};

/**
 * Input parameters for the EOS_Connect_CopyProductUserExternalAccountByAccountId Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product user id to look for when copying external account info from the cache. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId TargetUserId;
	/** External auth service account id to look for when copying external account info from the cache. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FString AccountId;
public:
	explicit FEOSConnectCopyProductUserExternalAccountByAccountIdOptions()
		: ApiVersion(EOS_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTID_API_LATEST) {}
	FEOSConnectCopyProductUserExternalAccountByAccountIdOptions(const EOS_Connect_CopyProductUserExternalAccountByAccountIdOptions& data)
		: ApiVersion(EOS_CONNECT_COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTID_API_LATEST)
		, TargetUserId(data.TargetUserId)
		, AccountId(data.AccountId)
	{}

};

/**
 * Input parameters for the EOS_Connect_CopyProductUserInfo Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectCopyProductUserInfoOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product user id to look for when copying external account info from the cache. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSConnectCopyProductUserInfoOptions()
		: ApiVersion(EOS_CONNECT_COPYPRODUCTUSERINFO_API_LATEST) {}
	FEOSConnectCopyProductUserInfoOptions(const EOS_Connect_CopyProductUserInfoOptions& data)
		: ApiVersion(EOS_CONNECT_COPYPRODUCTUSERINFO_API_LATEST)
		, TargetUserId(data.TargetUserId)
		{}
};

/**
 * Contains information about an external account info
 */
USTRUCT(BlueprintType)
struct FEOSConnectExternalAccountInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product user id of the target user. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId ProductUserId;
	/** Display name, can be null if not set. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FString DisplayName;
	/** External account id. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FString AccountId;
	/** The identity provider that owns the external account. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EEOSEExternalAccountType AccountIdType;
	/** The POSIX timestamp for the time the user last logged in, or EOS_CONNECT_TIME_UNDEFINED. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FString LastLoginTime;
public:
	explicit FEOSConnectExternalAccountInfo()
		: ApiVersion(EOS_CONNECT_EXTERNALACCOUNTINFO_API_LATEST) 
		, AccountIdType(EEOSEExternalAccountType::EOS_EAT_EPIC)
		{}
	FEOSConnectExternalAccountInfo(const EOS_Connect_ExternalAccountInfo& data)
		: ApiVersion(EOS_CONNECT_EXTERNALACCOUNTINFO_API_LATEST)
		, ProductUserId(data.ProductUserId)
		, DisplayName(data.DisplayName)
		, AccountId(data.AccountId)
		, AccountIdType(static_cast<EEOSEExternalAccountType>(data.AccountIdType))
		, LastLoginTime(LexToString(data.LastLoginTime))
		{}
};

/**
 * Structure containing information for the auth expiration notification callback
 */
USTRUCT(BlueprintType)
struct FEOSConnectAddNotifyAuthExpirationOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSConnectAddNotifyAuthExpirationOptions()
		: ApiVersion(EOS_CONNECT_ADDNOTIFYAUTHEXPIRATION_API_LATEST) {}
	FEOSConnectAddNotifyAuthExpirationOptions(const EOS_Connect_AddNotifyAuthExpirationOptions& data)
		: ApiVersion(EOS_CONNECT_ADDNOTIFYAUTHEXPIRATION_API_LATEST)
		{}
};

/**
 * Output parameters for the EOS_Connect_OnAuthExpirationCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectAuthExpirationCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Connect_AddNotifyAuthExpiration */
		void* ClientData;
	/** Account ID of the local player whose status has changed */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSConnectAuthExpirationCallbackInfo()
		: ClientData(nullptr) { }
	FEOSConnectAuthExpirationCallbackInfo(const EOS_Connect_AuthExpirationCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		{}
};

/**
 * Structure containing information or the connect user login status change callback
 */
USTRUCT(BlueprintType)
struct FEOSConnectAddNotifyLoginStatusChangedOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSConnectAddNotifyLoginStatusChangedOptions()
		: ApiVersion(EOS_CONNECT_ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST) {}
	FEOSConnectAddNotifyLoginStatusChangedOptions(const EOS_Connect_AddNotifyLoginStatusChangedOptions& data)
		: ApiVersion(EOS_CONNECT_ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST)
		{}
};

/**
 * Output parameters for the EOS_Connect_OnLoginStatusChangedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSConnectLoginStatusChangedCallbackInfo
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Connect_AddNotifyAuthExpiration */
		void* ClientData;
	/** Account ID of the local player whose status has changed */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		FEOSProductUserId LocalUserId;
	/** The status prior to the change */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EEOSELoginStatus PreviousStatus;
	/** The status at the time of the notification */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Connect")
		EEOSELoginStatus CurrentStatus;
public:
	explicit FEOSConnectLoginStatusChangedCallbackInfo()
		: ClientData(nullptr) 
		, PreviousStatus(EEOSELoginStatus::EOS_LS_NotLoggedIn)
		, CurrentStatus(EEOSELoginStatus::EOS_LS_NotLoggedIn) { }
	FEOSConnectLoginStatusChangedCallbackInfo(const EOS_Connect_LoginStatusChangedCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, PreviousStatus(static_cast<EEOSELoginStatus>(data.PreviousStatus))
		, CurrentStatus(static_cast<EEOSELoginStatus>(data.CurrentStatus))
		{}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginCallback, const FEOSConnectLoginCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCreateUserCallback, const FEOSConnectCreateUserCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLinkAccountCallback, const FEOSConnectLinkAccountCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnlinkAccountCallback, const FEOSConnectUnlinkAccountCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCreateDeviceIdCallback, const FEOSConnectCreateDeviceIdCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDeleteDeviceIdCallback, const FEOSConnectDeleteDeviceIdCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTransferDeviceIdAccountCallback, const FEOSConnectTransferDeviceIdAccountCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryExternalAccountMappingsCallback, const FEOSConnectQueryExternalAccountMappingsCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryProductUserIdMappingsCallback, const FEOSConnectQueryProductUserIdMappingsCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginStatusChangedCallback, const FEOSConnectLoginStatusChangedCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAuthExpirationCallback, const FEOSConnectAuthExpirationCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoginCallbackDelegate, const FEOSConnectLoginCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateUserCallbackDelegate, const FEOSConnectCreateUserCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLinkAccountCallbackDelegate, const FEOSConnectLinkAccountCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnlinkAccountCallbackDelegate, const FEOSConnectUnlinkAccountCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateDeviceIdCallbackDelegate, const FEOSConnectCreateDeviceIdCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteDeviceIdCallbackDelegate, const FEOSConnectDeleteDeviceIdCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTransferDeviceIdAccountCallbackDelegate, const FEOSConnectTransferDeviceIdAccountCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryExternalAccountMappingsCallbackDelegate, const FEOSConnectQueryExternalAccountMappingsCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryProductUserIdMappingsCallbackDelegate, const FEOSConnectQueryProductUserIdMappingsCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAuthExpirationCallbackDelegate, const FEOSConnectAuthExpirationCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoginStatusChangedCallbackDelegate, const FEOSConnectLoginStatusChangedCallbackInfo&, data);

struct FLoginCallback
{
public:
	UCoreConnect* ConnectObject;
	FOnLoginCallback Callback;
public:
	FLoginCallback(UCoreConnect* obj, const FOnLoginCallback& callback)
		: ConnectObject(obj)
		, Callback(callback) {}
};

struct FQueryExternalAccountMappingsCallback
{
public:
	UCoreConnect* ConnectObject;
	FOnQueryExternalAccountMappingsCallback Callback;
public:
	FQueryExternalAccountMappingsCallback(UCoreConnect* obj, const FOnQueryExternalAccountMappingsCallback& callback)
		: ConnectObject(obj)
		, Callback(callback) {}
};

struct FDeleteDeviceIdCallback
{
public:
	UCoreConnect* ConnectObject;
	FOnDeleteDeviceIdCallback Callback;
public:
	FDeleteDeviceIdCallback(UCoreConnect* obj, const FOnDeleteDeviceIdCallback& callback)
		: ConnectObject(obj)
		, Callback(callback) {}
};

struct FTransferDeviceIdAccountCallback
{
public:
	UCoreConnect* ConnectObject;
	FOnTransferDeviceIdAccountCallback Callback;
public:
	FTransferDeviceIdAccountCallback(UCoreConnect* obj, const FOnTransferDeviceIdAccountCallback& callback)
		: ConnectObject(obj)
		, Callback(callback)
	{}
};

struct FCreateDeviceIdCallback
{
public:
	UCoreConnect* ConnectObject;
	FOnCreateDeviceIdCallback Callback;
public:
	FCreateDeviceIdCallback(UCoreConnect* obj, const FOnCreateDeviceIdCallback& callback)
		: ConnectObject(obj)
		, Callback(callback) {}
};

struct FLinkAccountCallback
{
public:
	UCoreConnect* ConnectObject;
	FOnLinkAccountCallback Callback;
public:
	FLinkAccountCallback(UCoreConnect* obj, const FOnLinkAccountCallback& callback)
		: ConnectObject(obj)
		, Callback(callback) {}
};

struct FUnlinkAccountCallback
{
public:
	UCoreConnect* ConnectObject;
	FOnUnlinkAccountCallback Callback;
public:
	FUnlinkAccountCallback(UCoreConnect* obj, const FOnUnlinkAccountCallback& callback)
		: ConnectObject(obj)
		, Callback(callback) {}
};

struct FCreateUserCallback
{
public:
	UCoreConnect* ConnectObject;
	FOnCreateUserCallback Callback;
public:
	FCreateUserCallback(UCoreConnect* obj, const FOnCreateUserCallback& callback)
		: ConnectObject(obj)
		, Callback(callback) {}
};

struct FQueryProductUserIdMappingsCallback
{
public:
	UCoreConnect* ConnectObject;
	FOnQueryProductUserIdMappingsCallback Callback;
public:
	FQueryProductUserIdMappingsCallback(UCoreConnect* obj, const FOnQueryProductUserIdMappingsCallback& callback)
		: ConnectObject(obj)
		, Callback(callback) {}
};