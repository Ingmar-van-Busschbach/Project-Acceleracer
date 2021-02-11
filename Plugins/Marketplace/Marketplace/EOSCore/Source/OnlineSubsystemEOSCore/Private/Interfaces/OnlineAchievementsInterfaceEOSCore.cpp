/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlineAchievementsInterfaceEOSCore.h"
#include "OnlineSubsystemEOSCore.h"
#include "Network/EOSCoreUniqueNetId.h"
#include "EOSPlatform.h"
#include "Utilities/EOSSubsystemHelpers.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
#include "OnlineSubsystemEOSCoreLogging.h"

FOnlineSubsystemEOSCore* FOnlineAchievementsEOSCore::Subsystem = nullptr;

FOnlineAchievementsEOSCore::FOnlineAchievementsEOSCore(FOnlineSubsystemEOSCore* subsystem)
{
	Subsystem = subsystem;
}

FOnlineAchievementsEOSCore::~FOnlineAchievementsEOSCore()
{
}

void FOnlineAchievementsEOSCore::WriteAchievements(const FUniqueNetId& PlayerId, FOnlineAchievementsWriteRef& WriteObject, const FOnAchievementsWrittenDelegate& Delegate /*= FOnAchievementsWrittenDelegate()*/)
{
	LogVerbose("Not Implemented");
}

struct FQueryAchievements
{
public:
	FOnlineAchievementsEOSCore* Interface;
	FUniqueNetIdEOSCore PlayerId;
	FOnQueryAchievementsCompleteDelegate Callback;
public:
	explicit FQueryAchievements(FOnlineAchievementsEOSCore* obj, FUniqueNetIdEOSCore playerId, FOnQueryAchievementsCompleteDelegate callback)
		: Interface(obj)
		, PlayerId(playerId)
		, Callback(callback)
	{}
};

void FOnlineAchievementsEOSCore::QueryAchievements(const FUniqueNetId& PlayerId, const FOnQueryAchievementsCompleteDelegate& Delegate /*= FOnQueryAchievementsCompleteDelegate()*/)
{
	LogVerbose("");

	EOS_Achievements_QueryPlayerAchievementsOptions m_Options = { EOS_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTS_API_LATEST, EOSSubsystemHelpers::GetLoggedInUserByIndex(0) };
	FQueryAchievements* m_Data = new FQueryAchievements(this, FUniqueNetIdEOSCore(PlayerId), Delegate);
	EOS_Achievements_QueryPlayerAchievements(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, ([](const EOS_Achievements_OnQueryPlayerAchievementsCompleteCallbackInfo* data)
	{
		LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

		FQueryAchievements* m_QueryData = static_cast<FQueryAchievements*>(data->ClientData);
		check(m_QueryData);
		m_QueryData->Callback.ExecuteIfBound(m_QueryData->PlayerId, (data->ResultCode == EOS_EResult::EOS_Success));

		delete m_QueryData;
	}));
}

void FOnlineAchievementsEOSCore::QueryAchievementDescriptions(const FUniqueNetId& PlayerId, const FOnQueryAchievementsCompleteDelegate& Delegate /*= FOnQueryAchievementsCompleteDelegate()*/)
{
	LogVerbose("");

	return QueryAchievements(PlayerId, Delegate);
}

