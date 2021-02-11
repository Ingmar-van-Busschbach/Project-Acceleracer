/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "eos_metrics_types.h"
#include "Metrics/EOSMetricsTypes.h"
#include "EOSMetrics.generated.h"

UCLASS()
class EOSCORE_API UCoreMetrics : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
   UCoreMetrics();
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreMetrics* GetMetrics() { return MetricsObject; }
public:
    /**
    * Logs the start of a new game session for a local player.
    *
    * The game client should call this function whenever it joins into a new multiplayer, peer-to-peer or single player game session.
    * Each call to BeginPlayerSession must be matched with a corresponding call to EndPlayerSession.
    *
    * @param Options Structure containing the local player's game account and the game session information.
    *
    * @return Returns EOS_Success on success, or an error code if the input parameters are invalid or an active session for the player already exists.
    */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Metrics")
       EOSResult EOSMetricsBeginPlayerSession(FEOSMetricsBeginPlayerSessionOptions options);

    /**
     * Logs the end of a game session for a local player.
     *
     * Call once when the game client leaves the active game session.
     * Each call to BeginPlayerSession must be matched with a corresponding call to EndPlayerSession.
     *
     * @param Options Structure containing the account id of the player whose session to end.
     *
     * @return Returns EOS_Success on success, or an error code if the input parameters are invalid or there was no active session for the player.
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Metrics")
        EOSResult EOSMetricsEndPlayerSession(FEOSMetricsEndPlayerSessionOptions options);

private:
   static UCoreMetrics* MetricsObject;
};
