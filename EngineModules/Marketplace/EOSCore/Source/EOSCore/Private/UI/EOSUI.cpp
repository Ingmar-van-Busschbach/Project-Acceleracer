/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "UI/EOSUI.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreUI* UCoreUI::UIObject = nullptr;
static TMap<FEOSNotificationId, FOnDisplaySettingsUpdatedCallback> s_DisplaySettingsUpdatedCallback;

UCoreUI::UCoreUI()
{
	UIObject = this;
}

void UCoreUI::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UI_AddNotifyDisplaySettingsUpdatedOptions m_Options = { 1 };

		EOS_UI_AddNotifyDisplaySettingsUpdated(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_UI_OnDisplaySettingsUpdatedCallbackInfo* data)
			{
				LogVerbose("");

				UIObject->OnDisplaySettingsUpdatedCallbackDelegate.Broadcast(*data);

				for (auto& m_Element : s_DisplaySettingsUpdatedCallback)
					m_Element.Value.ExecuteIfBound(*data);
			}));
	}
}

void UCoreUI::Deinitialize()
{
	for (auto& m_Element : s_DisplaySettingsUpdatedCallback)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	Super::Deinitialize();
}

void UCoreUI::EOSUIShowFriends(FEOSUIShowFriendsOptions options, const FOnShowFriendsCallback& callback)
{
	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UI_ShowFriendsOptions m_Options = { options.ApiVersion, options.LocalUserId };
		FShowFriendsCallback* m_Data = new FShowFriendsCallback({ this, callback });
		EOS_UI_ShowFriends(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnUIShowFriendsCallback);
	}
}

void UCoreUI::EOSUIHideFriends(FEOSUIHideFriendsOptions options, const FOnHideFriendsCallback& callback)
{
	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UI_HideFriendsOptions m_Options = { options.ApiVersion, options.LocalUserId };
		FHideFriendsCallback* m_Data = new FHideFriendsCallback({ this, callback });
		EOS_UI_HideFriends(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnUIHideFriendsCallback);
	}
}

bool UCoreUI::EOSUIGetFriendsVisible(FEOSUIGetFriendsVisibleOptions options)
{
	bool bResult = false;

	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UI_GetFriendsVisibleOptions m_Options = { options.ApiVersion, options.LocalUserId };

		bResult = (EOS_UI_GetFriendsVisible(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), &m_Options) > 0);
	}

	return bResult;
}

EOSResult UCoreUI::EOSUISetToggleFriendsKey(FEOSUISetToggleFriendsKeyOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;
	
	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UI_SetToggleFriendsKeyOptions m_Options = { options.ApiVersion };

		EOS_UI_EKeyCombination m_Combination = EOS_UI_EKeyCombination::EOS_UIK_None;
		int32 m_KeyCombination = options.keyCombination;

		if ((m_KeyCombination & (int32)EOS_UI_EKeyCombination::EOS_UIK_Shift) != 0)
		{
			m_Combination = m_Combination | EOS_UI_EKeyCombination::EOS_UIK_Shift;
			m_KeyCombination -= (int32)EOS_UI_EKeyCombination::EOS_UIK_Shift;
		}

		if ((m_KeyCombination & (int32)EOS_UI_EKeyCombination::EOS_UIK_Control) != 0)
		{
			m_Combination = m_Combination | EOS_UI_EKeyCombination::EOS_UIK_Control;
			m_KeyCombination -= (int32)EOS_UI_EKeyCombination::EOS_UIK_Control;
		}

		if ((m_KeyCombination & (int32)EOS_UI_EKeyCombination::EOS_UIK_Alt) != 0)
		{
			m_Combination = m_Combination | EOS_UI_EKeyCombination::EOS_UIK_Alt;
			m_KeyCombination -= (int32)EOS_UI_EKeyCombination::EOS_UIK_Alt;
		}

		if ((m_KeyCombination & (int32)EOS_UI_EKeyCombination::EOS_UIK_Meta) != 0)
		{
			m_Combination = m_Combination | EOS_UI_EKeyCombination::EOS_UIK_Meta;
			m_KeyCombination -= (int32)EOS_UI_EKeyCombination::EOS_UIK_Meta;
		}

		if (m_KeyCombination > 0)
		{
			m_Combination |= (EOS_UI_EKeyCombination)m_KeyCombination;
			m_KeyCombination -= (int32)(EOS_UI_EKeyCombination)m_KeyCombination;
		}

		m_Options.KeyCombination = m_Combination;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_UI_SetToggleFriendsKey(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}	

	return m_Result;
}

