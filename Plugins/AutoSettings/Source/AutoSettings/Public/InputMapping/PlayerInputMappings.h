#pragma once
#include "CoreMinimal.h"
#include "InputMappingPreset.h"

#include "PlayerInputMappings.generated.h"

// Holds saved input mappings for a specific player, as well as if they are custom or from a preset
// Used to save and load input mapping information
USTRUCT(BlueprintType)
struct AUTOSETTINGS_API FPlayerInputMappings
{
    GENERATED_BODY()
	
    // String to identify the player that owns these mappings
    // Preferably the Unique Net ID of the player, but can fall back to a Controller ID
    UPROPERTY()
    FString PlayerId;
	
    UPROPERTY(meta = (DeprecatedProperty))
    int32 PlayerIndex_DEPRECATED = -1;

    // Preset that this player's input is based off
    UPROPERTY(BlueprintReadWrite, Category = "Input Mapping")
    FGameplayTag BasePresetTag;

    // Modifications that the player has made to the base preset
    UPROPERTY()
    FInputMappingLayout MappingOverrides;

    UPROPERTY(meta = (DeprecatedProperty))
    bool Custom_DEPRECATED = false;

    UPROPERTY(meta = (DeprecatedProperty))
    FInputMappingPreset Preset_DEPRECATED;

    // Key group used to retrieve active mappings
    // Useful for globally switching prompts between key groups when for example input device is changed
    // See UInputMappingManager::SetPlayerKeyGroupStatic
    UPROPERTY()
    FGameplayTag PlayerKeyGroup;

    FPlayerInputMappings();

    FPlayerInputMappings(FString PlayerId, bool Custom, FInputMappingPreset Preset);

    void ApplyDefaultKeyGroup();

    FInputMappingLayout BuildMergedMappingLayout() const;

    FInputMappingLayout GetBasePresetMappings() const;

    void Apply(APlayerController* PlayerController);

    void MigrateDeprecatedProperties();

    bool operator==(const FPlayerInputMappings& Other) const
    {
        return (PlayerId == Other.PlayerId
            && BasePresetTag == Other.BasePresetTag
            && MappingOverrides == Other.MappingOverrides
            && PlayerKeyGroup == Other.PlayerKeyGroup);
    }

    bool operator!=(const FPlayerInputMappings& Other) const
    {
        return !(*this == Other);
    }
};