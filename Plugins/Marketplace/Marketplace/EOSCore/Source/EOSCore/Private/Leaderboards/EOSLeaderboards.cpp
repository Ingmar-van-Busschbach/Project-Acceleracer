/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Leaderboards/EOSLeaderboards.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreLeaderboards* UCoreLeaderboards::LeaderboardsObject = nullptr;

UCoreLeaderboards::UCoreLeaderboards()
{
	LeaderboardsObject = this;
}

void UCoreLeaderboards::EOSLeaderboardsQueryLeaderboardDefinitions(FEOSLeaderboardsQueryLeaderboardDefinitionsOptions options, const FOnQueryLeaderboardDefinitionsCompleteCallback& callback)
{
	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_QueryLeaderboardDefinitionsOptions m_Options = { options.ApiVersion, FCString::Atoi64(*options.StartTime), FCString::Atoi64(*options.EndTime) };
		FLeaderboardDefinitionsCompleteCallback* m_Data = new FLeaderboardDefinitionsCompleteCallback({ this, callback });
		EOS_Leaderboards_QueryLeaderboardDefinitions(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLeaderboardQueryLeaderboardDefinitionsCompleteCallback);
	}
}

int32 UCoreLeaderboards::EOSLeaderboardsGetLeaderboardDefinitionCount(FEOSLeaderboardsGetLeaderboardDefinitionCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_GetLeaderboardDefinitionCountOptions m_Options = { options.ApiVersion };

		m_Data = EOS_Leaderboards_GetLeaderboardDefinitionCount(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Data;
}

EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardDefinitionByIndex(FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions options, FEOSLeaderboardsDefinition& outLeaderboardDefinition)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_CopyLeaderboardDefinitionByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.LeaderboardIndex) };
		EOS_Leaderboards_Definition* m_Definition = NULL;
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Leaderboards_CopyLeaderboardDefinitionByIndex(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Definition));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLeaderboardDefinition = *m_Definition;
		}

		EOS_Leaderboards_Definition_Release(m_Definition);
	}

	return m_Result;
}

EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId(FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions options, FEOSLeaderboardsDefinition& outLeaderboardDefinition)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardIdOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.LeaderboardId) };
		EOS_Leaderboards_Definition* m_Definition = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Definition));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLeaderboardDefinition = *m_Definition;
		}

		EOS_Leaderboards_Definition_Release(m_Definition);
	}

	return m_Result;
}

void UCoreLeaderboards::EOSLeaderboardsQueryLeaderboardRanks(FEOSLeaderboardsQueryLeaderboardRanksOptions options, const FOnQueryLeaderboardRanksCompleteCallback& callback)
{
	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_QueryLeaderboardRanksOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.LeaderboardId) };
		FLeaderboardRanksCompleteCallback* m_Data = new FLeaderboardRanksCompleteCallback({ this, callback });
		EOS_Leaderboards_QueryLeaderboardRanks(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLeaderboardQueryLeaderboardRanksCompleteCallback);
	}
}

int32 UCoreLeaderboards::EOSLeaderboardsGetLeaderboardRecordCount(FEOSLeaderboardsGetLeaderboardRecordCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_GetLeaderboardRecordCountOptions m_Options = { options.ApiVersion };
		m_Options.ApiVersion = options.ApiVersion;

		m_Data = EOS_Leaderboards_GetLeaderboardRecordCount(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}
	return m_Data;
}

EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardRecordByIndex(FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions options, FEOSLeaderboardsLeaderboardRecord& outLeaderboardRecord)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_CopyLeaderboardRecordByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.LeaderboardRecordIndex) };
		EOS_Leaderboards_LeaderboardRecord* m_Record = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Leaderboards_CopyLeaderboardRecordByIndex(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Record));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLeaderboardRecord = *m_Record;
		}

		EOS_Leaderboards_LeaderboardRecord_Release(m_Record);
	}

	return m_Result;
}

EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardRecordByUserId(FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions options, FEOSLeaderboardsLeaderboardRecord& outLeaderboardRecord)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_CopyLeaderboardRecordByUserIdOptions m_Options = { options.ApiVersion, options.UserId };
		EOS_Leaderboards_LeaderboardRecord* m_Record = NULL;
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Leaderboards_CopyLeaderboardRecordByUserId(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Record));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLeaderboardRecord = *m_Record;
		}

		EOS_Leaderboards_LeaderboardRecord_Release(m_Record);
	}
	return m_Result;
}

