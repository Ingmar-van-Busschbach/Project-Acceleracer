/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Achievements/EOSAchievements.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreAchievements* UCoreAchievements::AchievementsObject = nullptr;
static TMap<FEOSNotificationId, FOnAchievementsUnlockedV2Callback> AchievementsUnlockedCallbacks;

UCoreAchievements::UCoreAchievements()
{
	AchievementsObject = this;
}
	
void UCoreAchievements::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_AddNotifyAchievementsUnlockedV2Options m_Options = { EOS_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDV2_API_LATEST };

		EOS_Achievements_AddNotifyAchievementsUnlockedV2(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Achievements_OnAchievementsUnlockedCallbackV2Info* data)
			{
				LogVerbose("");

				const FEOSAchievementsOnAchievementsUnlockedCallbackV2Info m_Data = *data;
				AchievementsObject->OnAchievementsUnlockedCallbackV2Delegate.Broadcast(m_Data);

				for (auto& m_Element : AchievementsUnlockedCallbacks)
					m_Element.Value.ExecuteIfBound(m_Data);
			}));
	}
}

void UCoreAchievements::Deinitialize()
{
	for (auto& m_Element : AchievementsUnlockedCallbacks)
	{
		m_Element.Value.Clear();
		m_Element.Value.Unbind();
	}

	Super::Deinitialize();
}

void UCoreAchievements::EOSAchievementsQueryDefinitions(FEOSAchievementsQueryDefinitionsOptions options, const FOnAchievementsQueryDefinitionsCallback& callback)
{
	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_QueryDefinitionsOptions m_Options = { options.ApiVersion };

		FQueryDefinitionsCallback* m_Data = new FQueryDefinitionsCallback({ this, callback });
		EOS_Achievements_QueryDefinitions(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnAchievementsQueryDefinitionsCompleteCallback);
	}
}

int32 UCoreAchievements::EOSAchievementsGetAchievementDefinitionCount(FEOSAchievementsGetAchievementDefinitionCountOptions options)
{
	int32 m_Count = 0;

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_GetAchievementDefinitionCountOptions m_Options = { options.ApiVersion };
		m_Count = EOS_Achievements_GetAchievementDefinitionCount(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Count;
}

EOSResult UCoreAchievements::EOSAchievementsCopyAchievementDefinitionV2ByIndex(FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions options, FEOSAchievementsDefinitionV2& outDefinition)
{
	EOSResult m_Result = EOSResult::EOS_AccessDenied;

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_CopyAchievementDefinitionV2ByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.AchievementIndex) };
		EOS_Achievements_DefinitionV2* m_Definition = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Achievements_CopyAchievementDefinitionV2ByIndex(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Definition));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			outDefinition = *m_Definition;
		}

		EOS_Achievements_DefinitionV2_Release(m_Definition);
	}

	return m_Result;
}

EOSResult UCoreAchievements::EOSAchievementsCopyAchievementDefinitionV2ByAchievementId(FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions options, FEOSAchievementsDefinitionV2& outDefinition)
{
	EOSResult m_Result = EOSResult::EOS_AccessDenied;

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_CopyAchievementDefinitionV2ByAchievementIdOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.AchievementId) };
		EOS_Achievements_DefinitionV2* m_Definition = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Definition));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			outDefinition = *m_Definition;
		}

		EOS_Achievements_DefinitionV2_Release(m_Definition);
	}

	return m_Result;
}

void UCoreAchievements::EOSAchievementsQueryPlayerAchievements(FEOSAchievementsQueryPlayerAchievementsOptions options, const FOnAchievementsQueryPlayerAchievementsCallback& callback)
{
	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_QueryPlayerAchievementsOptions m_Options = { options.ApiVersion, options.UserId };
		FQueryPlayerAchievementsCallback* m_Data = new FQueryPlayerAchievementsCallback({ this, callback });
		EOS_Achievements_QueryPlayerAchievements(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnAchievementsQueryPlayerAchievementsCompleteCallback);
	}
}

