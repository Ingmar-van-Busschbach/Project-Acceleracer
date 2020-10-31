/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Interfaces/OnlineSessionInterfaceEOSCore.h"
#include "Network/EOSCoreInternetAddr.h"
#include "EOSPlatform.h"
#include "OnlineSubsystemEOSCore.h"
#include "Utilities/EOSSubsystemHelpers.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
#include "OnlineSubsystemEOSCoreLogging.h"

EOS_HSessionDetails FOnlineSessionEOSCore::SessionDetailsHandle = NULL;
EOS_HSessionSearch FOnlineSessionEOSCore::SessionSearchHandle = NULL;

FOnlineSessionEOSCore::FOnlineSessionEOSCore(FOnlineSubsystemEOSCore* subsystem)
	: Subsystem(subsystem)
	, bInitialized(false)
{
}

FOnlineSessionEOSCore::~FOnlineSessionEOSCore()
{
	EOS_Sessions_RemoveNotifySessionInviteReceived(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), InviteReceivedId);
	EOS_Sessions_RemoveNotifySessionInviteAccepted(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), InviteAcceptedId);
}

void FOnlineSessionEOSCore::Tick(float DeltaTime)
{
	// wait for EOS sdk to initialize

	if (!bInitialized)
	{
		if (FPlatform::IsInitialized())
		{
			EOS_Sessions_AddNotifySessionInviteReceivedOptions m_SessionInviteReceivedOptions = { EOS_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVED_API_LATEST };
			InviteReceivedId = EOS_Sessions_AddNotifySessionInviteReceived(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_SessionInviteReceivedOptions, this, OnSessionInviteReceived);

			EOS_Sessions_AddNotifySessionInviteAcceptedOptions m_SessionInviteAcceptedOptions = { EOS_SESSIONS_ADDNOTIFYSESSIONINVITEACCEPTED_API_LATEST };
			InviteAcceptedId = EOS_Sessions_AddNotifySessionInviteAccepted(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_SessionInviteAcceptedOptions, this, OnSessionInviteAccepted);

			bInitialized = true;
		}
	}
}

TSharedPtr<const FUniqueNetId> FOnlineSessionEOSCore::CreateSessionIdFromString(const FString& SessionIdStr)
{
	if (!SessionIdStr.IsEmpty())
	{
		return MakeShared<FUniqueNetIdEOSCore>(SessionIdStr);
	}
	return nullptr;
}

bool FOnlineSessionEOSCore::CreateSession(int32 HostingPlayerNum, FName SessionName, const FOnlineSessionSettings& NewSessionSettings)
{
	LogVerbose("%s", *SessionName.ToString());

	IOnlineIdentityPtr m_IdentityInterface = Subsystem->GetIdentityInterface();
	check(m_IdentityInterface);

	TSharedPtr<const FUniqueNetId> m_NetId = m_IdentityInterface->GetUniquePlayerId(HostingPlayerNum);

	FString m_ErrorStr;
	uint32 m_CreateSessionResult = ONLINE_FAIL;

	if (m_NetId.IsValid())
	{
		FNamedOnlineSession* m_Session = GetNamedSession(SessionName);

		if (m_Session)
		{
			m_ErrorStr = FString::Printf(TEXT("Session already exists: %s"), *SessionName.ToString());
		}
		else
		{
			m_Session = AddNamedSession(SessionName, NewSessionSettings);

			m_Session->SessionState = EOnlineSessionState::Creating;
			m_Session->NumOpenPrivateConnections = NewSessionSettings.NumPrivateConnections;
			m_Session->NumOpenPublicConnections = NewSessionSettings.NumPublicConnections;

			m_Session->HostingPlayerNum = INDEX_NONE;
			m_Session->LocalOwnerId = m_NetId;
			m_Session->OwningUserId = m_NetId;
			m_Session->bHosting = true;

			FString m_CustomSessionName;
			NewSessionSettings.Get("SESSION_NAME", m_CustomSessionName);

			if (m_CustomSessionName.Len() == 0)
			{
				if (m_IdentityInterface.IsValid())
				{
					m_Session->OwningUserName = m_IdentityInterface->GetPlayerNickname(*m_NetId);
				}

				if (m_Session->OwningUserName.Len() == 0)
				{
					m_Session->OwningUserName = FString("EOSCORE DEFAULT");
				}

				m_CustomSessionName = m_Session->OwningUserName;
			}

			m_Session->SessionSettings.BuildUniqueId = GetBuildUniqueId();

			std::string m_SessionName = TCHAR_TO_UTF8(*SessionName.ToString());
			std::string m_BucketId = TCHAR_TO_UTF8(*SessionName.ToString());
			std::string m_RealSessionName = TCHAR_TO_UTF8(*m_CustomSessionName);
			std::string m_Address = TCHAR_TO_UTF8(*m_NetId->ToString());

			EOS_Sessions_CreateSessionModificationOptions m_CreateSessionOptions = { EOS_SESSIONS_CREATESESSIONMODIFICATION_API_LATEST, m_SessionName.c_str(), m_BucketId.c_str(), static_cast<uint32_t>(NewSessionSettings.NumPublicConnections), EOSSubsystemHelpers::GetLoggedInUserByIndex(HostingPlayerNum), m_Session->SessionSettings.bUsesPresence };

			EOS_HSessionModification m_ModificationHandle = NULL;
			EOS_EResult m_Result = EOS_Sessions_CreateSessionModification(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_CreateSessionOptions, &m_ModificationHandle);

			if (m_Result == EOS_EResult::EOS_Success)
			{
				EOS_Sessions_UpdateSessionOptions m_UpdateSessionOptions = { EOS_SESSIONS_UPDATESESSION_API_LATEST, m_ModificationHandle };

				{
					EOS_Sessions_AttributeData m_AttrData = EOSSubsystemHelpers::CreateSessionAttributeData("EOSCORE", true);
					EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
					EOS_SessionModification_AddAttribute(m_ModificationHandle, &m_AttributeOptions);
				}

				{
					EOS_Sessions_AttributeData m_AttrData = EOSSubsystemHelpers::CreateSessionAttributeData("ADDRESS", m_Address.c_str());
					EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
					EOS_SessionModification_AddAttribute(m_ModificationHandle, &m_AttributeOptions);
				}

				{
					EOS_Sessions_AttributeData m_AttrData = EOSSubsystemHelpers::CreateSessionAttributeData("SESSION_NAME", m_RealSessionName.c_str());
					EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
					EOS_SessionModification_AddAttribute(m_ModificationHandle, &m_AttributeOptions);
				}
				
				FSessionsUpdateSessionCallbackInfo* m_UpdateSessionInfo = new FSessionsUpdateSessionCallbackInfo(Subsystem, this, SessionName);

				EOSSubsystemHelpers::UpdateSessionModificationHandle(NewSessionSettings, m_ModificationHandle);

				EOS_Sessions_UpdateSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_UpdateSessionOptions, m_UpdateSessionInfo, OnCreateSessionComplete);

				m_CreateSessionResult = ONLINE_IO_PENDING;
			}
			else
			{
				LogVerbose("%s", *FString(EOS_EResult_ToString(m_Result)));

				RemoveNamedSession(SessionName);
			}

			EOS_SessionModification_Release(m_ModificationHandle);
		}
	}
	else
	{
		m_ErrorStr = TEXT("m_NetId invalid!");
	}

	if (m_CreateSessionResult != ONLINE_IO_PENDING)
	{
		if (m_CreateSessionResult == ONLINE_FAIL)
		{
			UE_LOG_ONLINE_SESSION(Warning, TEXT("%s"), *m_ErrorStr);
		}

		TriggerOnCreateSessionCompleteDelegates(SessionName, (m_CreateSessionResult == ONLINE_SUCCESS) ? true : false);
	}

	return m_CreateSessionResult == ONLINE_IO_PENDING || m_CreateSessionResult == ONLINE_SUCCESS;
}

bool FOnlineSessionEOSCore::CreateSession(const FUniqueNetId& HostingPlayerId, FName SessionName, const FOnlineSessionSettings& NewSessionSettings)
{
	// @todo: use proper HostingPlayerId
	return CreateSession(0, SessionName, NewSessionSettings);
}

