/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Lobby/EOSLobby.h"
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreLobby* UCoreLobby::LobbyObject = nullptr;

UCoreLobby::UCoreLobby()
{
	LobbyObject = this;
}

void UCoreLobby::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	{
		EOS_Lobby_AddNotifyLobbyUpdateReceivedOptions m_Options = { EOS_LOBBY_ADDNOTIFYLOBBYUPDATERECEIVED_API_LATEST };

		EOS_Lobby_AddNotifyLobbyUpdateReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Lobby_LobbyUpdateReceivedCallbackInfo* data)
			{
				LogVerbose("");

				const FEOSLobbyUpdateReceivedCallbackInfo m_Data = *data;
				LobbyObject->OnLobbyUpdateReceivedCallbackInfo.Broadcast(m_Data);

				for (auto& m_Element : LobbyUpdateReceivedCallbacks)
					m_Element.Value.ExecuteIfBound(m_Data);
			}));
	}

	{
		EOS_Lobby_AddNotifyLobbyMemberUpdateReceivedOptions m_Options = { EOS_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVED_API_LATEST };

		EOS_Lobby_AddNotifyLobbyMemberUpdateReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Lobby_LobbyMemberUpdateReceivedCallbackInfo* data)
			{
				LogVerbose("");

				const FEOSLobbyMemberUpdateReceivedCallbackInfo m_Data = *data;
				LobbyObject->OnLobbyMemberUpdateReceivedCallbackInfo.Broadcast(m_Data);

				for (auto& m_Element : LobbyMemberUpdateReceivedCallbacks)
					m_Element.Value.ExecuteIfBound(m_Data);
			}));
	}

	{
		EOS_Lobby_AddNotifyLobbyMemberStatusReceivedOptions m_Options = { EOS_LOBBY_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_API_LATEST };

		EOS_Lobby_AddNotifyLobbyMemberStatusReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Lobby_LobbyMemberStatusReceivedCallbackInfo* data)
			{
				LogVerbose("");

				const FEOSLobbyMemberStatusReceivedCallbackInfo m_Data = *data;
				LobbyObject->OnLobbyMemberStatusReceivedCallbackInfo.Broadcast(m_Data);

				for (auto& m_Element : LobbyMemberStatusReceivedCallbacks)
					m_Element.Value.ExecuteIfBound(m_Data);
			}));
	}

	{
		EOS_Lobby_AddNotifyLobbyInviteReceivedOptions m_Options = { EOS_LOBBY_ADDNOTIFYLOBBYINVITERECEIVED_API_LATEST };

		EOS_Lobby_AddNotifyLobbyInviteReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Lobby_LobbyInviteReceivedCallbackInfo* data)
			{
				LogVerbose("");

				const FEOSLobbyInviteReceivedCallbackInfo m_Data = *data;
				LobbyObject->OnLobbyInviteReceivedCallbackInfo.Broadcast(m_Data);

				for (auto& m_Element : LobbyInviteReceivedCallbacks)
					m_Element.Value.ExecuteIfBound(m_Data);
			}));
	}

	{
		EOS_Lobby_AddNotifyLobbyInviteAcceptedOptions m_Options = { EOS_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTED_API_LATEST };

		EOS_Lobby_AddNotifyLobbyInviteAccepted(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Lobby_LobbyInviteAcceptedCallbackInfo* data)
			{
				LogVerbose("");

				const FEOSLobbyLobbyInviteAcceptedCallbackInfo m_Data = *data;
				LobbyObject->OnLobbyInviteAcceptedCallbackInfo.Broadcast(m_Data);

				for (auto& m_Element : LobbyInviteAcceptedCallback)
					m_Element.Value.ExecuteIfBound(m_Data);
			}));
	}
}

