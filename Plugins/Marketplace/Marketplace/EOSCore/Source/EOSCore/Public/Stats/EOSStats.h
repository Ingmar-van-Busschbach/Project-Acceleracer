/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "eos_stats_types.h"
#include "Stats/EOSStatsTypes.h"
#include "EOSStats.generated.h"

UCLASS()
class EOSCORE_API UCoreStats : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
    UCoreStats();
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreStats* GetStats() { return StatsObject; }
public:
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Stats|Delegates")
		FOnStatsIngestStatCompleteCallbackDelegate OnIngestStatCompleteCallbackDelegate;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Stats|Delegates")
		FOnStatsQueryStatsCompleteCallbackDelegate OnQueryStatsCompleteCallbackDelegate;
public:
    /**
     * Ingest a stat by the amount specified in Options.
     * When the operation is complete and the delegate is triggered the stat will be uploaded to the backend to be processed.
     * The stat may not be updated immediately and an achievement using the stat may take a while to be unlocked once the stat has been uploaded.
     *
     * @param Options Structure containing information about the stat we're ingesting.
     * @param ClientData Arbitrary data that is passed back to you in the callback.
     * @param callback This function is called when the ingest stat operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Stats")
        void EOSStatsIngestStat(FEOSStatsIngestStatOptions options, const FOnStatsIngestStatCompleteCallback& callback);

    /**
     * Query for a list of stats for a specific player.
     *
     * @param Options Structure containing information about the player whose stats we're retrieving.
     * @param ClientData Arbitrary data that is passed back to you in the callback
     * @param callback This function is called when the query player stats operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Stats")
        void EOSStatsQueryStats(FEOSStatsQueryStatsOptions options, const FOnStatsQueryStatsCompleteCallback& callback);

    /**
     * Fetch the number of stats that are cached locally.
     *
     * @param Options The Options associated with retrieving the stat count
     *
     * @see EOSStatsCopyStatByIndex
     *
     * @return Number of stats or 0 if there is an error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Stats")
       static int32 EOSStatsGetStatsCount(FEOSStatsGetStatCountOptions options);

    /**
     * Fetches a stat from a given index.
     *
     * @param Options Structure containing the account id and index being accessed
     * @param OutAchievement The stat data for the given index, if it exists and is valid, use EOSStatsStat_Release when finished
     *
     * @see EOSStatsStat_Release
     *
     * @return EOS_Success if the information is available and passed out in OutStat
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the stat is not found
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Stats")
        static EOSResult EOSStatsCopyStatByIndex(FEOSStatsCopyStatByIndexOptions options, FEOSStatsStat& outStat);

    /**
     * Fetches a stat from cached stats by name.
     *
     * @param Options Structure containing the account id and name being accessed
     * @param OutAchievement The stat data for the given name, if it exists and is valid, use EOSStatsStat_Release when finished
     *
     * @see EOSStatsStat_Release
     *
     * @return EOS_Success if the information is available and passed out in OutStat
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the stat is not found
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Stats")
        static EOSResult EOSStatsCopyStatByName(FEOSStatsCopyStatByNameOptions options, FEOSStatsStat& outStat);
private:
    static void Internal_OnStatsIngestStatCompleteCallback(const EOS_Stats_IngestStatCompleteCallbackInfo* data);
    static void Internal_OnStatsQueryStatsCompleteCallback(const EOS_Stats_OnQueryStatsCompleteCallbackInfo* data);
private:
    static UCoreStats* StatsObject;
};
