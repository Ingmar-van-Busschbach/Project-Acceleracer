/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Achievements/EOSAchievementsTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSAchievementsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAchievementsQueryDefinitions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreAchievementsQueryDefinitions : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnAchievementsQueryDefinitionsCallbackDelegate OnCallback;
private:
    FOnAchievementsQueryDefinitionsCallback Callback;
public:
    UEOSCoreAchievementsQueryDefinitions() { Callback.BindUFunction(this, "HandleCallback"); }
public:
    /**
     * Query for a list of definitions for all existing achievements, including localized text, icon IDs and whether an achievement is hidden.
     *
     * @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).
     *
     * @param options       Structure containing information about the application whose achievement definitions we're retrieving.
     * @param clientData    Arbitrary data that is passed back to you in the CompletionDelegate
     * @param callback      This function is called when the query definitions operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Achievements|Async", AutoCreateRefTerm = "clientData"))
		static UEOSCoreAchievementsQueryDefinitions* EOSAchievementsQueryDefinitionsAsync(UObject* WorldContextObject, FEOSAchievementsQueryDefinitionsOptions options);
protected:
    FEOSAchievementsQueryDefinitionsOptions Options;
public:
    virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo& data, bool bWasSuccessful)
    {
        OnCallback.Broadcast(data);

		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAchievementsQueryPlayerAchievements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreAchievementsQueryPlayerAchievements : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnAchievementsQueryPlayerAchievementsCallbackDelegate OnCallback;
private:
    FOnAchievementsQueryPlayerAchievementsCallback Callback;
public:
    UEOSCoreAchievementsQueryPlayerAchievements() { Callback.BindUFunction(this, "HandleCallback"); }
public:
    /**
     * Query for a list of achievements for a specific player, including progress towards completion for each achievement.
     *
     * @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).
     *
     * @param Options Structure containing information about the player whose achievements we're retrieving.
     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate
     * @param CompletionDelegate This function is called when the query player achievements operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Achievements|Async", AutoCreateRefTerm = "clientData"))
		static UEOSCoreAchievementsQueryPlayerAchievements* EOSAchievementsQueryPlayerAchievementsAsync(UObject* WorldContextObject, FEOSAchievementsQueryPlayerAchievementsOptions options);
protected:
    FEOSAchievementsQueryPlayerAchievementsOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo& data, bool bWasSuccessful)
    {
		const FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo m_Data = data;

		OnCallback.Broadcast(m_Data);

		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreAchievementsUnlockAchievements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreAchievementsUnlockAchievements : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnAchievementsUnlockAchievementsCallbackDelegate OnCallback;
private:
    FOnAchievementsUnlockAchievementsCallback Callback;
public:
    UEOSCoreAchievementsUnlockAchievements() { Callback.BindUFunction(this, "HandleCallback"); }
public:
    /**
     * Unlocks a number of achievements for a specific player.
     *
     * @param Options Structure containing information about the achievements and the player whose achievements we're unlocking.
     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate
     * @param CompletionDelegate This function is called when the unlock achievements operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Achievements|Async", AutoCreateRefTerm = "clientData"))
		static UEOSCoreAchievementsUnlockAchievements* EOSAchievementsUnlockAchievements(UObject* WorldContextObject, FEOSAchievementsUnlockAchievementsOptions options);
protected:
    FEOSAchievementsUnlockAchievementsOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo& data, bool bWasSuccessful)
    {
		const FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo m_Data = data;

		OnCallback.Broadcast(m_Data);

		Callback.Unbind();
		SetReadyToDestroy();
    }
};