void UCoreLobby::Deinitialize()
{
	for (auto& m_Element : LobbyUpdateReceivedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	for (auto& m_Element : LobbyMemberUpdateReceivedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	for (auto& m_Element : LobbyMemberStatusReceivedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	for (auto& m_Element : LobbyInviteReceivedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	for (auto& m_Element : LobbyInviteAcceptedCallback)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	Super::Deinitialize();
}

void UCoreLobby::EOSLobbyCreateLobby(FEOSLobbyCreateLobbyOptions options, const FOnLobbyCreateLobbyCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_CreateLobbyOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<uint32_t>(options.MaxLobbyMembers), static_cast<EOS_ELobbyPermissionLevel>(options.PermissionLevel) };
		FCreateLobbyCallback* m_Data = new FCreateLobbyCallback({ this, callback });
		EOS_Lobby_CreateLobby(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbyCreateLobbyCallback);
	}
}

void UCoreLobby::EOSLobbyDestroyLobby(FEOSLobbyDestroyLobbyOptions options, const FOnLobbyDestroyLobbyCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_DestroyLobbyOptions m_Options = { options.ApiVersion, options.LocalUserId, options.LobbyId.LobbyID.c_str() };
		FDestroyLobbyCallback* m_Data = new FDestroyLobbyCallback({ this, callback });
		EOS_Lobby_DestroyLobby(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbyDestroyLobbyCallback);
	}
}

void UCoreLobby::EOSLobbyJoinLobby(FEOSLobbyJoinLobbyOptions options, const FOnLobbyJoinLobbyCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_JoinLobbyOptions m_Options = { options.ApiVersion, options.LobbyDetailsHandle, options.LocalUserId };
		FJoinLobbyCallback* m_Data = new FJoinLobbyCallback({ this, callback });
		EOS_Lobby_JoinLobby(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbyJoinLobbyCallback);
	}
}

void UCoreLobby::EOSLobbyLeaveLobby(FEOSLobbyLeaveLobbyOptions options, const FOnLobbyLeaveLobbyCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_LeaveLobbyOptions m_Options = { options.ApiVersion, options.LocalUserId, options.LobbyId.LobbyID.c_str() };
		FLeaveLobbyCallback* m_Data = new FLeaveLobbyCallback({ this, callback });
		EOS_Lobby_LeaveLobby(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbyLeaveLobbyCallback);
	}
}

EOSResult UCoreLobby::EOSLobbyUpdateLobbyModification(FEOSLobbyUpdateLobbyModificationOptions options, FEOSHLobbyModification& outLobbyModificationHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_UpdateLobbyModificationOptions m_Options = { options.ApiVersion, options.LocalUserId, options.LobbyId.LobbyID.c_str() };
		EOS_HLobbyModification m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Lobby_UpdateLobbyModification(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));
		if (m_Result == EOSResult::EOS_Success)
		{
			outLobbyModificationHandle = m_Handle;
		}
	}

	return m_Result;
}

void UCoreLobby::EOSLobbyUpdateLobby(FEOSLobbyUpdateLobbyOptions options, const FOnLobbyUpdateLobbyCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_UpdateLobbyOptions m_Options = { options.ApiVersion, options.LobbyModificationHandle };
		FUpdateLobbyCallback* m_Data = new FUpdateLobbyCallback({ this, callback });
		EOS_Lobby_UpdateLobby(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbyUpdateLobbyCallback);
	}
}

void UCoreLobby::EOSLobbyPromoteMember(FEOSLobbyPromoteMemberOptions options, const FOnLobbyPromoteMemberCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_PromoteMemberOptions m_Options = { options.ApiVersion, options.LobbyId.LobbyID.c_str(), options.LocalUserId, options.TargetUserId };
		FLobbyPromoteMemberCallback* m_Data = new FLobbyPromoteMemberCallback({ this, callback });
		EOS_Lobby_PromoteMember(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbyPromoteMemberCallback);
	}
}

void UCoreLobby::EOSLobbyKickMember(FEOSLobbyKickMemberOptions options, const FOnLobbyKickMemberCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_KickMemberOptions m_Options = { options.ApiVersion, options.LobbyId.LobbyID.c_str(), options.LocalUserId, options.TargetUserId };
		FLobbyKickMemberCallback* m_Data = new FLobbyKickMemberCallback({ this, callback });
		EOS_Lobby_KickMember(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbyKickMemberCallback);
	}
}

