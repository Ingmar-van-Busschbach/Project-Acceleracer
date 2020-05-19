#include "InputMapping/PlayerInputMappings.h"
#include "Misc/AutoSettingsConfig.h"

FPlayerInputMappings::FPlayerInputMappings()
{
	ApplyDefaultKeyGroup();
}

FPlayerInputMappings::FPlayerInputMappings(FString PlayerId, bool Custom, FInputMappingPreset Preset)
	: PlayerId(PlayerId)
	, BasePresetTag(Preset.PresetTag)
{
	ApplyDefaultKeyGroup();
}

void FPlayerInputMappings::ApplyDefaultKeyGroup()
{
	const TArray<FKeyGroup>& KeyGroups = GetDefault<UAutoSettingsConfig>()->KeyGroups;
	if (KeyGroups.IsValidIndex(0))
	{
		PlayerKeyGroup = KeyGroups[0].KeyGroupTag;
	}
}

FInputMappingLayout FPlayerInputMappings::BuildMergedMappingLayout() const
{
    // Get base preset mappings
	FInputMappingLayout BasePresetMappings = GetBasePresetMappings();

    // Apply player input overrides on top
	BasePresetMappings.MergeUnboundMappings(MappingOverrides);
	BasePresetMappings.ApplyUnboundMappings();
    BasePresetMappings.MergeMappings(MappingOverrides);

    return BasePresetMappings;
}

FInputMappingLayout FPlayerInputMappings::GetBasePresetMappings() const
{
	return GetDefault<UAutoSettingsConfig>()->GetInputPresetByTag(BasePresetTag).InputLayout;
}

void FPlayerInputMappings::Apply(APlayerController* PlayerController)
{
    if(!ensure(PlayerController))
    {
        return;
    }

    // Apply merged mappings to player controller
    BuildMergedMappingLayout().Apply(PlayerController);
}

void FPlayerInputMappings::MigrateDeprecatedProperties()
{
	if (PlayerIndex_DEPRECATED >= 0 && PlayerId.IsEmpty())
	{
		PlayerId = FString::FromInt(PlayerIndex_DEPRECATED);
		PlayerIndex_DEPRECATED = FPlayerInputMappings().PlayerIndex_DEPRECATED;
	}

	if (Preset_DEPRECATED.MappingGroups_DEPRECATED.Num() > 0 && MappingOverrides.GetTotalNumInputDefinitions() == 0)
	{
		BasePresetTag = Preset_DEPRECATED.PresetTag;

		// Migrate to new overrides based on old mappings
		
		// Find any mappings on base preset that were unbound in old mappings
		const FInputMappingLayout OldMappings = FInputMappingLayout(Preset_DEPRECATED.MappingGroups_DEPRECATED);
		const FInputMappingLayout PresetMappings = GetDefault<UAutoSettingsConfig>()->GetInputPresetByTag(BasePresetTag).InputLayout;
		FInputMappingLayout UnboundMappings = OldMappings.FindUnboundMappings(PresetMappings);
		
		// Apply the old mappings on top of the unbound ones
		MappingOverrides = UnboundMappings.MergeMappings(OldMappings);
		
		// Remove any redundant overrides that are already on the preset
		MappingOverrides.RemoveMappingsSharedWith(PresetMappings);

		Preset_DEPRECATED = FInputMappingPreset();
	}
}
