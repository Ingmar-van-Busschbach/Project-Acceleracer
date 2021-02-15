/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "EOSJoinSessionCallbackProxy.h"
#include "Utilities/EOSSubsystemHelpers.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/PlayerController.h"
#include "EOSCoreOnlinesubsystemTypes.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
/*

UEOSJoinSessionCallbackProxy::UEOSJoinSessionCallbackProxy()
	: Delegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCompleted))
{

}

UEOSJoinSessionCallbackProxy* UEOSJoinSessionCallbackProxy::JoinSessionFromInvite(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& inviteId)
{
	UEOSJoinSessionCallbackProxy* Proxy = NewObject<UEOSJoinSessionCallbackProxy>();
	Proxy->InviteId = inviteId;
	Proxy->PlayerControllerWeakPtr = PlayerController;
	return Proxy;
}

void UEOSJoinSessionCallbackProxy::Activate()
{
	bool bSuccess = false;
	TSharedPtr<const FUniqueNetId> UserID;
	IOnlineSessionPtr m_SessionInterface = Online::GetSessionInterface(EOSCORE_SUBSYSTEM);

	if (m_SessionInterface.IsValid())
	{
		if (APlayerState* PlayerState = (PlayerControllerWeakPtr != NULL) ? PlayerControllerWeakPtr->PlayerState : NULL)
		{
			UserID = PlayerState->UniqueId.GetUniqueNetId();
		}
	}

	if (UserID.IsValid())
	{
		FOnlineSessionSearchResult m_SearchResult;
		m_SearchResult.PingInMs = -1;

		EOS_HSessionDetails m_SessionDetailsHandle = EOSSubsystemHelpers::GetSessionHandleFromInviteId(TCHAR_TO_UTF8(*InviteId));

		if (m_SessionDetailsHandle)
		{
			EOS_SessionDetails_Info* m_SessionInfo = new EOS_SessionDetails_Info;
			EOS_SessionDetails_CopyInfoOptions m_CopyInfoOptions = { EOS_SESSIONDETAILS_COPYINFO_API_LATEST };

			EOS_EResult m_CopySessionDetailsResult = EOS_SessionDetails_CopyInfo(m_SessionDetailsHandle, &m_CopyInfoOptions, &m_SessionInfo);

			EOSSubsystemHelpers::UpdateSessionDetails(m_SessionDetailsHandle, &m_SearchResult.Session, m_SessionInfo);

			DelegateHandle = m_SessionInterface->AddOnJoinSessionCompleteDelegate_Handle(Delegate);

			m_SearchResult.Session.SessionSettings.Set("INVITE_ID", InviteId);
			m_SessionInterface->JoinSession(*UserID, NAME_GameSession, m_SearchResult);

			bSuccess = true;
		}
	}

	if (!bSuccess)
	{
		OnFailure.Broadcast();
	}
}

void UEOSJoinSessionCallbackProxy::OnCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	IOnlineSessionPtr m_SessionInterface = Online::GetSessionInterface(EOSCORE_SUBSYSTEM);

	if (m_SessionInterface.IsValid())
	{
		m_SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(DelegateHandle);

		if (Result == EOnJoinSessionCompleteResult::Success)
		{
			FString ConnectString;

			if (m_SessionInterface->GetResolvedConnectString(NAME_GameSession, ConnectString) && PlayerControllerWeakPtr.IsValid())
			{
				UE_LOG_ONLINE_SESSION(Log, TEXT("Join session: traveling to %s"), *ConnectString);
				PlayerControllerWeakPtr->ClientTravel(ConnectString, TRAVEL_Absolute);

				OnSuccess.Broadcast();
				return;
			}
		}
	}
}*/

/*
UEOSJoinSessionByIdCallbackProxy::UEOSJoinSessionByIdCallbackProxy()
	: Delegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCompleted))
{

}

UEOSJoinSessionByIdCallbackProxy* UEOSJoinSessionByIdCallbackProxy::JoinSessionById(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& sessionId)
{
	UEOSJoinSessionByIdCallbackProxy* Proxy = NewObject<UEOSJoinSessionByIdCallbackProxy>();
	Proxy->SessionId = sessionId;
	Proxy->PlayerControllerWeakPtr = PlayerController;
	return Proxy;
}

void UEOSJoinSessionByIdCallbackProxy::Activate()
{
	bool bSuccess = false;
	TSharedPtr<const FUniqueNetId> UserID;
	IOnlineSessionPtr m_SessionInterface = Online::GetSessionInterface(EOSCORE_SUBSYSTEM);

	if (m_SessionInterface.IsValid())
	{
		if (APlayerState* PlayerState = (PlayerControllerWeakPtr != NULL) ? PlayerControllerWeakPtr->PlayerState : NULL)
		{
			UserID = PlayerState->UniqueId.GetUniqueNetId();
		}
	}

	if (UserID.IsValid())
	{
		FOnlineSessionSearchResult m_SearchResult;
		m_SearchResult.PingInMs = -1;

		EOS_HSessionDetails m_SessionDetailsHandle = EOSSubsystemHelpers::GetSessionHandleFromInviteId(TCHAR_TO_UTF8(*InviteId));

		if (m_SessionDetailsHandle)
		{
			EOS_SessionDetails_Info* m_SessionInfo = new EOS_SessionDetails_Info;
			EOS_SessionDetails_CopyInfoOptions m_CopyInfoOptions = { EOS_SESSIONDETAILS_COPYINFO_API_LATEST };

			EOS_EResult m_CopySessionDetailsResult = EOS_SessionDetails_CopyInfo(m_SessionDetailsHandle, &m_CopyInfoOptions, &m_SessionInfo);

			EOSSubsystemHelpers::UpdateSessionDetails(m_SessionDetailsHandle, &m_SearchResult.Session, m_SessionInfo);

			DelegateHandle = m_SessionInterface->AddOnJoinSessionCompleteDelegate_Handle(Delegate);

			m_SearchResult.Session.SessionSettings.Set("INVITE_ID", InviteId);
			m_SessionInterface->JoinSession(*UserID, NAME_GameSession, m_SearchResult);

			bSuccess = true;
		}
	}

	if (!bSuccess)
	{
		OnFailure.Broadcast();
	}
}

void UEOSJoinSessionByIdCallbackProxy::OnCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	IOnlineSessionPtr m_SessionInterface = Online::GetSessionInterface(EOSCORE_SUBSYSTEM);

	if (m_SessionInterface.IsValid())
	{
		m_SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(DelegateHandle);

		if (Result == EOnJoinSessionCompleteResult::Success)
		{
			FString ConnectString;

			if (m_SessionInterface->GetResolvedConnectString(NAME_GameSession, ConnectString) && PlayerControllerWeakPtr.IsValid())
			{
				UE_LOG_ONLINE_SESSION(Log, TEXT("Join session: traveling to %s"), *ConnectString);
				PlayerControllerWeakPtr->ClientTravel(ConnectString, TRAVEL_Absolute);

				OnSuccess.Broadcast();
				return;
			}
		}
	}
}
*/
