/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlineIdentityInterfaceEOSCore.h"
#include "Network/EOSCoreUniqueNetId.h"
#include "EOSPlatform.h"
#include "OnlineSubsystemEOSCore.h"
#include "Utilities/EOSSubsystemHelpers.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
#include "OnlineSubsystemEOSCoreLogging.h"

static TArray<TSharedPtr<FUniqueNetIdEOSCore>> UserAccounts;
FDelegateHandle	OnLoginCompleteDelegateHandle;
FDelegateHandle	OnLoginStatusChangedDelegateHandle;

FOnlineIdentityEOSCore::FOnlineIdentityEOSCore(FOnlineSubsystemEOSCore* subsystem)
	: Subsystem(subsystem)
	, bInitialized(false)
{

	OnLoginCompleteDelegateHandle = AddOnLoginCompleteDelegate_Handle(0, FOnLoginCompleteDelegate::CreateLambda([this](int32 LoginLocalUserNum, bool bLoginWasSuccessful, const FUniqueNetId& LoginUserId, const FString& LoginError)
		{
			LogVerbose("%s", *LoginUserId.ToString());

			if (bLoginWasSuccessful)
			{
				if (!UserAccounts.IsValidIndex(LoginLocalUserNum))
				{
					UserAccounts.Add(MakeShared<FUniqueNetIdEOSCore>(LoginUserId.ToString()));
				}
				else
				{
					UserAccounts[LoginLocalUserNum]->UniqueNetIdStr = LoginUserId.ToString();
				}
			}
		}));
}

FOnlineIdentityEOSCore::~FOnlineIdentityEOSCore()
{
	ClearOnLoginCompleteDelegate_Handle(0, OnLoginCompleteDelegateHandle);

	EOS_Connect_RemoveNotifyLoginStatusChanged(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), LoginStatusChangedId);
	EOS_Connect_RemoveNotifyAuthExpiration(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), AuthExpirationId);
}

void FOnlineIdentityEOSCore::Tick(float deltaTime)
{
	// wait for EOS sdk to initialize

	if (!bInitialized)
	{
		if (FPlatform::IsInitialized())
		{
			EOS_Connect_AddNotifyAuthExpirationOptions m_AuthExpirationOptions = { EOS_CONNECT_ADDNOTIFYAUTHEXPIRATION_API_LATEST };
			AuthExpirationId = EOS_Connect_AddNotifyAuthExpiration(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_AuthExpirationOptions, this, OnAuthExpiration);

			EOS_Connect_AddNotifyLoginStatusChangedOptions m_LoginStatusChangedOptions = { EOS_CONNECT_ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST };
			LoginStatusChangedId = EOS_Connect_AddNotifyLoginStatusChanged(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_LoginStatusChangedOptions, this, OnLoginStatusChanged);

			bInitialized = true;
		}
	}
}

