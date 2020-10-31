/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Auth/EOSAuthentication.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"
#include <TimerManager.h>

UCoreAuthentication* UCoreAuthentication::AuthObject = nullptr;

UCoreAuthentication::UCoreAuthentication()
{
	AuthObject = this;
}

void UCoreAuthentication::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Auth_AddNotifyLoginStatusChangedOptions m_Options = { EOS_AUTH_ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST };

		EOS_Auth_AddNotifyLoginStatusChanged(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Auth_LoginStatusChangedCallbackInfo* data)
		{
			LogVerbose("");

			AuthObject->OnAuthLoginStatusChangedCallback.Broadcast(*data);

			for (auto& m_Element : AuthLoginStatusChangedCallbacks)
				m_Element.Value.ExecuteIfBound(*data);
		}));
	}
}

void UCoreAuthentication::Deinitialize()
{
	for (auto& m_Element : AuthLoginStatusChangedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	Super::Deinitialize();
}

void UCoreAuthentication::EOSAuthLogin(FEOSAuthLoginOptions options, const FOnAuthLoginCallback& callback)
{
	LogVerbose("");

	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Id = TCHAR_TO_UTF8(*options.Credentials.ID);
		std::string m_Token = TCHAR_TO_UTF8(*options.Credentials.Token);

		EOS_Auth_Credentials m_Credentials = { options.Credentials.ApiVersion, m_Id.length() > 0 ? m_Id.c_str() : nullptr, m_Token.length() > 0 ? m_Token.c_str() : nullptr, static_cast<EOS_ELoginCredentialType>(options.Credentials.Type), options.Credentials.SystemAuthCredentialsOptions, static_cast<EOS_EExternalCredentialType>(options.Credentials.ExternalType) };

		if (options.Credentials.Type == EEOSLoginCredentialType::EOS_LCT_PersistentAuth)
		{
			m_Credentials.Id = NULL;
			m_Credentials.Token = NULL;
		}

		auto m_Flags = EOS_EAuthScopeFlags::EOS_AS_BasicProfile | EOS_EAuthScopeFlags::EOS_AS_FriendsList | EOS_EAuthScopeFlags::EOS_AS_Presence;
		EOS_Auth_LoginOptions m_Options = { options.ApiVersion, &m_Credentials, m_Flags };
	//	EOS_Auth_LoginOptions m_Options = { options.ApiVersion, &m_Credentials };
		FAuthLoginCallback* m_Data = new FAuthLoginCallback({ this, callback });
		EOS_Auth_Login(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnAuthLoginCallback);
	}
}

void UCoreAuthentication::EOSAuthLogout(FEOSAuthLogoutOptions options, const FOnAuthLogoutCallback& callback)
{
	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Auth_LogoutOptions m_Options = { options.ApiVersion, options.LocalUserId };
		FAuthLogoutCallback* m_Data = new FAuthLogoutCallback({ this, callback });
		EOS_Auth_Logout(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnAuthLogoutCallback);
	}
}

void UCoreAuthentication::EOSAuthLinkAccount(FEOSAuthLinkAccountOptions options, const FOnAuthLinkAccountCallback& callback)
{
	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Auth_LinkAccountOptions m_Options = { options.ApiVersion, static_cast<EOS_ELinkAccountFlags>(options.LinkAccountFlags), options.ContinuanceToken, options.LocalUserId };
		FAuthLinkAccountCallback* m_Data = new FAuthLinkAccountCallback({ this, callback });
		EOS_Auth_LinkAccount(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnAuthOnLinkAccountCallback);
	}
}

void UCoreAuthentication::EOSAuthDeletePersistentAuth(const FEOSAuthDeletePersistentAuthOptions& options, const FOnAuthDeletePersistentAuthCallback& callback)
{
	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_RefreshToken = TCHAR_TO_UTF8(*options.RefreshToken);

		EOS_Auth_DeletePersistentAuthOptions m_Options = { options.ApiVersion, m_RefreshToken.length() > 0 ? m_RefreshToken.c_str() : nullptr };
		FAuthDeletePersistentAuthCallback* m_Data = new FAuthDeletePersistentAuthCallback({ this, callback });
		EOS_Auth_DeletePersistentAuth(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnAuthDeletePersistentAuthCallback);
	}
}

void UCoreAuthentication::EOSAuthVerifyUserAuth(const FEOSAuthVerifyUserAuthOptions& options, const FOnAuthVerifyUserAuthCallback& callback)
{
	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_ClientId = TCHAR_TO_UTF8(*options.AuthToken.ClientId);
		std::string m_App = TCHAR_TO_UTF8(*options.AuthToken.App);
		std::string m_ExpiresAt = TCHAR_TO_UTF8(*options.AuthToken.ExpiresAt);
		std::string m_RefreshToken = TCHAR_TO_UTF8(*options.AuthToken.RefreshToken);
		std::string m_RefreshExpiresAt = TCHAR_TO_UTF8(*options.AuthToken.RefreshExpiresAt);

		EOS_Auth_Token m_Token = { options.AuthToken.ApiVersion, m_App.c_str(), m_ClientId.c_str(), options.AuthToken.AccountId, options.AuthToken.AccessToken.AccessToken.c_str(), FCString::Atod(*options.AuthToken.ExpiresIn), m_ExpiresAt.c_str(), static_cast<EOS_EAuthTokenType>(options.AuthToken.AuthType), m_RefreshToken.c_str(), FCString::Atod(*options.AuthToken.RefreshExpiresIn), m_RefreshExpiresAt.c_str() };
		EOS_Auth_VerifyUserAuthOptions m_Options = { options.ApiVersion, &m_Token };

		FAuthVerifyUserAuthCallback* m_Data = new FAuthVerifyUserAuthCallback({ this, callback });
		EOS_Auth_VerifyUserAuth(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnAuthVerifyUserAuthCallback);
	}
}