static TQueue<FOnLobbyUpdateReceivedCallback> s_OnLobbyUpdateReceivedCallback;
FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyUpdateReceived(const FOnLobbyUpdateReceivedCallback& callback)
{
	static FEOSNotificationId m_ID;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_AddNotifyLobbyUpdateReceivedOptions m_Options = { EOS_LOBBY_ADDNOTIFYLOBBYUPDATERECEIVED_API_LATEST };
		m_ID = EOS_Lobby_AddNotifyLobbyUpdateReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Lobby_LobbyUpdateReceivedCallbackInfo* data) {}));
		LobbyUpdateReceivedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreLobby::EOSLobbyRemoveNotifyLobbyUpdateReceived(FEOSNotificationId id)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_RemoveNotifyLobbyUpdateReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), id);

		LobbyUpdateReceivedCallbacks.Remove(id);
	}
}

FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyMemberUpdateReceived(const FOnLobbyMemberUpdateReceivedCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_AddNotifyLobbyMemberUpdateReceivedOptions m_Options = { EOS_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVED_API_LATEST };

		m_ID = EOS_Lobby_AddNotifyLobbyMemberUpdateReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Lobby_LobbyMemberUpdateReceivedCallbackInfo* data) {}));

		LobbyMemberUpdateReceivedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreLobby::EOSLobbyRemoveNotifyLobbyMemberUpdateReceived(FEOSNotificationId id)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), id);

		LobbyMemberUpdateReceivedCallbacks.Remove(id);
	}
}

FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyMemberStatusReceived(const FOnLobbyMemberStatusReceivedCallback& callback)
{
	static FEOSNotificationId m_ID;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_AddNotifyLobbyMemberStatusReceivedOptions m_Options = { EOS_LOBBY_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_API_LATEST };

		m_ID = EOS_Lobby_AddNotifyLobbyMemberStatusReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Lobby_LobbyMemberStatusReceivedCallbackInfo* data) {}));

		LobbyMemberStatusReceivedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreLobby::EOSLobbyRemoveNotifyLobbyMemberStatusReceived(FEOSNotificationId id)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), id);
		
		LobbyMemberStatusReceivedCallbacks.Remove(id);
	}
}

void UCoreLobby::EOSLobbySendInvite(FEOSLobbySendInviteOptions options, const FOnLobbySendInviteCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_SendInviteOptions m_Options = { options.ApiVersion, options.LobbyId.LobbyID.c_str(), options.LocalUserId, options.TargetUserId };
		FLobbySendInviteCallback* m_Data = new FLobbySendInviteCallback({ this, callback });
		EOS_Lobby_SendInvite(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbySendInviteCallback);
	}
}

void UCoreLobby::EOSLobbyRejectInvite(FEOSLobbyRejectInviteOptions options, const FOnLobbyRejectInviteCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_RejectInviteOptions m_Options = { options.ApiVersion, options.InviteId.InviteId.c_str(), options.LocalUserId };
		FLobbyRejectInviteCallback* m_Data = new FLobbyRejectInviteCallback({ this, callback });
		EOS_Lobby_RejectInvite(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbyRejectInviteCallback);
	}
}

void UCoreLobby::EOSLobbyQueryInvites(FEOSLobbyQueryInvitesOptions options, const FOnLobbyQueryInvitesCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_QueryInvitesOptions m_Options = { options.ApiVersion, options.LocalUserId };
		FLobbyQueryInvitesCallback* m_Data = new FLobbyQueryInvitesCallback({ this, callback });
		EOS_Lobby_QueryInvites(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLobbyQueryInvitesCallback);
	}
}

int32 UCoreLobby::EOSLobbyGetInviteCount(FEOSLobbyGetInviteCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_GetInviteCountOptions m_Options = { options.ApiVersion, options.LocalUserId };

		m_Data = EOS_Lobby_GetInviteCount(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Data;
}

EOSResult UCoreLobby::EOSLobbyGetInviteIdByIndex(FEOSLobbyGetInviteIdByIndexOptions options, FLobbyInviteId& string)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_GetInviteIdByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<uint32_t>(options.Index) };
		
		char m_Buffer[1024];
		int32 m_BufferLen = 1024;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Lobby_GetInviteIdByIndex(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Buffer, &m_BufferLen));

		if (m_Result == EOSResult::EOS_Success)
		{
			string = m_Buffer;
		}
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyCreateLobbySearch(FEOSLobbyCreateLobbySearchOptions options, FEOSHLobbySearch& outLobbySearchHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_CreateLobbySearchOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.MaxResults) };
		EOS_HLobbySearch m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Lobby_CreateLobbySearch(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			outLobbySearchHandle = m_Handle;
		}
	}

	return m_Result;
}

FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyInviteReceived(const FOnLobbyInviteReceivedCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_AddNotifyLobbyInviteReceivedOptions m_Options = { EOS_LOBBY_ADDNOTIFYLOBBYINVITERECEIVED_API_LATEST };

		m_ID = EOS_Lobby_AddNotifyLobbyInviteReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Lobby_LobbyInviteReceivedCallbackInfo* data) {}));

		LobbyInviteReceivedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreLobby::EOSLobbyRemoveNotifyLobbyInviteReceived(FEOSNotificationId id)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_RemoveNotifyLobbyInviteReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), id);

		LobbyInviteReceivedCallbacks.Remove(id);
	}
}


FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyInviteAccepted(FEOSLobbyAddNotifyLobbyInviteAcceptedOptions options, const FOnLobbyInviteAcceptedCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_AddNotifyLobbyInviteAcceptedOptions m_Options = { options.ApiVersion };

		m_ID = EOS_Lobby_AddNotifyLobbyInviteAccepted(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Lobby_LobbyInviteAcceptedCallbackInfo* data) {}));

		LobbyInviteAcceptedCallback.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreLobby::EOSLobbyRemoveNotifyLobbyInviteAccepted(FEOSNotificationId id)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_RemoveNotifyLobbyInviteReceived(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), id);

		LobbyInviteAcceptedCallback.Remove(id);
	}
}

