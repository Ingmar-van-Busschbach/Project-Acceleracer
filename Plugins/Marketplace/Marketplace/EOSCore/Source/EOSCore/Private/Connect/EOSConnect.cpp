/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Connect/EOSConnect.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreConnect* UCoreConnect::ConnectObject = nullptr;

UCoreConnect::UCoreConnect()
{
	ConnectObject = this;
}

void UCoreConnect::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		{
			EOS_Connect_AddNotifyAuthExpirationOptions m_Options = { EOS_CONNECT_ADDNOTIFYAUTHEXPIRATION_API_LATEST };

			EOS_Connect_AddNotifyAuthExpiration(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Connect_AuthExpirationCallbackInfo* data)
			{
				LogVerbose("");

				ConnectObject->OnAuthExpirationCallback.Broadcast(*data);

				for (auto& m_Element : OnAuthExpirationCallbacks)
					m_Element.Value.ExecuteIfBound(*data);
			}));
		}
		
		{
			EOS_Connect_AddNotifyLoginStatusChangedOptions m_Options = { EOS_CONNECT_ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST };

			EOS_Connect_AddNotifyLoginStatusChanged(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Connect_LoginStatusChangedCallbackInfo* data)
			{
				LogVerbose("");

				ConnectObject->OnLoginStatusChangedCallback.Broadcast(*data);

				for (auto& m_Element : OnLoginStatusChangedCallbacks)
					m_Element.Value.ExecuteIfBound(*data);
			}));
		}
	}
}

void UCoreConnect::Deinitialize()
{
	for (auto& m_Element : OnAuthExpirationCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	Super::Deinitialize();
}

void UCoreConnect::EOSConnectLogin(FEOSConnectLoginOptions options, const FOnLoginCallback& callback)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_DisplayName = TCHAR_TO_UTF8(*options.UserLoginInfo.DisplayName);

		EOS_Connect_Credentials m_Credentials = { options.Credentials.ApiVersion, options.Credentials.Token.AccessToken.c_str(), static_cast<EOS_EExternalCredentialType>(options.Credentials.Type) };
		EOS_Connect_UserLoginInfo m_LoginInfo = { options.UserLoginInfo.ApiVersion, m_DisplayName.c_str() };
		EOS_Connect_LoginOptions m_Options = { options.ApiVersion, &m_Credentials, &m_LoginInfo };

		EEOSEExternalCredentialType m_Type = options.Credentials.Type;

		if (m_Type == EEOSEExternalCredentialType::EOS_ECT_APPLE_ID_TOKEN || m_Type == EEOSEExternalCredentialType::EOS_ECT_NINTENDO_ID_TOKEN || m_Type == EEOSEExternalCredentialType::EOS_ECT_NINTENDO_NSA_ID_TOKEN || m_Type == EEOSEExternalCredentialType::EOS_ECT_DEVICEID_ACCESS_TOKEN)
		{
			m_Options.UserLoginInfo = &m_LoginInfo;
		}
		else
		{
			m_Options.UserLoginInfo = nullptr;
		}

		FLoginCallback* m_Data = new FLoginCallback({ this, callback });
		EOS_Connect_Login(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnConnectLoginCallback);
	}
}

void UCoreConnect::EOSConnectCreateUser(FEOSConnectCreateUserOptions options, const FOnCreateUserCallback& callback)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_CreateUserOptions m_Options = { options.ApiVersion, options.ContinuanceToken };
		FCreateUserCallback* m_Data = new FCreateUserCallback({ this, callback });
		EOS_Connect_CreateUser(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnConnectCreateUserCallback);
	}
}

void UCoreConnect::EOSConnectLinkAccount(FEOSConnectLinkAccountOptions options, const FOnLinkAccountCallback& callback)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_LinkAccountOptions m_Options = { options.ApiVersion, options.LocalUserId, options.ContinuanceToken};
		FLinkAccountCallback* m_Data = new FLinkAccountCallback({ this, callback });
		EOS_Connect_LinkAccount(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnConnectLinkAccountCallback);
	}
}

void UCoreConnect::EOSConnectUnlinkAccount(FEOSConnectUnlinkAccountOptions options, const FOnUnlinkAccountCallback& callback)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_UnlinkAccountOptions m_Options = { options.ApiVersion, options.LocalUserId };
		FUnlinkAccountCallback* m_Data = new FUnlinkAccountCallback({ this, callback });
		EOS_Connect_UnlinkAccount(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnConnectUnlinkAccountCallback);
	}
}

