/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Auth/EOSAuthAsyncActions.h"
#include "Auth/EOSAuthentication.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCoreLogging.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthLogin
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreAuthLogin* UEOSCoreAuthLogin::EOSAuthLoginAsync(UObject* WorldContextObject, FEOSAuthLoginOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreAuthLogin>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreAuthLogin::Activate()
{
	Super::Activate();
	UCoreAuthentication::GetAuthentication()->EOSAuthLogin(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthLogout
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreAuthLogout* UEOSCoreAuthLogout::EOSAuthLogoutAsync(UObject* WorldContextObject, FEOSAuthLogoutOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreAuthLogout>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreAuthLogout::Activate()
{
	Super::Activate();
	UCoreAuthentication::GetAuthentication()->EOSAuthLogout(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthLinkAccount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreAuthLinkAccount* UEOSCoreAuthLinkAccount::EOSAuthLinkAccount(UObject* WorldContextObject, FEOSAuthLinkAccountOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreAuthLinkAccount>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreAuthLinkAccount::Activate()
{
	Super::Activate();
	UCoreAuthentication::GetAuthentication()->EOSAuthLinkAccount(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthDeletePersistentAuth
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreAuthDeletePersistentAuth* UEOSCoreAuthDeletePersistentAuth::EOSAuthDeletePersistentAuthAsync(UObject* WorldContextObject, const FEOSAuthDeletePersistentAuthOptions& options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreAuthDeletePersistentAuth>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreAuthDeletePersistentAuth::Activate()
{
	Super::Activate();
	UCoreAuthentication::GetAuthentication()->EOSAuthDeletePersistentAuth(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAuthVerifyUserAuth
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreAuthVerifyUserAuth* UEOSCoreAuthVerifyUserAuth::EOSAuthVerifyUserAuthAsync(UObject* WorldContextObject, FEOSAuthVerifyUserAuthOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreAuthVerifyUserAuth>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreAuthVerifyUserAuth::Activate()
{
	Super::Activate();
	UCoreAuthentication::GetAuthentication()->EOSAuthVerifyUserAuth(Options, Callback);
}