void UCoreLeaderboards::EOSLeaderboardsQueryLeaderboardUserScores(FEOSLeaderboardsQueryLeaderboardUserScoresOptions options, const FOnQueryLeaderboardUserScoresCompleteCallback& callback)
{
	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_UserScoresQueryStatInfo* m_StatInfo = new EOS_Leaderboards_UserScoresQueryStatInfo[options.StatInfo.Num()];
		EOS_ProductUserId* m_UserIds = new EOS_ProductUserId[options.UserIds.Num()];

		TArray<std::string> m_StatNames;

		for (int32 i = 0; i < options.StatInfo.Num(); i++)
		{
			m_StatNames.Add(TCHAR_TO_UTF8(*options.StatInfo[i].StatName));
		}

		for (int32 i = 0; i < options.StatInfo.Num(); i++)
		{
			m_StatInfo[i].ApiVersion = options.StatInfo[i].ApiVersion;
			m_StatInfo[i].Aggregation = static_cast<EOS_ELeaderboardAggregation>(options.StatInfo[i].Aggregation);
			m_StatInfo[i].StatName = m_StatNames[i].c_str();
		}

		for (int32 i = 0; i < options.UserIds.Num(); i++)
		{
			m_UserIds[i] = options.UserIds[i];
		}

		EOS_Leaderboards_QueryLeaderboardUserScoresOptions m_Options = { options.ApiVersion, m_UserIds, static_cast<uint32_t>(options.UserIds.Num()), m_StatInfo, static_cast<uint32_t>(options.StatInfo.Num()), FCString::Atoi(*options.StartTime), FCString::Atoi(*options.EndTime) };

		FLeaderboardUserScoresCompleteCallback* m_Data = new FLeaderboardUserScoresCompleteCallback({ this, callback });
		EOS_Leaderboards_QueryLeaderboardUserScores(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnLeaderboardQueryLeaderboardUserScoresCompleteCallbackInfo);

		delete[] m_Options.UserIds;
		delete[] m_Options.StatInfo;
	}
}

int32 UCoreLeaderboards::EOSLeaderboardsGetLeaderboardUserScoreCount(FEOSLeaderboardsGetLeaderboardUserScoreCountOptions options)
{
	int32 m_Data = 0;

	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_GetLeaderboardUserScoreCountOptions m_Options = { options.ApiVersion, TCHAR_TO_UTF8(*options.StatName) };

		m_Data = EOS_Leaderboards_GetLeaderboardUserScoreCount(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Data;
}

EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardUserScoreByIndex(FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions options, FEOSLeaderboardsLeaderboardUserScore& outLeaderboardUserScore)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_CopyLeaderboardUserScoreByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.LeaderboardUserScoreIndex), TCHAR_TO_UTF8(*options.StatName) };
		EOS_Leaderboards_LeaderboardUserScore* m_Score = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Leaderboards_CopyLeaderboardUserScoreByIndex(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Score));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLeaderboardUserScore = *m_Score;
		}

		EOS_Leaderboards_LeaderboardUserScore_Release(m_Score);
	}
	return m_Result;
}

EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardUserScoreByUserId(FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions options, FEOSLeaderboardsLeaderboardUserScore& outLeaderboardUserScore)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Leaderboards_CopyLeaderboardUserScoreByUserIdOptions m_Options = { options.ApiVersion, options.UserId, TCHAR_TO_UTF8(*options.StatName) };
		EOS_Leaderboards_LeaderboardUserScore* m_Score = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Leaderboards_CopyLeaderboardUserScoreByUserId(EOS_Platform_GetLeaderboardsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Score));

		if (m_Result == EOSResult::EOS_Success)
		{
			outLeaderboardUserScore = *m_Score;
		}

		EOS_Leaderboards_LeaderboardUserScore_Release(m_Score);
	}

	return m_Result;
}

void UCoreLeaderboards::Internal_OnLeaderboardQueryLeaderboardDefinitionsCompleteCallback(const EOS_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLeaderboardDefinitionsCompleteCallback* m_Data = static_cast<FLeaderboardDefinitionsCompleteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLeaderboards* m_Leaderboards = m_Data->LeaderboardsObject;
		check(m_Leaderboards);

		if (m_Leaderboards)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Leaderboards->OnQueryLeaderboardDefinitionsCompleteCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreLeaderboards::Internal_OnLeaderboardQueryLeaderboardRanksCompleteCallback(const EOS_Leaderboards_OnQueryLeaderboardRanksCompleteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLeaderboardRanksCompleteCallback* m_Data = static_cast<FLeaderboardRanksCompleteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLeaderboards* m_Leaderboards = m_Data->LeaderboardsObject;
		check(m_Leaderboards);

		if (m_Leaderboards)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Leaderboards->OnQueryLeaderboardRanksCompleteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreLeaderboards::Internal_OnLeaderboardQueryLeaderboardUserScoresCompleteCallbackInfo(const EOS_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FLeaderboardUserScoresCompleteCallback* m_Data = static_cast<FLeaderboardUserScoresCompleteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreLeaderboards* m_Leaderboards = m_Data->LeaderboardsObject;
		check(m_Leaderboards);

		if (m_Leaderboards)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Leaderboards->OnQueryLeaderboardUserScoresCompleteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}