int32 UCoreAuthentication::EOSAuthGetLoggedInAccountsCount()
{
	int32 m_Value = 0;

	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		m_Value = EOS_Auth_GetLoggedInAccountsCount(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()));
	}

	return m_Value;
}

FEOSEpicAccountId UCoreAuthentication::EOSAuthGetLoggedInAccountByIndex(int32 index)
{
	FEOSEpicAccountId m_ID;

	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		m_ID = EOS_Auth_GetLoggedInAccountByIndex(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), index);
	}

	return m_ID;
}

EOSELoginStatus UCoreAuthentication::EOSAuthGetLoginStatus(FEOSEpicAccountId localUserId)
{
	EOSELoginStatus m_Status = EOSELoginStatus::EOS_LS_NotLoggedIn;

	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		m_Status = static_cast<EOSELoginStatus>(EOS_Auth_GetLoginStatus(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), localUserId));
	}

	return m_Status;
}

EOSResult UCoreAuthentication::EOSAuthCopyUserAuthToken(FEOSAuthCopyUserAuthTokenOptions options, FEOSEpicAccountId localUserId, FEOSAuthToken& outUserAuthToken)
{
	EOSResult m_Result = EOSResult::EOS_TimedOut;

	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Auth_CopyUserAuthTokenOptions m_Options = { options.ApiVersion };
		EOS_Auth_Token* m_Token = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Auth_CopyUserAuthToken(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, localUserId, &m_Token));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			outUserAuthToken = *m_Token;
		}

		EOS_Auth_Token_Release(m_Token);
	}

	return m_Result;
}

FEOSNotificationId UCoreAuthentication::EOSAuthAddNotifyLoginStatusChanged(const FOnAuthLoginStatusChangedCallback& callback)
{
	FEOSNotificationId m_ID;
	
	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Auth_AddNotifyLoginStatusChangedOptions m_Options = { EOS_AUTH_ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST };

		m_ID = EOS_Auth_AddNotifyLoginStatusChanged(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Auth_LoginStatusChangedCallbackInfo* data){}));

		AuthLoginStatusChangedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreAuthentication::EOSAuthRemoveNotifyLoginStatusChanged(FEOSNotificationId id)
{
	if (EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Auth_RemoveNotifyLoginStatusChanged(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), id);

		AuthLoginStatusChangedCallbacks.Remove(id);
	}
}

void UCoreAuthentication::Internal_OnAuthLoginCallback(const EOS_Auth_LoginCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	if (!EOS_EResult_IsOperationComplete(data->ResultCode))
	{
		LogVerbose("Result not complete");
		return;
	}

	LogVerbose("Result complete");

	FAuthLoginCallback* m_Data = static_cast<FAuthLoginCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreAuthentication* m_Authentication = m_Data->AuthenticationObject;
		check(m_Authentication);

		if (m_Authentication)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Authentication->OnAuthLoginCallback.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreAuthentication::Internal_OnAuthLogoutCallback(const EOS_Auth_LogoutCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FAuthLogoutCallback* m_Data = static_cast<FAuthLogoutCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreAuthentication* m_Authentication = m_Data->AuthenticationObject;
		check(m_Authentication);

		if (m_Authentication)
		{

			m_Data->Callback.ExecuteIfBound(*data);
			m_Authentication->OnAuthLogoutCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreAuthentication::Internal_OnAuthOnLinkAccountCallback(const EOS_Auth_LinkAccountCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FAuthLinkAccountCallback* m_Data = static_cast<FAuthLinkAccountCallback*>(data->ClientData);
	check(m_Data);
	check(m_Data);
	if (m_Data)
	{
		UCoreAuthentication* m_Authentication = m_Data->AuthenticationObject;
		check(m_Authentication);

		if (m_Authentication)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Authentication->OnAuthLinkAccountCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreAuthentication::Internal_OnAuthDeletePersistentAuthCallback(const EOS_Auth_DeletePersistentAuthCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FAuthDeletePersistentAuthCallback* m_Data = static_cast<FAuthDeletePersistentAuthCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreAuthentication* m_Authentication = m_Data->AuthenticationObject;
		check(m_Authentication);

		if (m_Authentication)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Authentication->OnAuthDeletePersistentAuthCallback.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreAuthentication::Internal_OnAuthVerifyUserAuthCallback(const EOS_Auth_VerifyUserAuthCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FAuthVerifyUserAuthCallback* m_Data = static_cast<FAuthVerifyUserAuthCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreAuthentication* m_Authentication = m_Data->AuthenticationObject;
		check(m_Authentication);

		if (m_Authentication)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Authentication->OnAuthVerifyUserAuthCallback.Broadcast(*data);
		}
		delete m_Data;
	}
}