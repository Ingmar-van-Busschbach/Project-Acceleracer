/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Stats/EOSStatsTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSStatsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreStatsIngestStat
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreStatsIngestStat : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnStatsIngestStatCompleteCallbackDelegate OnCallback;
private:
    FOnStatsIngestStatCompleteCallback Callback;
public:
    UEOSCoreStatsIngestStat() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreStatsIngestStat() { Callback.Unbind(); }
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
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Stats|Async"))
		static UEOSCoreStatsIngestStat* EOSStatsIngestStatAsync(UObject* WorldContextObject, FEOSStatsIngestStatOptions options);
protected:
    FEOSStatsIngestStatOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSStatsIngestStatCompleteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreStatsQueryStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreStatsQueryStats : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnStatsQueryStatsCompleteCallbackDelegate OnCallback;
private:
    FOnStatsQueryStatsCompleteCallback Callback;
public:
    UEOSCoreStatsQueryStats() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreStatsQueryStats() { Callback.Unbind(); }
public:
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
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Stats|Async"))
        static UEOSCoreStatsQueryStats* EOSStatsQueryStatsAsync(UObject* WorldContextObject, FEOSStatsQueryStatsOptions options);
protected:
    FEOSStatsQueryStatsOptions Options;
public:
	virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSStatsOnQueryStatsCompleteCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};
