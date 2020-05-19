// Copyright Sam Bonifacio. All Rights Reserved.

#include "InputMapping/UI/AxisMapping.h"
#include "InputMapping/InputMappingManager.h"

void UAxisMapping::NativeConstruct()
{
	Super::NativeConstruct();
}

void UAxisMapping::UpdateLabel_Implementation()
{
	GetAxisLabel()->AxisName = AxisName;
	GetAxisLabel()->Scale = Scale;
	GetAxisLabel()->MappingGroup = MappingGroup;
	GetAxisLabel()->KeyGroup = KeyGroup;
	GetAxisLabel()->bUsePlayerKeyGroup = false;
	GetAxisLabel()->IconTags = IconTags;
	GetAxisLabel()->InitializeLabel();
}

void UAxisMapping::BindChord(FInputChord InChord)
{
	FKey Key = InChord.Key;

	FKeyScale AxisKeyScale = GetDefault<UAutoSettingsConfig>()->GetAxisKey(Key);
	const bool bUseAxisKey = AxisKeyScale.Key.IsValid();

	const FKey FinalKey = bUseAxisKey ? AxisKeyScale.Key : Key;
	const float FinalScale = bUseAxisKey ? AxisKeyScale.Scale * Scale : Scale;

	const FInputAxisKeyMapping NewMapping = FInputAxisKeyMapping(AxisName, FinalKey, FinalScale);

	// Override all key groups if none is specified
	const bool bAnyKeyGroup = !KeyGroup.IsValid();

	UInputMappingManager::Get()->AddPlayerAxisOverride(GetOwningPlayer(), NewMapping, MappingGroup, bAnyKeyGroup);
}