bool FOnlineSessionEOSCore::StartSession(FName SessionName)
{
	LogVerbose("%s", *SessionName.ToString());

	FString m_ErrorStr;
	uint32 m_StartSessionResult = ONLINE_FAIL;

	std::string m_SessionName = TCHAR_TO_UTF8(*SessionName.ToString());

	if (FNamedOnlineSession* m_Session = GetNamedSession(SessionName))
	{
		EOnlineSessionState::Type m_SessionState = GetSessionState(SessionName);

		if (m_SessionState == EOnlineSessionState::Pending || m_SessionState == EOnlineSessionState::Ending)
		{
			m_SessionState = EOnlineSessionState::Starting;

			EOS_Sessions_StartSessionOptions m_StartSessionOptions = { EOS_SESSIONS_STARTSESSION_API_LATEST, m_SessionName.c_str() };
			FSessionsStartSessionCallbackInfo* m_StartSessionInfo = new FSessionsStartSessionCallbackInfo(Subsystem, this, SessionName);

			EOS_Sessions_StartSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_StartSessionOptions, m_StartSessionInfo, OnStartSessionComplete);

			m_StartSessionResult = ONLINE_IO_PENDING;
		}
		else
		{
			m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::StartSession] Session: %s is pending or ending."), *SessionName.ToString());
		}
	}
	else
	{
		m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::StartSession] Session %s not found"), *SessionName.ToString());
	}

	if (m_StartSessionResult != ONLINE_IO_PENDING)
	{
		if (!m_ErrorStr.IsEmpty())
		{
			UE_LOG_ONLINE_SESSION(Warning, TEXT("%s"), *m_ErrorStr);
		}

		TriggerOnCreateSessionCompleteDelegates(SessionName, (m_StartSessionResult == ONLINE_SUCCESS) ? true : false);
	}

	return m_StartSessionResult == ONLINE_IO_PENDING || m_StartSessionResult == ONLINE_SUCCESS;
}

bool FOnlineSessionEOSCore::UpdateSession(FName SessionName, FOnlineSessionSettings& UpdatedSessionSettings, bool bShouldRefreshOnlineData /*= true*/)
{
	LogVerbose("%s", *SessionName.ToString());

	FString m_ErrorStr;
	uint32 m_UpdateSessionResult = ONLINE_FAIL;

	std::string m_SessionName = TCHAR_TO_UTF8(*SessionName.ToString());

	if (FNamedOnlineSession* m_Session = GetNamedSession(SessionName))
	{
		m_Session->SessionSettings = UpdatedSessionSettings;

		if (bShouldRefreshOnlineData)
		{
			EOS_HSessionModification m_SessionModificationHandle = NULL;
			EOS_Sessions_UpdateSessionModificationOptions m_SessionModificationOptions = { EOS_SESSIONS_UPDATESESSIONMODIFICATION_API_LATEST, m_SessionName.c_str() };

			EOS_EResult m_Result = EOS_Sessions_UpdateSessionModification(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_SessionModificationOptions, &m_SessionModificationHandle);

			if (m_Result == EOS_EResult::EOS_Success)
			{
				EOS_Sessions_UpdateSessionOptions m_UpdateSessionOptions = { EOS_SESSIONS_UPDATESESSION_API_LATEST, m_SessionModificationHandle };

				EOSSubsystemHelpers::UpdateSessionModificationHandle(UpdatedSessionSettings, m_SessionModificationHandle);

				FSessionsUpdateSessionCallbackInfo* m_UpdateSessionInfo = new FSessionsUpdateSessionCallbackInfo(Subsystem, this, SessionName);

				EOS_Sessions_UpdateSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_UpdateSessionOptions, m_UpdateSessionInfo, OnCreateSessionComplete);
				EOS_SessionModification_Release(m_SessionModificationHandle);

				m_UpdateSessionResult = ONLINE_IO_PENDING;
			}
			else
			{
				m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::UpdateSession] Failed: %s"), *FString(EOS_EResult_ToString(m_Result)));
			}
		}
		else
		{
			m_UpdateSessionResult = ONLINE_SUCCESS;
		}
	}
	else
	{
		m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::UpdateSession] Invalid Session: %s"), *SessionName.ToString());
	}

	if (m_UpdateSessionResult != ONLINE_IO_PENDING)
	{
		if (!m_ErrorStr.IsEmpty())
		{
			if (!m_ErrorStr.IsEmpty())
			{
				UE_LOG_ONLINE_SESSION(Warning, TEXT("%s"), *m_ErrorStr);
			}
		}

		TriggerOnCreateSessionCompleteDelegates(SessionName, (m_UpdateSessionResult == ONLINE_SUCCESS) ? true : false);
	}
	return m_UpdateSessionResult == ONLINE_IO_PENDING || m_UpdateSessionResult == ONLINE_SUCCESS;
}

bool FOnlineSessionEOSCore::EndSession(FName SessionName)
{
	LogVerbose("%s", *SessionName.ToString());

	FString m_ErrorStr;
	uint32 m_EndSessionResult = ONLINE_FAIL;

	std::string m_SessionName = TCHAR_TO_UTF8(*SessionName.ToString());

	if (FNamedOnlineSession* m_Session = GetNamedSession(SessionName))
	{
		EOnlineSessionState::Type m_SessionState = GetSessionState(SessionName);

		if (m_SessionState == EOnlineSessionState::InProgress)
		{
			m_Session->SessionState = EOnlineSessionState::Ending;

			EOS_Sessions_EndSessionOptions m_EndSessionOptions = { EOS_SESSIONS_ENDSESSION_API_LATEST , m_SessionName.c_str() };
			FSessionsEndSessionCallbackInfo* m_EndSessionInfo = new FSessionsEndSessionCallbackInfo(Subsystem, this, SessionName);

			EOS_Sessions_EndSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_EndSessionOptions, m_EndSessionInfo, OnEndSessionComplete);

			m_EndSessionResult = ONLINE_IO_PENDING;
		}
		else
		{
			m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::EndSession] Session: %s not running"), *SessionName.ToString());
		}
	}
	else
	{
		m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::EndSession] Session: %s not found"), *SessionName.ToString());
	}

	if (m_EndSessionResult != ONLINE_IO_PENDING)
	{
		if (!m_ErrorStr.IsEmpty())
		{
			if (!m_ErrorStr.IsEmpty())
			{
				UE_LOG_ONLINE_SESSION(Warning, TEXT("%s"), *m_ErrorStr);
			}
		}

		TriggerOnCreateSessionCompleteDelegates(SessionName, (m_EndSessionResult == ONLINE_SUCCESS) ? true : false);
	}
	return m_EndSessionResult == ONLINE_IO_PENDING || m_EndSessionResult == ONLINE_SUCCESS;
}

bool FOnlineSessionEOSCore::DestroySession(FName SessionName, const FOnDestroySessionCompleteDelegate& CompletionDelegate /*= FOnDestroySessionCompleteDelegate()*/)
{
	LogVerbose("%s", *SessionName.ToString());

	FString m_ErrorStr;
	uint32 m_Result = ONLINE_FAIL;

	std::string m_SessionName = TCHAR_TO_UTF8(*SessionName.ToString());

	if (FNamedOnlineSession* m_Session = GetNamedSession(SessionName))
	{
		if (GetSessionState(SessionName) != EOnlineSessionState::Destroying)
		{
			m_Session->SessionState = EOnlineSessionState::Destroying;

			FSessionsDestroySessionCallbackInfo* m_DestroySessionInfo = new FSessionsDestroySessionCallbackInfo(Subsystem, this, SessionName);
			EOS_Sessions_DestroySessionOptions m_DestroySessionOptions = { EOS_SESSIONS_DESTROYSESSION_API_LATEST, m_SessionName.c_str() };

			EOS_Sessions_DestroySession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_DestroySessionOptions, m_DestroySessionInfo, OnDestroySessionComplete);

			m_Result = ONLINE_IO_PENDING;
		}
		else
		{
			m_ErrorStr = FString::Printf(TEXT("Cannot destroy session %s. Session is already being destroyed."), *SessionName.ToString());
		}
	}
	else
	{
		m_ErrorStr = FString::Printf(TEXT("Cannot find session %s"), *SessionName.ToString());
	}

	if (m_Result != ONLINE_IO_PENDING)
	{
		if (!m_ErrorStr.IsEmpty())
		{
			if (!m_ErrorStr.IsEmpty())
			{
				UE_LOG_ONLINE_SESSION(Warning, TEXT("%s"), *m_ErrorStr);
			}
		}

		TriggerOnCreateSessionCompleteDelegates(SessionName, (m_Result == ONLINE_SUCCESS) ? true : false);
	}

	return m_Result == ONLINE_IO_PENDING || m_Result == ONLINE_SUCCESS;
}

bool FOnlineSessionEOSCore::IsPlayerInSession(FName SessionName, const FUniqueNetId& UniqueId)
{
	LogVerbose("%s", *SessionName.ToString());

	if (FNamedOnlineSession* m_Session = GetNamedSession(SessionName))
	{
		bool bResult = m_Session->RegisteredPlayers.ContainsByPredicate([&UniqueId](TSharedRef<const FUniqueNetId> id) { return *id == UniqueId; });

		if (bResult)
		{
			UE_LOG_ONLINE_SESSION(Warning, TEXT("Player is already in Session: %s"), *SessionName.ToString());
			return bResult;
		}
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("Session: %s not found"), *SessionName.ToString());

		return false;
	}

	return false;
}