bool FOnlineIdentityEOSCore::Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials)
{
	LogVerbose("%s", *AccountCredentials.ToDebugString());

	bool bResult = false;

	// Try auto-logging in
	FAuthAutoLoginData* m_AutoLoginData = new FAuthAutoLoginData({ Subsystem->GetIdentityInterface(), LocalUserNum, AccountCredentials });

	// Login dedicated server using local account (device id)
	if (AccountCredentials.Type.Contains("DedicatedServer")) 
	{
		EOS_Connect_CreateDeviceIdOptions m_CreateDeviceOptions = { EOS_CONNECT_CREATEDEVICEID_API_LATEST, "DedicatedServer" };
		EOS_Connect_CreateDeviceId(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_CreateDeviceOptions, m_AutoLoginData, OnConnectCreateDeviceIdCallback);

		bResult = true;
	}
	else if (AccountCredentials.Type.Contains("DEVTOOL"))
	{
		// Login via devtool
		std::string m_Id = TCHAR_TO_UTF8(*AccountCredentials.Id);
		std::string m_Token = TCHAR_TO_UTF8(*AccountCredentials.Token);

		EOS_Auth_Credentials m_Credentials = { EOS_AUTH_CREDENTIALS_API_LATEST, m_Id.c_str(), m_Token.c_str(), EOS_ELoginCredentialType::EOS_LCT_Developer, nullptr, EOS_EExternalCredentialType::EOS_ECT_EPIC };
		EOS_Auth_LoginOptions m_Options = { EOS_AUTH_LOGIN_API_LATEST, &m_Credentials };

		EOS_Auth_Login(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, m_AutoLoginData, OnAuthAutoLoginCallback);

		bResult = true;
	}
	else if (AccountCredentials.Type.Contains("EXCHANGECODE")) 
	{
		// Login via exchange code
		std::string m_Token = TCHAR_TO_UTF8(*AccountCredentials.Token);

		EOS_Auth_Credentials m_Credentials = { EOS_AUTH_CREDENTIALS_API_LATEST, nullptr, m_Token.c_str(), EOS_ELoginCredentialType::EOS_LCT_ExchangeCode, nullptr, EOS_EExternalCredentialType::EOS_ECT_EPIC };
		EOS_Auth_LoginOptions m_Options = { EOS_AUTH_LOGIN_API_LATEST, &m_Credentials };

		EOS_Auth_Login(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, m_AutoLoginData, OnAuthAutoLoginCallback);

		bResult = true;
	}
	else if (AccountCredentials.Type.Contains("PASSWORD"))
	{
		// Login via password
		std::string m_Id = TCHAR_TO_UTF8(*AccountCredentials.Id);
		std::string m_Token = TCHAR_TO_UTF8(*AccountCredentials.Token);

		EOS_Auth_Credentials m_Credentials = { EOS_AUTH_CREDENTIALS_API_LATEST, m_Id.c_str(), m_Token.c_str(), EOS_ELoginCredentialType::EOS_LCT_Password, nullptr, EOS_EExternalCredentialType::EOS_ECT_EPIC };
		EOS_Auth_LoginOptions m_Options = { EOS_AUTH_LOGIN_API_LATEST, &m_Credentials };

		EOS_Auth_Login(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, m_AutoLoginData, OnAuthAutoLoginCallback);

		bResult = true;
	}
	else
	{
		// Try using existing cached credentials
		EOS_Auth_Credentials m_Credentials = { EOS_AUTH_CREDENTIALS_API_LATEST, nullptr, nullptr, EOS_ELoginCredentialType::EOS_LCT_PersistentAuth, nullptr, EOS_EExternalCredentialType::EOS_ECT_EPIC };
		EOS_Auth_LoginOptions m_Options = { EOS_AUTH_LOGIN_API_LATEST, &m_Credentials };

		FAuthAutoLoginData* m_Data = new FAuthAutoLoginData({ Subsystem->GetIdentityInterface(), LocalUserNum, AccountCredentials });
		EOS_Auth_Login(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, OnAuthAutoLoginCallback);

		bResult = true;
	}

	if (!bResult) 
	{
		delete m_AutoLoginData;
	}

	return bResult;
}

bool FOnlineIdentityEOSCore::Logout(int32 LocalUserNum)
{
	LogVerbose("");

	FString m_ErrorStr;

	EOS_EpicAccountId m_PlayerAccountId = EOS_Auth_GetLoggedInAccountByIndex(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), LocalUserNum);

	if (EOS_EpicAccountId_IsValid(m_PlayerAccountId))
	{
		EOS_Auth_LogoutOptions m_LogoutOptions = { EOS_AUTH_LOGOUT_API_LATEST, m_PlayerAccountId };
		EOS_Auth_Logout(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_LogoutOptions, this, OnLogoutComplete);
	}
	else
	{
		UE_LOG_ONLINE_IDENTITY(Display, TEXT("[FOnlineIdentityEOSCore::Logout] Not logged in"));
	}

	if (!m_ErrorStr.IsEmpty())
	{
		UE_LOG_ONLINE_IDENTITY(Warning, TEXT("%s"), *m_ErrorStr);

		TriggerOnLogoutCompleteDelegates(LocalUserNum, false);
	}

	return m_ErrorStr.IsEmpty();
}

