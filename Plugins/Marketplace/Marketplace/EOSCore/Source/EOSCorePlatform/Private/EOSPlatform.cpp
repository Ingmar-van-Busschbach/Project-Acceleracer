/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "EOSPlatform.h"
#include "EOSCorePlatformPCH.h"
#include "EOSCorePlatformModule.h"
#include "EOSCorePlatformLogging.h"

#if PLATFORM_ANDROID
#include "Android/eos_android.h"
#include "Misc/App.h"
#endif

EOS_HPlatform FPlatform::PlatformHandle = nullptr;
bool FPlatform::bIsInitialized = false;
std::string FPlatform::CacheDirStr;
FOnEOSCoreInitialized FPlatform::OnEOSCoreInitialized;

bool FPlatform::Create(std::string productId, std::string sandboxId, std::string deploymentId, std::string clientId, std::string clientSecret, std::string encryptionKey)
{
	LogVerbose("");

	FString m_AbsoluteDir = IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*FPaths::ProjectIntermediateDir());
#if PLATFORM_ANDROID
	extern FString GFilePathBase;
	m_AbsoluteDir = GFilePathBase + FString("/UE4Game/") + FApp::GetProjectName() + "/" + FApp::GetProjectName() + FString("/");
#endif

	FString m_LoadedCacheDir;

	GConfig->GetString(TEXT("EOSCORE"), TEXT("CacheDir"), m_LoadedCacheDir, GEngineIni);

	if (m_LoadedCacheDir.Len() > 0)
	{
		m_AbsoluteDir = m_LoadedCacheDir;
	}
	
	FString m_CacheDir = FString::Printf(TEXT("%s%s"), *m_AbsoluteDir, TEXT("eoscore_cache/"));

	if (PlatformHandle != nullptr)
	{
		LogError("Plugin is already Initialized!");
		return false;
	}

	if (productId.length() == 0)
	{
		LogError("Missing setting: Product ID");
		return false;
	}

	if (sandboxId.length() == 0)
	{
		LogError("Missing setting: SandboxID ID");
		return false;
	}

	if (deploymentId.length() == 0)
	{
		LogError("Missing setting: DeploymentID ID");
		return false;
	}

	if (clientId.length() == 0)
	{
		LogError("Missing setting: ClientID ID");
		return false;
	}

	if (clientSecret.length() == 0)
	{
		LogError("Missing setting: ClientSecret");
		return false;
	}

	uint64_t m_Flags = IsRunningGame() ? 0 : EOS_PF_LOADING_IN_EDITOR;

	CacheDirStr = TCHAR_TO_UTF8(*m_CacheDir);

	EOS_Platform_ClientCredentials m_ClientCredentials = { clientId.c_str(), clientSecret.c_str() };
	EOS_Platform_Options PlatformOptions = { EOS_PLATFORM_OPTIONS_API_LATEST, nullptr, productId.c_str(), sandboxId.c_str(), m_ClientCredentials, IsRunningDedicatedServer(), encryptionKey.c_str(), nullptr, nullptr, deploymentId.c_str(), m_Flags, CacheDirStr.c_str() };
	
	PlatformHandle = EOS_Platform_Create(&PlatformOptions);
	
	if (PlatformHandle)
	{
		LogDebug("Platform Version [%s] Initialized!", *FEOSCorePlatformModule::EOSCorePluginVersion);
		OnEOSCoreInitialized.Broadcast();

		bIsInitialized = true;
		return true;
	}
	else
	{
		LogDebug("Platform Version [%s] Failed to Initialize!", *FEOSCorePlatformModule::EOSCorePluginVersion);

		return false;
	}
}

void FPlatform::Release()
{
	EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
	FCStringAnsi::Strncpy(m_SocketId.SocketName, "EOSCORE", 8);

	EOS_P2P_CloseConnectionsOptions m_Options = { EOS_P2P_CLOSECONNECTIONS_API_LATEST, FPlatform::GetLocalProductId(), &m_SocketId };
	EOS_EResult m_CloseConnectionsResult = EOS_P2P_CloseConnections(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options);

	LogVerbose("Result: %s", *FString(EOS_EResult_ToString(m_CloseConnectionsResult)));

	bIsInitialized = false;
	PlatformHandle = nullptr;
}

void FPlatform::Update()
{
	if (PlatformHandle)
	{
		EOS_Platform_Tick(PlatformHandle);
	}
}

bool FPlatform::IsLoggedIn(int32 userId)
{
	EOS_ProductUserId m_ProductUserId = GetLocalProductId(userId);
	EOS_ELoginStatus m_Status = EOS_Connect_GetLoginStatus(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), m_ProductUserId);

	return m_Status == EOS_ELoginStatus::EOS_LS_LoggedIn || m_Status == EOS_ELoginStatus::EOS_LS_UsingLocalProfile;
}

EOS_EpicAccountId FPlatform::GetLocalAccountId(int32 userId)
{
	return EOS_Auth_GetLoggedInAccountByIndex(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), userId);
}

FString FPlatform::GetLocalAccountIdString(int32 userId /*= 0*/)
{
	if (EOS_Auth_GetLoggedInAccountsCount(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle())) > 0)
	{
		EOS_EpicAccountId m_AccountId = EOS_Auth_GetLoggedInAccountByIndex(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), userId);

		char m_Buffer[EOS_EPICACCOUNTID_MAX_LENGTH+1];
		int32 length = EOS_EPICACCOUNTID_MAX_LENGTH+1;
		EOS_EpicAccountId_ToString(m_AccountId, m_Buffer, &length);

		return FString(m_Buffer);
	}

	return "";
}

EOS_ProductUserId FPlatform::GetLocalProductId(int32 userId)
{
	return EOS_Connect_GetLoggedInUserByIndex(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), userId);
}

FString FPlatform::GetLocalProductIdString(int32 userId /*= 0*/)
{
	if (EOS_Connect_GetLoggedInUsersCount(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle())) > 0)
	{
		EOS_ProductUserId m_AccountId = EOS_Connect_GetLoggedInUserByIndex(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), userId);
	
		char m_Buffer[EOS_PRODUCTUSERID_MAX_LENGTH];
		int32 length = EOS_PRODUCTUSERID_MAX_LENGTH;
		EOS_ProductUserId_ToString(m_AccountId, m_Buffer, &length);

		return FString(m_Buffer);
	}

	return "";
}
