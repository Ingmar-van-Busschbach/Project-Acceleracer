// Copyright Sam Bonifacio. All Rights Reserved.


#include "AutoSettingsValidationSubsystem.h"
#include "Misc/AutoSettingsConfig.h"
#include "Misc/AutoSettingsError.h"

void UAutoSettingsValidationSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Validate plugin configuration to catch errors

	const UAutoSettingsConfig* Config = GetDefault<UAutoSettingsConfig>();

	check(Config);

	// Check for duplicate input presets

	FGameplayTagContainer CheckedPresetTags;

	for(const FInputMappingPreset& Preset : Config->InputPresets)
	{
		FGameplayTag PresetTag = Preset.PresetTag;

		if(CheckedPresetTags.HasTagExact(PresetTag))
		{
			// Already checked, so ignore
			continue;
		}

		const int32 NumPresetsWithTag = Config->InputPresets.FilterByPredicate([PresetTag](const FInputMappingPreset& OtherPreset) { return OtherPreset.PresetTag == PresetTag; }).Num();

		if(NumPresetsWithTag > 1)
		{
			FAutoSettingsError::LogError(FString::Printf(TEXT("There are %i Input Presets defined with the tag '%s'. Please give each Input Preset a unique tag in the Auto Settings page of the project settings."), NumPresetsWithTag, *PresetTag.ToString()));
		}

		CheckedPresetTags.AddTag(PresetTag);
	}

	// Check for duplicate key icon sets

	TArray<FGameplayTagContainer> CheckedKeyIconSetTags;

	for (const FKeyIconSet& KeyIconSet : Config->KeyIconSets)
	{
		FGameplayTagContainer KeyIconSetTags = KeyIconSet.Tags;

		if (CheckedKeyIconSetTags.Contains(KeyIconSetTags))
		{
			// Already checked, so ignore
			continue;
		}

		const int32 NumIconSetsWithTagSet = Config->KeyIconSets.FilterByPredicate([KeyIconSetTags](const FKeyIconSet& OtherKeyIconSet) { return OtherKeyIconSet.Tags == KeyIconSetTags; }).Num();

		if (NumIconSetsWithTagSet > 1)
		{
			FAutoSettingsError::LogError(FString::Printf(TEXT("There are %i Key Icon Sets defined with the tag set '%s'. Please give each Key Icon Set a unique tag set in the Auto Settings page of the project settings."), NumIconSetsWithTagSet, *KeyIconSetTags.ToString()));
		}

		CheckedKeyIconSetTags.Add(KeyIconSetTags);
	}

	// Check for duplicate key groups

	FGameplayTagContainer CheckedKeyGroupTags;

	for(const FKeyGroup& KeyGroup : Config->KeyGroups)
	{
		FGameplayTag KeyGroupTag = KeyGroup.KeyGroupTag;

		if(CheckedKeyGroupTags.HasTagExact(KeyGroupTag))
		{
			// Already checked, so ignore
			continue;
		}
		
		const int32 NumGroupsWithTag = Config->KeyGroups.FilterByPredicate([KeyGroupTag](const FKeyGroup& OtherKeyGroup) { return OtherKeyGroup.KeyGroupTag == KeyGroupTag; }).Num();

		if(NumGroupsWithTag > 1)
		{
			FAutoSettingsError::LogError(FString::Printf(TEXT("There are %i Key Groups defined with the tag '%s'. Please give each Key Group a unique tag in the Auto Settings page of the project settings."), NumGroupsWithTag, *KeyGroupTag.ToString()));
		}

		CheckedKeyGroupTags.AddTag(KeyGroupTag);
	}
}
