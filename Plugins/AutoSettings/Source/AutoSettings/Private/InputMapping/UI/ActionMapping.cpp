// Copyright Sam Bonifacio. All Rights Reserved.

#include "InputMapping/UI/ActionMapping.h"
#include "InputMapping/InputMappingManager.h"

void UActionMapping::NativeConstruct()
{
	Super::NativeConstruct();
}

void UActionMapping::UpdateLabel_Implementation()
{
	GetActionLabel()->ActionName = ActionName;
	GetActionLabel()->MappingGroup = MappingGroup;
	GetActionLabel()->KeyGroup = KeyGroup;
	GetActionLabel()->bUsePlayerKeyGroup = false;
	GetActionLabel()->IconTags = IconTags;
	GetActionLabel()->InitializeLabel();
}

void UActionMapping::BindChord(FInputChord InChord)
{
	const FInputActionKeyMapping NewMapping = FInputActionKeyMapping(ActionName, InChord.Key, InChord.bShift, InChord.bCtrl, InChord.bAlt, InChord.bCmd);

	// Override all key groups if none is specified
	const bool bAnyKeyGroup = !KeyGroup.IsValid();

	// Update this player's bindings
	UInputMappingManager::Get()->AddPlayerActionOverride(GetOwningPlayer(), NewMapping, MappingGroup, bAnyKeyGroup);

	// Tell the label to refresh since we might have changed keys
	GetActionLabel()->InitializeLabel();
}

