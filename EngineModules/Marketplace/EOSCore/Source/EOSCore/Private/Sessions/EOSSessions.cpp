/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Sessions/EOSSessions.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSHelpers.h"
#include "Core/EOSCoreLogging.h"

UCoreSessions* UCoreSessions::SessionsObject = nullptr;

UCoreSessions::UCoreSessions()
{
	SessionsObject = this;
}

void UCoreSessions::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		{
			EOS_Sessions_AddNotifySessionInviteReceivedOptions m_Options = { EOS_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVED_API_LATEST };

			EOS_Sessions_AddNotifySessionInviteReceived(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Sessions_SessionInviteReceivedCallbackInfo* data)
			{
				LogVerbose("");

				UCoreSessions* m_Sessions = static_cast<UCoreSessions*>(data->ClientData);
				check(m_Sessions);

				if (m_Sessions)
					m_Sessions->OnSessionInviteReceivedCallbackDelegate.Broadcast(*data);

				for (auto& m_Element : OnSessionInviteReceivedCallbacks)
				{
					m_Element.Value.ExecuteIfBound(*data);
				}
			}));
		}

		{
			EOS_Sessions_AddNotifySessionInviteAcceptedOptions m_Options = { EOS_SESSIONS_ADDNOTIFYSESSIONINVITEACCEPTED_API_LATEST };

			EOS_Sessions_AddNotifySessionInviteAccepted(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Sessions_SessionInviteAcceptedCallbackInfo* data)
			{
				LogVerbose("");

				UCoreSessions* m_Sessions = static_cast<UCoreSessions*>(data->ClientData);
				check(m_Sessions);

				SessionsObject->OnSessionInviteAcceptedCallbackDelegate.Broadcast(*data);

				for (auto& m_Element : OnSessionInviteAcceptedCallbacks)
				{
					m_Element.Value.ExecuteIfBound(*data);
				}
			}));
		}

		{
			EOS_Sessions_AddNotifyJoinSessionAcceptedOptions m_Options = { EOS_SESSIONS_ADDNOTIFYJOINSESSIONACCEPTED_API_LATEST };

			EOS_Sessions_AddNotifyJoinSessionAccepted(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Sessions_JoinSessionAcceptedCallbackInfo* data)
				{
					LogVerbose("");

					UCoreSessions* m_Sessions = static_cast<UCoreSessions*>(data->ClientData);
					check(m_Sessions);

					SessionsObject->OnSessionJoinSessionAcceptedCallbackInfo.Broadcast(*data);

					for (auto& m_Element : OnSessionJoinSessionAcceptedCallbacks)
					{
						m_Element.Value.ExecuteIfBound(*data);
					}
				}));
		}
	}
}

void UCoreSessions::Deinitialize()
{
	for (auto& m_Element : OnSessionInviteReceivedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	for (auto& m_Element : OnSessionInviteAcceptedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	Super::Deinitialize();
}

EOSResult UCoreSessions::EOSSessionsCreateSessionModification(FEOSSessionsCreateSessionModificationOptions options, FEOSHSessionModification& outSessionModificationHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_SessionName = TCHAR_TO_UTF8(*options.SessionName);

		EOS_Sessions_CreateSessionModificationOptions m_Options = { options.ApiVersion, m_SessionName.c_str(), options.BucketId.Data.c_str(), static_cast<uint32_t>(options.MaxPlayers), options.LocalUserId, options.bPresenceEnabled };
		EOS_HSessionModification m_Handle = NULL;
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_CreateSessionModification(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionModificationHandle = m_Handle;
		}
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionsUpdateSessionModification(FEOSSessionsUpdateSessionModificationOptions options, FEOSHSessionModification& outSessionModificationHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_SessionName = TCHAR_TO_UTF8(*options.SessionName);

		EOS_Sessions_UpdateSessionModificationOptions m_Options = { options.ApiVersion, m_SessionName.c_str() };
		EOS_HSessionModification m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_UpdateSessionModification(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionModificationHandle = m_Handle;
		}
	}

	return m_Result;
}

void UCoreSessions::EOSSessionsUpdateSession(const FEOSSessionsUpdateSessionOptions& options, const FOnSessionUpdateSessionCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_UpdateSessionOptions m_Options = { options.ApiVersion, options.SessionModificationHandle };
		FUpdateSessionCallback* m_Data = new FUpdateSessionCallback({ this, callback });
		EOS_Sessions_UpdateSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionsUpdateSessionCallback);
	}
}

