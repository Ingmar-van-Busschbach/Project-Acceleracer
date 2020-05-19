// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/SettingControls/SpinnerSetting.h"

void USpinnerSetting::NativeConstruct()
{
	Super::NativeConstruct();

	if(IsValid(Spinner))
		Spinner->SelectionChangedEvent.AddUniqueDynamic(this, &USpinnerSetting::SpinnerSelectionChanged);
}

void USpinnerSetting::UpdateSelection_Implementation(const FString & Value)
{
	if (IsValid(Spinner))
		Spinner->SelectValue(Value);
}

void USpinnerSetting::UpdateOptions_Implementation(const TArray<FSettingOption>& InOptions)
{
	if (IsValid(Spinner))
		Spinner->Options = InOptions;
}

void USpinnerSetting::SpinnerSelectionChanged(FString Value)
{
	ApplySettingValue(Value);
}
