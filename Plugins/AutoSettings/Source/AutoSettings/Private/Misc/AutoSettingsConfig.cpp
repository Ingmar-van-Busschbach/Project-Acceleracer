// Copyright Sam Bonifacio. All Rights Reserved.

#include "Misc/AutoSettingsConfig.h"
#include "GameFramework/InputSettings.h"
#include "Misc/AutoSettingsLogs.h"
#include "Misc/AutoSettingsError.h"

#define LOCTEXT_NAMESPACE "FAutoSettingsModule"

UTexture* FKeyIconSet::GetIcon(FKey Key) const
{
	const FKeyIconPair* FoundPair = Icons.FindByPredicate([Key](const FKeyIconPair KeyIconPair) {
		return KeyIconPair.Key == Key;
	});

	if (FoundPair)
	{
		UTexture* FoundIcon = FoundPair->Icon;

		if (!FoundIcon)
		{
			UE_LOG(LogAutoSettings, Warning, TEXT("FKeyIconSet::GetIcon: Key icon defined but empty - Key: %s, tags: %s"), *Key.ToString(), *Tags.ToString());
		}

		return FoundIcon;
	}

	return nullptr;
}

UAutoSettingsConfig::UAutoSettingsConfig()
	: bAutoInitializePlayerInputOverrides(true)
	, AllowModifierKeys(true)
	, AllowMultipleBindingsPerKey(false)
{
	CategoryName = "Plugins";
	
	ShiftModifierOverrideText = NSLOCTEXT("AutoSettings", "ShiftKey", "Shift");
	CtrlModifierOverrideText = NSLOCTEXT("AutoSettings", "CtrlKey", "Ctrl");
	AltModifierOverrideText = NSLOCTEXT("AutoSettings", "AltKey", "Alt");
	CmdModifierOverrideText = NSLOCTEXT("AutoSettings", "CmdKey", "Cmd");

	// Gamepad stick associations
	AxisAssociations.Add(FAxisAssociation(EKeys::Gamepad_LeftX, { FKeyScale(EKeys::Gamepad_LeftStick_Right), FKeyScale(EKeys::Gamepad_LeftStick_Left, -1.f) }));
	AxisAssociations.Add(FAxisAssociation(EKeys::Gamepad_LeftY, { FKeyScale(EKeys::Gamepad_LeftStick_Up), FKeyScale(EKeys::Gamepad_LeftStick_Down, -1.f) }));
	AxisAssociations.Add(FAxisAssociation(EKeys::Gamepad_RightX, { FKeyScale(EKeys::Gamepad_RightStick_Right), FKeyScale(EKeys::Gamepad_RightStick_Left, -1.f) }));
	// This is intentionally inverted, due to how the axis values are inverted when they are provided
	AxisAssociations.Add(FAxisAssociation(EKeys::Gamepad_RightY, { FKeyScale(EKeys::Gamepad_RightStick_Up, -1.f), FKeyScale(EKeys::Gamepad_RightStick_Down) }));

	// Mouse axis associations
	AxisAssociations.Add(FAxisAssociation(EKeys::MouseX, { FKeyScale(EKeys::MouseX), FKeyScale(EKeys::MouseX, -1.f) }));
	AxisAssociations.Add(FAxisAssociation(EKeys::MouseY, { FKeyScale(EKeys::MouseY), FKeyScale(EKeys::MouseY, -1.f) }));
}

TArray<FInputMappingPreset> UAutoSettingsConfig::GetInputPresets() const
{
	TArray<FInputMappingPreset> Result = InputPresets;

	if (InputPresets.Num() < 1)
	{
		// Add default if no presets
		Result.Add(FInputMappingPreset(FGameplayTag::EmptyTag, true));
	}

	const TArray<FInputActionKeyMapping> DefaultActions = GetDefault<UInputSettings>()->GetActionMappings();
	const TArray<FInputAxisKeyMapping> DefaultAxis = GetDefault<UInputSettings>()->GetAxisMappings();

	for (FInputMappingPreset& Preset : Result)
	{
		// Add all default mappings first
		if (Preset.bUseDefaultMappings)
		{
			Preset.InputLayout.SetMappings(DefaultActions, DefaultAxis);
		}
	}

	return Result;
}