int32 UCoreAchievements::EOSAchievementsGetPlayerAchievementCount(FEOSAchievementsGetPlayerAchievementCountOptions options)
{
	int32 m_Count = 0;

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_GetPlayerAchievementCountOptions m_Options = { options.ApiVersion, options.UserId };
		
		m_Count = EOS_Achievements_GetPlayerAchievementCount(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Count;
}

EOSResult UCoreAchievements::EOSAchievementsCopyPlayerAchievementByIndex(FEOSAchievementsCopyPlayerAchievementByIndexOptions options, FEOSAchievementsPlayerAchievement& outAchievement)
{
	EOSResult m_Result = EOSResult::EOS_AccessDenied;

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_CopyPlayerAchievementByIndexOptions m_Options = { options.ApiVersion, options.UserId, static_cast<uint32_t>(options.AchievementIndex) };
		EOS_Achievements_PlayerAchievement* m_Data = NULL;
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Achievements_CopyPlayerAchievementByIndex(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Data));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			outAchievement = *m_Data;
		}

		EOS_Achievements_PlayerAchievement_Release(m_Data);
	}

	return m_Result;
}

void UCoreAchievements::EOSAchievementsUnlockAchievements(FEOSAchievementsUnlockAchievementsOptions options, const FOnAchievementsUnlockAchievementsCallback& callback)
{
	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_UnlockAchievementsOptions m_Options = { options.ApiVersion, options.UserId, new const char* [options.AchievementIds.Num()], static_cast<uint32_t>(options.AchievementIds.Num()) };

		TArray<std::string> achievementIds;

		for (int32 i = 0; i < options.AchievementIds.Num(); i++)
		{
			achievementIds.Add(TCHAR_TO_UTF8(*options.AchievementIds[i]));
		}

		for (int32 i = 0; i < options.AchievementIds.Num(); i++)
		{
			m_Options.AchievementIds[i] = achievementIds[i].c_str();
		}

		FUnlockAchievementsCallback* m_Data = new FUnlockAchievementsCallback({ this, callback });
		EOS_Achievements_UnlockAchievements(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnAchievementsUnlockAchievementsCompleteCallback);

		delete[] m_Options.AchievementIds;
	}
}

FEOSNotificationId UCoreAchievements::EOSAchievementsAddNotifyAchievementsUnlockedV2(const FOnAchievementsUnlockedV2Callback& callback)
{
	FEOSNotificationId m_ID;
	
	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_AddNotifyAchievementsUnlockedV2Options m_Options = { EOS_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDV2_API_LATEST };
		m_ID = EOS_Achievements_AddNotifyAchievementsUnlockedV2(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, ([](const EOS_Achievements_OnAchievementsUnlockedCallbackV2Info* data){}));
		AchievementsUnlockedCallbacks.Add(m_ID, callback);
	}

	return m_ID;
}

void UCoreAchievements::EOSAchievementsRemoveNotifyAchievementsUnlocked(FEOSNotificationId id)
{
	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Achievements_RemoveNotifyAchievementsUnlocked(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()),  id);
		
		AchievementsUnlockedCallbacks.Remove(id);
	}
}

void UCoreAchievements::Internal_OnAchievementsQueryDefinitionsCompleteCallback(const EOS_Achievements_OnQueryDefinitionsCompleteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryDefinitionsCallback* m_Data = static_cast<FQueryDefinitionsCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreAchievements* m_Achievements = m_Data->AchievementsObject;
		check(m_Achievements);

		if (m_Achievements)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Achievements->OnQueryDefinitionsCompleteCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreAchievements::Internal_OnAchievementsQueryPlayerAchievementsCompleteCallback(const EOS_Achievements_OnQueryPlayerAchievementsCompleteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryPlayerAchievementsCallback* m_Data = static_cast<FQueryPlayerAchievementsCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreAchievements* m_Achievements = m_Data->AchievementsObject;
		check(m_Achievements);

		if (m_Achievements)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Achievements->OnQueryPlayerAchievementsCompleteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreAchievements::Internal_OnAchievementsUnlockAchievementsCompleteCallback(const EOS_Achievements_OnUnlockAchievementsCompleteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FUnlockAchievementsCallback* m_Data = static_cast<FUnlockAchievementsCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreAchievements* m_Achievements = m_Data->AchievementsObject;
		check(m_Achievements);

		if (m_Achievements)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Achievements->OnAchievementsUnlockAchievementsCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}