bool FOnlineSessionEOSCore::StartMatchmaking(const TArray< TSharedRef<const FUniqueNetId> >& LocalPlayers, FName SessionName, const FOnlineSessionSettings& NewSessionSettings, TSharedRef<FOnlineSessionSearch>& SearchSettings)
{
	LogVerbose("%s", *SessionName.ToString());

	return false;
}

bool FOnlineSessionEOSCore::CancelMatchmaking(int32 SearchingPlayerNum, FName SessionName)
{
	LogVerbose("%s", *SessionName.ToString());

	return false;
}

bool FOnlineSessionEOSCore::CancelMatchmaking(const FUniqueNetId& SearchingPlayerId, FName SessionName)
{
	LogVerbose("%s", *SessionName.ToString());

	return false;
}

static TSharedPtr<FOnlineSessionSearch> CurrentSearchSettings;

bool FOnlineSessionEOSCore::FindSessions(int32 SearchingPlayerNum, const TSharedRef<FOnlineSessionSearch>& SearchSettings)
{
	LogVerbose("");

	IOnlineIdentityPtr m_IdentityInterface = Subsystem->GetIdentityInterface();
	check(m_IdentityInterface);
	TSharedPtr<const FUniqueNetId> m_NetId = m_IdentityInterface->GetUniquePlayerId(SearchingPlayerNum);
	EOS_ProductUserId m_UserProductId = FPlatform::GetLocalProductId(SearchingPlayerNum);

	FString m_ErrorStr;
	uint32 m_FindSessionResult = ONLINE_FAIL;

	if (!EOS_ProductUserId_IsValid(m_UserProductId))
	{
		m_ErrorStr = TEXT("[FOnlineSessionEOSCore::FindSessions] User is not logged in");

		UE_LOG(LogTemp, Warning, TEXT("Not logged in"));
	}

	SearchSettings->SearchState = EOnlineAsyncTaskState::NotStarted;

	if (m_NetId.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerNetId: %s"), *m_NetId->ToString());

		EOS_Sessions_CreateSessionSearchOptions m_SessionSearchOptions = { EOS_SESSIONS_CREATESESSIONSEARCH_API_LATEST , static_cast<uint32_t>(SearchSettings->MaxSearchResults) };

		EOS_EResult m_Result = EOS_Sessions_CreateSessionSearch(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_SessionSearchOptions, &SessionSearchHandle);

		if (m_Result == EOS_EResult::EOS_Success)
		{
			EOS_Sessions_AttributeData m_Attribute = EOSSubsystemHelpers::CreateSessionAttributeData("EOSCORE", true);
			EOS_SessionSearch_SetParameterOptions m_SearchParams = { EOS_SESSIONSEARCH_SETPARAMETER_API_LATEST , &m_Attribute , EOS_EOnlineComparisonOp::EOS_CO_EQUAL };

			EOS_SessionSearch_SetParameter(SessionSearchHandle, &m_SearchParams);

			if (m_ErrorStr.IsEmpty())
			{
				SearchSettings->SearchState = EOnlineAsyncTaskState::InProgress;

				EOS_SessionSearch_FindOptions m_FindSessionOptions = { EOS_SESSIONSEARCH_FIND_API_LATEST , m_UserProductId };

				CurrentSearchSettings = SearchSettings;

				UE_LOG(LogTemp, Warning, TEXT("Searching............"));

				FSessionSearchFindCallbackInfo* m_FindSessionInfo = new FSessionSearchFindCallbackInfo(Subsystem, this);
				EOS_SessionSearch_Find(SessionSearchHandle, &m_FindSessionOptions, m_FindSessionInfo, OnFindSessionComplete);

				m_FindSessionResult = ONLINE_IO_PENDING;
			}
		}
		else
		{
			m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::FindSessions] Error: %s"), *FString(EOS_EResult_ToString(m_Result)));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerNetId: Invalid"));
		m_ErrorStr = TEXT("[FOnlineSessionEOSCore::FindSessions] Invalid PlayerId");
	}

	if (m_FindSessionResult != ONLINE_IO_PENDING)
	{
		UE_CLOG_ONLINE_SESSION(!m_ErrorStr.IsEmpty(), Warning, TEXT("%s"), *m_ErrorStr);
		SearchSettings->SearchState = EOnlineAsyncTaskState::Failed;
		TriggerOnFindSessionsCompleteDelegates(false);
	}

	return m_FindSessionResult == ONLINE_IO_PENDING || m_FindSessionResult == ONLINE_SUCCESS;
}

bool FOnlineSessionEOSCore::FindSessions(const FUniqueNetId& SearchingPlayerId, const TSharedRef<FOnlineSessionSearch>& SearchSettings)
{
	LogVerbose("");

	return FindSessions(0, SearchSettings);
}

bool FOnlineSessionEOSCore::FindSessionById(const FUniqueNetId& SearchingUserId, const FUniqueNetId& SessionId, const FUniqueNetId& FriendId, const FOnSingleSessionResultCompleteDelegate& CompletionDelegate)
{
	LogVerbose("");

	return false;
}

bool FOnlineSessionEOSCore::CancelFindSessions()
{
	LogVerbose("");

	return false;
}

bool FOnlineSessionEOSCore::PingSearchResults(const FOnlineSessionSearchResult& SearchResult)
{
	LogVerbose("");

	return false;
}

bool FOnlineSessionEOSCore::JoinSession(int32 PlayerNum, FName SessionName, const FOnlineSessionSearchResult& DesiredSession)
{
	LogVerbose("");

	IOnlineIdentityPtr m_IdentityInterface = Subsystem->GetIdentityInterface();
	check(m_IdentityInterface);

	const TSharedPtr<const FUniqueNetId> m_PlayerNetId = m_IdentityInterface->GetUniquePlayerId(PlayerNum);
	return JoinSession(*m_PlayerNetId, SessionName, DesiredSession);
}

bool FOnlineSessionEOSCore::JoinSession(const FUniqueNetId& PlayerId, FName SessionName, const FOnlineSessionSearchResult& DesiredSession)
{
	LogVerbose("%s", *SessionName.ToString());

	IOnlineIdentityPtr m_IdentityInterface = Subsystem->GetIdentityInterface();
	check(m_IdentityInterface);

	FString m_ErrorStr;
	uint32 m_JoinSessionResult = ONLINE_FAIL;

	std::string m_SessionName = TCHAR_TO_UTF8(*SessionName.ToString());

	const TSharedPtr<const FUniqueNetId> m_PlayerNetId = m_IdentityInterface->GetUniquePlayerId(0);

	if (!IsPlayerInSession(SessionName, *m_PlayerNetId))
	{
		FNamedOnlineSession* m_NamedSession = GetNamedSession(SessionName) ? GetNamedSession(SessionName) : AddNamedSession(SessionName, DesiredSession.Session);

		if (DesiredSession.IsValid())
		{
			m_NamedSession->HostingPlayerNum = INDEX_NONE;
			m_NamedSession->LocalOwnerId = m_PlayerNetId;
			m_NamedSession->bHosting = false;

			if (m_IdentityInterface.IsValid())
			{ 
				m_NamedSession->OwningUserName = m_IdentityInterface->GetPlayerNickname(*m_PlayerNetId);
			}

			if (m_NamedSession->OwningUserName.Len() > 0)
			{
				m_NamedSession->OwningUserName = FString(TEXT("EOSCORE DEFAULT"));
			}

			m_NamedSession->SessionSettings.BuildUniqueId = GetBuildUniqueId();

			RegisterLocalPlayer(*m_PlayerNetId, SessionName, nullptr);

			EOS_HSessionDetails m_SessionDetails = SessionDetailsHandle;

			FString m_InviteId;
			DesiredSession.Session.SessionSettings.Get("INVITE_ID", m_InviteId);

			// get session handle if this is an invite
			if (m_InviteId.Len() > 0)
			{
				m_SessionDetails = EOSSubsystemHelpers::GetSessionHandleFromInviteId(TCHAR_TO_UTF8(*m_InviteId));
			}

			EOS_Sessions_JoinSessionOptions m_JoinSessionOptions = { EOS_SESSIONS_JOINSESSION_API_LATEST, m_SessionName.c_str(), m_SessionDetails, FPlatform::GetLocalProductId(0) };

			EOS_SessionDetails_CopyInfoOptions m_CopyInfoOptions = { EOS_SESSIONDETAILS_COPYINFO_API_LATEST };
			EOS_SessionDetails_Info* m_SessionDetailsInfo = NULL;

			EOS_SessionDetails_CopyInfo(m_SessionDetails, &m_CopyInfoOptions, &m_SessionDetailsInfo);

			FSessionsJoinSessionCallbackInfo* m_JoinSessionInfo = new FSessionsJoinSessionCallbackInfo(Subsystem, this, SessionName, m_SessionDetailsInfo);
			EOS_Sessions_JoinSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_JoinSessionOptions, m_JoinSessionInfo, OnJoinSessionComplete);

			m_JoinSessionResult = ONLINE_IO_PENDING;
		}
		else
		{
			m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::JoinSession] Invalid Session: %s"), *SessionName.ToString());
		}
	}

	if (m_JoinSessionResult != ONLINE_IO_PENDING)
	{
		UE_CLOG_ONLINE_SESSION(!m_ErrorStr.IsEmpty(), Warning, TEXT("%s"), *m_ErrorStr);
		TriggerOnJoinSessionCompleteDelegates(SessionName, m_JoinSessionResult == ONLINE_SUCCESS ? EOnJoinSessionCompleteResult::Success : EOnJoinSessionCompleteResult::UnknownError);
	}

	return m_JoinSessionResult == ONLINE_SUCCESS || m_JoinSessionResult == ONLINE_IO_PENDING;
}