void UCoreSessions::EOSSessionsDestroySession(FEOSSessionsDestroySessionOptions options, const FOnSessionDestroySessionCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_DestroySessionOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.SessionName) };
		FDestroySessionCallback* m_Data = new FDestroySessionCallback({ this, callback });
		EOS_Sessions_DestroySession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionsDestroySessionCallback);
	}
}

void UCoreSessions::EOSSessionsJoinSession(FEOSSessionsJoinSessionOptions options, const FOnSessionJoinSessionCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_JoinSessionOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.SessionName), options.SessionHandle, options.LocalUserId, options.bPresenceEnabled };
		FJoinSessionCallback* m_Data = new FJoinSessionCallback({ this, callback });
		EOS_Sessions_JoinSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionsJoinSessionCallback);
	}
}

void UCoreSessions::EOSSessionsStartSession(FEOSSessionsStartSessionOptions options, const FOnSessionStartSessionCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_StartSessionOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.SessionName) };
		FStartSessionCallback* m_Data = new FStartSessionCallback({ this, callback });
		EOS_Sessions_StartSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionsStartSessionCallback);
	}
}

void UCoreSessions::EOSSessionsEndSession(FEOSSessionsEndSessionOptions options, const FOnSessionEndSessionCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_EndSessionOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.SessionName) };
		FEndSessionCallback* m_Data = new FEndSessionCallback({ this, callback });
		EOS_Sessions_EndSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionsEndSessionCallback);
	}
}

void UCoreSessions::EOSSessionsRegisterPlayers(FEOSSessionsRegisterPlayersOptions options, const FOnSessionRegisterPlayersCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_RegisterPlayersOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.SessionName), new EOS_ProductUserId[options.PlayersToRegister.Num()], static_cast<uint32_t>(options.PlayersToRegister.Num()) };

		if (options.PlayersToRegister.Num() > 0)
		{
			for (int32 i = 0; i < options.PlayersToRegister.Num(); i++)
				m_Options.PlayersToRegister[i] = options.PlayersToRegister[i];
		}
		else
		{
			m_Options.PlayersToRegister = NULL;
			m_Options.PlayersToRegisterCount = 0;
		}
		FRegisterPlayersCallback* m_Data = new FRegisterPlayersCallback({ this, callback });
		EOS_Sessions_RegisterPlayers(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionRegisterPlayersCallback);

		delete[] m_Options.PlayersToRegister;
	}
}

void UCoreSessions::EOSSessionsUnregisterPlayers(FEOSSessionsUnregisterPlayersOptions options, const FOnSessionUnregisterPlayersCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_UnregisterPlayersOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.SessionName), new EOS_ProductUserId[options.PlayersToUnregister.Num()], static_cast<uint32_t>(options.PlayersToUnregister.Num()) };

		if (options.PlayersToUnregister.Num() > 0)
		{
			for (int32 i = 0; i < options.PlayersToUnregister.Num(); i++)
				m_Options.PlayersToUnregister[i] = options.PlayersToUnregister[i];
		}
		else
		{
			m_Options.PlayersToUnregister = NULL;
		}
		FUnregisterPlayersCallback* m_Data = new FUnregisterPlayersCallback({ this, callback });
		EOS_Sessions_UnregisterPlayers(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionsUnregisterPlayersCallback);

		delete[] m_Options.PlayersToUnregister;
	}
}