void UCoreConnect::EOSConnectCreateDeviceId(FEOSConnectCreateDeviceIdOptions options, const FOnCreateDeviceIdCallback& callback)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_DeviceModel = TCHAR_TO_UTF8(*options.DeviceModel);

		EOS_Connect_CreateDeviceIdOptions m_Options = { options.ApiVersion, (options.DeviceModel.Len() > 0 ? m_DeviceModel.c_str() : NULL) };
		FCreateDeviceIdCallback* m_Data = new FCreateDeviceIdCallback({ this, callback });
		EOS_Connect_CreateDeviceId(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnConnectCreateDeviceIdCallback);
	}
}

void UCoreConnect::EOSConnectDeleteDeviceId(FEOSConnectDeleteDeviceIdOptions options, const FOnDeleteDeviceIdCallback& callback)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_DeleteDeviceIdOptions m_Options = { options.ApiVersion };
		FDeleteDeviceIdCallback* m_Data = new FDeleteDeviceIdCallback({ this, callback });
		EOS_Connect_DeleteDeviceId(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnConnectDeleteDeviceIdCallback);
	}
}

void UCoreConnect::EOSConnectTransferDeviceIdAccount(FEOSConnectTransferDeviceIdAccountOptions options, const FOnTransferDeviceIdAccountCallback& callback)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_TransferDeviceIdAccountOptions m_Options = { options.ApiVersion };
		FTransferDeviceIdAccountCallback* m_Data = new FTransferDeviceIdAccountCallback({ this, callback });
		EOS_Connect_TransferDeviceIdAccount(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnConnectTransferDeviceIdAccount);
	}
}

void UCoreConnect::EOSConnectQueryExternalAccountMappings(FEOSConnectQueryExternalAccountMappingsOptions options, const FOnQueryExternalAccountMappingsCallback& callback)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_QueryExternalAccountMappingsOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<EOS_EExternalAccountType>(options.AccountIdType), new const char* [options.ExternalAccountIds.Num()], static_cast<uint32_t>(options.ExternalAccountIds.Num()) };

		TArray<std::string> externalIds;

		for (int32 i = 0; i < options.ExternalAccountIds.Num(); i++)
		{
			externalIds.Add(TCHAR_TO_UTF8(*options.ExternalAccountIds[i]));
		}

		for (int32 i = 0; i < options.ExternalAccountIds.Num(); i++)
		{
			m_Options.ExternalAccountIds[i] = externalIds[i].c_str();
		}

		FQueryExternalAccountMappingsCallback* m_Data = new FQueryExternalAccountMappingsCallback({this, callback});
		EOS_Connect_QueryExternalAccountMappings(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnConnectQueryExternalAccountMappingsCallback);
		delete[] m_Options.ExternalAccountIds;
	}
}

void UCoreConnect::EOSConnectQueryProductUserIdMappings(FEOSConnectQueryProductUserIdMappingsOptions options, const FOnQueryProductUserIdMappingsCallback& callback)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_QueryProductUserIdMappingsOptions m_Options = { options.ApiVersion, options.LocalUserId, options.AccountIdType_DEPRECATED, new EOS_ProductUserId[options.ProductUserIdCount], static_cast<uint32_t>(options.ProductUserIdCount) };

		for (int32 i = 0; i < options.ProductUserIdCount; i++)
		{
			m_Options.ProductUserIds[i] = options.ProductUserIds[i];
		}
		FQueryProductUserIdMappingsCallback* m_Data = new FQueryProductUserIdMappingsCallback({ this, callback });
		EOS_Connect_QueryProductUserIdMappings(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnConnectQueryProductUserIdMappingsCallback);
		delete[] m_Options.ProductUserIds;
	}
}

FEOSProductUserId UCoreConnect::EOSConnectGetExternalAccountMapping(FEOSConnectGetExternalAccountMappingsOptions options)
{
	FEOSProductUserId m_Data;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_TargetExternalUserId = TCHAR_TO_UTF8(*options.TargetExternalUserId);

		EOS_Connect_GetExternalAccountMappingsOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<EOS_EExternalAccountType>(options.AccountIdType), m_TargetExternalUserId.c_str() };
		m_Data = EOS_Connect_GetExternalAccountMapping(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Data;
}

EOSResult UCoreConnect::EOSConnectGetProductUserIdMapping(FEOSConnectGetProductUserIdMappingOptions options, FString& outString)
{
	EOSResult m_Result = EOSResult::EOS_UnrecognizedResponse;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_GetProductUserIdMappingOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<EOS_EExternalAccountType>(options.AccountIdType), options.TargetProductUserId };

		char m_Buffer[EOS_CONNECT_EXTERNAL_ACCOUNT_ID_MAX_LENGTH];
		int32_t bufferLen = EOS_CONNECT_EXTERNAL_ACCOUNT_ID_MAX_LENGTH;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Connect_GetProductUserIdMapping(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Buffer, &bufferLen));

		if (m_Result == EOSResult::EOS_Success)
		{
			outString = m_Buffer;
		}
	}

	return m_Result;
}