bool FOnlineSessionEOSCore::FindFriendSession(int32 LocalUserNum, const FUniqueNetId& Friend)
{
	return false;
}

bool FOnlineSessionEOSCore::FindFriendSession(const FUniqueNetId& LocalUserId, const FUniqueNetId& Friend)
{
	return false;
}

bool FOnlineSessionEOSCore::FindFriendSession(const FUniqueNetId& LocalUserId, const TArray<TSharedRef<const FUniqueNetId>>& FriendList)
{
	return false;
}

bool FOnlineSessionEOSCore::SendSessionInviteToFriend(int32 LocalUserNum, FName SessionName, const FUniqueNetId& Friend)
{
	LogVerbose("%s", *SessionName.ToString());

	IOnlineIdentityPtr m_IdentityInterface = Subsystem->GetIdentityInterface();
	check(m_IdentityInterface);

	const TSharedPtr<const FUniqueNetId> m_PlayerNetId = m_IdentityInterface->GetUniquePlayerId(LocalUserNum);
	return SendSessionInviteToFriend(*m_PlayerNetId, SessionName, Friend);
}

bool FOnlineSessionEOSCore::SendSessionInviteToFriend(const FUniqueNetId& LocalUserId, FName SessionName, const FUniqueNetId& Friend)
{
	LogVerbose("%s", *SessionName.ToString());

	TArray<TSharedRef<const FUniqueNetId>> m_Friends;
	m_Friends.Add(Friend.AsShared());
	return SendSessionInviteToFriends(LocalUserId, SessionName, m_Friends);
}

bool FOnlineSessionEOSCore::SendSessionInviteToFriends(int32 LocalUserNum, FName SessionName, const TArray<TSharedRef<const FUniqueNetId>>& Friends)
{
	LogVerbose("%s", *SessionName.ToString());

	IOnlineIdentityPtr m_IdentityInterface = Subsystem->GetIdentityInterface();
	check(m_IdentityInterface);

	const TSharedPtr<const FUniqueNetId> m_PlayerNetId = m_IdentityInterface->GetUniquePlayerId(LocalUserNum);
	return SendSessionInviteToFriends(*m_PlayerNetId, SessionName, Friends);
}

bool FOnlineSessionEOSCore::SendSessionInviteToFriends(const FUniqueNetId& LocalUserId, FName SessionName, const TArray<TSharedRef<const FUniqueNetId>>& Friends)
{
	LogVerbose("%s", *SessionName.ToString());

	FString m_ErrorStr;
	uint32 m_Result = ONLINE_FAIL;

	EOS_ProductUserId m_ProductUserId = EOS_ProductUserId_FromString(TCHAR_TO_UTF8(*LocalUserId.ToString()));

	std::string m_SessionName = TCHAR_TO_UTF8(*SessionName.ToString());

	if (EOS_ProductUserId_IsValid(m_ProductUserId))
	{
		if (IsPlayerInSession(SessionName, LocalUserId))
		{
			for (int32 i = 0; i < Friends.Num(); ++i)
			{
				EOS_ProductUserId m_FriendProductId = EOS_ProductUserId_FromString(TCHAR_TO_UTF8(*Friends[i]->ToString()));
				EOS_Sessions_SendInviteOptions m_SendInviteOptions = { EOS_SESSIONS_SENDINVITE_API_LATEST, m_SessionName.c_str(), m_ProductUserId, m_FriendProductId };

				EOS_Sessions_SendInvite(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_SendInviteOptions, this, ([](const EOS_Sessions_SendInviteCallbackInfo* data)
				{
					if (data->ResultCode != EOS_EResult::EOS_Success)
					{
						UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::SendSessionInviteToFriends] Session invite(s) couldn't be sent to remote.\r\n    Error: %s"), *FString(EOS_EResult_ToString(data->ResultCode)));
					}
					else
					{
						UE_LOG_ONLINE_SESSION(Display, TEXT("[FOnlineSessionEOSCore::SendSessionInviteToFriends] Session invite(s) sent to remote."));
					}
				}));
			}

			m_Result = ONLINE_IO_PENDING;
		}
		else
		{
			m_ErrorStr = FString::Printf(TEXT("Player %s not in session %s"), *LocalUserId.ToString(), *SessionName.ToString());
		}
	}
	else
	{
		m_ErrorStr = TEXT("Invalid local user id");
	}

	if (m_Result != ONLINE_IO_PENDING)
	{
		UE_CLOG_ONLINE(!m_ErrorStr.IsEmpty(), Warning, TEXT("Error occoured during %s. Message: %s"), *FString(__FUNCTION__), *m_ErrorStr);
	}

	return m_Result == ONLINE_SUCCESS || m_Result == ONLINE_IO_PENDING;
}

bool FOnlineSessionEOSCore::GetResolvedConnectString(FName SessionName, FString& ConnectInfo, FName PortType)
{
	LogVerbose("%s", *SessionName.ToString());

	bool bSuccess = false;

	FNamedOnlineSession* m_Session = GetNamedSession(SessionName);

	if (m_Session != nullptr)
	{
		TSharedPtr<FOnlineSessionInfoEOSCore> m_SessionInfo = StaticCastSharedPtr<FOnlineSessionInfoEOSCore>(m_Session->SessionInfo);

		if (PortType == NAME_BeaconPort)
		{
			int32 BeaconListenPort = GetBeaconPortFromSessionSettings(m_Session->SessionSettings);
			ConnectInfo = FString::Printf(TEXT("eoscore.%s"), *m_SessionInfo->HostAddr->ToString(false));
		}
		else if (PortType == NAME_GamePort)
		{
			ConnectInfo = FString::Printf(TEXT("eoscore.%s"), *m_SessionInfo->HostAddr->ToString(false));
			bSuccess = true;
		}

		if (!bSuccess)
		{
			UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::GetResolvedConnectString] Error: %s"), *SessionName.ToString());
		}
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::GetResolvedConnectString] Unknown session: %s"), *SessionName.ToString());
	}

	LogVerbose("ConnectInfo: %s]", *ConnectInfo);

	return bSuccess;
}

bool FOnlineSessionEOSCore::GetResolvedConnectString(const FOnlineSessionSearchResult& SearchResult, FName PortType, FString& ConnectInfo)
{
	LogVerbose("");

	bool bSuccess = false;

	if (SearchResult.Session.SessionInfo.IsValid())
	{
		TSharedPtr<FOnlineSessionInfoEOSCore> SessionInfo = StaticCastSharedPtr<FOnlineSessionInfoEOSCore>(SearchResult.Session.SessionInfo);

		if (PortType == NAME_BeaconPort)
		{
			int32 BeaconListenPort = GetBeaconPortFromSessionSettings(SearchResult.Session.SessionSettings);

			ConnectInfo = FString::Printf(TEXT("eoscore.%s"), *SessionInfo->HostAddr->ToString(false));

		}
		else if (PortType == NAME_GamePort)
		{
			ConnectInfo = FString::Printf(TEXT("eoscore.%s"), *SessionInfo->HostAddr->ToString(false));
			bSuccess = true;
		}
	}

	return bSuccess;
}

FOnlineSessionSettings* FOnlineSessionEOSCore::GetSessionSettings(FName SessionName)
{
	FNamedOnlineSession* Session = GetNamedSession(SessionName);
	if (Session)
	{
		return &Session->SessionSettings;
	}

	return NULL;
}

bool FOnlineSessionEOSCore::RegisterPlayer(FName SessionName, const FUniqueNetId& PlayerId, bool bWasInvited)
{
	LogVerbose("%s", *SessionName.ToString());

	TArray<TSharedRef<const FUniqueNetId>> m_Players;
	m_Players.Add(MakeShared<FUniqueNetIdEOSCore>(PlayerId));
	return RegisterPlayers(SessionName, m_Players);
}