void UCoreSessions::EOSSessionsSendInvite(FEOSSessionsSendInviteOptions options, const FOnSessionSessionSendInviteCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_SendInviteOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.SessionName), options.LocalUserId, options.TargetUserId };
		FSendInviteCallback* m_Data = new FSendInviteCallback({ this, callback });
		EOS_Sessions_SendInvite(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionsSendInviteCallback);
	}
}

void UCoreSessions::EOSSessionsRejectInvite(FEOSSessionsRejectInviteOptions options, const FOnSessionRejectInviteCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_RejectInviteOptions m_Options = { options.ApiVersion, options.LocalUserId, options.InviteId.Data.c_str() };
		FRejectInviteCallback* m_Data = new FRejectInviteCallback({ this, callback });
		EOS_Sessions_RejectInvite(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionsRejectInviteCallback);
	}
}

void UCoreSessions::EOSSessionsQueryInvites(FEOSSessionsQueryInvitesOptions options, const FOnSessionQueryInvitesCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_QueryInvitesOptions m_Options = { options.ApiVersion, options.LocalUserId };
		FQueryInvitesCallback* m_Data = new FQueryInvitesCallback({ this, callback });
		EOS_Sessions_QueryInvites(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnSessionsQueryInvitesCallback);
	}
}

int32 UCoreSessions::EOSSessionsGetInviteCount(FEOSSessionsGetInviteCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_GetInviteCountOptions m_Options = { options.ApiVersion, options.LocalUserId };

		m_Data = EOS_Sessions_GetInviteCount(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Data;
}

EOSResult UCoreSessions::EOSSessionsGetInviteIdByIndex(FEOSSessionsGetInviteIdByIndexOptions options, FString& outBuffer)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_GetInviteIdByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<uint32_t>(options.Index) };
		
		char* m_Buffer = new char[1024];
		int32_t* m_BufferLen = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_GetInviteIdByIndex(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Buffer, m_BufferLen));

		if (m_Result == EOSResult::EOS_Success)
		{
			outBuffer = m_Buffer;
		}

		delete[] m_Buffer;
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionsCreateSessionSearch(FEOSSessionsCreateSessionSearchOptions options, FEOSHSessionSearch& outSessionSearchHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_CreateSessionSearchOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.MaxSearchResults) };
		EOS_HSessionSearch m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_CreateSessionSearch(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionSearchHandle = m_Handle;
		}
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionsCopyActiveSessionHandle(FEOSSessionsCopyActiveSessionHandleOptions options, FEOSHActiveSession& outSessionHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_SessionName = TCHAR_TO_UTF8(*options.SessionName);

		EOS_Sessions_CopyActiveSessionHandleOptions m_Options = { options.ApiVersion, m_SessionName.c_str() };
		EOS_HActiveSession m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_CopyActiveSessionHandle(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionHandle = m_Handle;
		}
	}

	return m_Result;
}

FEOSNotificationId UCoreSessions::EOSSessionsAddNotifySessionInviteReceived(const FOnSessionInviteReceivedCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_AddNotifySessionInviteReceivedOptions m_Options = { EOS_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVED_API_LATEST };

		m_ID = EOS_Sessions_AddNotifySessionInviteReceived(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Sessions_SessionInviteReceivedCallbackInfo* data){}));
		OnSessionInviteReceivedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreSessions::EOSSessionsRemoveNotifySessionInviteReceived(FEOSNotificationId id)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_RemoveNotifySessionInviteReceived(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), id);
		OnSessionInviteReceivedCallbacks.Remove(id);
	}
}

FEOSNotificationId UCoreSessions::EOSSessionsAddNotifySessionInviteAccepted(const FOnSessionInviteAcceptedCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_AddNotifySessionInviteAcceptedOptions m_Options = { EOS_SESSIONS_ADDNOTIFYSESSIONINVITEACCEPTED_API_LATEST };

		m_ID = EOS_Sessions_AddNotifySessionInviteAccepted(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Sessions_SessionInviteAcceptedCallbackInfo* data){}));
		OnSessionInviteAcceptedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreSessions::EOSSessionsRemoveNotifySessionInviteAccepted(FEOSNotificationId id)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_RemoveNotifySessionInviteAccepted(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), id);
		OnSessionInviteAcceptedCallbacks.Remove(id);
	}
}


