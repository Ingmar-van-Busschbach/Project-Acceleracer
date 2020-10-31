/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Presence/EOSPresence.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCorePresence* UCorePresence::PresenceObject = nullptr;

UCorePresence::UCorePresence()
{
	PresenceObject = this;
}

void UCorePresence::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		{
			EOS_Presence_AddNotifyOnPresenceChangedOptions m_Options = { EOS_PRESENCE_ADDNOTIFYONPRESENCECHANGED_API_LATEST };

			EOS_Presence_AddNotifyOnPresenceChanged(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Presence_PresenceChangedCallbackInfo* data)
			{
				LogVerbose("");

				UCorePresence* m_Presence = static_cast<UCorePresence*>(data->ClientData);
				check(m_Presence);

				const FEOSPresencePresenceChangedCallbackInfo m_Data = *data;
				m_Presence->OnPresenceChangedCallbackDelegate.Broadcast(m_Data);

				for (auto& m_Element : OnPresenceChangedCallbacks)
				{
					m_Element.Value.ExecuteIfBound(m_Data);
				}
			}));
		}

		{
			EOS_Presence_AddNotifyJoinGameAcceptedOptions m_Options = { EOS_PRESENCE_ADDNOTIFYJOINGAMEACCEPTED_API_LATEST };

			EOS_Presence_AddNotifyJoinGameAccepted(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_Presence_JoinGameAcceptedCallbackInfo* data)
			{
				LogVerbose("");
				
				UCorePresence* m_Presence = static_cast<UCorePresence*>(data->ClientData);
				check(m_Presence);

				m_Presence->OnPresenceOnJoinGameAcceptedCallbackDelegate.Broadcast(*data);

				for (auto& m_Element : OnPresenceOnJoinGameAcceptedCallbacks)
				{
					m_Element.Value.ExecuteIfBound(*data);
				}
			}));
		}
	}
}

void UCorePresence::Deinitialize()
{
	for (auto& m_Element : OnPresenceChangedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	for (auto& m_Element : OnPresenceOnJoinGameAcceptedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	Super::Deinitialize();
}

void UCorePresence::EOSPresenceQueryPresence(FEOSPresenceQueryPresenceOptions options, const FOnPresenceQueryPresenceCompleteCallback& callback)
{
	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_QueryPresenceOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };
		FQueryPresenceCompleteCallback* m_Data = new FQueryPresenceCompleteCallback({ this, callback });
		EOS_Presence_QueryPresence(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnPresenceQueryPresenceCallback);
	}
}

bool UCorePresence::EOSPresenceHasPresence(FEOSPresenceHasPresenceOptions options)
{
	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_HasPresenceOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };

		return (EOS_Presence_HasPresence(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options) > 0);
	}

	return false;
}

EOSResult UCorePresence::EOSPresenceCopyPresence(FEOSPresenceCopyPresenceOptions options, FEOSPresenceInfo& outPresence)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_CopyPresenceOptions m_Options = { options.ApiVersion, options.LocalUserId, options.TargetUserId };
		EOS_Presence_Info* m_PresenceInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Presence_CopyPresence(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_PresenceInfo));

		if (m_Result == EOSResult::EOS_Success)
		{
			outPresence = *m_PresenceInfo;
			EOS_Presence_Info_Release(m_PresenceInfo);
		}
	}

	return m_Result;
}

EOSResult UCorePresence::EOSPresenceCreatePresenceModification(FEOSPresenceCreatePresenceModificationOptions options, FEOSHPresenceModification& handle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_CreatePresenceModificationOptions m_Options = { options.ApiVersion, options.LocalUserId };
		EOS_HPresenceModification m_Data;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Presence_CreatePresenceModification(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Data));

		if (m_Result == EOSResult::EOS_Success)
		{
			handle = m_Data;
		}
	}

	return m_Result;
}

void UCorePresence::EOSPresenceSetPresence(FEOSPresenceSetPresenceOptions options, const FOnPresenceSetPresenceCompleteCallback& callback)
{
	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_SetPresenceOptions m_Options = { options.ApiVersion, options.LocalUserId, options.PresenceModificationHandle };
		FSetPresenceCompleteCallback* m_Data = new FSetPresenceCompleteCallback({ this, callback });
		EOS_Presence_SetPresence(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnPresenceSetPresenceCallback);
	}
}

FEOSNotificationId UCorePresence::EOSPresenceAddNotifyOnPresenceChanged(const FOnPresenceChangedCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_AddNotifyOnPresenceChangedOptions m_Options = { EOS_PRESENCE_ADDNOTIFYONPRESENCECHANGED_API_LATEST };

		m_ID = EOS_Presence_AddNotifyOnPresenceChanged(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Presence_PresenceChangedCallbackInfo* data){}));

		OnPresenceChangedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCorePresence::EOSPresenceRemoveNotifyOnPresenceChanged(FEOSNotificationId id)
{
	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_RemoveNotifyOnPresenceChanged(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), id);

		OnPresenceChangedCallbacks.Remove(id);
	}
}

FEOSNotificationId UCorePresence::EOSPresenceAddNotifyJoinGameAccepted(const FOnPresenceOnJoinGameAcceptedCallback& callback)
{
	FEOSNotificationId m_ID;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_AddNotifyJoinGameAcceptedOptions m_Options = { EOS_PRESENCE_ADDNOTIFYJOINGAMEACCEPTED_API_LATEST };
		m_ID = EOS_Presence_AddNotifyJoinGameAccepted(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Presence_JoinGameAcceptedCallbackInfo* data){}));
		OnPresenceOnJoinGameAcceptedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCorePresence::EOSPresenceRemoveNotifyJoinGameAccepted(FEOSNotificationId id)
{
	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_RemoveNotifyJoinGameAccepted(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), id);

		OnPresenceOnJoinGameAcceptedCallbacks.Remove(id);
	}
}