bool FOnlineSessionEOSCore::RegisterPlayers(FName SessionName, const TArray<TSharedRef<const FUniqueNetId> >& Players, bool bWasInvited /*= false*/)
{
	LogVerbose("%s", *SessionName.ToString());

	FString m_ErrorStr;
	uint32 m_RegisterPlayersResult = ONLINE_FAIL;

	std::string m_SessionName = TCHAR_TO_UTF8(*SessionName.ToString());

	if (FNamedOnlineSession* m_Session = GetNamedSession(SessionName))
	{
		TArray<TSharedRef<const FUniqueNetId>> m_RegisteredPlayers;
		EOS_ProductUserId* m_UserIds = new EOS_ProductUserId[Players.Num()];

		for (int32 i = 0; i < Players.Num(); ++i)
		{
			const TSharedRef<const FUniqueNetId> m_PlayerNetId = Players[i];
			FUniqueNetIdMatcher m_PlayerMatchHelper(*m_PlayerNetId);

			if (m_Session->RegisteredPlayers.IndexOfByPredicate(m_PlayerMatchHelper) == INDEX_NONE)
			{
				m_Session->RegisteredPlayers.Add(m_PlayerNetId);
				m_RegisteredPlayers.Add(m_PlayerNetId);

				m_UserIds[i] = EOSSubsystemHelpers::ProductIdFromString(*m_PlayerNetId->ToString());

				if (m_Session->NumOpenPublicConnections > 0)
				{
					m_Session->NumOpenPublicConnections--;
				}
				else if (m_Session->NumOpenPrivateConnections > 0)
				{
					m_Session->NumOpenPrivateConnections--;
				}
			}
			else
			{
				UE_LOG_ONLINE_SESSION(Log, TEXT("[FOnlineSessionEOSCore::RegisterPlayers] Player %s already registered in Session: %s"), *m_PlayerNetId->ToDebugString(), *SessionName.ToString());
			}
		}

		EOS_Sessions_RegisterPlayersOptions m_RegisterPlayersOptions = { EOS_SESSIONS_REGISTERPLAYERS_API_LATEST, m_SessionName.c_str(), m_UserIds, static_cast<uint32_t>(Players.Num()) };
		FSessionsRegisterPlayersCallbackInfo* m_SessionRegisterPlayersInfo = new FSessionsRegisterPlayersCallbackInfo(Subsystem, this, SessionName, m_RegisteredPlayers);

		EOS_Sessions_RegisterPlayers(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_RegisterPlayersOptions, m_SessionRegisterPlayersInfo, OnRegisterPlayersComplete);

		m_RegisterPlayersResult = ONLINE_IO_PENDING;

		delete[] m_UserIds;
	}
	else
	{
		m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::RegisterPlayers] Session %s not found"), *SessionName.ToString());
	}

	if (m_RegisterPlayersResult != ONLINE_IO_PENDING)
	{
		UE_CLOG_ONLINE_SESSION(!m_ErrorStr.IsEmpty(), Warning, TEXT("%s"), *m_ErrorStr);
		TriggerOnRegisterPlayersCompleteDelegates(SessionName, TArray<TSharedRef<const FUniqueNetId>>(), m_RegisterPlayersResult == ONLINE_SUCCESS);
	}

	return m_RegisterPlayersResult == ONLINE_SUCCESS || m_RegisterPlayersResult == ONLINE_IO_PENDING;
}

bool FOnlineSessionEOSCore::UnregisterPlayer(FName SessionName, const FUniqueNetId& PlayerId)
{
	LogVerbose("%s", *SessionName.ToString());

	TArray<TSharedRef<const FUniqueNetId>> m_Players;
	m_Players.Add(MakeShared<FUniqueNetIdEOSCore>(PlayerId));
	return UnregisterPlayers(SessionName, m_Players);
}

bool FOnlineSessionEOSCore::UnregisterPlayers(FName SessionName, const TArray< TSharedRef<const FUniqueNetId> >& Players)
{
	LogVerbose("%s", *SessionName.ToString());

	FString m_ErrorStr;
	uint32 m_UnregisterPlayersResult = ONLINE_FAIL;

	std::string m_SessionName = TCHAR_TO_UTF8(*SessionName.ToString());

	if (FNamedOnlineSession* m_Session = GetNamedSession(SessionName))
	{
		TArray<TSharedRef<const FUniqueNetId>> m_UnregisteredPlayers;
		EOS_ProductUserId* m_UserIds = new EOS_ProductUserId[Players.Num()];

		for (int32 i = 0; i < Players.Num(); ++i)
		{
			const TSharedRef<const FUniqueNetId> m_PlayerNetId = Players[i];
			FUniqueNetIdMatcher m_PlayerMatchHelper(*m_PlayerNetId);

			if (m_Session->RegisteredPlayers.IndexOfByPredicate(m_PlayerMatchHelper) != INDEX_NONE)
			{
				m_Session->RegisteredPlayers.RemoveAtSwap(i);
				m_UnregisteredPlayers.Add(m_PlayerNetId);

				if (m_Session->NumOpenPublicConnections < m_Session->SessionSettings.NumPublicConnections)
				{
					m_Session->NumOpenPublicConnections += 1;
				}
				else if (m_Session->NumOpenPrivateConnections < m_Session->SessionSettings.NumPrivateConnections)
				{
					m_Session->NumOpenPrivateConnections += 1;
				}

				m_UserIds[i] = EOSSubsystemHelpers::ProductIdFromString(*m_PlayerNetId->ToString());
			}
			else
			{
				UE_LOG_ONLINE_SESSION(Log, TEXT("[FOnlineSessionEOSCore::UnregisterPlayers] Player: %s is not in Session: %s"), *m_PlayerNetId->ToDebugString(), *SessionName.ToString());
			}
		}

		EOS_Sessions_UnregisterPlayersOptions m_UnregisterPlayersOptions = { EOS_SESSIONS_REGISTERPLAYERS_API_LATEST, m_SessionName.c_str(), m_UserIds, static_cast<uint32_t>(Players.Num()) };
		FSessionsRegisterPlayersCallbackInfo* m_SessionRegisterPlayersInfo = new FSessionsRegisterPlayersCallbackInfo(Subsystem, this, SessionName, m_UnregisteredPlayers);
		EOS_Sessions_UnregisterPlayers(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_UnregisterPlayersOptions, m_SessionRegisterPlayersInfo, OnUnregisterPlayersComplete);

		delete[] m_UserIds;
		m_UnregisterPlayersResult = ONLINE_IO_PENDING;
	}
	else
	{
		m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::UnregisterPlayers] Session %s not found"), *SessionName.ToString());
	}

	if (m_UnregisterPlayersResult != ONLINE_IO_PENDING)
	{
		UE_CLOG_ONLINE_SESSION(!m_ErrorStr.IsEmpty(), Warning, TEXT("%s"), *m_ErrorStr);
		TriggerOnUnregisterPlayersCompleteDelegates(SessionName, TArray<TSharedRef<const FUniqueNetId>>(), m_UnregisterPlayersResult == ONLINE_SUCCESS);
	}

	return m_UnregisterPlayersResult == ONLINE_SUCCESS || m_UnregisterPlayersResult == ONLINE_IO_PENDING;
}

void FOnlineSessionEOSCore::RegisterLocalPlayer(const FUniqueNetId& PlayerId, FName SessionName, const FOnRegisterLocalPlayerCompleteDelegate& Delegate)
{
	LogVerbose("%s", *SessionName.ToString());

	if (FNamedOnlineSession* m_Session = GetNamedSession(SessionName))
	{
		if (IsPlayerInSession(SessionName, PlayerId))
		{
			Delegate.ExecuteIfBound(PlayerId, EOnJoinSessionCompleteResult::AlreadyInSession);
			return;
		}
		else
		{
			m_Session->RegisteredPlayers.Add(PlayerId.AsShared());

			if (m_Session->NumOpenPublicConnections > 0)
			{
				m_Session->NumOpenPublicConnections -= 1;
			}
			else if (m_Session->NumOpenPrivateConnections > 0)
			{
				m_Session->NumOpenPrivateConnections -= 1;
			}

			Delegate.ExecuteIfBound(PlayerId, EOnJoinSessionCompleteResult::Success);
		}
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::RegisterLocalPlayer] Session: %s not found"), *SessionName.ToString());

		Delegate.ExecuteIfBound(PlayerId, EOnJoinSessionCompleteResult::SessionDoesNotExist);

		return;
	}
}

void FOnlineSessionEOSCore::UnregisterLocalPlayer(const FUniqueNetId& PlayerId, FName SessionName, const FOnUnregisterLocalPlayerCompleteDelegate& Delegate)
{
	LogVerbose("%s", *SessionName.ToString());

	if (FNamedOnlineSession* m_Session = GetNamedSession(SessionName))
	{
		if (IsPlayerInSession(SessionName, PlayerId))
		{
			m_Session->RegisteredPlayers.RemoveSingle(PlayerId.AsShared());

			if (m_Session->NumOpenPublicConnections < m_Session->SessionSettings.NumPublicConnections)
			{
				m_Session->NumOpenPublicConnections += 1;
			}
			else if (m_Session->NumOpenPrivateConnections < m_Session->SessionSettings.NumPrivateConnections)
			{
				m_Session->NumOpenPrivateConnections += 1;
			}

			Delegate.ExecuteIfBound(PlayerId, true);
		}
		else
		{
			UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::UnregisterLocalPlayer] Player %s is not in session: %s"), *PlayerId.ToString(), *SessionName.ToString());
		}
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::UnregisterLocalPlayer] Invalid session: %s"), *SessionName.ToString());

		Delegate.ExecuteIfBound(PlayerId, false);
	}
}