EOSResult UCoreLobby::EOSLobbyCopyLobbyDetailsHandleByInviteId(FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions options, FEOSHLobbyDetails& outLobbyDetailsHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_CopyLobbyDetailsHandleByInviteIdOptions m_Options = { options.ApiVersion, options.InviteId.InviteId.c_str() };
		EOS_HLobbyDetails m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Lobby_CopyLobbyDetailsHandleByInviteId(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLobbyDetailsHandle = m_Handle;
		}
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyCopyLobbyDetailsHandle(FEOSLobbyCopyLobbyDetailsHandleOptions options, FEOSHLobbyDetails& outLobbyDetailsHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Lobby_CopyLobbyDetailsHandleOptions m_Options = { options.ApiVersion, options.LobbyId.LobbyID.c_str(), options.LocalUserId };
		EOS_HLobbyDetails m_Handle = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Lobby_CopyLobbyDetailsHandle(EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLobbyDetailsHandle = m_Handle;
		}
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyModificationSetPermissionLevel(const FEOSHLobbyModification& handle, FEOSLobbyModificationSetPermissionLevelOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyModification_SetPermissionLevelOptions m_Options = { options.ApiVersion, static_cast<EOS_ELobbyPermissionLevel>(options.PermissionLevel) };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyModification_SetPermissionLevel(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyModificationSetMaxMembers(const FEOSHLobbyModification& handle, FEOSLobbyModificationSetMaxMembersOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyModification_SetMaxMembersOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.MaxMembers) };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyModification_SetMaxMembers(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyModificationAddAttribute(const FEOSHLobbyModification& handle, FEOSLobbyModificationAddAttributeOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyModification_AddAttributeOptions m_Options = { options.ApiVersion, &options.Attribute.AttributeData, static_cast<EOS_ELobbyAttributeVisibility>(options.Visibility) };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyModification_AddAttribute(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyModificationAddAttributeBool(const FEOSHLobbyModification& handle, FString key, bool bValue, EEOSELobbyAttributeVisibility visibility)
{
	FEOSLobbyModificationAddAttributeOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str()};
	m_AttrData.Value.AsBool = bValue;
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

	m_Options.Attribute = m_AttrData;
	m_Options.Visibility = visibility;

	return EOSLobbyModificationAddAttribute(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbyModificationAddAttributeDouble(const FEOSHLobbyModification& handle, FString key, FString value, EEOSELobbyAttributeVisibility visibility)
{
	FEOSLobbyModificationAddAttributeOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str()};
	m_AttrData.Value.AsDouble = FCString::Atod(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_DOUBLE;

	m_Options.Attribute = m_AttrData;
	m_Options.Visibility = visibility;

	return EOSLobbyModificationAddAttribute(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbyModificationAddAttributeInt64(const FEOSHLobbyModification& handle, FString key, FString value, EEOSELobbyAttributeVisibility visibility)
{
	FEOSLobbyModificationAddAttributeOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str()};
	m_AttrData.Value.AsInt64 = FCString::Atoi64(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;

	m_Options.Attribute = m_AttrData;
	m_Options.Visibility = visibility;

	return EOSLobbyModificationAddAttribute(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbyModificationAddAttributeString(const FEOSHLobbyModification& handle, FString key, FString value, EEOSELobbyAttributeVisibility visibility)
{
	FEOSLobbyModificationAddAttributeOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);
	std::string m_Value = TCHAR_TO_UTF8(*value);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str() };

	m_AttrData.Value.AsUtf8 = m_Value.c_str();
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_STRING;

	m_Options.Attribute = m_AttrData;
	m_Options.Visibility = visibility;

	return EOSLobbyModificationAddAttribute(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbyModificationRemoveAttribute(const FEOSHLobbyModification& handle, FEOSLobbyModificationRemoveAttributeOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Key = TCHAR_TO_UTF8(*options.Key);
		EOS_LobbyModification_RemoveAttributeOptions m_Options = { options.ApiVersion, m_Key.c_str() };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyModification_RemoveAttribute(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyModificationAddMemberAttribute(const FEOSHLobbyModification& handle, FEOSLobbyModificationAddMemberAttributeOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyModification_AddMemberAttributeOptions m_Options = { options.ApiVersion, &options.Attribute.AttributeData, static_cast<EOS_ELobbyAttributeVisibility>(options.Visibility) };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyModification_AddMemberAttribute(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyModificationAddMemberAttributeBool(const FEOSHLobbyModification& handle, FString key, bool bValue, EEOSELobbyAttributeVisibility visibility)
{
	FEOSLobbyModificationAddMemberAttributeOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str() };
	m_AttrData.Value.AsBool = bValue;
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

	m_Options.Attribute = m_AttrData;
	m_Options.Visibility = visibility;

	return EOSLobbyModificationAddMemberAttribute(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbyModificationAddMemberAttributeDouble(const FEOSHLobbyModification& handle, FString key, FString value, EEOSELobbyAttributeVisibility visibility)
{
	FEOSLobbyModificationAddMemberAttributeOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str()};
	m_AttrData.Value.AsDouble = FCString::Atod(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_DOUBLE;

	m_Options.Attribute = m_AttrData;
	m_Options.Visibility = visibility;

	return EOSLobbyModificationAddMemberAttribute(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbyModificationAddMemberAttributeInt64(const FEOSHLobbyModification& handle, FString key, FString value, EEOSELobbyAttributeVisibility visibility)
{
	FEOSLobbyModificationAddMemberAttributeOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str()};
	m_AttrData.Value.AsInt64 = FCString::Atoi64(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;

	m_Options.Attribute = m_AttrData;
	m_Options.Visibility = visibility;

	return EOSLobbyModificationAddMemberAttribute(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbyModificationAddMemberAttributeString(const FEOSHLobbyModification& handle, FString key, FString value, EEOSELobbyAttributeVisibility visibility)
{
	FEOSLobbyModificationAddMemberAttributeOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);
	std::string m_Value = TCHAR_TO_UTF8(*value);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str() };

	m_AttrData.Value.AsUtf8 = m_Value.c_str();
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_STRING;

	m_Options.Attribute = m_AttrData;
	m_Options.Visibility = visibility;

	return EOSLobbyModificationAddMemberAttribute(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbyModificationRemoveMemberAttribute(const FEOSHLobbyModification& handle, FEOSLobbyModificationRemoveMemberAttributeOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Key = TCHAR_TO_UTF8(*options.Key);

		EOS_LobbyModification_RemoveMemberAttributeOptions m_Options = { options.ApiVersion, m_Key.c_str() };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyModification_RemoveMemberAttribute(handle, &m_Options));
	}

	return m_Result;
}

FEOSProductUserId UCoreLobby::EOSLobbyDetailsGetLobbyOwner(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsGetLobbyOwnerOptions options)
{
	FEOSProductUserId m_Data;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyDetails_GetLobbyOwnerOptions m_Options = { options.ApiVersion };

		m_Data = EOS_LobbyDetails_GetLobbyOwner(handle, &m_Options);
	}

	return m_Data;
}

EOSResult UCoreLobby::EOSLobbyDetailsCopyInfo(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsCopyInfoOptions options, FEOSLobbyDetailsInfo& outLobbyDetailsInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyDetails_CopyInfoOptions m_Options = { options.ApiVersion };
		EOS_LobbyDetails_Info* m_Details = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyDetails_CopyInfo(handle, &m_Options, &m_Details));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLobbyDetailsInfo = *m_Details;
		}
	}

	return m_Result;
}

int32 UCoreLobby::EOSLobbyDetailsGetAttributeCount(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsGetAttributeCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyDetails_GetAttributeCountOptions m_Options = { options.ApiVersion };

		m_Data = EOS_LobbyDetails_GetAttributeCount(handle, &m_Options);
	}
	return m_Data;
}

EOSResult UCoreLobby::EOSLobbyDetailsCopyAttributeByIndex(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsCopyAttributeByIndexOptions options, FEOSLobbyAttribute& outAttribute)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyDetails_CopyAttributeByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.AttrIndex) };
		EOS_Lobby_Attribute* m_Details = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyDetails_CopyAttributeByIndex(handle, &m_Options, &m_Details));

		if (m_Result == EOSResult::EOS_Success)
		{
			outAttribute = *m_Details;
		}
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyDetailsCopyAttributeByKey(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsCopyAttributeByKeyOptions options, FEOSLobbyAttribute& outAttribute)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Key = TCHAR_TO_UTF8(*options.AttrKey);

		EOS_LobbyDetails_CopyAttributeByKeyOptions m_Options = { options.ApiVersion, m_Key.c_str() };
		EOS_Lobby_Attribute* m_Details = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyDetails_CopyAttributeByKey(handle, &m_Options, &m_Details));

		if (m_Result == EOSResult::EOS_Success)
		{
			outAttribute = *m_Details;
		}
	}

	return m_Result;
}

int32 UCoreLobby::EOSLobbyDetailsGetMemberCount(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsGetMemberCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyDetails_GetMemberCountOptions m_Options = { options.ApiVersion };

		m_Data = EOS_LobbyDetails_GetMemberCount(handle, &m_Options);
	}

	return m_Data;
}

FEOSProductUserId UCoreLobby::EOSLobbyDetailsGetMemberByIndex(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsGetMemberByIndexOptions options)
{
	FEOSProductUserId m_Data;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyDetails_GetMemberByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.MemberIndex) };
		
		m_Data = EOS_LobbyDetails_GetMemberByIndex(handle, &m_Options);
	}

	return m_Data;
}

int32 UCoreLobby::EOSLobbyDetailsGetMemberAttributeCount(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsGetMemberAttributeCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyDetails_GetMemberAttributeCountOptions m_Options = { options.ApiVersion, options.TargetUserId };
		
		m_Data = EOS_LobbyDetails_GetMemberAttributeCount(handle, &m_Options);
	}

	return m_Data;
}

EOSResult UCoreLobby::EOSLobbyDetailsCopyMemberAttributeByIndex(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsCopyMemberAttributeByIndexOptions options, FEOSLobbyAttribute& outAttribute)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbyDetails_CopyMemberAttributeByIndexOptions m_Options = { options.ApiVersion, options.TargetUserId, static_cast<uint32_t>(options.AttrIndex) };
		EOS_Lobby_Attribute* m_Details = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyDetails_CopyMemberAttributeByIndex(handle, &m_Options, &m_Details));

		if (m_Result == EOSResult::EOS_Success)
		{
			outAttribute = *m_Details;
		}
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbyDetailsCopyMemberAttributeByKey(const FEOSHLobbyDetails& handle, FEOSLobbyDetailsCopyMemberAttributeByKeyOptions options, FEOSLobbyAttribute& outAttribute)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Key = TCHAR_TO_UTF8(*options.AttrKey);
		
		EOS_LobbyDetails_CopyMemberAttributeByKeyOptions m_Options = { options.ApiVersion, options.TargetUserId, m_Key.c_str() };
		EOS_Lobby_Attribute* m_Details = NULL;
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbyDetails_CopyMemberAttributeByKey(handle, &m_Options, &m_Details));

		if (m_Result == EOSResult::EOS_Success)
		{
			outAttribute = *m_Details;
		}
	}

	return m_Result;
}