int32 UCoreConnect::EOSConnectGetProductUserExternalAccountCount(FEOSConnectGetProductUserExternalAccountCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_GetProductUserExternalAccountCountOptions m_Options = { options.ApiVersion, options.TargetUserId };

		m_Data = EOS_Connect_GetProductUserExternalAccountCount(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Data;
}

EOSResult UCoreConnect::EOSConnectCopyProductUserExternalAccountByIndex(FEOSConnectCopyProductUserExternalAccountByIndexOptions options, FEOSConnectExternalAccountInfo& outExternalAccountInfo)
{
	EOSResult m_Result = EOSResult::EOS_UnrecognizedResponse;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_CopyProductUserExternalAccountByIndexOptions m_Options = { options.ApiVersion, options.TargetUserId, static_cast<uint32_t>(options.ExternalAccountInfoIndex) };
		EOS_Connect_ExternalAccountInfo* m_AccountInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Connect_CopyProductUserExternalAccountByIndex(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_AccountInfo));

		if (m_Result == EOSResult::EOS_Success)
		{
			outExternalAccountInfo = *m_AccountInfo;
		}

		EOS_Connect_ExternalAccountInfo_Release(m_AccountInfo);
	}

	return m_Result;
}

EOSResult UCoreConnect::EOSConnectCopyProductUserExternalAccountByAccountType(FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions options, FEOSConnectExternalAccountInfo& outExternalAccountInfo)
{
	EOSResult m_Result = EOSResult::EOS_UnrecognizedResponse;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_CopyProductUserExternalAccountByAccountTypeOptions m_Options = { options.ApiVersion, options.TargetUserId,static_cast<EOS_EExternalAccountType>(options.AccountIdType) };
		EOS_Connect_ExternalAccountInfo* m_AccountInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Connect_CopyProductUserExternalAccountByAccountType(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_AccountInfo));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			outExternalAccountInfo = *m_AccountInfo;
		}

		EOS_Connect_ExternalAccountInfo_Release(m_AccountInfo);
	}

	return m_Result;
}

EOSResult UCoreConnect::EOSConnectCopyProductUserExternalAccountByAccountId(FEOSConnectCopyProductUserExternalAccountByAccountIdOptions options, FEOSConnectExternalAccountInfo& outExternalAccountInfo)
{
	EOSResult m_Result = EOSResult::EOS_UnrecognizedResponse;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_AccountId = TCHAR_TO_UTF8(*options.AccountId);

		EOS_Connect_CopyProductUserExternalAccountByAccountIdOptions m_Options = { options.ApiVersion, options.TargetUserId, m_AccountId.c_str() };
		EOS_Connect_ExternalAccountInfo* m_AccountInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Connect_CopyProductUserExternalAccountByAccountId(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_AccountInfo));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			outExternalAccountInfo = *m_AccountInfo;
		}

		EOS_Connect_ExternalAccountInfo_Release(m_AccountInfo);
	}

	return m_Result;
}

EOSResult UCoreConnect::EOSConnectCopyProductUserInfo(FEOSConnectCopyProductUserInfoOptions options, FEOSConnectExternalAccountInfo& outExternalAccountInfo)
{
	EOSResult m_Result = EOSResult::EOS_UnrecognizedResponse;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_CopyProductUserInfoOptions m_Options = { options.ApiVersion, options.TargetUserId };
		EOS_Connect_ExternalAccountInfo* m_AccountInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Connect_CopyProductUserInfo(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_AccountInfo));

		if (m_Result == EOSResult::EOS_Success)
		{
			outExternalAccountInfo = *m_AccountInfo;
		}

		EOS_Connect_ExternalAccountInfo_Release(m_AccountInfo);
	}

	return m_Result;
}

int32 UCoreConnect::EOSConnectGetLoggedInUsersCount()
{
	int32 m_Data = 0;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		m_Data = EOS_Connect_GetLoggedInUsersCount(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()));
	}

	return m_Data;
}

FEOSProductUserId UCoreConnect::EOSConnectGetLoggedInUserByIndex(int32 index)
{
	FEOSProductUserId m_Data;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		m_Data = EOS_Connect_GetLoggedInUserByIndex(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), index);
	}

	return m_Data;
}

EEOSELoginStatus UCoreConnect::EOSConnectGetLoginStatus(FEOSProductUserId localUserId)
{
	EEOSELoginStatus m_Data = EEOSELoginStatus::EOS_LS_NotLoggedIn;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		m_Data = static_cast<EEOSELoginStatus>(EOS_Connect_GetLoginStatus(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), localUserId));
	}

	return m_Data;
}

