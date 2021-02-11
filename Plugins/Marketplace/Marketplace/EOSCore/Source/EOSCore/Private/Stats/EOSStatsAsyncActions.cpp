/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Stats/EOSStatsAsyncActions.h"
#include "Stats/EOSStats.h"
#include "Core/EOSCorePluginPrivatePCH.h" 
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCoreLogging.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreStatsIngestStat
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreStatsIngestStat* UEOSCoreStatsIngestStat::EOSStatsIngestStatAsync(UObject* WorldContextObject, FEOSStatsIngestStatOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreStatsIngestStat>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreStatsIngestStat::Activate()
{
	Super::Activate();
	UCoreStats::GetStats()->EOSStatsIngestStat(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreStatsQueryStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreStatsQueryStats* UEOSCoreStatsQueryStats::EOSStatsQueryStatsAsync(UObject* WorldContextObject, FEOSStatsQueryStatsOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreStatsQueryStats>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreStatsQueryStats::Activate()
{
	Super::Activate();
	UCoreStats::GetStats()->EOSStatsQueryStats(Options, Callback);
}

