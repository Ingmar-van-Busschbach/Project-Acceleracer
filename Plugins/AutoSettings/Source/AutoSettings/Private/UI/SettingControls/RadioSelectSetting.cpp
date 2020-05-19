// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/SettingControls/RadioSelectSetting.h"

void URadioSelectSetting::NativeConstruct()
{
	Super::NativeConstruct();

	if(IsValid(RadioSelect))
		RadioSelect->SelectionChangedEvent.AddUniqueDynamic(this, &URadioSelectSetting::RadioSelectionChanged);
}

void URadioSelectSetting::UpdateSelection_Implementation(const FString& Value)
{
	Super::UpdateSelection_Implementation(Value);

	if (IsValid(RadioSelect))
		RadioSelect->Select(Value);
}

void URadioSelectSetting::UpdateOptions_Implementation(const TArray<FSettingOption>& InOptions)
{
	Super::UpdateOptions_Implementation(InOptions);

	if (IsValid(RadioSelect))
		RadioSelect->SetOptions(InOptions);
}

void URadioSelectSetting::NativePreConstruct()
{
	if (IsValid(RadioSelect))
		RadioSelect->RadioButtonClass = RadioButtonClass;

	Super::NativePreConstruct();
}

void URadioSelectSetting::RadioSelectionChanged(FString Value)
{
	ApplySettingValue(Value);
}