FEOSNotificationId UCoreConnect::EOSConnectAddNotifyAuthExpiration(const FOnAuthExpirationCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_AddNotifyAuthExpirationOptions m_Options = { EOS_CONNECT_ADDNOTIFYAUTHEXPIRATION_API_LATEST };

		m_ID = EOS_Connect_AddNotifyAuthExpiration(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Connect_AuthExpirationCallbackInfo* data){}));

		OnAuthExpirationCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreConnect::EOSConnectRemoveNotifyAuthExpiration(FEOSNotificationId id)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_RemoveNotifyAuthExpiration(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), id);
		
		OnAuthExpirationCallbacks.Remove(id);
	}
}

FEOSNotificationId UCoreConnect::EOSConnectAddNotifyLoginStatusChanged(const FOnLoginStatusChangedCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_AddNotifyLoginStatusChangedOptions m_Options = { EOS_CONNECT_ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST };

		m_ID = EOS_Connect_AddNotifyLoginStatusChanged(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Connect_LoginStatusChangedCallbackInfo* data){}));

		OnLoginStatusChangedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreConnect::EOSConnectRemoveNotifyLoginStatusChanged(FEOSNotificationId id)
{
	if (EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Connect_RemoveNotifyLoginStatusChanged(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), id);

		OnLoginStatusChangedCallbacks.Remove(id);
	}
}

void UCoreConnect::Internal_OnConnectLoginCallback(const EOS_Connect_LoginCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLoginCallback* m_Data = static_cast<FLoginCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreConnect* m_Connect = m_Data->ConnectObject;
		check(m_Connect);

		if (m_Connect)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Connect->OnLoginCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreConnect::Internal_OnConnectCreateUserCallback(const EOS_Connect_CreateUserCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FCreateUserCallback* m_Data = static_cast<FCreateUserCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreConnect* m_Connect = m_Data->ConnectObject;
		check(m_Connect);

		if (m_Connect)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Connect->OnCreateUserCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreConnect::Internal_OnConnectLinkAccountCallback(const EOS_Connect_LinkAccountCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLinkAccountCallback* m_Data = static_cast<FLinkAccountCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreConnect* m_Connect = m_Data->ConnectObject;
		check(m_Connect);

		if (m_Connect)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Connect->OnLinkAccountCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreConnect::Internal_OnConnectUnlinkAccountCallback(const EOS_Connect_UnlinkAccountCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FUnlinkAccountCallback* m_Data = static_cast<FUnlinkAccountCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreConnect* m_Connect = m_Data->ConnectObject;
		check(m_Connect);

		if (m_Connect)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Connect->OnUnlinkAccountCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreConnect::Internal_OnConnectCreateDeviceIdCallback(const EOS_Connect_CreateDeviceIdCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FCreateDeviceIdCallback* m_Data = static_cast<FCreateDeviceIdCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreConnect* m_Connect = m_Data->ConnectObject;
		check(m_Connect);

		if (m_Connect)
		{

			m_Data->Callback.ExecuteIfBound(*data);
			m_Connect->OnCreateDeviceIdCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreConnect::Internal_OnConnectDeleteDeviceIdCallback(const EOS_Connect_DeleteDeviceIdCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FDeleteDeviceIdCallback* m_Data = static_cast<FDeleteDeviceIdCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreConnect* m_Connect = m_Data->ConnectObject;
		check(m_Connect);

		if (m_Connect)
		{

			m_Data->Callback.ExecuteIfBound(*data);
			m_Connect->OnDeleteDeviceIdCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreConnect::Internal_OnConnectTransferDeviceIdAccount(const EOS_Connect_TransferDeviceIdAccountCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FTransferDeviceIdAccountCallback* m_Data = static_cast<FTransferDeviceIdAccountCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreConnect* m_Connect = m_Data->ConnectObject;
		check(m_Connect);

		if (m_Connect)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Connect->OnTransferDeviceIdAccountCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreConnect::Internal_OnConnectQueryExternalAccountMappingsCallback(const EOS_Connect_QueryExternalAccountMappingsCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryExternalAccountMappingsCallback* m_Data = static_cast<FQueryExternalAccountMappingsCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreConnect* m_Connect = m_Data->ConnectObject;
		check(m_Connect);

		if (m_Connect)
		{

			m_Data->Callback.ExecuteIfBound(*data);
			m_Connect->OnQueryExternalAccountMappingsCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreConnect::Internal_OnConnectQueryProductUserIdMappingsCallback(const EOS_Connect_QueryProductUserIdMappingsCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryProductUserIdMappingsCallback* m_Data = static_cast<FQueryProductUserIdMappingsCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreConnect* m_Connect = m_Data->ConnectObject;
		check(m_Connect);

		if (m_Connect)
		{

			m_Data->Callback.ExecuteIfBound(*data);
			m_Connect->OnQueryProductUserIdMappingsCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}