/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Leaderboards/EOSLeaderboardsAsyncActions.h"
#include "Leaderboards/EOSLeaderboards.h"
#include "Core/EOSCorePluginPrivatePCH.h" 
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCoreLogging.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLeaderboardsQueryLeaderboardDefinitions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreLeaderboardsQueryLeaderboardDefinitions* UEOSCoreLeaderboardsQueryLeaderboardDefinitions::EOSLeaderboardsQueryLeaderboardDefinitionsAsync(UObject* WorldContextObject, FEOSLeaderboardsQueryLeaderboardDefinitionsOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreLeaderboardsQueryLeaderboardDefinitions>();
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

void UEOSCoreLeaderboardsQueryLeaderboardDefinitions::Activate()
{
	Super::Activate();
	UCoreLeaderboards::GetLeaderboards()->EOSLeaderboardsQueryLeaderboardDefinitions(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLeaderboardsQueryLeaderboardRanks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreLeaderboardsQueryLeaderboardRanks* UEOSCoreLeaderboardsQueryLeaderboardRanks::EOSLeaderboardsQueryLeaderboardRanksAsync(UObject* WorldContextObject, FEOSLeaderboardsQueryLeaderboardRanksOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreLeaderboardsQueryLeaderboardRanks>();
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

void UEOSCoreLeaderboardsQueryLeaderboardRanks::Activate()
{
	Super::Activate();
	UCoreLeaderboards::GetLeaderboards()->EOSLeaderboardsQueryLeaderboardRanks(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLeaderboardsQueryLeaderboardUserScores
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreLeaderboardsQueryLeaderboardUserScores* UEOSCoreLeaderboardsQueryLeaderboardUserScores::EOSLeaderboardsQueryLeaderboardUserScoresAsync(UObject* WorldContextObject, FEOSLeaderboardsQueryLeaderboardUserScoresOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreLeaderboardsQueryLeaderboardUserScores>();
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

void UEOSCoreLeaderboardsQueryLeaderboardUserScores::Activate()
{
	Super::Activate();
	UCoreLeaderboards::GetLeaderboards()->EOSLeaderboardsQueryLeaderboardUserScores(Options, Callback);
}