bool FOnlineIdentityEOSCore::AutoLogin(int32 LocalUserNum)
{
	LogVerbose("");

	bool bDisableServerAutoLogin = false;
	GConfig->GetBool(TEXT("EOSCORE"), TEXT("bDisableServerAutoLogin"), bDisableServerAutoLogin, GEngineIni);

	if (bDisableServerAutoLogin) 
	{
		return false;
	}

	const bool bIsDedicatedServer = IsRunningDedicatedServer();

	FOnlineAccountCredentials m_Credentials;

	FParse::Value(FCommandLine::Get(), TEXT("AUTH_LOGIN="), m_Credentials.Id);
	FParse::Value(FCommandLine::Get(), TEXT("AUTH_PASSWORD="), m_Credentials.Token);
	FParse::Value(FCommandLine::Get(), TEXT("AUTH_TYPE="), m_Credentials.Type);

	if (IsRunningDedicatedServer() && m_Credentials.Type.Len() == 0) 
	{
		m_Credentials.Type = "DedicatedServer";
	}

	return Login(LocalUserNum, m_Credentials);
}

TSharedPtr<FUserOnlineAccount> FOnlineIdentityEOSCore::GetUserAccount(const FUniqueNetId& UserId) const
{
	LogVeryVerbose("");

	return nullptr;
}

TArray<TSharedPtr<FUserOnlineAccount> > FOnlineIdentityEOSCore::GetAllUserAccounts() const
{
	LogVeryVerbose("");

	TArray<TSharedPtr<FUserOnlineAccount>> m_Accounts;

	return m_Accounts;
}

TSharedPtr<const FUniqueNetId> FOnlineIdentityEOSCore::GetUniquePlayerId(int32 LocalUserNum) const
{
	LogVeryVerbose("");

	if (UserAccounts.IsValidIndex(LocalUserNum))
	{
		return UserAccounts[LocalUserNum];
	}
	else
	{
		EOS_ProductUserId m_ProductUserId = EOS_Connect_GetLoggedInUserByIndex(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), LocalUserNum);
		FString m_ProductId;

		if (EOS_ProductUserId_IsValid(m_ProductUserId))
		{
			EOSSubsystemHelpers::ProductIdToString(m_ProductUserId, m_ProductId);
		}

		TSharedPtr<FUniqueNetIdEOSCore> m_PlayerNetId = MakeShared<FUniqueNetIdEOSCore>(m_ProductId);

		UserAccounts.Add(m_PlayerNetId);

		if (LocalUserNum < MAX_LOCAL_PLAYERS && FPlatform::GetPlatformHandle() != NULL)
		{
			return m_PlayerNetId;
		}
	}

	return nullptr;
}

TSharedPtr<const FUniqueNetId> FOnlineIdentityEOSCore::CreateUniquePlayerId(uint8* Bytes, int32 Size)
{
	LogVerbose("");

	if (Bytes && Size > 0)
	{
		return CreateUniquePlayerId(FString(Size, (TCHAR*)Bytes));
	}

	return nullptr;
}

TSharedPtr<const FUniqueNetId> FOnlineIdentityEOSCore::CreateUniquePlayerId(const FString& Str)
{
	LogVerbose("");

	for (auto& m_Element : UserAccounts)
		if (m_Element->UniqueNetIdStr == Str)
			return m_Element;

	TSharedPtr<FUniqueNetIdEOSCore> m_PlayerNetId = MakeShareable(new FUniqueNetIdEOSCore(Str));

	UserAccounts.Add(m_PlayerNetId);

	return m_PlayerNetId;
}

ELoginStatus::Type FOnlineIdentityEOSCore::GetLoginStatus(int32 LocalUserNum) const
{
	LogVeryVerbose("");

	TSharedPtr<const FUniqueNetId> m_NetId = GetUniquePlayerId(LocalUserNum);

	if (m_NetId.IsValid() && LocalUserNum < MAX_LOCAL_PLAYERS && FPlatform::GetPlatformHandle() != NULL)
	{
		return GetLoginStatus(*m_NetId);
	}

	return ELoginStatus::NotLoggedIn;
}