FEOSNotificationId UCoreSessions::EOSSessionsAddNotifyJoinSessionAccepted(const FOnSessionJoinSessionAcceptedCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_AddNotifyJoinSessionAcceptedOptions m_Options = { EOS_SESSIONS_ADDNOTIFYJOINSESSIONACCEPTED_API_LATEST };

		m_ID = EOS_Sessions_AddNotifyJoinSessionAccepted(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Sessions_JoinSessionAcceptedCallbackInfo* data) {}));
		OnSessionJoinSessionAcceptedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}


void UCoreSessions::EOSSessionsRemoveNotifyJoinSessionAccepted(FEOSNotificationId id)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_RemoveNotifySessionInviteAccepted(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), id);
		OnSessionJoinSessionAcceptedCallbacks.Remove(id);
	}
}

EOSResult UCoreSessions::EOSSessionsCopySessionHandleByInviteId(FEOSSessionsCopySessionHandleByInviteIdOptions options, FEOSHSessionDetails& outSessionHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_CopySessionHandleByInviteIdOptions m_Options = { options.ApiVersion, options.InviteId.Data.c_str() };
		EOS_HSessionDetails m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_CopySessionHandleByInviteId(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionHandle = m_Handle;
			EOS_SessionDetails_Release(m_Handle);
		}
	}

	return m_Result;
}