FInputMappingPreset UAutoSettingsConfig::GetInputPresetByTag(FGameplayTag PresetTag) const
{
	TArray<FInputMappingPreset> Presets = GetInputPresets();
	for(FInputMappingPreset& Preset : Presets)
	{
		if(Preset.PresetTag == PresetTag)
		{
			return Preset;
		}
	}
	check(Presets.Num() > 0);
	return Presets[0];
}

UTexture* UAutoSettingsConfig::GetIconForKey(FKey InKey, FGameplayTagContainer Tags) const
{
	UTexture* Result;

	// First check if an icon matches input tags exactly
	for (const FKeyIconSet& Set : KeyIconSets)
	{
		if (Set.Tags == Tags)
		{
			Result = Set.GetIcon(InKey);
			if (Result)
				return Result;
		}
	}

	// Check if an icon contains all input tags
	for (const FKeyIconSet& Set : KeyIconSets)
	{
		if (Set.Tags.DoesTagContainerMatch(Tags, EGameplayTagMatchType::Explicit, EGameplayTagMatchType::Explicit, EGameplayContainerMatchType::All))
		{
			Result = Set.GetIcon(InKey);
			if (Result)
				return Result;
		}
	}

	// Check if an icon contains any of the input tags
	for (const FKeyIconSet& Set : KeyIconSets)
	{
		if (Set.Tags.DoesTagContainerMatch(Tags, EGameplayTagMatchType::Explicit, EGameplayTagMatchType::Explicit, EGameplayContainerMatchType::Any))
		{
			Result = Set.GetIcon(InKey);
			if (Result)
				return Result;
		}
	}

	// Fall back to first icon we can find
	for (const FKeyIconSet& Set : KeyIconSets)
	{
		Result = Set.GetIcon(InKey);
		if (Result)
			return Result;
	}

	return nullptr;
}

FText UAutoSettingsConfig::GetKeyFriendlyName(FKey Key) const
{
	// There seems to be some issues where setting FKey of None in BP
	// then returns a display name of "(" and stuff like that, so just manually
	// handle case of none key
	if (!Key.IsValid())
		return FText::FromString(FString(TEXT("None")));

	for (const FKeyFriendlyName& KeyFriendlyName : KeyFriendlyNames)
	{
		if (KeyFriendlyName.Key == Key)
		{
			return KeyFriendlyName.FriendlyName;
		}
	}
	return Key.GetDisplayName();
}

FText UAutoSettingsConfig::GetKeyFriendlyNameStatic(FKey Key)
{
	return GetDefault<UAutoSettingsConfig>()->GetKeyFriendlyName(Key);
}

FGameplayTag UAutoSettingsConfig::GetKeyGroupStatic(FKey Key)
{
	return GetDefault<UAutoSettingsConfig>()->GetKeyGroup(Key);
}

bool UAutoSettingsConfig::DoesKeyGroupContainKey(FGameplayTag KeyGroupTag, FKey Key) const
{
	for (FKeyGroup KeyGroup : KeyGroups)
	{
		if (KeyGroup.KeyGroupTag == KeyGroupTag)
		{
			return KeyGroup.Contains(Key);
		}
	}

	return false;
}

bool UAutoSettingsConfig::IsKeyGroupDefined(FGameplayTag KeyGroupTag) const
{
	return KeyGroups.ContainsByPredicate([KeyGroupTag](const FKeyGroup& KeyGroup) { return KeyGroup.KeyGroupTag == KeyGroupTag; });
}

FGameplayTag UAutoSettingsConfig::GetKeyGroup(FKey Key) const
{
	for (FKeyGroup KeyGroup : KeyGroups)
	{
		if (KeyGroup.Contains(Key))
		{
			return KeyGroup.KeyGroupTag;
		}
	}

	return FGameplayTag();
}

bool UAutoSettingsConfig::SameKeyGroup(FKey KeyA, FKey KeyB) const
{
	return GetKeyGroup(KeyA) == GetKeyGroup(KeyB);
}

