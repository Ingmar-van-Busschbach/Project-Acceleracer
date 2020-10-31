/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "eos_leaderboards.h"
#include "Leaderboards/EOSLeaderboardsTypes.h"
#include "EOSLeaderboards.generated.h"

/**
 * The following EOSLeaderboards* functions allow you to query existing leaderboard definitions that have been defined for your application.
 * You can retrieve a list of scores for the top users for each Leaderboard.
 * You can also query scores for one or more users.
 */

UCLASS()
class EOSCORE_API UCoreLeaderboards : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
    UCoreLeaderboards();
public:
    /**
     * The following EOSLeaderboards* functions allow you to query existing leaderboard definitions that have been defined for your application.
     * You can retrieve a list of scores for the top users for each Leaderboard.
     * You can also query scores for one or more users.
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreLeaderboards* GetLeaderboards() { return LeaderboardsObject; }
public:
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Leaderboards|Delegates")
		FOnQueryLeaderboardDefinitionsCompleteCallbackDelegate OnQueryLeaderboardDefinitionsCompleteCallbackDelegate;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Leaderboards|Delegates")
		FOnQueryLeaderboardUserScoresCompleteCallbackDelegate OnQueryLeaderboardUserScoresCompleteCallbackDelegate;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Leaderboards|Delegates")
		FOnQueryLeaderboardRanksCompleteCallbackDelegate OnQueryLeaderboardRanksCompleteCallbackDelegate;
public:
    /**
    * Query for a list of existing leaderboards definitions including their attributes.
    *
    * @param Options Structure containing information about the application whose leaderboard definitions we're retrieving.
    * @param callback This function is called when the query operation completes.
    *
    * @return EOS_Success if the operation completes successfully
    *         EOS_InvalidParameters if any of the options are incorrect
    */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        void EOSLeaderboardsQueryLeaderboardDefinitions(FEOSLeaderboardsQueryLeaderboardDefinitionsOptions options, const FOnQueryLeaderboardDefinitionsCompleteCallback& callback);

    /**
     * Fetch the number of leaderboards definitions that are cached locally.
     *
     * @param Options The Options associated with retrieving the leaderboard count.
     *
     * @see EOSLeaderboardsCopyLeaderboardDefinitionByIndex
     * @see EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId
     *
     * @return Number of leaderboards or 0 if there is an error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        static int32 EOSLeaderboardsGetLeaderboardDefinitionCount(FEOSLeaderboardsGetLeaderboardDefinitionCountOptions options);

    /**
     * Fetches a leaderboard definition from the cache using an index.
     *
     * @param Options Structure containing the index being accessed.
     * @param OutLeaderboardDefinition The leaderboard data for the given index, if it exists and is valid, use EOSLeaderboardsDefinition_Release when finished.
     *
     * @see EOSLeaderboardsDefinition_Release
     *
     * @return EOS_Success if the information is available and passed out in OutLeaderboardDefinition
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the leaderboard is not found
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        static EOSResult EOSLeaderboardsCopyLeaderboardDefinitionByIndex(FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions options, FEOSLeaderboardsDefinition& outLeaderboardDefinition);

    /**
     * Fetches a leaderboard definition from the cache using a leaderboard ID.
     *
     * @param Options Structure containing the leaderboard ID being accessed.
     * @param OutLeaderboardDefinition The leaderboard definition for the given leaderboard ID, if it exists and is valid, use EOSLeaderboardsDefinition_Release when finished.
     *
     * @see EOSLeaderboardsDefinition_Release
     *
     * @return EOS_Success if the information is available and passed out in OutLeaderboardDefinition
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the leaderboard data is not found
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        static EOSResult EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId(FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions options, FEOSLeaderboardsDefinition& outLeaderboardDefinition);

    /**
     * Retrieves top leaderboard records by rank in the leaderboard matching the given leaderboard ID.
     *
     * @param Options Structure containing information about the leaderboard records we're retrieving.
     * @param callback This function is called when the query operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        void EOSLeaderboardsQueryLeaderboardRanks(FEOSLeaderboardsQueryLeaderboardRanksOptions options, const FOnQueryLeaderboardRanksCompleteCallback& callback);

    /**
     * Fetch the number of leaderboard records that are cached locally.
     *
     * @param Options The Options associated with retrieving the leaderboard record count.
     *
     * @see EOSLeaderboardsCopyLeaderboardRecordByIndex
     * @see EOSLeaderboardsCopyLeaderboardRecordByUserId
     *
     * @return Number of leaderboard records or 0 if there is an error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        static int32 EOSLeaderboardsGetLeaderboardRecordCount(FEOSLeaderboardsGetLeaderboardRecordCountOptions options);

    /**
     * Fetches a leaderboard record from a given index.
     *
     * @param Options Structure containing the index being accessed.
     * @param OutLeaderboardRecord The leaderboard record for the given index, if it exists and is valid, use EOSLeaderboardsLeaderboardRecord_Release when finished.
     *
     * @see EOSLeaderboardsLeaderboardRecord_Release
     *
     * @return EOS_Success if the leaderboard record is available and passed out in OutLeaderboardRecord
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the leaderboard is not found
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        static EOSResult EOSLeaderboardsCopyLeaderboardRecordByIndex(FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions options, FEOSLeaderboardsLeaderboardRecord& outLeaderboardRecord);

    /**
     * Fetches a leaderboard record from a given user ID.
     *
     * @param Options Structure containing the user ID being accessed.
     * @param OutLeaderboardRecord The leaderboard record for the given user ID, if it exists and is valid, use EOSLeaderboardsLeaderboardRecord_Release when finished.
     *
     * @see EOSLeaderboardsLeaderboardRecord_Release
     *
     * @return EOS_Success if the leaderboard record is available and passed out in OutLeaderboardRecord
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the leaderboard data is not found
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        static EOSResult EOSLeaderboardsCopyLeaderboardRecordByUserId(FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions options, FEOSLeaderboardsLeaderboardRecord& outLeaderboardRecord);

    /**
     * Query for a list of scores for a given list of users.
     *
     * @param Options Structure containing information about the users whose scores we're retrieving.
     * @param callback This function is called when the query operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        void EOSLeaderboardsQueryLeaderboardUserScores(FEOSLeaderboardsQueryLeaderboardUserScoresOptions options, const FOnQueryLeaderboardUserScoresCompleteCallback& callback);

    /**
     * Fetch the number of leaderboard user scores that are cached locally.
     *
     * @param Options The Options associated with retrieving the leaderboard user scores count.
     *
     * @see EOSLeaderboardsCopyLeaderboardUserScoreByIndex
     * @see EOSLeaderboardsCopyLeaderboardUserScoreByUserId
     *
     * @return Number of leaderboard records or 0 if there is an error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        static int32 EOSLeaderboardsGetLeaderboardUserScoreCount(FEOSLeaderboardsGetLeaderboardUserScoreCountOptions options);

    /**
     * Fetches leaderboard user score from a given index.
     *
     * @param Options Structure containing the index being accessed.
     * @param OutLeaderboardUserScore The leaderboard user score for the given index, if it exists and is valid, use EOSLeaderboardsLeaderboardUserScore_Release when finished.
     *
     * @see EOSLeaderboardsLeaderboardUserScore_Release
     *
     * @return EOS_Success if the leaderboard scores are available and passed out in OutLeaderboardUserScore
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the leaderboard user scores are not found
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        static EOSResult EOSLeaderboardsCopyLeaderboardUserScoreByIndex(FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions options, FEOSLeaderboardsLeaderboardUserScore& outLeaderboardUserScore);

    /**
     * Fetches leaderboard user score from a given user ID.
     *
     * @param Options Structure containing the user ID being accessed.
     * @param OutLeaderboardUserScore The leaderboard user score for the given user ID, if it exists and is valid, use EOSLeaderboardsLeaderboardUserScore_Release when finished.
     *
     * @see EOSLeaderboardsLeaderboardUserScore_Release
     *
     * @return EOS_Success if the leaderboard scores are available and passed out in OutLeaderboardUserScore
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the leaderboard user scores are not found
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Leaderboards")
        static EOSResult EOSLeaderboardsCopyLeaderboardUserScoreByUserId(FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions options, FEOSLeaderboardsLeaderboardUserScore& outLeaderboardUserScore);
private:
    static void Internal_OnLeaderboardQueryLeaderboardDefinitionsCompleteCallback(const EOS_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallbackInfo* data);
    static void Internal_OnLeaderboardQueryLeaderboardRanksCompleteCallback(const EOS_Leaderboards_OnQueryLeaderboardRanksCompleteCallbackInfo* data);
    static void Internal_OnLeaderboardQueryLeaderboardUserScoresCompleteCallbackInfo(const EOS_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallbackInfo* data);
private:
    static UCoreLeaderboards* LeaderboardsObject;
};