void UCoreLobby::EOSLobbySearchFind(const FEOSHLobbySearch& handle, FEOSLobbySearchFindOptions options, const FOnLobbyFindCallback& callback)
{
	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbySearch_FindOptions m_Options = { options.ApiVersion, options.LocalUserId };
		FLobbyFindCallback* m_Data = new FLobbyFindCallback({ this, callback });
		EOS_LobbySearch_Find(handle, &m_Options, m_Data, Internal_OnLobbyFindCallback);
	}
}

EOSResult UCoreLobby::EOSLobbySearchSetLobbyId(const FEOSHLobbySearch& handle, FEOSLobbySearchSetLobbyIdOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbySearch_SetLobbyIdOptions m_Options = { options.ApiVersion, options.LobbyId.LobbyID.c_str() };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbySearch_SetLobbyId(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbySearchSetTargetUserId(const FEOSHLobbySearch& handle, FEOSLobbySearchSetTargetUserIdOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbySearch_SetTargetUserIdOptions m_Options = { options.ApiVersion, options.TargetUserId };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbySearch_SetTargetUserId(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbySearchSetParameter(const FEOSHLobbySearch& handle, FEOSLobbySearchSetParameterOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbySearch_SetParameterOptions m_Options = { options.ApiVersion, &options.Parameter.AttributeData, static_cast<EOS_EComparisonOp>(options.ComparisonOp) };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbySearch_SetParameter(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbySearchSetParameterBool(const FEOSHLobbySearch& handle, FString key, bool bValue, EEOSEComparisonOp comparisonOp)
{
	FEOSLobbySearchSetParameterOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str() };
	m_AttrData.Value.AsBool = bValue;
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

	m_Options.Parameter = m_AttrData;
	m_Options.ComparisonOp = comparisonOp;

	return EOSLobbySearchSetParameter(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbySearchSetParameterDouble(const FEOSHLobbySearch& handle, FString key, FString value, EEOSEComparisonOp comparisonOp)
{
	FEOSLobbySearchSetParameterOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str()};
	m_AttrData.Value.AsDouble = FCString::Atod(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_DOUBLE;

	m_Options.Parameter = m_AttrData;
	m_Options.ComparisonOp = comparisonOp;

	return EOSLobbySearchSetParameter(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbySearchSetParameterInt64(const FEOSHLobbySearch& handle, FString key, FString value, EEOSEComparisonOp comparisonOp)
{
	FEOSLobbySearchSetParameterOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str() };
	m_AttrData.Value.AsInt64 = FCString::Atoi64(*value);
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;

	m_Options.Parameter = m_AttrData;
	m_Options.ComparisonOp = comparisonOp;

	return EOSLobbySearchSetParameter(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbySearchSetParameterString(const FEOSHLobbySearch& handle, FString key, FString value, EEOSEComparisonOp comparisonOp)
{
	FEOSLobbySearchSetParameterOptions m_Options;
	std::string m_Key = TCHAR_TO_UTF8(*key);
	std::string m_Value = TCHAR_TO_UTF8(*value);

	EOS_Lobby_AttributeData m_AttrData = { EOS_LOBBYSEARCH_SETPARAMETER_API_LATEST, m_Key.c_str() };

	m_AttrData.Value.AsUtf8 = m_Value.c_str();
	m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_STRING;

	m_Options.Parameter = m_AttrData;
	m_Options.ComparisonOp = comparisonOp;

	return EOSLobbySearchSetParameter(handle, m_Options);
}

EOSResult UCoreLobby::EOSLobbySearchRemoveParameter(const FEOSHLobbySearch& handle, FEOSLobbySearchRemoveParameterOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Key = TCHAR_TO_UTF8(*options.Key);
		EOS_LobbySearch_RemoveParameterOptions m_Options = { options.ApiVersion, m_Key.c_str(), static_cast<EOS_EComparisonOp>(options.ComparisonOp) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbySearch_RemoveParameter(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreLobby::EOSLobbySearchSetMaxResults(const FEOSHLobbySearch& handle, FEOSLobbySearchSetMaxResultsOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbySearch_SetMaxResultsOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.MaxResults) };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbySearch_SetMaxResults(handle, &m_Options));
	}

	return m_Result;
}

int32 UCoreLobby::EOSLobbySearchGetSearchResultCount(const FEOSHLobbySearch& handle, FEOSLobbySearchGetSearchResultCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbySearch_GetSearchResultCountOptions m_Options = { options.ApiVersion };

		m_Data = EOS_LobbySearch_GetSearchResultCount(handle, &m_Options);
	}

	return m_Data;
}

EOSResult UCoreLobby::EOSLobbySearchCopySearchResultByIndex(const FEOSHLobbySearch& handle, FEOSLobbySearchCopySearchResultByIndexOptions options, FEOSHLobbyDetails& outLobbyDetailsHandle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLobbyInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_LobbySearch_CopySearchResultByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.LobbyIndex) };
		EOS_HLobbyDetails m_Handle = NULL;
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_LobbySearch_CopySearchResultByIndex(handle, &m_Options, &m_Handle));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLobbyDetailsHandle = m_Handle;
		}
	}

	return m_Result;
}

void UCoreLobby::Internal_OnLobbyCreateLobbyCallback(const EOS_Lobby_CreateLobbyCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FCreateLobbyCallback* m_Data = static_cast<FCreateLobbyCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Lobby->OnLobbyCreateLobbyCallbackInfo.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbyDestroyLobbyCallback(const EOS_Lobby_DestroyLobbyCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FDestroyLobbyCallback* m_Data = static_cast<FDestroyLobbyCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Lobby->OnLobbyDestroyLobbyCallbackInfo.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbyJoinLobbyCallback(const EOS_Lobby_JoinLobbyCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FJoinLobbyCallback* m_Data = static_cast<FJoinLobbyCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Lobby->OnLobbyJoinLobbyCallbackInfo.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbyLeaveLobbyCallback(const EOS_Lobby_LeaveLobbyCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLeaveLobbyCallback* m_Data = static_cast<FLeaveLobbyCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Lobby->OnLobbyLeaveLobbyCallbackInfo.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbyUpdateLobbyCallback(const EOS_Lobby_UpdateLobbyCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FUpdateLobbyCallback* m_Data = static_cast<FUpdateLobbyCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Lobby->OnLobbyUpdateLobbyCallbackInfo.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbyPromoteMemberCallback(const EOS_Lobby_PromoteMemberCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLobbyPromoteMemberCallback* m_Data = static_cast<FLobbyPromoteMemberCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Lobby->OnLobbyPromoteMemberCallbackInfo.Broadcast(*data);
		}
	
		delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbyKickMemberCallback(const EOS_Lobby_KickMemberCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLobbyKickMemberCallback* m_Data = static_cast<FLobbyKickMemberCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
		m_Data->Callback.ExecuteIfBound(*data);
		m_Lobby->OnLobbyKickMemberCallbackInfo.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbySendInviteCallback(const EOS_Lobby_SendInviteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLobbySendInviteCallback* m_Data = static_cast<FLobbySendInviteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Lobby->OnLobbySendInviteCallbackInfo.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbyRejectInviteCallback(const EOS_Lobby_RejectInviteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLobbyRejectInviteCallback* m_Data = static_cast<FLobbyRejectInviteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Lobby->OnLobbyRejectInviteCallbackInfo.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbyQueryInvitesCallback(const EOS_Lobby_QueryInvitesCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLobbyQueryInvitesCallback* m_Data = static_cast<FLobbyQueryInvitesCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
	m_Data->Callback.ExecuteIfBound(*data);
	m_Lobby->OnLobbyQueryInvitesCallbackInfo.Broadcast(*data);
		}
	delete m_Data;
	}
}

void UCoreLobby::Internal_OnLobbyFindCallback(const EOS_LobbySearch_FindCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLobbyFindCallback* m_Data = static_cast<FLobbyFindCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLobby* m_Lobby = m_Data->LobbyObject;
		check(m_Lobby);

		if (m_Lobby)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Lobby->OnLobbySearchFindCallbackInfo.Broadcast(*data);
		}

	delete m_Data;
	}


}