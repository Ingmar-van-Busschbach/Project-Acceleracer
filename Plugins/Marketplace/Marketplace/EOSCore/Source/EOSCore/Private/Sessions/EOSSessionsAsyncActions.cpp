/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Sessions/EOSSessionsAsyncActions.h"
#include "Sessions/EOSSessions.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCoreLogging.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsUpdateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsUpdateSession* UEOSCoreSessionsUpdateSession::EOSSessionsUpdateSessionAsync(UObject* WorldContextObject, FEOSSessionsUpdateSessionOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsUpdateSession>();
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

void UEOSCoreSessionsUpdateSession::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsUpdateSession(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsDestroySession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsDestroySession* UEOSCoreSessionsDestroySession::EOSSessionsDestroySessionAsync(UObject* WorldContextObject, FEOSSessionsDestroySessionOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsDestroySession>();
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

void UEOSCoreSessionsDestroySession::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsDestroySession(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsJoinSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsJoinSession* UEOSCoreSessionsJoinSession::EOSSessionsJoinSessionAsync(UObject* WorldContextObject, FEOSSessionsJoinSessionOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsJoinSession>();
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

void UEOSCoreSessionsJoinSession::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsJoinSession(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsStartSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsStartSession* UEOSCoreSessionsStartSession::EOSSessionsStartSessionAsync(UObject* WorldContextObject, FEOSSessionsStartSessionOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsStartSession>();
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

void UEOSCoreSessionsStartSession::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsStartSession(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsEndSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsEndSession* UEOSCoreSessionsEndSession::EOSSessionsEndSessionAsync(UObject* WorldContextObject, FEOSSessionsEndSessionOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsEndSession>();
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

void UEOSCoreSessionsEndSession::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsEndSession(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsRegisterPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsRegisterPlayers* UEOSCoreSessionsRegisterPlayers::EOSSessionsRegisterPlayersAsync(UObject* WorldContextObject, FEOSSessionsRegisterPlayersOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsRegisterPlayers>();
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

void UEOSCoreSessionsRegisterPlayers::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsRegisterPlayers(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsUnregisterPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsUnregisterPlayers* UEOSCoreSessionsUnregisterPlayers::EOSSessionsUnregisterPlayersAsync(UObject* WorldContextObject, FEOSSessionsUnregisterPlayersOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsUnregisterPlayers>();
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

void UEOSCoreSessionsUnregisterPlayers::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsUnregisterPlayers(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsSendInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsSendInvite* UEOSCoreSessionsSendInvite::EOSSessionsSendInviteAsync(UObject* WorldContextObject, FEOSSessionsSendInviteOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsSendInvite>();
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

void UEOSCoreSessionsSendInvite::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsSendInvite(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsRejectInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsRejectInvite* UEOSCoreSessionsRejectInvite::EOSSessionsRejectInviteAsync(UObject* WorldContextObject, FEOSSessionsRejectInviteOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsRejectInvite>();
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

void UEOSCoreSessionsRejectInvite::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsRejectInvite(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsQueryInvites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsQueryInvites* UEOSCoreSessionsQueryInvites::EOSSessionsQueryInvitesAsync(UObject* WorldContextObject, FEOSSessionsQueryInvitesOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsQueryInvites>();
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

void UEOSCoreSessionsQueryInvites::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionsQueryInvites(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreSessionsSearchFind
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreSessionsSearchFind* UEOSCoreSessionsSearchFind::EOSSessionSearchFindAsync(UObject* WorldContextObject, FEOSHSessionSearch searchHandle, FEOSSessionSearchFindOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreSessionsSearchFind>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;
		m_AsyncObject->SearchHandle = searchHandle;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreSessionsSearchFind::Activate()
{
	Super::Activate();
	UCoreSessions::GetSessions()->EOSSessionSearchFind(SearchHandle, Options, Callback);
}