ELoginStatus::Type FOnlineIdentityEOSCore::GetLoginStatus(const FUniqueNetId& UserId) const
{
	LogVeryVerbose("");

	FUniqueNetIdEOSCore m_NetId = UserId;

	if (m_NetId.IsValid())
	{
		EOS_ELoginStatus m_Status = EOS_Connect_GetLoginStatus(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), m_NetId.ToProductUserId());

		switch (m_Status)
		{
			case EOS_ELoginStatus::EOS_LS_NotLoggedIn:
				return ELoginStatus::NotLoggedIn;
			case EOS_ELoginStatus::EOS_LS_UsingLocalProfile:
				return ELoginStatus::UsingLocalProfile;
			case EOS_ELoginStatus::EOS_LS_LoggedIn:
				return ELoginStatus::LoggedIn;
		}
	}

	return ELoginStatus::NotLoggedIn;
}

FString FOnlineIdentityEOSCore::GetPlayerNickname(int32 LocalUserNum) const
{
	LogVeryVerbose("");

	TSharedPtr<const FUniqueNetId> m_NetId = GetUniquePlayerId(LocalUserNum);

	if (m_NetId.IsValid())
	{
		return GetPlayerNickname(*m_NetId);
	}

	return "";
}

FString FOnlineIdentityEOSCore::GetPlayerNickname(const FUniqueNetId& UserId) const
{
	LogVeryVerbose("");

	TSharedPtr<FUserOnlineAccount> m_Account = GetUserAccount(UserId);
	
	if (m_Account.IsValid())
	{
		return m_Account->GetDisplayName();
	}

	return "";
}

FString FOnlineIdentityEOSCore::GetAuthToken(int32 LocalUserNum) const
{
	LogVeryVerbose("");

	TSharedPtr<const FUniqueNetId> m_NetId = GetUniquePlayerId(LocalUserNum);

	if (m_NetId.IsValid())
	{
		TSharedPtr<FUserOnlineAccount> m_Account = GetUserAccount(*m_NetId);

		if (m_Account.IsValid())
		{
			return m_Account->GetAccessToken();
		}
	}
	return FString();
}

void FOnlineIdentityEOSCore::RevokeAuthToken(const FUniqueNetId& LocalUserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate)
{
	LogVerbose("");

	Delegate.ExecuteIfBound(LocalUserId, FOnlineError(FString(TEXT("RevokeAuthToken not implemented"))));
}

void FOnlineIdentityEOSCore::GetUserPrivilege(const FUniqueNetId& LocalUserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate)
{
	LogVeryVerbose("");

	Delegate.ExecuteIfBound(LocalUserId, Privilege, (uint32)EPrivilegeResults::NoFailures);
}

FPlatformUserId FOnlineIdentityEOSCore::GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const
{	
	LogVeryVerbose("");

	for (int32 i = 0; i < MAX_LOCAL_PLAYERS; ++i)
	{
		const TSharedPtr<const FUniqueNetId> m_NetId = GetUniquePlayerId(i);
		
		if (m_NetId.IsValid() && (*m_NetId == UniqueNetId))
		{
			return i;
		}
	}

	return PLATFORMUSERID_NONE;
}

FString FOnlineIdentityEOSCore::GetAuthType() const
{
	LogVeryVerbose("");

	return EOSCORE_SUBSYSTEM.ToString();
}

void FOnlineIdentityEOSCore::OnAuthLoginComplete(const EOS_Auth_LoginCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	if (data->ResultCode == EOS_EResult::EOS_Success)
	{
		EOS_EpicAccountId m_AccountId = EOSSubsystemHelpers::GetLoggedInAccountByIndex(0);

		if (EOS_EpicAccountId_IsValid(m_AccountId))
		{
			EOS_Auth_CopyUserAuthTokenOptions m_CopyUserAuthTokenOptions = { EOS_AUTH_COPYUSERAUTHTOKEN_API_LATEST };
			EOS_Auth_Token* m_UserAuthToken = nullptr;

			EOS_Auth_CopyUserAuthToken(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_CopyUserAuthTokenOptions, m_AccountId, &m_UserAuthToken);

			EOS_Connect_Credentials m_ConnectCrendentials = { EOS_CONNECT_CREDENTIALS_API_LATEST, m_UserAuthToken->AccessToken, EOS_EExternalCredentialType::EOS_ECT_EPIC };
			EOS_Connect_LoginOptions m_LoginOptions = { EOS_CONNECT_LOGIN_API_LATEST, &m_ConnectCrendentials, nullptr };

			EOS_Connect_Login(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_LoginOptions, data->ClientData, OnConnectLoginComplete);
			EOS_Auth_Token_Release(m_UserAuthToken);
		}
	}
}