FKeyScale UAutoSettingsConfig::GetAxisKey(FKey InButtonKey) const
{
	for (FAxisAssociation AxisAssociation : AxisAssociations)
	{
		for (FKeyScale ButtonKey : AxisAssociation.ButtonKeys)
		{
			if (ButtonKey.Key == InButtonKey)
			{
				return FKeyScale(AxisAssociation.AxisKey, ButtonKey.Scale);
			}
		}
	}

	return FKeyScale();
}

bool UAutoSettingsConfig::IsAxisKey(FKey Key) const
{
	const FAxisAssociation* FoundAssociation = AxisAssociations.FindByPredicate([Key](const FAxisAssociation Association) {
		return Association.AxisKey == Key;
	});

	return FoundAssociation != nullptr;
}

bool UAutoSettingsConfig::IsKeyAllowed(FKey Key) const
{
	if (AllowedKeys.Num() > 0)
	{
		bool bHasAllowedKey = false;

		for (FKey AllowedKey : AllowedKeys)
		{
			if (Key == AllowedKey)
			{
				bHasAllowedKey = true;
				break;
			}
		}

		if (!bHasAllowedKey)
		{
			// Whitelist populated but doesn't have key, therefore key is disallowed
			return false;
		}
	}

	// Disallow if key on blacklist

	for (FKey DisallowedKey : DisallowedKeys)
	{
		if (Key == DisallowedKey)
		{
			return false;
		}
	}

	// Passed both whitelist and blacklist, key is allowed
	return true;
}

bool UAutoSettingsConfig::ShouldBindingsBeUniqueBetweenMappingGroups(int32 MappingGroupA, int32 MappingGroupB) const
{
	// Always enforce unique if not allowing multiple bindings per key
	if (!AllowMultipleBindingsPerKey)
		return true;

	if (MappingGroupA == MappingGroupB)
		return true;

	for (const FMappingGroupLink& Link : MappingGroupLinks)
	{
		if (Link.MappingGroups.Contains(MappingGroupA) && Link.MappingGroups.Contains(MappingGroupB))
		{
			// Both mapping groups are linked and should have unique bindings
			return true;
		}
	}

	return false;
}

void UAutoSettingsConfig::PostInitProperties()
{
	Super::PostInitProperties();
	
	// Migrate deprecated properties
	
	for(FName& Action : BlacklistedActions_DEPRECATED)
	{
		PreservedActions.AddUnique(Action);
	}
	BlacklistedActions_DEPRECATED.Empty();
	
	for(FName& Axis : BlacklistedAxes_DEPRECATED)
	{
		PreservedAxes.AddUnique(Axis);
	}
	BlacklistedAxes_DEPRECATED.Empty();

	for(FAxisAssociation& AxisAssociation : AxisAssociations)
	{
		if(AxisAssociation.AnalogKey_DEPRECATED.IsValid() && !AxisAssociation.AxisKey.IsValid())
		{
			AxisAssociation.AxisKey = AxisAssociation.AnalogKey_DEPRECATED;
			AxisAssociation.AnalogKey_DEPRECATED = EKeys::Invalid;
		}
		if(AxisAssociation.BooleanKeys_DEPRECATED.Num() > 0 && AxisAssociation.ButtonKeys.Num() == 0)
		{
			AxisAssociation.ButtonKeys = AxisAssociation.BooleanKeys_DEPRECATED;
			AxisAssociation.BooleanKeys_DEPRECATED.Reset();
		}
	}

	for(FInputMappingPreset& Preset : InputPresets)
	{
		if(Preset.MappingGroups_DEPRECATED.Num() > 0 && Preset.InputLayout.MappingGroups.Num() == 0)
		{
			Preset.InputLayout.MappingGroups = Preset.MappingGroups_DEPRECATED;
			Preset.MappingGroups_DEPRECATED.Reset();
		}
	}

}

#if WITH_EDITOR
FText UAutoSettingsConfig::GetSectionText() const
{
	return LOCTEXT("AutoSettingsName", "Auto Settings");
}

FText UAutoSettingsConfig::GetSectionDescription() const
{
	return LOCTEXT("AutoSettingsDescription", "Configure the Auto Settings plugin.");
}
#endif

#undef LOCTEXT_NAMESPACE