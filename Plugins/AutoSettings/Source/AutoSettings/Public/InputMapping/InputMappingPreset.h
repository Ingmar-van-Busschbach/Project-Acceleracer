#pragma once
#include "InputMappingGroup.h"
#include "GameplayTagContainer.h"
#include "InputMappingLayout.h"

#include "InputMappingPreset.generated.h"

// A complete set of input mappings making up a preset
USTRUCT(Blueprintable, BlueprintType)
struct AUTOSETTINGS_API FInputMappingPreset
{
    GENERATED_BODY()
	
    // Tag for this preset
    UPROPERTY(config, EditAnywhere, BlueprintReadWrite, Category = "Input Mapping Preset")
    FGameplayTag PresetTag;

    // If true, use default mappings defined in Input page in project settings
    UPROPERTY(config, EditAnywhere, Category = "Input Mapping Preset")
    bool bUseDefaultMappings = false;

    // Input mappings for this preset if not using default mappings
    UPROPERTY(config, EditAnywhere, Category = "Input Mapping Preset", meta = (EditCondition = "!bUseDefaultMappings"))
    FInputMappingLayout InputLayout;

    UPROPERTY(config, meta = (DeprecatedProperty))
    TArray<FInputMappingGroup> MappingGroups_DEPRECATED;

    FInputMappingPreset()
    {}

    FInputMappingPreset(FGameplayTag InTag, bool InUseDefaultMappings)
    {
        PresetTag = InTag;
        bUseDefaultMappings = InUseDefaultMappings;
    }

    // Construct groups from a list of actions and axis, such as default UE input
    FInputMappingPreset(FGameplayTag InTag, TArray<FInputActionKeyMapping> ActionMappings, TArray<FInputAxisKeyMapping> AxisMappings);

    TArray<FInputMappingGroup>& GetMappingGroups() { return InputLayout.MappingGroups; }

    bool operator==(const FInputMappingPreset& Other) const
    {
        return PresetTag == Other.PresetTag
            && bUseDefaultMappings == Other.bUseDefaultMappings
            && InputLayout == Other.InputLayout;
    }

};