EOSResult UCoreSessions::EOSSessionsCopySessionHandleByUiEventId(FEOSSessionsCopySessionHandleByUiEventIdOptions options, FEOSHSessionDetails& outSessionHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_CopySessionHandleByUiEventIdOptions m_Options = { options.ApiVersion, options.UiEventId };
		EOS_HSessionDetails m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_CopySessionHandleByUiEventId(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionHandle = m_Handle;
			EOS_SessionDetails_Release(m_Handle);
		}
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionsCopySessionHandleForPresence(FEOSSessionsCopySessionHandleForPresenceOptions options, FEOSHSessionDetails& outSessionHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Sessions_CopySessionHandleForPresenceOptions m_Options = { options.ApiVersion, options.LocalUserId };
		EOS_HSessionDetails m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_CopySessionHandleForPresence(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionHandle = m_Handle;
			EOS_SessionDetails_Release(m_Handle);
		}
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionsIsUserInSession(FEOSSessionsIsUserInSessionOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_SessionName = TCHAR_TO_UTF8(*options.SessionName);

		EOS_Sessions_IsUserInSessionOptions m_Options = { options.ApiVersion, m_SessionName.c_str(), options.TargetUserId };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_IsUserInSession(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionsDumpSessionState(FEOSSessionsDumpSessionStateOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_SessionName = TCHAR_TO_UTF8(*options.SessionName);

		EOS_Sessions_DumpSessionStateOptions m_Options = { options.ApiVersion, m_SessionName.c_str() };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Sessions_DumpSessionState(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionModificationSetBucketId(const FEOSHSessionModification& handle, FEOSSessionModificationSetBucketIdOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionModification_SetBucketIdOptions m_Options = { options.ApiVersion, options.BucketId.Data.c_str() };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionModification_SetBucketId(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionModificationSetHostAddress(const FEOSHSessionModification& handle, FEOSSessionModificationSetHostAddressOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string hostAddr = TCHAR_TO_UTF8(*options.HostAddress);

		EOS_SessionModification_SetHostAddressOptions m_Options = { options.ApiVersion, hostAddr.c_str() };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionModification_SetHostAddress(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionModificationSetPermissionLevel(const FEOSHSessionModification& handle, FEOSSessionModificationSetPermissionLevelOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionModification_SetPermissionLevelOptions m_Options = { options.ApiVersion, static_cast<EOS_EOnlineSessionPermissionLevel>(options.PermissionLevel) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionModification_SetPermissionLevel(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionModificationSetJoinInProgressAllowed(const FEOSHSessionModification& handle, FEOSSessionModificationSetJoinInProgressAllowedOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionModification_SetJoinInProgressAllowedOptions m_Options = { options.ApiVersion, options.bAllowJoinInProgress };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionModification_SetJoinInProgressAllowed(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionModificationSetMaxPlayers(const FEOSHSessionModification& handle, FEOSSessionModificationSetMaxPlayersOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionModification_SetMaxPlayersOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.MaxPlayers) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionModification_SetMaxPlayers(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionModificationSetInvitesAllowed(const FEOSHSessionModification& handle, FEOSSessionModificationSetInvitesAllowedOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionModification_SetInvitesAllowedOptions m_Options = { options.ApiVersion, options.bInvitesAllowed };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionModification_SetInvitesAllowed(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionModificationAddAttribute(const FEOSHSessionModification& handle, const FEOSSessionModificationAddAttributeOptions& options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionModification_AddAttributeOptions m_Options = { options.ApiVersion, &options.Data.AttributeData, static_cast<EOS_ESessionAttributeAdvertisementType>(options.AdvertisementType) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionModification_AddAttribute(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionModificationAddAttributeBool(const FEOSHSessionModification& handle, EEOSESessionAttributeAdvertisementType advertisementType, const FString& key, bool bValue)
{
	FEOSSessionModificationAddAttributeOptions m_Options;
	
	m_Options.AdvertisementType = advertisementType;

	std::string m_Key = TCHAR_TO_UTF8(*key);
	EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, m_Key.c_str() };
	m_AttrData.Value.AsBool = bValue;
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

	m_Options.Data.AttributeData = m_AttrData;
	
	return EOSSessionModificationAddAttribute(handle, m_Options);
}

EOSResult UCoreSessions::EOSSessionModificationAddAttributeDouble(const FEOSHSessionModification& handle, EEOSESessionAttributeAdvertisementType advertisementType, const FString& key, const FString& value)
{
	FEOSSessionModificationAddAttributeOptions m_Options;
	
	m_Options.AdvertisementType = advertisementType;

	std::string m_Key = TCHAR_TO_UTF8(*key);
	EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, m_Key.c_str() };
	m_AttrData.Value.AsDouble = FCString::Atod(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_DOUBLE;

	m_Options.Data.AttributeData = m_AttrData;

	return EOSSessionModificationAddAttribute(handle, m_Options);
}

EOSResult UCoreSessions::EOSSessionModificationAddAttributeInt64(const FEOSHSessionModification& handle, EEOSESessionAttributeAdvertisementType advertisementType, const FString& key, const FString& value)
{
	FEOSSessionModificationAddAttributeOptions m_Options;
	
	m_Options.AdvertisementType = advertisementType;

	std::string m_Key = TCHAR_TO_UTF8(*key);
	EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, m_Key.c_str() };
	m_AttrData.Value.AsInt64 = FCString::Atoi64(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;

	m_Options.Data.AttributeData = m_AttrData;

	return EOSSessionModificationAddAttribute(handle, m_Options);
}

EOSResult UCoreSessions::EOSSessionModificationAddAttributeString(const FEOSHSessionModification& handle, EEOSESessionAttributeAdvertisementType advertisementType, const FString& key, const FString& value)
{
	FEOSSessionModificationAddAttributeOptions m_Options;

	m_Options.AdvertisementType = advertisementType;

	std::string m_Key = TCHAR_TO_UTF8(*key);
	std::string m_Value = TCHAR_TO_UTF8(*value);

	EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, m_Key.c_str() };

	m_AttrData.Value.AsUtf8 = m_Value.c_str();
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_STRING;

	m_Options.Data.AttributeData = m_AttrData;

	return EOSSessionModificationAddAttribute(handle, m_Options);
}

EOSResult UCoreSessions::EOSSessionModificationRemoveAttribute(const FEOSHSessionModification& handle, const FEOSSessionModificationRemoveAttributeOptions& options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Key = TCHAR_TO_UTF8(*options.Key);

		EOS_SessionModification_RemoveAttributeOptions m_Options = { options.ApiVersion, m_Key.c_str() };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionModification_RemoveAttribute(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSActiveSessionCopyInfo(const FEOSHActiveSession& handle, FEOSActiveSessionCopyInfoOptions options, FEOSActiveSessionInfo& outActiveSessionInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_ActiveSession_CopyInfoOptions m_Options = { options.ApiVersion };
		EOS_ActiveSession_Info* m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_ActiveSession_CopyInfo(handle, &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outActiveSessionInfo = *m_Handle;
			EOS_ActiveSession_Info_Release(m_Handle);
		}
	}

	return m_Result;
}

int32 UCoreSessions::EOSActiveSessionGetRegisteredPlayerCount(const FEOSHActiveSession& handle, FEOSActiveSessionGetRegisteredPlayerCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_ActiveSession_GetRegisteredPlayerCountOptions m_Options = { options.ApiVersion };

		m_Data = EOS_ActiveSession_GetRegisteredPlayerCount(handle, &m_Options);
	}

	return m_Data;
}

FEOSProductUserId UCoreSessions::EOSActiveSessionGetRegisteredPlayerByIndex(const FEOSHActiveSession& handle, FEOSActiveSessionGetRegisteredPlayerByIndexOptions options)
{
	FEOSProductUserId m_ID;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_ActiveSession_GetRegisteredPlayerByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.PlayerIndex) };

		m_ID = EOS_ActiveSession_GetRegisteredPlayerByIndex(handle, &m_Options);
	}

	return m_ID;
}

EOSResult UCoreSessions::EOSSessionDetailsCopyInfo(const FEOSHSessionDetails& handle, FEOSSessionDetailsCopyInfoOptions options, FEOSSessionDetailsInfo& outSessionInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionDetails_CopyInfoOptions m_Options = { options.ApiVersion };
		EOS_SessionDetails_Info* m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionDetails_CopyInfo(handle, &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionInfo = *m_Handle;
			EOS_SessionDetails_Info_Release(m_Handle);
		}
	}

	return m_Result;
}

int32 UCoreSessions::EOSSessionDetailsGetSessionAttributeCount(const FEOSHSessionDetails& handle, FEOSSessionDetailsGetSessionAttributeCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionDetails_GetSessionAttributeCountOptions m_Options = { options.ApiVersion };

		m_Data = EOS_SessionDetails_GetSessionAttributeCount(handle, &m_Options);
	}

	return m_Data;
}

EOSResult UCoreSessions::EOSSessionDetailsCopySessionAttributeByIndex(const FEOSHSessionDetails& handle, FEOSSessionDetailsCopySessionAttributeByIndexOptions options, FEOSSessionDetailsAttribute& outSessionAttribute)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionDetails_CopySessionAttributeByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.AttrIndex) };
		EOS_SessionDetails_Attribute* m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionDetails_CopySessionAttributeByIndex(handle, &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionAttribute = *m_Handle;
			EOS_SessionDetails_Attribute_Release(m_Handle);
		}
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionDetailsCopySessionAttributeByKey(const FEOSHSessionDetails& handle, FEOSSessionDetailsCopySessionAttributeByKeyOptions options, FEOSSessionDetailsAttribute& outSessionAttribute)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Key = TCHAR_TO_UTF8(*options.AttrKey);

		EOS_SessionDetails_CopySessionAttributeByKeyOptions m_Options = { options.ApiVersion, m_Key.c_str() };
		EOS_SessionDetails_Attribute* m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionDetails_CopySessionAttributeByKey(handle, &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionAttribute = *m_Handle;
		}
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionSearchSetSessionId(const FEOSHSessionSearch& handle, FEOSSessionSearchSetSessionIdOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string sessionId = TCHAR_TO_UTF8(*options.SessionId);

		EOS_SessionSearch_SetSessionIdOptions m_Options = { options.ApiVersion, sessionId.c_str() };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionSearch_SetSessionId(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionSearchSetTargetUserId(const FEOSHSessionSearch& handle, FEOSSessionSearchSetTargetUserIdOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionSearch_SetTargetUserIdOptions m_Options = { options.ApiVersion, options.TargetUserId };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionSearch_SetTargetUserId(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionSearchSetParameter(const FEOSHSessionSearch& handle, const FEOSSessionSearchSetParameterOptions& options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionSearch_SetParameterOptions m_Options = { options.ApiVersion, &options.Parameter.AttributeData, static_cast<EOS_EOnlineComparisonOp>(options.ComparisonOp) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionSearch_SetParameter(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionSearchSetParameterBool(const FEOSHSessionSearch& handle, FString key, bool bValue, EEOSEComparisonOp comparisonOp)
{
	FEOSSessionSearchSetParameterOptions m_Options;

	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST,m_Key.c_str(), { bValue }, EOS_ESessionAttributeType::EOS_AT_BOOLEAN };
	m_AttrData.Value.AsBool = bValue;
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

	m_Options.ComparisonOp = comparisonOp;
	m_Options.Parameter.AttributeData = m_AttrData;

	return EOSSessionSearchSetParameter(handle, m_Options);
}

EOSResult UCoreSessions::EOSSessionSearchSetParameterDouble(const FEOSHSessionSearch& handle, FString key, FString value, EEOSEComparisonOp comparisonOp)
{
	FEOSSessionSearchSetParameterOptions m_Options;

	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, m_Key.c_str() };
	m_AttrData.Value.AsDouble = FCString::Atod(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_DOUBLE;

	m_Options.ComparisonOp = comparisonOp;
	m_Options.Parameter.AttributeData = m_AttrData;
	
	return EOSSessionSearchSetParameter(handle, m_Options);
}

EOSResult UCoreSessions::EOSSessionSearchSetParameterInt64(const FEOSHSessionSearch& handle, FString key, FString value, EEOSEComparisonOp comparisonOp)
{
	FEOSSessionSearchSetParameterOptions m_Options;

	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, m_Key.c_str() };
	m_AttrData.Value.AsInt64 = FCString::Atoi64(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;

	m_Options.ComparisonOp = comparisonOp;
	m_Options.Parameter.AttributeData = m_AttrData;

	return EOSSessionSearchSetParameter(handle, m_Options);
}

EOSResult UCoreSessions::EOSSessionSearchSetParameterString(const FEOSHSessionSearch& handle, FString key, FString value, EEOSEComparisonOp comparisonOp)
{
	FEOSSessionSearchSetParameterOptions m_Options;

	std::string m_Key = TCHAR_TO_UTF8(*key);
	std::string m_Value = TCHAR_TO_UTF8(*value);

	EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, m_Key.c_str() };
	
	m_AttrData.Value.AsUtf8 = m_Value.c_str();
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_STRING;

	m_Options.ComparisonOp = comparisonOp;
	m_Options.Parameter.AttributeData = m_AttrData;

	return EOSSessionSearchSetParameter(handle, m_Options);
}

EOSResult UCoreSessions::EOSSessionSearchRemoveParameter(const FEOSHSessionSearch& handle, FEOSSessionSearchRemoveParameterOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Key = TCHAR_TO_UTF8(*options.Key);

		EOS_SessionSearch_RemoveParameterOptions m_Options = { options.ApiVersion, m_Key.c_str(), static_cast<EOS_EOnlineComparisonOp>(options.ComparisonOp) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionSearch_RemoveParameter(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreSessions::EOSSessionSearchSetMaxResults(const FEOSHSessionSearch& handle, FEOSSessionSearchSetMaxResultsOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionSearch_SetMaxResultsOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.MaxSearchResults) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionSearch_SetMaxResults(handle, &m_Options));
	}

	return m_Result;
}

void UCoreSessions::EOSSessionSearchFind(const FEOSHSessionSearch& handle, FEOSSessionSearchFindOptions options, const FOnSessionFindCallback& callback)
{
	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionSearch_FindOptions m_Options = { options.ApiVersion, options.LocalUserId };
		FSessionFindCallback* m_Data = new FSessionFindCallback({ this, callback });
		EOS_SessionSearch_Find(handle, &m_Options, m_Data, Internal_OnSessionsFindCallback);
	}
}

int32 UCoreSessions::EOSSessionSearchGetSearchResultCount(const FEOSHSessionSearch& handle, FEOSSessionSearchGetSearchResultCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionSearch_GetSearchResultCountOptions m_Options = { options.ApiVersion };

		m_Data = EOS_SessionSearch_GetSearchResultCount(handle, &m_Options);
	}

	return m_Data;
}

EOSResult UCoreSessions::EOSSessionSearchCopySearchResultByIndex(const FEOSHSessionSearch& handle, const FEOSSessionSearchCopySearchResultByIndexOptions& options, FEOSHSessionDetails& outSessionHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_SessionSearch_CopySearchResultByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.SessionIndex) };
		EOS_HSessionDetails m_Handle = NULL;
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_SessionSearch_CopySearchResultByIndex(handle, &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outSessionHandle = m_Handle;
		}
	}

	return m_Result;
}

void UCoreSessions::EOSSessionModificationRelease(const FEOSHSessionModification& handle)
{
	EOS_SessionModification_Release(handle);
}

void UCoreSessions::EOSActiveSessionRelease(const FEOSHActiveSession& handle)
{
	EOS_ActiveSession_Release(handle);
}

void UCoreSessions::EOSSessionDetailsRelease(const FEOSHSessionDetails& handle)
{
	EOS_SessionDetails_Release(handle);
}

void UCoreSessions::EOSSessionSearchRelease(const FEOSHSessionSearch& handle)
{
	EOS_SessionSearch_Release(handle);
}

void UCoreSessions::Internal_OnSessionsUpdateSessionCallback(const EOS_Sessions_UpdateSessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FUpdateSessionCallback* m_Data = static_cast<FUpdateSessionCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionUpdateSessionCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionsDestroySessionCallback(const EOS_Sessions_DestroySessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FDestroySessionCallback* m_Data = static_cast<FDestroySessionCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionDestroySessionCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionsJoinSessionCallback(const EOS_Sessions_JoinSessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FJoinSessionCallback* m_Data = static_cast<FJoinSessionCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionJoinSessionCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionsStartSessionCallback(const EOS_Sessions_StartSessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FStartSessionCallback* m_Data = static_cast<FStartSessionCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionStartSessionCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionsEndSessionCallback(const EOS_Sessions_EndSessionCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FEndSessionCallback* m_Data = static_cast<FEndSessionCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionEndSessionCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionRegisterPlayersCallback(const EOS_Sessions_RegisterPlayersCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FRegisterPlayersCallback* m_Data = static_cast<FRegisterPlayersCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionRegisterPlayersCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionsUnregisterPlayersCallback(const EOS_Sessions_UnregisterPlayersCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FUnregisterPlayersCallback* m_Data = static_cast<FUnregisterPlayersCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionUnregisterPlayersCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionsSendInviteCallback(const EOS_Sessions_SendInviteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSendInviteCallback* m_Data = static_cast<FSendInviteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionSessionSendInviteCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionsRejectInviteCallback(const EOS_Sessions_RejectInviteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FRejectInviteCallback* m_Data = static_cast<FRejectInviteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionRejectInviteCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionsQueryInvitesCallback(const EOS_Sessions_QueryInvitesCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryInvitesCallback* m_Data = static_cast<FQueryInvitesCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionQueryInvitesCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreSessions::Internal_OnSessionsFindCallback(const EOS_SessionSearch_FindCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSessionFindCallback* m_Data = static_cast<FSessionFindCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreSessions* m_Sessions = m_Data->SessionsObject;
		check(m_Sessions);

		if (m_Sessions)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Sessions->OnSessionFindCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}