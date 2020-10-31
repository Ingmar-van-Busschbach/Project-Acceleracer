/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "UserInfo/EOSUserInfo.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreUserInfo* UCoreUserInfo::UserInfoObject = nullptr;

UCoreUserInfo::UCoreUserInfo()
{
	UserInfoObject = this;
}

void UCoreUserInfo::EOSUserInfoQueryUserInfo(FEOSUserInfoQueryUserInfoOptions options, const FOnQueryUserInfoCallback& callback)
{
	if (EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UserInfo_QueryUserInfoOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };
		FQueryUserInfoCallback* m_Data = new FQueryUserInfoCallback({ this, callback });
		EOS_UserInfo_QueryUserInfo(EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnUserInfoQueryUserInfoCallback);
	}
}

void UCoreUserInfo::EOSUserInfoQueryUserInfoByDisplayName(FEOSUserInfoQueryUserInfoByDisplayNameOptions options, const FOnQueryUserInfoByDisplayNameCallback& callback)
{
	if (EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UserInfo_QueryUserInfoByDisplayNameOptions m_Options = { options.ApiVersion, options.LocalUserId, TCHAR_TO_UTF8(*options.DisplayName) };
		FQueryUserInfoByDisplayNameCallback* m_Data = new FQueryUserInfoByDisplayNameCallback({ this, callback });
		EOS_UserInfo_QueryUserInfoByDisplayName(EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnUserInfoQueryUserInfoByDisplayNameCallback);
	}
}

void UCoreUserInfo::EOSUserInfoQueryUserInfoByExternalAccount(FEOSUserInfoQueryUserInfoByExternalAccountOptions options, const FOnQueryUserInfoByExternalAccountCallback& callback)
{
	if (EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UserInfo_QueryUserInfoByExternalAccountOptions m_Options = { options.ApiVersion, options.LocalUserId, TCHAR_TO_UTF8(*options.ExternalAccountId), static_cast<EOS_EExternalAccountType>(options.AccountType) };
		FQueryUserInfoByExternalAccountCallback* m_Data = new FQueryUserInfoByExternalAccountCallback({ this, callback });
		EOS_UserInfo_QueryUserInfoByExternalAccount(EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnUserInfoQueryUserInfoByExternalAccountCallback);
	}
}

EOSResult UCoreUserInfo::EOSUserInfoCopyUserInfo(FEOSUserInfoCopyUserInfoOptions options, FEOSUserInfo& outUserInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UserInfo_CopyUserInfoOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };
		EOS_UserInfo* m_UserInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_UserInfo_CopyUserInfo(EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_UserInfo));

		if (m_Result == EOSResult::EOS_Success)
		{
			outUserInfo = *m_UserInfo;
		}
		EOS_UserInfo_Release(m_UserInfo);
	}

	return m_Result;
}

int32 UCoreUserInfo::EOSUserInfoGetExternalUserInfoCount(FEOSUserInfoGetExternalUserInfoCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UserInfo_GetExternalUserInfoCountOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };

		m_Data = EOS_UserInfo_GetExternalUserInfoCount(EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Data;
}

EOSResult UCoreUserInfo::EOSUserInfoCopyExternalUserInfoByIndex(FEOSUserInfoCopyExternalUserInfoByIndexOptions options, FEOSUserInfoExternalUserInfo& outExternalUserInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UserInfo_CopyExternalUserInfoByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId, static_cast<uint32_t>(options.Index) };
		EOS_UserInfo_ExternalUserInfo* m_ExternalUserInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_UserInfo_CopyExternalUserInfoByIndex(EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_ExternalUserInfo));

		if (m_Result == EOSResult::EOS_Success)
		{
			outExternalUserInfo = *m_ExternalUserInfo;
			EOS_UserInfo_ExternalUserInfo_Release(m_ExternalUserInfo);
		}
	}

	return m_Result;
}

EOSResult UCoreUserInfo::EOSUserInfoCopyExternalUserInfoByAccountType(FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions options, FEOSUserInfoExternalUserInfo& outExternalUserInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UserInfo_CopyExternalUserInfoByAccountTypeOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId, static_cast<EOS_EExternalAccountType>(options.AccountType) };
		EOS_UserInfo_ExternalUserInfo* m_ExternalUserInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_UserInfo_CopyExternalUserInfoByAccountType(EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_ExternalUserInfo));

		if (m_Result == EOSResult::EOS_Success)
		{
			outExternalUserInfo = *m_ExternalUserInfo;
			EOS_UserInfo_ExternalUserInfo_Release(m_ExternalUserInfo);
		}
	}

	return m_Result;
}

EOSResult UCoreUserInfo::EOSUserInfoCopyExternalUserInfoByAccountId(FEOSUserInfoCopyExternalUserInfoByAccountIdOptions options, FEOSUserInfoExternalUserInfo& outExternalUserInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UserInfo_CopyExternalUserInfoByAccountIdOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId, TCHAR_TO_UTF8(*options.AccountId) };
		EOS_UserInfo_ExternalUserInfo* m_ExternalUserInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_UserInfo_CopyExternalUserInfoByAccountId(EOS_Platform_GetUserInfoInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_ExternalUserInfo));

		if (m_Result == EOSResult::EOS_Success)
		{
			outExternalUserInfo = *m_ExternalUserInfo;
			EOS_UserInfo_ExternalUserInfo_Release(m_ExternalUserInfo);
		}

	}

	return m_Result;
}

void UCoreUserInfo::Internal_OnUserInfoQueryUserInfoCallback(const EOS_UserInfo_QueryUserInfoCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryUserInfoCallback* m_Data = static_cast<FQueryUserInfoCallback*>(data->ClientData);
	check(m_Data);
	UCoreUserInfo* m_UserInfo = m_Data->UserInfoObject;
	check(m_UserInfo);

	m_Data->Callback.ExecuteIfBound(*data);
	m_UserInfo->OnQueryUserInfoCallbackDelegate.Broadcast(*data);

	delete m_Data;
}

void UCoreUserInfo::Internal_OnUserInfoQueryUserInfoByDisplayNameCallback(const EOS_UserInfo_QueryUserInfoByDisplayNameCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryUserInfoByDisplayNameCallback* m_Data = static_cast<FQueryUserInfoByDisplayNameCallback*>(data->ClientData);
	check(m_Data);
	UCoreUserInfo* m_UserInfo = m_Data->UserInfoObject;
	check(m_UserInfo);

	m_Data->Callback.ExecuteIfBound(*data);
	m_UserInfo->OnQueryUserInfoByDisplayNameCallbackDelegate.Broadcast(*data);

	delete m_Data;
}

void UCoreUserInfo::Internal_OnUserInfoQueryUserInfoByExternalAccountCallback(const EOS_UserInfo_QueryUserInfoByExternalAccountCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryUserInfoByExternalAccountCallback* m_Data = static_cast<FQueryUserInfoByExternalAccountCallback*>(data->ClientData);
	check(m_Data);
	UCoreUserInfo* m_UserInfo = m_Data->UserInfoObject;
	check(m_UserInfo);

	m_Data->Callback.ExecuteIfBound(*data);
	m_UserInfo->OnQueryUserInfoByExternalAccountCallbackDelegate.Broadcast(*data);

	delete m_Data;
}
