/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Friends/EOSFriends.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreFriends* UCoreFriends::FriendsObject = nullptr;

UCoreFriends::UCoreFriends()
{
	FriendsObject = this;
}

void UCoreFriends::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	EOS_Friends_AddNotifyFriendsUpdateOptions m_Options = { EOS_FRIENDS_ADDNOTIFYFRIENDSUPDATE_API_LATEST };

	EOS_Friends_AddNotifyFriendsUpdate(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Friends_OnFriendsUpdateInfo* data)
		{
			LogVerbose("");

			FriendsObject->OnFriendsUpdateCallbackDelegate.Broadcast(*data);

			for (auto& m_Element : OnFriendsUpdateCallbacks)
				m_Element.Value.ExecuteIfBound(*data);
		}));
}

void UCoreFriends::Deinitialize()
{
	for (auto& m_Element : OnFriendsUpdateCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	Super::Deinitialize();
}

void UCoreFriends::EOSFriendsQueryFriends(FEOSFriendsQueryFriendsOptions options, const FOnFriendsQueryFriendsCallback& callback)
{
	if (EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Friends_QueryFriendsOptions m_Options = { options.ApiVersion, options.LocalUserId };
		FFriendsQueryFriendsCallback* m_Data = new FFriendsQueryFriendsCallback({ this, callback });
		EOS_Friends_QueryFriends(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnFriendsQueryFriendsCallback);
	}
}

void UCoreFriends::EOSFriendsSendInvite(FEOSFriendsSendInviteOptions options, const FOnFriendsSendInviteCallback& callback)
{
	if (EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Friends_SendInviteOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };
		FFriendsSendInviteCallback* m_Data = new FFriendsSendInviteCallback({ this, callback });
		EOS_Friends_SendInvite(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnFriendsSendInviteCallback);
	}
}

void UCoreFriends::EOSFriendsAcceptInvite(FEOSFriendsAcceptInviteOptions options, const FOnFriendsAcceptInviteCallback& callback)
{
	if (EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Friends_AcceptInviteOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };
		FFriendsAcceptInviteCallback* m_Data = new FFriendsAcceptInviteCallback({ this, callback });
		EOS_Friends_AcceptInvite(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnFriendsAcceptInviteCallback);
	}
}

void UCoreFriends::EOSFriendsRejectInvite(FEOSFriendsRejectInviteOptions options, const FOnFriendsRejectInviteCallback& callback)
{
	if (EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Friends_RejectInviteOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };
		FFriendsRejectInviteCallback* m_Data = new FFriendsRejectInviteCallback({ this, callback });
		EOS_Friends_RejectInvite(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnFriendsRejectInviteCallback);
	}
}

int32 UCoreFriends::EOSFriendsGetFriendsCount(FEOSFriendsGetFriendsCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Friends_GetFriendsCountOptions m_Options = { options.ApiVersion, options.LocalUserId };

		m_Data = EOS_Friends_GetFriendsCount(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Data;
}

FEOSEpicAccountId UCoreFriends::EOSFriendsGetFriendAtIndex(FEOSFriendsGetFriendAtIndexOptions options)
{
	FEOSEpicAccountId m_ID;

	if (EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Friends_GetFriendAtIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, options.Index };
		
		m_ID = EOS_Friends_GetFriendAtIndex(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_ID;
}

EEOSEFriendsStatus UCoreFriends::EOSFriendsGetStatus(FEOSFriendsGetStatusOptions options)
{
	EEOSEFriendsStatus m_Status = EEOSEFriendsStatus::EOS_FS_NotFriends;

	if (EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Friends_GetStatusOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };

		m_Status = static_cast<EEOSEFriendsStatus>(EOS_Friends_GetStatus(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Status;
}

FEOSNotificationId UCoreFriends::EOSFriendsAddNotifyFriendsUpdate(const FOnFriendsUpdateCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Friends_AddNotifyFriendsUpdateOptions m_Options = { EOS_FRIENDS_ADDNOTIFYFRIENDSUPDATE_API_LATEST };

		m_ID = EOS_Friends_AddNotifyFriendsUpdate(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Friends_OnFriendsUpdateInfo* data) {}));

		OnFriendsUpdateCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreFriends::EOSFriendsRemoveNotifyFriendsUpdate(FEOSNotificationId id)
{
	if (EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Friends_RemoveNotifyFriendsUpdate(EOS_Platform_GetFriendsInterface(FPlatform::GetPlatformHandle()), id);

		OnFriendsUpdateCallbacks.Remove(id);
	}
}

void UCoreFriends::Internal_OnFriendsQueryFriendsCallback(const EOS_Friends_QueryFriendsCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FFriendsQueryFriendsCallback* m_Data = static_cast<FFriendsQueryFriendsCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreFriends* m_Friends = m_Data->FriendsObject;
		check(m_Friends);

		if (m_Friends)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			FriendsObject->OnFriendsQueryFriendsCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreFriends::Internal_OnFriendsSendInviteCallback(const EOS_Friends_SendInviteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FFriendsSendInviteCallback* m_Data = static_cast<FFriendsSendInviteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreFriends* m_Friends = m_Data->FriendsObject;
		check(m_Friends);

		if (m_Friends)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			FriendsObject->OnFriendsSendInviteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreFriends::Internal_OnFriendsAcceptInviteCallback(const EOS_Friends_AcceptInviteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));
	
	FFriendsAcceptInviteCallback* m_Data = static_cast<FFriendsAcceptInviteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreFriends* m_Friends = m_Data->FriendsObject;
		check(m_Friends);

		if (m_Friends)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			FriendsObject->OnFriendsAcceptInviteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreFriends::Internal_OnFriendsRejectInviteCallback(const EOS_Friends_RejectInviteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FFriendsRejectInviteCallback* m_Data = static_cast<FFriendsRejectInviteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreFriends* m_Friends = m_Data->FriendsObject;
		check(m_Friends);

		if (m_Friends)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			FriendsObject->OnFriendsRejectInviteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}