int32 FOnlineSessionEOSCore::GetNumSessions()
{
	FScopeLock ScopeLock(&SessionLock);
	return Sessions.Num();
}

void FOnlineSessionEOSCore::DumpSessionState()
{
	FScopeLock ScopeLock(&SessionLock);

	for (int32 SessionIdx = 0; SessionIdx < Sessions.Num(); SessionIdx++)
	{
		DumpNamedSession(&Sessions[SessionIdx]);
	}
}

void FOnlineSessionEOSCore::OnCreateSessionComplete(const EOS_Sessions_UpdateSessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSessionsUpdateSessionCallbackInfo* m_UpdateSessionInfo = (FSessionsUpdateSessionCallbackInfo*)data->ClientData;
	FOnlineSessionEOSCore* m_SessionInterface = m_UpdateSessionInfo->SessionInterface;
	IOnlineIdentityPtr m_IdentityInterface = m_UpdateSessionInfo->Subsystem->GetIdentityInterface();

	check(m_SessionInterface);
	check(m_IdentityInterface);

	const FName m_SessionName = FName(data->SessionName);
	FNamedOnlineSession* m_Session = m_SessionInterface->GetNamedSession(m_SessionName);

	if (data->ResultCode == EOS_EResult::EOS_Success)
	{
		const TSharedRef<const FUniqueNetId> m_NetId = m_IdentityInterface->GetUniquePlayerId(0).ToSharedRef();

		m_Session->HostingPlayerNum = INDEX_NONE;
		m_Session->bHosting = true;
		m_Session->SessionState = EOnlineSessionState::Pending;

		EOS_Sessions_CopyActiveSessionHandleOptions m_CopyActiveSessionHandleOptions = { EOS_SESSIONS_COPYACTIVESESSIONHANDLE_API_LATEST, data->SessionName };
		EOS_HActiveSession m_ActiveSessionHandle = NULL;

		EOS_Sessions_CopyActiveSessionHandle(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_CopyActiveSessionHandleOptions, &m_ActiveSessionHandle);

		EOS_ActiveSession_Info* m_ActiveSessionInfo = new EOS_ActiveSession_Info;
		EOS_ActiveSession_CopyInfoOptions m_ActiveSessionCopyInfoOptions = { EOS_ACTIVESESSION_COPYINFO_API_LATEST };

		EOS_ActiveSession_CopyInfo(m_ActiveSessionHandle, &m_ActiveSessionCopyInfoOptions, &m_ActiveSessionInfo);

		EOSSubsystemHelpers::UpdateSessionDetails(SessionDetailsHandle, m_Session, m_ActiveSessionInfo->SessionDetails);
		
		EOS_EpicAccountId m_LocalAccountId = EOS_Auth_GetLoggedInAccountByIndex(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), 0);
		
		// Update join info if logged in 
		if (m_ActiveSessionInfo && EOS_EpicAccountId_IsValid(m_LocalAccountId))
		{
			EOS_Presence_CreatePresenceModificationOptions m_CreatePresenceOptions = { EOS_PRESENCE_CREATEPRESENCEMODIFICATION_API_LATEST, m_LocalAccountId };
			EOS_HPresenceModification m_PresenceHandle = NULL;
			EOS_Presence_CreatePresenceModification(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_CreatePresenceOptions, &m_PresenceHandle);

			EOS_PresenceModification_SetJoinInfoOptions m_SetJoinInfoOptions = { EOS_PRESENCEMODIFICATION_SETJOININFO_API_LATEST, m_ActiveSessionInfo->SessionDetails->HostAddress };
			EOS_PresenceModification_SetJoinInfo(m_PresenceHandle, &m_SetJoinInfoOptions);

			EOS_Presence_SetPresenceOptions m_SetPresenceOptions = { EOS_PRESENCE_SETPRESENCE_API_LATEST, m_LocalAccountId, m_PresenceHandle };
			EOS_Presence_SetPresence(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_SetPresenceOptions, nullptr, ([](const EOS_Presence_SetPresenceCallbackInfo* callbackData)
			{
				LogVerbose("%s", *FString(EOS_EResult_ToString(callbackData->ResultCode)));
			}));


			EOS_PresenceModification_Release(m_PresenceHandle);
		}

		EOS_ActiveSession_Info_Release(m_ActiveSessionInfo);
		EOS_ActiveSession_Release(m_ActiveSessionHandle);

		UE_LOG_ONLINE_SESSION(Display, TEXT("Created session: %s"), *m_SessionName.ToString());
		m_SessionInterface->TriggerOnCreateSessionCompleteDelegates(m_SessionName, true);
	}
	else
	{
		m_SessionInterface->RemoveNamedSession(m_SessionName);
		m_SessionInterface->TriggerOnCreateSessionCompleteDelegates(m_SessionName, false);
	}

	delete m_UpdateSessionInfo;
}

void FOnlineSessionEOSCore::OnStartSessionComplete(const EOS_Sessions_StartSessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSessionsStartSessionCallbackInfo* m_StartSessionInfo = (FSessionsStartSessionCallbackInfo*)data->ClientData;

	FOnlineSessionEOSCore* m_SessionInterface = m_StartSessionInfo->SessionInterface;
	FName m_SessionName = m_StartSessionInfo->SessionName;

	check(m_SessionInterface);

	EOS_EResult m_Result = data->ResultCode;

	if (m_Result != EOS_EResult::EOS_Success)
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnStartSessionComplete] Error: %s"), *FString(EOS_EResult_ToString(m_Result)));

		m_SessionInterface->TriggerOnStartSessionCompleteDelegates(m_SessionName, false);
		return;
	}

	if (FNamedOnlineSession* m_Session = m_SessionInterface->GetNamedSession(m_SessionName))
	{
		m_Session->SessionState = EOnlineSessionState::InProgress;
		m_SessionInterface->TriggerOnStartSessionCompleteDelegates(m_SessionName, true);
	}

	delete m_StartSessionInfo;
}

void FOnlineSessionEOSCore::OnEndSessionComplete(const EOS_Sessions_EndSessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSessionsEndSessionCallbackInfo* m_EndSessionInfo = (FSessionsEndSessionCallbackInfo*)data->ClientData;
	FOnlineSessionEOSCore* m_SessionInterface = m_EndSessionInfo->SessionInterface;
	FName m_SessionName = m_EndSessionInfo->SessionName;
	check(m_SessionInterface);

	EOS_EResult m_Result = data->ResultCode;

	if (m_Result != EOS_EResult::EOS_Success)
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnEndSessionComplete] Error: %s"), UTF8_TO_TCHAR(EOS_EResult_ToString(m_Result)));
		m_SessionInterface->TriggerOnEndSessionCompleteDelegates(m_SessionName, false);
		delete m_EndSessionInfo;

		return;
	}

	if (FNamedOnlineSession* m_Session = m_SessionInterface->GetNamedSession(m_SessionName))
	{
		m_Session->SessionState = EOnlineSessionState::Ended;
		m_SessionInterface->TriggerOnEndSessionCompleteDelegates(m_SessionName, true);
	}

	delete m_EndSessionInfo;
}

