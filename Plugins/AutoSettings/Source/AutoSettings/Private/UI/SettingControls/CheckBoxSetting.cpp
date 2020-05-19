// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/SettingControls/CheckBoxSetting.h"

void UCheckBoxSetting::NativeConstruct()
{
	Super::NativeConstruct();

	if(IsValid(CheckBox))
		CheckBox->OnCheckStateChanged.AddUniqueDynamic(this, &UCheckBoxSetting::CheckBoxStateChanged);
}

void UCheckBoxSetting::UpdateToggleState_Implementation(bool State)
{
	if (IsValid(CheckBox))
		CheckBox->SetCheckedState(State ? ECheckBoxState::Checked : ECheckBoxState::Unchecked);
}

void UCheckBoxSetting::CheckBoxStateChanged(bool IsChecked)
{
	ToggleStateUpdated(IsChecked);
}
