// Copyright Sam Bonifacio. All Rights Reserved.

#include "InputMapping/UI/AxisLabel.h"
#include "InputMapping/InputMappingManager.h"


void UAxisLabel::InitializeLabel()
{
	UpdateLabel();
}

void UAxisLabel::UpdateLabel_Implementation()
{
	const FInputAxisKeyMapping Mapping = UInputMappingManager::Get()->GetPlayerAxisMapping(GetOwningPlayer(), AxisName, Scale, MappingGroup, KeyGroup, bUsePlayerKeyGroup);

	KeyLabel->Key = Mapping.Key;
	KeyLabel->IconTags = IconTags;

	KeyLabel->UpdateKeyLabel();
}

void UAxisLabel::NativePreConstruct()
{
	Super::NativePreConstruct();

	UpdateLabel();
}