EOnlineCachedResult::Type FOnlineAchievementsEOSCore::GetCachedAchievement(const FUniqueNetId& PlayerId, const FString& AchievementId, FOnlineAchievement& OutAchievement)
{
	LogVerbose("");

	EOnlineCachedResult::Type m_Result = EOnlineCachedResult::NotFound;

	EOS_ProductUserId m_UserProductId = EOSSubsystemHelpers::ProductIdFromString(PlayerId.ToString());

	if (EOS_ProductUserId_IsValid(m_UserProductId))
	{
		EOS_Achievements_GetPlayerAchievementCountOptions m_Options = { EOS_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNT_API_LATEST, m_UserProductId };
		int32 m_NumPlayerAchievements = EOS_Achievements_GetPlayerAchievementCount(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options);

		if (m_NumPlayerAchievements > 0)
		{
			for (int32 i = 0; i < m_NumPlayerAchievements; i++)
			{
				EOS_Achievements_CopyPlayerAchievementByAchievementIdOptions m_CopyOptions = { EOS_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTID_API_LATEST, m_UserProductId, TCHAR_TO_UTF8(*AchievementId) };
				EOS_Achievements_PlayerAchievement* m_AchievementData = NULL;

				if (EOS_Achievements_CopyPlayerAchievementByAchievementId(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_CopyOptions, &m_AchievementData) == EOS_EResult::EOS_Success)
				{
					OutAchievement.Id = AchievementId;
					OutAchievement.Progress = m_AchievementData->Progress;

					m_Result = EOnlineCachedResult::Success;

					break;
				}

				EOS_Achievements_PlayerAchievement_Release(m_AchievementData);
			}
		}
	}

	return m_Result;
}

EOnlineCachedResult::Type FOnlineAchievementsEOSCore::GetCachedAchievements(const FUniqueNetId& PlayerId, TArray<FOnlineAchievement>& OutAchievements)
{
	LogVerbose("");

	EOnlineCachedResult::Type m_Result = EOnlineCachedResult::NotFound;

	EOS_ProductUserId m_UserProductId = EOSSubsystemHelpers::ProductIdFromString(PlayerId.ToString());

	if (EOS_ProductUserId_IsValid(m_UserProductId))
	{
		EOS_Achievements_GetPlayerAchievementCountOptions m_Options = { EOS_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNT_API_LATEST, m_UserProductId };
		int32 m_NumPlayerAchievements = EOS_Achievements_GetPlayerAchievementCount(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options);

		if (m_NumPlayerAchievements > 0)
		{
			for (int32 i = 0; i < m_NumPlayerAchievements; i++)
			{
				EOS_Achievements_CopyPlayerAchievementByIndexOptions m_CopyOptions = { EOS_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEX_API_LATEST, m_UserProductId, static_cast<uint32_t>(i) };
				EOS_Achievements_PlayerAchievement* m_AchievementData = NULL;

				if (EOS_Achievements_CopyPlayerAchievementByIndex(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_CopyOptions, &m_AchievementData) == EOS_EResult::EOS_Success)
				{
					OutAchievements.Add(FOnlineAchievement{ m_AchievementData->AchievementId , m_AchievementData->Progress});

					m_Result = EOnlineCachedResult::Success;
				}

				EOS_Achievements_PlayerAchievement_Release(m_AchievementData);
			}
		}
	}

	return m_Result;
}

EOnlineCachedResult::Type FOnlineAchievementsEOSCore::GetCachedAchievementDescription(const FString& AchievementId, FOnlineAchievementDesc& OutAchievementDesc)
{
	LogVerbose("");

	EOS_Achievements_CopyAchievementDefinitionV2ByAchievementIdOptions m_Options = { EOS_ACHIEVEMENTS_COPYDEFINITIONV2BYACHIEVEMENTID_API_LATEST, TCHAR_TO_UTF8(*AchievementId)};
	EOS_Achievements_DefinitionV2* m_Definition = NULL;

	if (EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId(EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Definition) == EOS_EResult::EOS_Success)
	{
		OutAchievementDesc.bIsHidden = m_Definition->bIsHidden > 0;
		OutAchievementDesc.LockedDesc = FText::FromString(UTF8_TO_TCHAR(m_Definition->LockedDescription));
		OutAchievementDesc.Title = FText::FromString(UTF8_TO_TCHAR(m_Definition->AchievementId));
		OutAchievementDesc.UnlockedDesc = FText::FromString(UTF8_TO_TCHAR(m_Definition->UnlockedDescription));

		EOS_Achievements_DefinitionV2_Release(m_Definition);
	}

	return EOnlineCachedResult::NotFound;
}

#if !UE_BUILD_SHIPPING
bool FOnlineAchievementsEOSCore::ResetAchievements(const FUniqueNetId& PlayerId)
{
	LogVerbose("Not implemented");

	return false;
}
#endif // !UE_BUILD_SHIPPING