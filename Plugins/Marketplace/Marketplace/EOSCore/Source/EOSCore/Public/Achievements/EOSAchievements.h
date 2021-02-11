/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "Achievements/EOSAchievementsTypes.h"
#include "EOSAchievements.generated.h"

/**
 * The following EOS_Achievements_* functions allow you to query existing achievement definitions that have been defined for your application.
 * You can also query achievement progress data for users.
 * In addition, you can also unlock one or more achievements directly.
 * You can also receive notifications when achievements are unlocked.
 */

UCLASS()
class EOSCORE_API UCoreAchievements : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
    UCoreAchievements();
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
    /**
     * The following EOS_Achievements_* functions allow you to query existing achievement definitions that have been defined for your application.
     * You can also query achievement progress data for users.
     * In addition, you can also unlock one or more achievements directly.
     * You can also receive notifications when achievements are unlocked.
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
        static UCoreAchievements* GetAchievements() { return AchievementsObject; }
public:
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Achievements|Delegates")
        FOnAchievementsQueryDefinitionsCallbackDelegate OnQueryDefinitionsCompleteCallbackDelegate;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Achievements|Delegates")
        FOnAchievementsQueryPlayerAchievementsCallbackDelegate OnQueryPlayerAchievementsCompleteCallbackDelegate;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Achievements|Delegates")
        FOnAchievementsUnlockAchievementsCallbackDelegate OnAchievementsUnlockAchievementsCallbackDelegate;
    UPROPERTY(BlueprintAssignable, Category = "EOSCore|Achievements|Delegates")
        FOnAchievementsUnlockedCallbackV2Delegate OnAchievementsUnlockedCallbackV2Delegate;
public:
    /**
     * Query for a list of definitions for all existing achievements, including localized text, icon IDs and whether an achievement is hidden.
     *
     * @note When the Social Overlay is enabled then this will be called automatically.  The Social Overlay is enabled by default (see EOS_PF_DISABLE_SOCIAL_OVERLAY).
     *
     * @param options       Structure containing information about the application whose achievement definitions we're retrieving.
     * @param callback      This function is called when the query definitions operation completes.
     *
     * @return EOS_Success if the operation completes successfully
     *         EOS_InvalidParameters if any of the options are incorrect
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
        void EOSAchievementsQueryDefinitions(FEOSAchievementsQueryDefinitionsOptions options, const FOnAchievementsQueryDefinitionsCallback& callback);

    /**
     * Fetch the number of achievement definitions that are cached locally.
     *
     * @param Options The Options associated with retrieving the achievement definition count
     *
     * @see EOS_Achievements_CopyAchievementDefinitionByIndex
     *
     * @return Number of achievement definitions or 0 if there is an error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
       static int32 EOSAchievementsGetAchievementDefinitionCount(FEOSAchievementsGetAchievementDefinitionCountOptions options);

    /**
    * Fetches an achievement definition from a given index.
    *
    * @param Options Structure containing the index being accessed
    * @param OutDefinition The achievement definition for the given index, if it exists and is valid, use EOS_Achievements_Definition_Release when finished
    *
    * @see EOS_Achievements_DefinitionV2_Release
    *
    * @return EOS_Success if the information is available and passed out in OutDefinition
    *         EOS_InvalidParameters if you pass a null pointer for the out parameter
    *         EOS_NotFound if the achievement definition is not found
    */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
        static EOSResult EOSAchievementsCopyAchievementDefinitionV2ByIndex(FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions options, FEOSAchievementsDefinitionV2& outDefinition);

    /**
    * Fetches an achievement definition from a given achievement ID.
    *
    * @param Options Structure containing the achievement ID being accessed
    * @param OutDefinition The achievement definition for the given achievement ID, if it exists and is valid, use EOS_Achievements_Definition_Release when finished
    *
    * @see EOS_Achievements_DefinitionV2_Release
    *
    * @return EOS_Success if the information is available and passed out in OutDefinition
    *         EOS_InvalidParameters if you pass a null pointer for the out parameter
    *         EOS_NotFound if the achievement definition is not found
    */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
        static EOSResult EOSAchievementsCopyAchievementDefinitionV2ByAchievementId(FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions options, FEOSAchievementsDefinitionV2& outDefinition);

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
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
        void EOSAchievementsQueryPlayerAchievements(FEOSAchievementsQueryPlayerAchievementsOptions options, const FOnAchievementsQueryPlayerAchievementsCallback& callback);

    /**
     * Fetch the number of player achievements that are cached locally.
     *
     * @param Options The Options associated with retrieving the player achievement count
     *
     * @see EOS_Achievements_CopyPlayerAchievementByIndex
     *
     * @return Number of player achievements or 0 if there is an error
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
        static int32 EOSAchievementsGetPlayerAchievementCount(FEOSAchievementsGetPlayerAchievementCountOptions options);

    /**
     * Fetches a player achievement from a given index.
     *
     * @param Options Structure containing the account id and index being accessed
     * @param OutAchievement The player achievement data for the given index, if it exists and is valid, use EOS_Achievements_PlayerAchievement_Release when finished
     *
     * @see EOS_Achievements_PlayerAchievement_Release
     *
     * @return EOS_Success if the information is available and passed out in OutAchievement
     *         EOS_InvalidParameters if you pass a null pointer for the out parameter
     *         EOS_NotFound if the player achievement is not found
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
        static EOSResult EOSAchievementsCopyPlayerAchievementByIndex(FEOSAchievementsCopyPlayerAchievementByIndexOptions options, FEOSAchievementsPlayerAchievement& outAchievement);

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
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
        void EOSAchievementsUnlockAchievements(FEOSAchievementsUnlockAchievementsOptions options, const FOnAchievementsUnlockAchievementsCallback& callback);
    
    /**
     * Register to receive achievement unlocked notifications.
     * @note must call EOS_Achievements_RemoveNotifyAchievementsUnlocked to remove the notification
     *
     * @see EOS_Achievements_RemoveNotifyAchievementsUnlocked
     *
     * @param Options Structure containing information about the achievement unlocked notification
     * @param ClientData Arbitrary data that is passed back to you in the CompletionDelegate
     * @param NotificationFn A callback that is fired when an achievement unlocked notification for a user has been received
     *
     * @return handle representing the registered callback
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
        static FEOSNotificationId EOSAchievementsAddNotifyAchievementsUnlockedV2(const FOnAchievementsUnlockedV2Callback& callback);
    
    /**
     * Unregister from receiving achievement unlocked notifications.
     *
     * @see EOS_Achievements_AddNotifyAchievementsUnlocked
     *
     * @param InId Handle representing the registered callback
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Achievements")
        static void EOSAchievementsRemoveNotifyAchievementsUnlocked(FEOSNotificationId id);
private:
    static void Internal_OnAchievementsQueryDefinitionsCompleteCallback(const EOS_Achievements_OnQueryDefinitionsCompleteCallbackInfo* data);
    static void Internal_OnAchievementsQueryPlayerAchievementsCompleteCallback(const EOS_Achievements_OnQueryPlayerAchievementsCompleteCallbackInfo* data);
    static void Internal_OnAchievementsUnlockAchievementsCompleteCallback(const EOS_Achievements_OnUnlockAchievementsCompleteCallbackInfo* data);
private:
    static UCoreAchievements* AchievementsObject;
};
