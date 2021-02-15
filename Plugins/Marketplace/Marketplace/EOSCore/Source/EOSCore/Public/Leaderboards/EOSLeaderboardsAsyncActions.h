/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Leaderboards/EOSLeaderboardsTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSLeaderboardsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLeaderboardsQueryLeaderboardDefinitions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLeaderboardsQueryLeaderboardDefinitions : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnQueryLeaderboardDefinitionsCompleteCallbackDelegate OnCallback;
private:
    FOnQueryLeaderboardDefinitionsCompleteCallback Callback;
public:
    UEOSCoreLeaderboardsQueryLeaderboardDefinitions() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLeaderboardsQueryLeaderboardDefinitions() { Callback.Unbind(); }
public:
    /**
    * Query for a list of existing leaderboards definitions including their attributes.
    *
    * @param Options Structure containing information about the application whose leaderboard definitions we're retrieving.
    * @param ClientData Arbitrary data that is passed back to you in the callback.
    * @param callback This function is called when the query operation completes.
    *
    * @return EOS_Success if the operation completes successfully
    *         EOS_InvalidParameters if any of the options are incorrect
    */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Leaderboards|Async"))
		static UEOSCoreLeaderboardsQueryLeaderboardDefinitions* EOSLeaderboardsQueryLeaderboardDefinitionsAsync(UObject* WorldContextObject, FEOSLeaderboardsQueryLeaderboardDefinitionsOptions options);
protected:
    FEOSLeaderboardsQueryLeaderboardDefinitionsOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLeaderboardsQueryLeaderboardRanks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLeaderboardsQueryLeaderboardRanks : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnQueryLeaderboardRanksCompleteCallbackDelegate OnCallback;
private:
    FOnQueryLeaderboardRanksCompleteCallback Callback;
public:
    UEOSCoreLeaderboardsQueryLeaderboardRanks() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLeaderboardsQueryLeaderboardRanks() { Callback.Unbind(); }
public:
    /**
     * Retrieves top leaderboard records by rank in the leaderboard matching the given leaderboard ID.
     *
     * @param Options Structure containing information about the leaderboard records we're retrieving.
     * @param ClientData Arbitrary data that is passed back to you in the callback.
     * @param callback This function is called when the query operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Leaderboards|Async"))
		static UEOSCoreLeaderboardsQueryLeaderboardRanks* EOSLeaderboardsQueryLeaderboardRanksAsync(UObject* WorldContextObject, FEOSLeaderboardsQueryLeaderboardRanksOptions options);
protected:
    FEOSLeaderboardsQueryLeaderboardRanksOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreLeaderboardsQueryLeaderboardUserScores
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreLeaderboardsQueryLeaderboardUserScores : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnQueryLeaderboardUserScoresCompleteCallbackDelegate OnCallback;
private:
    FOnQueryLeaderboardUserScoresCompleteCallback Callback;
public:
    UEOSCoreLeaderboardsQueryLeaderboardUserScores() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreLeaderboardsQueryLeaderboardUserScores() { Callback.Unbind(); }
public:
    /**
     * Query for a list of scores for a given list of users.
     *
     * @param Options Structure containing information about the users whose scores we're retrieving.
     * @param ClientData Arbitrary data that is passed back to you in the callback.
     * @param callback This function is called when the query operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Leaderboards|Async"))
		static UEOSCoreLeaderboardsQueryLeaderboardUserScores* EOSLeaderboardsQueryLeaderboardUserScoresAsync(UObject* WorldContextObject, FEOSLeaderboardsQueryLeaderboardUserScoresOptions options);
protected:
    FEOSLeaderboardsQueryLeaderboardUserScoresOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};
