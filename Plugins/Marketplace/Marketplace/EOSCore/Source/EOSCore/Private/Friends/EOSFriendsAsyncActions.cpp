/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Friends/EOSFriendsAsyncActions.h"
#include "Friends/EOSFriends.h"
#include "Core/EOSCorePluginPrivatePCH.h" 
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCoreLogging.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreFriendsQueryFriends
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreFriendsQueryFriends* UEOSCoreFriendsQueryFriends::EOSFriendsQueryFriendsAsync(UObject* WorldContextObject, FEOSFriendsQueryFriendsOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreFriendsQueryFriends>();
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

void UEOSCoreFriendsQueryFriends::Activate()
{
	Super::Activate();
	UCoreFriends::GetFriends()->EOSFriendsQueryFriends(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreFriendsSendInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreFriendsSendInvite* UEOSCoreFriendsSendInvite::EOSFriendsSendInviteAsync(UObject* WorldContextObject, FEOSFriendsSendInviteOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreFriendsSendInvite>();
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

void UEOSCoreFriendsSendInvite::Activate()
{
	Super::Activate();
	UCoreFriends::GetFriends()->EOSFriendsSendInvite(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreFriendsAcceptInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreFriendsAcceptInvite* UEOSCoreFriendsAcceptInvite::EOSFriendsAcceptInviteAsync(UObject* WorldContextObject, FEOSFriendsAcceptInviteOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreFriendsAcceptInvite>();
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

void UEOSCoreFriendsAcceptInvite::Activate()
{
	Super::Activate();
	UCoreFriends::GetFriends()->EOSFriendsAcceptInvite(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreFriendsRejectInvite
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreFriendsRejectInvite* UEOSCoreFriendsRejectInvite::EOSFriendsRejectInviteAsync(UObject* WorldContextObject, FEOSFriendsRejectInviteOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreFriendsRejectInvite>();
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

void UEOSCoreFriendsRejectInvite::Activate()
{
	Super::Activate();
	UCoreFriends::GetFriends()->EOSFriendsRejectInvite(Options, Callback);
}
