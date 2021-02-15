/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Stats/EOSStats.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreStats* UCoreStats::StatsObject = nullptr;

UCoreStats::UCoreStats()
{
	StatsObject = this;
}

void UCoreStats::EOSStatsIngestStat(FEOSStatsIngestStatOptions options, const FOnStatsIngestStatCompleteCallback& callback)
{
	if (EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Stats_IngestData* m_IngestData = new EOS_Stats_IngestData[options.Stats.Num()];

		TArray<std::string> m_StatNames;

		for (int32 i = 0; i < options.Stats.Num(); i++)
		{
			m_StatNames.Add(TCHAR_TO_UTF8(*options.Stats[i].StatName));
		}

		for (int32 i = 0; i < options.Stats.Num(); i++)
		{
			m_IngestData[i].ApiVersion = options.Stats[i].ApiVersion;
			m_IngestData[i].IngestAmount = options.Stats[i].IngestAmount;
			m_IngestData[i].StatName = m_StatNames[i].c_str();
		}

		EOS_Stats_IngestStatOptions m_Options = { options.ApiVersion, options.LocalUserId, m_IngestData, static_cast<uint32_t>(options.Stats.Num()), options.TargetUserId };

		FIngestStatCompleteCallback* m_Data = new FIngestStatCompleteCallback({ this, callback });
		EOS_Stats_IngestStat(EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnStatsIngestStatCompleteCallback);

		delete[] m_IngestData;
	}
}

void UCoreStats::EOSStatsQueryStats(FEOSStatsQueryStatsOptions options, const FOnStatsQueryStatsCompleteCallback& callback)
{
	if (EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Stats_QueryStatsOptions m_Options = { options.ApiVersion, options.LocalUserId, (options.StartTime == "-1" || options.StartTime.IsEmpty()) ? -1 : FCString::Atoi64(*options.StartTime), (options.EndTime == "-1" || options.EndTime.IsEmpty()) ? -1 : FCString::Atoi64(*options.EndTime), new const char* [options.StatNames.Num()], static_cast<uint32_t>(options.StatNames.Num()), options.TargetUserId };

		TArray<std::string> m_StatNames;

		for (int32 i = 0; i < options.StatNames.Num(); i++)
		{
			m_StatNames.Add(TCHAR_TO_UTF8(*options.StatNames[i]));
		}

		for (int32 i = 0; i < options.StatNames.Num(); i++)
		{
			m_Options.StatNames[i] = m_StatNames[i].c_str();
		}

		FQueryStatsCompleteCallback* m_Data = new FQueryStatsCompleteCallback({ this, callback });
		EOS_Stats_QueryStats(EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnStatsQueryStatsCompleteCallback);

		delete[] m_Options.StatNames;
	}
}

int32 UCoreStats::EOSStatsGetStatsCount(FEOSStatsGetStatCountOptions options)
{
	int32 m_Result = 0;

	if (EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Stats_GetStatCountOptions m_Options = { options.ApiVersion, options.TargetUserId };

		m_Result = EOS_Stats_GetStatsCount(EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreStats::EOSStatsCopyStatByIndex(FEOSStatsCopyStatByIndexOptions options, FEOSStatsStat& outStat)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Stats_CopyStatByIndexOptions m_Options = { options.ApiVersion, options.TargetUserId, static_cast<uint32_t>(options.StatIndex) };
		EOS_Stats_Stat* m_Stat = nullptr;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Stats_CopyStatByIndex(EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Stat));

		if (m_Result == EOSResult::EOS_Success)
		{
			outStat = *m_Stat;
		}

		EOS_Stats_Stat_Release(m_Stat);
	}

	return m_Result;
}

EOSResult UCoreStats::EOSStatsCopyStatByName(FEOSStatsCopyStatByNameOptions options, FEOSStatsStat& outStat)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;
	
	if (EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Stats_CopyStatByNameOptions m_Options = { options.ApiVersion, options.TargetUserId, TCHAR_TO_UTF8(*options.Name) };
		EOS_Stats_Stat* m_Stat = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Stats_CopyStatByName(EOS_Platform_GetStatsInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Stat));

		if (m_Result == EOSResult::EOS_Success)
		{
			outStat = * m_Stat;
		}

		EOS_Stats_Stat_Release(m_Stat);
	}

	return m_Result;
}

void UCoreStats::Internal_OnStatsIngestStatCompleteCallback(const EOS_Stats_IngestStatCompleteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FIngestStatCompleteCallback* m_Data = static_cast<FIngestStatCompleteCallback*>(data->ClientData);
	check(m_Data);
	UCoreStats* m_Stats = m_Data->StatsObject;
	check(m_Stats);

	m_Data->Callback.ExecuteIfBound(*data);
	m_Stats->OnIngestStatCompleteCallbackDelegate.Broadcast(*data);

	delete m_Data;
}

void UCoreStats::Internal_OnStatsQueryStatsCompleteCallback(const EOS_Stats_OnQueryStatsCompleteCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));
	
	FQueryStatsCompleteCallback* m_Data = static_cast<FQueryStatsCompleteCallback*>(data->ClientData);
	check(m_Data);
	UCoreStats* m_Stats = m_Data->StatsObject;
	check(m_Stats);

	m_Data->Callback.ExecuteIfBound(*data);
	m_Stats->OnQueryStatsCompleteCallbackDelegate.Broadcast(*data);

	delete m_Data;
}