// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/SettingControls/ComboBoxSetting.h"

void UComboBoxSetting::NativeConstruct()
{
	Super::NativeConstruct();

	if(IsValid(ComboBox))
		ComboBox->OnSelectionChanged.AddUniqueDynamic(this, &UComboBoxSetting::ComboBoxSelectionChanged);
}

void UComboBoxSetting::UpdateSelection_Implementation(const FString& Value)
{
	Super::UpdateSelection_Implementation(Value);

	if (IsValid(ComboBox))
		ComboBox->SetSelectedOption(GetOptionByValue(Value).Label.ToString());
}

void UComboBoxSetting::UpdateOptions_Implementation(const TArray<FSettingOption>& InOptions)
{
	Super::UpdateOptions_Implementation(InOptions);

	if (IsValid(ComboBox))
	{
		ComboBox->ClearOptions();

		for (FSettingOption Option : InOptions)
		{
			ComboBox->AddOption(Option.Label.ToString());
		}
	}

}

void UComboBoxSetting::ComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	if (!IsUpdatingSettingSelection() && !IsUpdatingSettingOptions()) // Ignore selection changes while the setting is updating selection or options
	{
		ApplySettingValue(GetOptionByLabel(FText::FromString(SelectedItem)).Value);
	}
}