void FOnlineSessionEOSCore::OnFindSessionComplete(const EOS_SessionSearch_FindCallbackInfo* data)
{
	UE_LOG(LogTemp, Warning, TEXT("%s:%s"), *FString(__FUNCTION__), *FString(EOS_EResult_ToString(data->ResultCode)));
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSessionSearchFindCallbackInfo* m_FindSessionInfo = (FSessionSearchFindCallbackInfo*)data->ClientData;
	FOnlineSessionEOSCore* m_SessionInterface = m_FindSessionInfo->SessionInterface;
	check(m_SessionInterface);

	FString m_ErrorStr;

	if (SessionSearchHandle)
	{
		EOS_EResult m_Result = data->ResultCode;

		if (m_Result == EOS_EResult::EOS_Success)
		{
			EOS_SessionSearch_GetSearchResultCountOptions m_SearchResultCountOptions = { EOS_SESSIONSEARCH_GETSEARCHRESULTCOUNT_API_LATEST };
			uint32 m_NumSessions = EOS_SessionSearch_GetSearchResultCount(SessionSearchHandle, &m_SearchResultCountOptions);

			if (m_NumSessions > 0)
			{
				for (uint32 i = 0; i < m_NumSessions; ++i)
				{
					EOS_SessionSearch_CopySearchResultByIndexOptions m_CopySearchResultsByIndex = { EOS_SESSIONSEARCH_COPYSEARCHRESULTBYINDEX_API_LATEST , i };
					m_Result = EOS_SessionSearch_CopySearchResultByIndex(SessionSearchHandle, &m_CopySearchResultsByIndex, &SessionDetailsHandle);

					if (m_Result == EOS_EResult::EOS_Success)
					{
						EOS_SessionDetails_Info* m_SessionInfo = new EOS_SessionDetails_Info;
						EOS_SessionDetails_CopyInfoOptions m_CopyInfoOptions = { EOS_SESSIONDETAILS_COPYINFO_API_LATEST };

						m_Result = EOS_SessionDetails_CopyInfo(SessionDetailsHandle, &m_CopyInfoOptions, &m_SessionInfo);

						if (m_Result == EOS_EResult::EOS_Success)
						{
							FOnlineSessionSearchResult m_SearchResult;
							m_SearchResult.PingInMs = -1;

							EOSSubsystemHelpers::UpdateSessionDetails(SessionDetailsHandle, &m_SearchResult.Session, m_SessionInfo);

							CurrentSearchSettings->SearchResults.Add(m_SearchResult);
						}
						else
						{
							m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::OnFindSessionComplete] EOS_SessionDetails_CopyInfo Error: %s"), *FString(EOS_EResult_ToString(m_Result)));
						}

						EOS_SessionDetails_Info_Release(m_SessionInfo);
					}
					else
					{
						m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::OnFindSessionComplete] EOS_SessionSearch_CopySearchResultByIndex Error: %s"), UTF8_TO_TCHAR(EOS_EResult_ToString(data->ResultCode)));
					}
				}
			}
			else
			{
				UE_LOG_ONLINE_SESSION(Display, TEXT("No sessions found"));
			}

			EOS_SessionSearch_Release(SessionSearchHandle);
			CurrentSearchSettings->SearchState = EOnlineAsyncTaskState::Done;
		}
		else
		{
			m_ErrorStr = FString::Printf(TEXT("[FOnlineSessionEOSCore::OnFindSessionComplete] Error: %s"), *FString(EOS_EResult_ToString(data->ResultCode)));
		}
	}
	else
	{
		m_ErrorStr = TEXT("[FOnlineSessionEOSCore::OnFindSessionComplete] Search handle is invalid");
	}

	UE_CLOG_ONLINE_SESSION(!m_ErrorStr.IsEmpty(), Warning, TEXT("%s"), *FString(__FUNCTION__), *m_ErrorStr);
	m_SessionInterface->TriggerOnFindSessionsCompleteDelegates(m_ErrorStr.IsEmpty());

	delete m_FindSessionInfo;
}

void FOnlineSessionEOSCore::OnRegisterPlayersComplete(const EOS_Sessions_RegisterPlayersCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSessionsRegisterPlayersCallbackInfo* m_SessionRegisterPlayersInfo = (FSessionsRegisterPlayersCallbackInfo*)data->ClientData;
	FOnlineSessionEOSCore* m_SessionInterface = m_SessionRegisterPlayersInfo->SessionInterface;
	check(m_SessionInterface);

	FName m_SessionName = m_SessionRegisterPlayersInfo->SessionName;
	const TArray<TSharedRef<const FUniqueNetId>> m_RegisteredPlayers = m_SessionRegisterPlayersInfo->RegisteredPlayers;

	if (FNamedOnlineSession* m_Session = m_SessionInterface->GetNamedSession(m_SessionName))
	{
		if (data->ResultCode != EOS_EResult::EOS_Success)
		{
			for (int32 i = 0; i < m_RegisteredPlayers.Num(); ++i)
			{
				m_Session->RegisteredPlayers.RemoveAtSwap(i);

				if (m_Session->NumOpenPublicConnections < m_Session->SessionSettings.NumPublicConnections)
				{
					m_Session->NumOpenPublicConnections += 1;
				}
				else if (m_Session->NumOpenPrivateConnections < m_Session->SessionSettings.NumPrivateConnections)
				{
					m_Session->NumOpenPrivateConnections += 1;
				}
			}
		}

		m_SessionInterface->TriggerOnRegisterPlayersCompleteDelegates(m_SessionName, m_RegisteredPlayers, true);
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnRegisterPlayersComplete] Session: %s not found"), *m_SessionName.ToString());

		m_SessionInterface->TriggerOnRegisterPlayersCompleteDelegates(m_SessionName, TArray<TSharedRef<const FUniqueNetId>>(), false);
		return;
	}

	delete m_SessionRegisterPlayersInfo;
}

void FOnlineSessionEOSCore::OnUnregisterPlayersComplete(const EOS_Sessions_UnregisterPlayersCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSessionsRegisterPlayersCallbackInfo* m_SessionRegisterPlayersInfo = (FSessionsRegisterPlayersCallbackInfo*)data->ClientData;
	FOnlineSessionEOSCore* m_SessionInterface = m_SessionRegisterPlayersInfo->SessionInterface;
	check(m_SessionInterface);

	FName m_SessionName = m_SessionRegisterPlayersInfo->SessionName;
	const TArray<TSharedRef<const FUniqueNetId>> m_UnregisteredPlayers = m_SessionRegisterPlayersInfo->RegisteredPlayers;

	if (FNamedOnlineSession* m_Session = m_SessionInterface->GetNamedSession(m_SessionName))
	{
		if (data->ResultCode != EOS_EResult::EOS_Success)
		{
			for (int32 i = 0; i < m_UnregisteredPlayers.Num(); ++i)
			{
				m_Session->RegisteredPlayers.Add(m_UnregisteredPlayers[i]);

				if (m_Session->NumOpenPublicConnections > 0)
				{
					m_Session->NumOpenPublicConnections -= 1;
				}
				else if (m_Session->NumOpenPrivateConnections > 0)
				{
					m_Session->NumOpenPrivateConnections -= 1;
				}
			}
		}

		m_SessionInterface->TriggerOnUnregisterPlayersCompleteDelegates(m_SessionName, m_UnregisteredPlayers, true);
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnUnregisterPlayersComplete] Session %s not found"), *m_SessionName.ToString());
		m_SessionInterface->TriggerOnRegisterPlayersCompleteDelegates(m_SessionName, TArray<TSharedRef<const FUniqueNetId>>(), false);
	}

	delete m_SessionRegisterPlayersInfo;
}

void FOnlineSessionEOSCore::OnJoinSessionComplete(const EOS_Sessions_JoinSessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSessionsJoinSessionCallbackInfo* m_JoinSessionInfo = (FSessionsJoinSessionCallbackInfo*)data->ClientData;
	FOnlineSessionEOSCore* m_SessionInterface = m_JoinSessionInfo->SessionInterface;
	check(m_SessionInterface);
	FName m_SessionName = m_JoinSessionInfo->SessionName;

	if (data->ResultCode != EOS_EResult::EOS_Success)
	{
		m_SessionInterface->RemoveNamedSession(m_SessionName);

		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnJoinSessionComplete] Error: %s"), *FString(EOS_EResult_ToString(data->ResultCode)));
		m_SessionInterface->TriggerOnJoinSessionCompleteDelegates(m_SessionName, EOnJoinSessionCompleteResult::UnknownError);
		return;
	}

	if (!m_SessionInterface->GetNamedSession(m_SessionName))
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnJoinSessionComplete] Session %s not found"), *m_SessionName.ToString());

		m_SessionInterface->TriggerOnJoinSessionCompleteDelegates(m_SessionName, EOnJoinSessionCompleteResult::SessionDoesNotExist);
	}
	else
	{
		EOS_EpicAccountId m_LocalAccountId = EOS_Auth_GetLoggedInAccountByIndex(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), 0);

		// Update join presence if logged in
		if (EOS_EpicAccountId_IsValid(m_LocalAccountId)) 
		{
			EOS_Presence_CreatePresenceModificationOptions m_Options = { EOS_PRESENCE_CREATEPRESENCEMODIFICATION_API_LATEST, m_LocalAccountId };
			EOS_HPresenceModification m_PresenceHandle = NULL;
			EOS_Presence_CreatePresenceModification(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_PresenceHandle);

			EOS_PresenceModification_SetJoinInfoOptions m_SetJoinInfoOptions = { EOS_PRESENCEMODIFICATION_SETJOININFO_API_LATEST, m_JoinSessionInfo->SessionInfo->HostAddress };
			EOS_PresenceModification_SetJoinInfo(m_PresenceHandle, &m_SetJoinInfoOptions);

			EOS_Presence_SetPresenceOptions m_SetPresenceOptions = { EOS_PRESENCE_SETPRESENCE_API_LATEST, m_LocalAccountId, m_PresenceHandle };
			EOS_Presence_SetPresence(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_SetPresenceOptions, nullptr, ([](const EOS_Presence_SetPresenceCallbackInfo* callbackData)
			{
				LogVerbose("%s", *FString(EOS_EResult_ToString(callbackData->ResultCode)));
			}));
	

			EOS_PresenceModification_Release(m_PresenceHandle);
		}

		m_SessionInterface->TriggerOnJoinSessionCompleteDelegates(m_SessionName, EOnJoinSessionCompleteResult::Success);
	}

	delete m_JoinSessionInfo;
}

