/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlineFriendsInterfaceEOSCore.h"
#include "OnlineSubsystemEOSCore.h"
#include "Network/EOSCoreUniqueNetId.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
#include "OnlineSubsystemEOSCoreLogging.h"
#include "EOSPlatform.h"

FOnlineFriendsEOSCore::FOnlineFriendsEOSCore(FOnlineSubsystemEOSCore* subsystem)
	: Subsystem(subsystem)
{}

FOnlineFriendsEOSCore::~FOnlineFriendsEOSCore()
{
}

struct FReadFriendsList
{
	IOnlineFriendsPtr FriendsInterface;
	int32 LocalUserNum;
	FOnReadFriendsListComplete Delegate;
	EFriendsLists::Type FriendsListFilter;

	FReadFriendsList(IOnlineFriendsPtr friendsInterface, int32 localUserNum, FOnReadFriendsListComplete delegate, FString friendsListFilter)
		: FriendsInterface(friendsInterface), LocalUserNum(localUserNum), Delegate(delegate)
	{
		if (friendsListFilter.Equals(EFriendsLists::ToString(EFriendsLists::OnlinePlayers), ESearchCase::IgnoreCase))
		{
			FriendsListFilter = EFriendsLists::OnlinePlayers;
		}
		else if (friendsListFilter.Equals(EFriendsLists::ToString(EFriendsLists::InGamePlayers), ESearchCase::IgnoreCase))
		{
			FriendsListFilter = EFriendsLists::InGamePlayers;
		}
		else if (friendsListFilter.Equals(EFriendsLists::ToString(EFriendsLists::InGameAndSessionPlayers), ESearchCase::IgnoreCase))
		{
			FriendsListFilter = EFriendsLists::InGameAndSessionPlayers;
		}
		else
		{
			FriendsListFilter = EFriendsLists::Default;
		}
	}
};

bool FOnlineFriendsEOSCore::ReadFriendsList(int32 LocalUserNum, const FString& ListName, const FOnReadFriendsListComplete& Delegate /*= FOnReadFriendsListComplete()*/)
{
	LogVerbose("");

	if (FPlatform::IsInitialized()) 
	{
		FString ErrorStr;

		if (LocalUserNum < MAX_LOCAL_PLAYERS && Subsystem != NULL && FPlatform::IsLoggedIn(LocalUserNum))
		{
			EOS_Friends_QueryFriendsOptions m_Options = { EOS_FRIENDS_QUERYFRIENDS_API_LATEST, FPlatform::GetLocalAccountId(LocalUserNum)};
			FReadFriendsList* m_Data = new FReadFriendsList({Subsystem->GetFriendsInterface(), LocalUserNum, Delegate, ListName});
			EOS_Friends_QueryFriends(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, OnQueryFriendsCallbackInfo);
		}
		else
		{
			ErrorStr = FString::Printf(TEXT("No valid LocalUserNum=%d"), LocalUserNum);
		}
		if (!ErrorStr.IsEmpty())
		{
			Delegate.ExecuteIfBound(LocalUserNum, false, ListName, ErrorStr);

			return false;
		}

		return true;
	}

	return false;
}

bool FOnlineFriendsEOSCore::DeleteFriendsList(int32 LocalUserNum, const FString& ListName, const FOnDeleteFriendsListComplete& Delegate /*= FOnDeleteFriendsListComplete()*/)
{
	LogVerbose("Not supported");

	return false;
}

bool FOnlineFriendsEOSCore::SendInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnSendInviteComplete& Delegate /*= FOnSendInviteComplete()*/)
{
	LogVerbose("Not supported");

	return false;
}

bool FOnlineFriendsEOSCore::AcceptInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnAcceptInviteComplete& Delegate /*= FOnAcceptInviteComplete()*/)
{
	LogVerbose("Not supported");

	return false;
}

bool FOnlineFriendsEOSCore::RejectInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName)
{
	LogVerbose("Not implemented");

	return false;
}

bool FOnlineFriendsEOSCore::DeleteFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName)
{
	LogVerbose("Not implemented");

	return false;
}

bool FOnlineFriendsEOSCore::GetFriendsList(int32 LocalUserNum, const FString& ListName, TArray< TSharedRef<FOnlineFriend> >& OutFriends)
{
	LogVerbose("Not implemented");

	return false;
}

TSharedPtr<FOnlineFriend> FOnlineFriendsEOSCore::GetFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName)
{
	LogVerbose("Not implemented");

	return nullptr;
}

bool FOnlineFriendsEOSCore::IsFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName)
{
	LogVerbose("Not implemented");

	return false;
}

bool FOnlineFriendsEOSCore::QueryRecentPlayers(const FUniqueNetId& UserId, const FString& Namespace)
{
	LogVerbose("Not implemented");

	return false;
}

bool FOnlineFriendsEOSCore::GetRecentPlayers(const FUniqueNetId& UserId, const FString& Namespace, TArray< TSharedRef<FOnlineRecentPlayer> >& OutRecentPlayers)
{
	LogVerbose("Not implemented");

	return false;
}

void FOnlineFriendsEOSCore::DumpRecentPlayers() const
{
	LogVerbose("Not implemented");
}

bool FOnlineFriendsEOSCore::BlockPlayer(int32 LocalUserNum, const FUniqueNetId& PlayerId)
{
	LogVerbose("Not implemented");

	return false;
}

bool FOnlineFriendsEOSCore::UnblockPlayer(int32 LocalUserNum, const FUniqueNetId& PlayerId)
{
	LogVerbose("Not implemented");

	return false;
}

bool FOnlineFriendsEOSCore::QueryBlockedPlayers(const FUniqueNetId& UserId)
{
	LogVerbose("Not implemented");

	return false;
}

bool FOnlineFriendsEOSCore::GetBlockedPlayers(const FUniqueNetId& UserId, TArray< TSharedRef<FOnlineBlockedPlayer> >& OutBlockedPlayers)
{
	LogVerbose("Not implemented");

	return false;
}

void FOnlineFriendsEOSCore::DumpBlockedPlayers() const
{
	LogVerbose("Not implemented");
}

#if ENGINE_MINOR_VERSION > 23
void FOnlineFriendsEOSCore::SetFriendAlias(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FString& Alias, const FOnSetFriendAliasComplete& Delegate /*= FOnSetFriendAliasComplete()*/)
{
	LogVerbose("Not implemented");
}
#endif

#if ENGINE_MINOR_VERSION > 24
void FOnlineFriendsEOSCore::DeleteFriendAlias(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnDeleteFriendAliasComplete& Delegate /*= FOnDeleteFriendAliasComplete()*/)
{
	LogVerbose("Not implemented");
}

#endif

void FOnlineFriendsEOSCore::OnQueryFriendsCallbackInfo(const EOS_Friends_QueryFriendsCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FReadFriendsList* m_Data = static_cast<FReadFriendsList*>(data->ClientData);
	check(m_Data);

	if (data->ResultCode == EOS_EResult::EOS_Success) 
	{
		m_Data->Delegate.ExecuteIfBound(m_Data->LocalUserNum, true, EFriendsLists::ToString(m_Data->FriendsListFilter), FString());
	}
	else {
		m_Data->Delegate.ExecuteIfBound(m_Data->LocalUserNum, false, FString(), FString());
	}
}

void FOnlineFriendsEOSCore::OnSendInviteCallbackInfo(const EOS_Friends_SendInviteCallbackInfo* data)
{

}
