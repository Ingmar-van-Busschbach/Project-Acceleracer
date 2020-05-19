// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/SettingControls/SelectSetting.h"

void USelectSetting::NativePreConstruct()
{
	// Update options before calling super, which updates the selection
	// The options need to exist before the selection will work
	DispatchUpdateOptions(GetCombinedOptions());
	Super::NativePreConstruct();
}

void USelectSetting::UpdateOptions_Implementation(const TArray<FSettingOption>& InOptions)
{
}

FSettingOption USelectSetting::GetOptionByValue(FString Value) const
{
	for (FSettingOption Option : GetCombinedOptions())
	{
		if (Option.Value == Value)
			return Option;
	}

	return FSettingOption();
}

FSettingOption USelectSetting::GetOptionByLabel(FText Label) const
{
	for (FSettingOption Option : GetCombinedOptions())
	{
		if (Option.Label.EqualTo(Label))
			return Option;
	}

	return FSettingOption();
}

TArray<FSettingOption> USelectSetting::GetCombinedOptions() const
{
	TArray<FSettingOption> ResultOptions = Options;

	// Replace empty options with index
	for (int i = 0; i < ResultOptions.Num(); i++)
	{
		FSettingOption& Option = ResultOptions[i];
		if (Option.Label.IsEmpty())
			Option.Label = FText::FromString(FString::FromInt(i));
		if (Option.Value.IsEmpty())
			Option.Value = FString::FromInt(i);
	}

	if (OptionFactory)
	{
		ResultOptions.Append(Cast<USettingOptionFactory>(OptionFactory->GetDefaultObject())->ConstructOptions());
	}

	return ResultOptions;
}

void USelectSetting::DispatchUpdateOptions(const TArray<FSettingOption>& InOptions)
{
	bUpdatingSettingOptions = true;
	UpdateOptions(InOptions);
	bUpdatingSettingOptions = false;
}