EOSResult UCorePresence::EOSPresenceGetJoinInfo(FEOSPresenceGetJoinInfoOptions options, FString& outInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_GetJoinInfoOptions m_Options = { options.ApiVersion, options.LocalUserId };

		char m_Buffer[EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH];
		int32_t m_OutLength = EOS_PRESENCEMODIFICATION_JOININFO_MAX_LENGTH;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Presence_GetJoinInfo(EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Buffer, &m_OutLength));

		if (m_Result == EOSResult::EOS_Success)
		{
			outInfo = m_Buffer;
		}
	}
	return m_Result;
}

EOSResult UCorePresence::EOSPresenceModificationSetStatus(const FEOSHPresenceModification& handle, FEOSPresenceModificationSetStatusOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PresenceModification_SetStatusOptions m_Options = { options.ApiVersion, static_cast<EOS_Presence_EStatus>(options.Status) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PresenceModification_SetStatus(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCorePresence::EOSPresenceModificationSetRawRichText(const FEOSHPresenceModification& handle, FEOSPresenceModificationSetRawRichTextOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PresenceModification_SetRawRichTextOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.RichText) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PresenceModification_SetRawRichText(handle, &m_Options));
	}

	return m_Result;
}

EOSResult UCorePresence::EOSPresenceModificationSetData(const FEOSHPresenceModification& handle, FEOSPresenceModificationSetDataOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Presence_DataRecord* m_RecordData = new EOS_Presence_DataRecord[options.Records.Num()];
		
		TArray<TTuple<std::string, std::string>> m_Records;

		for (int32 i = 0; i < options.Records.Num(); i++)
		{
			std::string m_Key = TCHAR_TO_UTF8(*options.Records[i].Key);
			std::string m_Value = TCHAR_TO_UTF8(*options.Records[i].Value);
			m_Records.Add(TTuple<std::string, std::string>(m_Key, m_Value));
		}

		for (int32 i = 0; i < options.Records.Num(); i++)
		{
			m_RecordData[i].ApiVersion = options.Records[i].ApiVersion;
			m_RecordData[i].Key = m_Records[i].Key.c_str();
			m_RecordData[i].Value = m_Records[i].Value.c_str();
		}

		EOS_PresenceModification_SetDataOptions m_Options = { options.ApiVersion, options.Records.Num(), m_RecordData };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PresenceModification_SetData(handle, &m_Options));

		delete[] m_Options.Records;
	}

	return m_Result;
}

EOSResult UCorePresence::EOSPresenceModificationDeleteData(const FEOSHPresenceModification& handle, FEOSPresenceModificationDeleteDataOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PresenceModification_DataRecordId* m_RecordData = new EOS_PresenceModification_DataRecordId[options.Records.Num()];

		TArray<std::string> m_Records;

		for (int32 i = 0; i < options.Records.Num(); i++)
		{
			m_Records.Add(TCHAR_TO_UTF8(*options.Records[i].Key));
		}

		for (int32 i = 0; i < options.Records.Num(); i++)
		{
			m_RecordData[i].ApiVersion = options.Records[i].ApiVersion;
			m_RecordData[i].Key = m_Records[i].c_str();
		}

		EOS_PresenceModification_DeleteDataOptions m_Options = { options.ApiVersion, options.Records.Num(), m_RecordData };
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PresenceModification_DeleteData(handle, &m_Options));

		delete[] m_Options.Records;
	}

	return m_Result;
}

EOSResult UCorePresence::EOSPresenceModificationSetJoinInfo(const FEOSHPresenceModification& handle, FEOSPresenceModificationSetJoinInfoOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PresenceModification_SetJoinInfoOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.JoinInfo) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PresenceModification_SetJoinInfo(handle, &m_Options));
	}

	return m_Result;
}

void UCorePresence::EOSPresenceModificationRelease(const FEOSHPresenceModification& handle)
{
	if (EOS_Platform_GetPresenceInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PresenceModification_Release(handle);
	}
}

void UCorePresence::Internal_OnPresenceQueryPresenceCallback(const EOS_Presence_QueryPresenceCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryPresenceCompleteCallback* m_Data = static_cast<FQueryPresenceCompleteCallback*>(data->ClientData);
	check(m_Data);
	UCorePresence* m_Presence = m_Data->PresenceObject;
	check(m_Presence);

	m_Data->Callback.ExecuteIfBound(*data);
	m_Presence->OnPresenceQueryPresenceCompleteCallbackDelegate.Broadcast(*data);

	delete m_Data;
}

void UCorePresence::Internal_OnPresenceSetPresenceCallback(const EOS_Presence_SetPresenceCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FSetPresenceCompleteCallback* m_Data = static_cast<FSetPresenceCompleteCallback*>(data->ClientData);
	check(m_Data);
	UCorePresence* m_Presence = m_Data->PresenceObject;
	check(m_Presence);

	m_Data->Callback.ExecuteIfBound(*data);
	m_Presence->OnPresenceSetPresenceCompleteCallbackDelegate.Broadcast(*data);

	delete m_Data;
}