void FOnlineIdentityEOSCore::OnConnectLoginComplete(const EOS_Connect_LoginCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FAuthAutoLoginData* m_Data = static_cast<FAuthAutoLoginData*>(data->ClientData);
	check(m_Data);

	IOnlineIdentityPtr m_IdentityInterface = m_Data->IdentityInterface;
	check(m_IdentityInterface);

	EOS_EResult m_Result = data->ResultCode;

	if (m_Result == EOS_EResult::EOS_Success)
	{
		FUniqueNetIdEOSCore m_NetUserId;

		FString	m_UserProductIdString;
		EOSSubsystemHelpers::ProductIdToString(data->LocalUserId, m_UserProductIdString);

		m_NetUserId = FUniqueNetIdEOSCore(m_UserProductIdString);

		UE_LOG_ONLINE_IDENTITY(Display, TEXT("Finished logging in user"));

		m_IdentityInterface->TriggerOnLoginCompleteDelegates(m_Data->LocalUserNum, true, m_NetUserId, TEXT(""));
		m_IdentityInterface->TriggerOnLoginStatusChangedDelegates(m_Data->LocalUserNum, ELoginStatus::NotLoggedIn, ELoginStatus::LoggedIn, m_NetUserId);
	}
	else
	{
		FString m_ErrorStr = FString::Printf(TEXT("[FOnlineIdentityEOSCore::OnConnectLoginComplete] Failed: %s"), *FString(EOS_EResult_ToString(m_Result)));

		if (!m_ErrorStr.IsEmpty())
		{
			UE_LOG_ONLINE_IDENTITY(Warning, TEXT("%s"), *m_ErrorStr);

			m_IdentityInterface->TriggerOnLoginCompleteDelegates(m_Data->LocalUserNum, false, FUniqueNetIdEOSCore(), m_ErrorStr);
		}
	}

	delete m_Data;
}

void FOnlineIdentityEOSCore::OnLoginStatusChanged(const EOS_Connect_LoginStatusChangedCallbackInfo* data)
{
	LogVerbose("");
	
	FOnlineIdentityEOSCore* m_IdentityInterface = static_cast<FOnlineIdentityEOSCore*>(data->ClientData);
	check(m_IdentityInterface);

	FString m_LocalUserStr;
	EOSSubsystemHelpers::ProductIdToString(data->LocalUserId, m_LocalUserStr);
	FUniqueNetIdEOSCore m_PlayerNetId = FUniqueNetIdEOSCore(m_LocalUserStr);
	int32 m_LocalUserNum = m_IdentityInterface->GetPlatformUserIdFromUniqueNetId(m_PlayerNetId);

	if (m_LocalUserNum == -1)
		m_LocalUserNum = 0;

	ELoginStatus::Type m_OldStatus = EOSSubsystemHelpers::GetLoginStatus(data->PreviousStatus);
	ELoginStatus::Type m_NewStatus = EOSSubsystemHelpers::GetLoginStatus(data->CurrentStatus);

	m_IdentityInterface->TriggerOnLoginStatusChangedDelegates(m_LocalUserNum, m_OldStatus, m_NewStatus, m_PlayerNetId);

	if (m_NewStatus == ELoginStatus::LoggedIn)
	{
		m_IdentityInterface->TriggerOnLoginCompleteDelegates(m_LocalUserNum, true, m_PlayerNetId, TEXT(""));
	}
}

void FOnlineIdentityEOSCore::OnLogoutComplete(const EOS_Auth_LogoutCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FOnlineIdentityEOSCore* m_IdentityInterface = static_cast<FOnlineIdentityEOSCore*>(data->ClientData);
	check(m_IdentityInterface);

	m_IdentityInterface->TriggerOnLogoutCompleteDelegates(0, true);
}