int32 UCoreUI::EOSUIGetToggleFriendsKey(FEOSUIGetToggleFriendsKeyOptions options)
{
	int32 m_Result = 0;
	TArray<EOS_UI_EKeyCombination> m_Arr2;

	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UI_GetToggleFriendsKeyOptions m_Options = { options.ApiVersion };

		m_Result = (int32)EOS_UI_GetToggleFriendsKey(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

bool UCoreUI::EOSUIIsValidKeyCombination(int32 keyCombination)
{
	bool bResult = false;

	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UI_EKeyCombination m_Combination = EOS_UI_EKeyCombination::EOS_UIK_None;

		if ((keyCombination & (int32)EOS_UI_EKeyCombination::EOS_UIK_Shift) != 0)
		{
			m_Combination = m_Combination | EOS_UI_EKeyCombination::EOS_UIK_Shift;
			keyCombination -= (int32)EOS_UI_EKeyCombination::EOS_UIK_Shift;
		}

		if ((keyCombination & (int32)EOS_UI_EKeyCombination::EOS_UIK_Control) != 0)
		{
			m_Combination = m_Combination | EOS_UI_EKeyCombination::EOS_UIK_Control;
			keyCombination -= (int32)EOS_UI_EKeyCombination::EOS_UIK_Control;
		}

		if ((keyCombination & (int32)EOS_UI_EKeyCombination::EOS_UIK_Alt) != 0)
		{
			m_Combination = m_Combination | EOS_UI_EKeyCombination::EOS_UIK_Alt;
			keyCombination -= (int32)EOS_UI_EKeyCombination::EOS_UIK_Alt;
		}

		if ((keyCombination & (int32)EOS_UI_EKeyCombination::EOS_UIK_Meta) != 0)
		{
			m_Combination = m_Combination | EOS_UI_EKeyCombination::EOS_UIK_Meta;
			keyCombination -= (int32)EOS_UI_EKeyCombination::EOS_UIK_Meta;
		}

		if (keyCombination > 0)
		{
			m_Combination |= (EOS_UI_EKeyCombination)keyCombination;
			keyCombination -= (int32)(EOS_UI_EKeyCombination)keyCombination;
		}
		
		bResult = (EOS_UI_IsValidKeyCombination(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), m_Combination) > 0);
	}


	return bResult;
}

EOSResult UCoreUI::EOSUISetDisplayPreference(FEOSUISetDisplayPreferenceOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UI_SetDisplayPreferenceOptions m_Options = { options.ApiVersion, static_cast<EOS_UI_ENotificationLocation>(options.NotificationLocation) };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_UI_SetDisplayPreference(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

EEOSUIENotificationLocation UCoreUI::EOSUIGetNotificationLocationPreference()
{
	EEOSUIENotificationLocation m_Result = EEOSUIENotificationLocation::EOS_UNL_BottomLeft;

	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		m_Result = static_cast<EEOSUIENotificationLocation>(EOS_UI_GetNotificationLocationPreference(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle())));
	}

	return m_Result;
}

EOSResult UCoreUI::EOSUIAcknowledgeEventId(FEOSUIAcknowledgeEventIdOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_UI_AcknowledgeEventIdOptions m_Options = { options.ApiVersion, options.UiEventId, static_cast<EOS_EResult>(static_cast<int32>(options.Result)) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_UI_AcknowledgeEventId(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

FEOSNotificationId UCoreUI::EOSUIAddNotifyDisplaySettingsUpdated(const FEOSUIAddNotifyDisplaySettingsUpdatedOptions options, const FOnDisplaySettingsUpdatedCallback& callback)
{
	EOS_UI_AddNotifyDisplaySettingsUpdatedOptions m_Options = { options.ApiVersion };

	EOS_NotificationId m_ID = EOS_UI_AddNotifyDisplaySettingsUpdated(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_UI_OnDisplaySettingsUpdatedCallbackInfo* data) {}));

	s_DisplaySettingsUpdatedCallback.Add(m_ID, callback);

	return m_ID;
}


void UCoreUI::EOSUIRemoveNotifyDisplaySettingsUpdated(FEOSNotificationId id)
{
	s_DisplaySettingsUpdatedCallback.Remove(id);
	EOS_UI_RemoveNotifyDisplaySettingsUpdated(EOS_Platform_GetUIInterface(FPlatform::GetPlatformHandle()), id);
}

void UCoreUI::Internal_OnUIShowFriendsCallback(const EOS_UI_ShowFriendsCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FShowFriendsCallback* m_Data = static_cast<FShowFriendsCallback*>(data->ClientData);
	check(m_Data);
	UCoreUI* m_UI = m_Data->UIObject;
	check(m_UI);

	m_Data->Callback.ExecuteIfBound(*data);
	m_UI->OnShowFriendsCallbackDelegate.Broadcast(*data);

	delete m_Data;
}

void UCoreUI::Internal_OnUIHideFriendsCallback(const EOS_UI_HideFriendsCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FHideFriendsCallback* m_Data = static_cast<FHideFriendsCallback*>(data->ClientData);
	check(m_Data);
	UCoreUI* m_UI = m_Data->UIObject;
	check(m_UI);

	m_Data->Callback.ExecuteIfBound(*data);
	m_UI->OnHideFriendsCallbackDelegate.Broadcast(*data);

	delete m_Data;
}