void FOnlineSessionEOSCore::OnSessionInviteReceived(const EOS_Sessions_SessionInviteReceivedCallbackInfo* data)
{
	LogVerbose("");

	FOnlineSessionEOSCore* m_SessionInterface = (FOnlineSessionEOSCore*)data->ClientData;
	check(m_SessionInterface);

	FString m_LocalUserIdStr;
	FString m_RemoteUserIdStr;

	EOS_EResult m_ConvertResult = EOSSubsystemHelpers::ProductIdToString(data->LocalUserId, m_LocalUserIdStr);

	if (m_ConvertResult != EOS_EResult::EOS_Success)
	{
		LogWarning("Failed converting local user id to string: %s", *FString(EOS_EResult_ToString(m_ConvertResult)));
		return;
	}

	m_ConvertResult = EOSSubsystemHelpers::ProductIdToString(data->TargetUserId, m_RemoteUserIdStr);

	if (m_ConvertResult != EOS_EResult::EOS_Success)
	{
		LogWarning("Failed converting target user id to string: %s", *FString(EOS_EResult_ToString(m_ConvertResult)));
		return;
	}

	const TSharedRef<FUniqueNetId const> m_LocalUserId = MakeShared<FUniqueNetIdEOSCore>(m_LocalUserIdStr);
	const TSharedRef<FUniqueNetId const> m_RemoteUserId = MakeShared<FUniqueNetIdEOSCore>(m_RemoteUserIdStr);

	EOS_HSessionDetails m_SessionDetailsHandle = EOSSubsystemHelpers::GetSessionHandleFromInviteId(data->InviteId);

	if (m_SessionDetailsHandle)
	{
		EOS_SessionDetails_Info* m_SessionInfo = new EOS_SessionDetails_Info;
		EOS_SessionDetails_CopyInfoOptions m_CopyInfoOptions = { EOS_SESSIONDETAILS_COPYINFO_API_LATEST };

		EOS_EResult m_CopySessionDetailsResult = EOS_SessionDetails_CopyInfo(m_SessionDetailsHandle, &m_CopyInfoOptions, &m_SessionInfo);

		if (m_CopySessionDetailsResult == EOS_EResult::EOS_Success)
		{
			FOnlineSessionSearchResult m_SearchResult;
			m_SearchResult.PingInMs = -1;

			EOSSubsystemHelpers::UpdateSessionDetails(SessionDetailsHandle, &m_SearchResult.Session, m_SessionInfo);

			m_SessionInterface->TriggerOnSessionInviteReceivedDelegates(*m_LocalUserId, *m_RemoteUserId, FString(), m_SearchResult);
		}
		else
		{
			UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnSessionInviteReceived] EOS_SessionDetails_CopyInfo Error: %s"), *FString(EOS_EResult_ToString(m_CopySessionDetailsResult)));
		}

		EOS_SessionDetails_Info_Release(m_SessionInfo);
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnSessionInviteReceived] Could not get a session handle from invite id %s"), *FString(data->InviteId));
	}

	EOS_SessionDetails_Release(m_SessionDetailsHandle);
}

void FOnlineSessionEOSCore::OnSessionInviteAccepted(const EOS_Sessions_SessionInviteAcceptedCallbackInfo* data)
{
	LogVerbose("");

	FOnlineSessionEOSCore* m_SessionInterface = (FOnlineSessionEOSCore*)data->ClientData;
	check(m_SessionInterface);

	FString m_LocalUserIdStr;
	FString m_RemoteUserIdStr;

	EOS_EResult m_ConvertResult = EOSSubsystemHelpers::ProductIdToString(data->LocalUserId, m_LocalUserIdStr);

	if (m_ConvertResult != EOS_EResult::EOS_Success)
	{
		LogWarning("Failed converting local user id to string: %s ", *FString(EOS_EResult_ToString(m_ConvertResult)));
		return;
	}

	m_ConvertResult = EOSSubsystemHelpers::ProductIdToString(data->TargetUserId, m_RemoteUserIdStr);

	if (m_ConvertResult != EOS_EResult::EOS_Success)
	{
		LogWarning("Failed converting local user id to string: %s ", *FString(EOS_EResult_ToString(m_ConvertResult)));
		return;
	}

	const TSharedRef<FUniqueNetId const> m_LocalUserId = MakeShared<FUniqueNetIdEOSCore>(m_LocalUserIdStr);
	const TSharedRef<FUniqueNetId const> m_RemoteUserId = MakeShared<FUniqueNetIdEOSCore>(m_RemoteUserIdStr);

	EOS_HSessionDetails m_SessionDetailsHandle = NULL;
	EOS_Sessions_CopySessionHandleByInviteIdOptions m_SessionHandleByInviteIdOptions = { EOS_SESSIONS_COPYSESSIONHANDLEBYINVITEID_API_LATEST, data->InviteId };

	EOS_EResult m_Result = EOS_Sessions_CopySessionHandleByInviteId(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_SessionHandleByInviteIdOptions, &m_SessionDetailsHandle);

	if (m_Result == EOS_EResult::EOS_Success)
	{
		EOS_SessionDetails_Info* m_SessionInfo = new EOS_SessionDetails_Info;
		EOS_SessionDetails_CopyInfoOptions m_CopyInfoOptions = { EOS_SESSIONDETAILS_COPYINFO_API_LATEST };

		m_Result = EOS_SessionDetails_CopyInfo(m_SessionDetailsHandle, &m_CopyInfoOptions, &m_SessionInfo);

		if (m_Result == EOS_EResult::EOS_Success)
		{
			FOnlineSessionSearchResult m_SearchResult;

			m_SearchResult.Session.SessionSettings.Set("INVITE_ID", FString(data->InviteId));
			m_SearchResult.PingInMs = -1;

			EOSSubsystemHelpers::UpdateSessionDetails(SessionDetailsHandle, &m_SearchResult.Session, m_SessionInfo);

			IOnlineIdentityPtr m_IdentityInterface = m_SessionInterface->Subsystem->GetIdentityInterface();
			FPlatformUserId m_UserId = m_IdentityInterface->GetPlatformUserIdFromUniqueNetId(*m_LocalUserId);

			m_SessionInterface->TriggerOnSessionUserInviteAcceptedDelegates(true, m_UserId, m_LocalUserId, m_SearchResult);
		}
		else
		{
			UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnSessionInviteAccepted] EOS_SessionDetails_CopyInfo Error: %s"), *FString(EOS_EResult_ToString(m_Result)));
			m_SessionInterface->TriggerOnSessionUserInviteAcceptedDelegates(false, 0, m_LocalUserId, FOnlineSessionSearchResult());
		}

		EOS_SessionDetails_Info_Release(m_SessionInfo);
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnSessionInviteAccepted] EOS_Sessions_CopySessionHandleByInviteId Error: %s"), *FString(EOS_EResult_ToString(m_Result)));
		m_SessionInterface->TriggerOnSessionUserInviteAcceptedDelegates(false, 0, m_LocalUserId, FOnlineSessionSearchResult());
	}

	EOS_SessionDetails_Release(m_SessionDetailsHandle);
}

void FOnlineSessionEOSCore::OnDestroySessionComplete(const EOS_Sessions_DestroySessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSessionsDestroySessionCallbackInfo* m_DestroySessionInfo = (FSessionsDestroySessionCallbackInfo*)data->ClientData;
	FOnlineSessionEOSCore* m_SessionInterface = m_DestroySessionInfo->SessionInterface;
	FName m_SessionName = m_DestroySessionInfo->SessionName;

	if (data->ResultCode != EOS_EResult::EOS_Success)
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnDestroySessionComplete] Couldn't destroy session. Error: %s"), UTF8_TO_TCHAR(EOS_EResult_ToString(data->ResultCode)));

		m_SessionInterface->TriggerOnDestroySessionCompleteDelegates(m_SessionName, false);
		delete m_DestroySessionInfo;

		return;
	}

	if (FNamedOnlineSession* m_Session = m_SessionInterface->GetNamedSession(m_SessionName))
	{
		m_SessionInterface->RemoveNamedSession(m_SessionName);
		m_SessionInterface->TriggerOnDestroySessionCompleteDelegates(m_SessionName, true);
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("[FOnlineSessionEOSCore::OnDestroySessionComplete] Session %s changed on backend, but local session not found."), *m_SessionName.ToString());
	}

	delete m_DestroySessionInfo;
}