void FOnlineIdentityEOSCore::OnAuthExpiration(const EOS_Connect_AuthExpirationCallbackInfo* data)
{
	LogVerbose("");

	FOnlineIdentityEOSCore* m_IdentityInterface = static_cast<FOnlineIdentityEOSCore*>(data->ClientData);
	check(m_IdentityInterface);
}

void FOnlineIdentityEOSCore::OnAuthAutoLoginCallback(const EOS_Auth_LoginCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));
	
	FAuthAutoLoginData* m_Data = static_cast<FAuthAutoLoginData*>(data->ClientData);
	check(m_Data);

	IOnlineIdentityPtr m_IdentityInterface = m_Data->IdentityInterface;
	check(m_IdentityInterface);

	if (data->ResultCode == EOS_EResult::EOS_Success)
	{
		EOS_EpicAccountId m_AccountId = EOSSubsystemHelpers::GetLoggedInAccountByIndex(m_Data->LocalUserNum);

		if (EOS_EpicAccountId_IsValid(m_AccountId))
		{
			EOS_Auth_CopyUserAuthTokenOptions m_CopyUserAuthTokenOptions = { EOS_AUTH_COPYUSERAUTHTOKEN_API_LATEST };
			EOS_Auth_Token* m_UserAuthToken = nullptr;

			EOS_EResult m_CopyResult = EOS_Auth_CopyUserAuthToken(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), &m_CopyUserAuthTokenOptions, m_AccountId, &m_UserAuthToken);

			if (m_CopyResult == EOS_EResult::EOS_Success) 
			{
				EOS_Connect_Credentials m_ConnectCrendentials = { EOS_CONNECT_CREDENTIALS_API_LATEST, m_UserAuthToken->AccessToken, EOS_EExternalCredentialType::EOS_ECT_EPIC };
				EOS_Connect_LoginOptions m_LoginOptions = { EOS_CONNECT_LOGIN_API_LATEST, &m_ConnectCrendentials, nullptr };

				EOS_Connect_Login(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_LoginOptions, data->ClientData, OnConnectLoginComplete);
			}
			else 
			{
				LogVerbose("Copy User Auth Token Result: %s", *FString(EOS_EResult_ToString(m_CopyResult)));

				m_Data->IdentityInterface->Logout(m_Data->LocalUserNum);
			}
			
			EOS_Auth_Token_Release(m_UserAuthToken);
		}
	}
	else
	{
		m_IdentityInterface->TriggerOnLoginCompleteDelegates(m_Data->LocalUserNum, false, FUniqueNetIdEOSCore(), "No Auto-login credentials found");

		delete m_Data;
	}
}

void FOnlineIdentityEOSCore::OnConnectCreateDeviceIdCallback(const EOS_Connect_CreateDeviceIdCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FAuthAutoLoginData* m_Data = static_cast<FAuthAutoLoginData*>(data->ClientData);
	check(m_Data);

	IOnlineIdentityPtr m_IdentityInterface = m_Data->IdentityInterface;
	check(m_IdentityInterface);

	if (data->ResultCode == EOS_EResult::EOS_Success || data->ResultCode == EOS_EResult::EOS_DuplicateNotAllowed) 
	{
		EOS_Connect_Credentials m_Credentials = { EOS_CONNECT_CREDENTIALS_API_LATEST, nullptr, EOS_EExternalCredentialType::EOS_ECT_DEVICEID_ACCESS_TOKEN };
		EOS_Connect_UserLoginInfo m_UserLoginInfo = { EOS_CONNECT_USERLOGININFO_API_LATEST, "DedicatedServer" };
		EOS_Connect_LoginOptions m_Options = { EOS_CONNECT_LOGIN_API_LATEST, &m_Credentials, &m_UserLoginInfo };
		EOS_Connect_Login(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), &m_Options, data->ClientData, OnConnectLoginComplete);
	}
	else 
	{
		m_IdentityInterface->TriggerOnLoginCompleteDelegates(m_Data->LocalUserNum, false, FUniqueNetIdEOSCore(), "No Auto-login credentials found");
		delete m_Data;
	}
}