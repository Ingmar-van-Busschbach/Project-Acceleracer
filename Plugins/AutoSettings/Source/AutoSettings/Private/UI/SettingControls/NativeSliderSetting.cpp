// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/SettingControls/NativeSliderSetting.h"

void UNativeSliderSetting::NativeConstruct()
{
	Super::NativeConstruct();

	if (IsValid(Slider))
	{
		Slider->OnValueChanged.AddUniqueDynamic(this, &UNativeSliderSetting::SliderValueChanged);
		Slider->OnMouseCaptureBegin.AddUniqueDynamic(this, &UNativeSliderSetting::SliderMouseCaptureBegin);
		Slider->OnMouseCaptureEnd.AddUniqueDynamic(this, &UNativeSliderSetting::SliderMouseCaptureEnd);
	}
}

void UNativeSliderSetting::UpdateSliderValue_Implementation(float NormalizedValue, float RawValue)
{
	if (IsValid(Slider))
		Slider->SetValue(NormalizedValue);
}

void UNativeSliderSetting::SliderValueChanged(float NewValue)
{
	SliderValueUpdated(NewValue);
}

void UNativeSliderSetting::SliderMouseCaptureBegin()
{
	bMouseCaptureInProgress = true;
}

void UNativeSliderSetting::SliderMouseCaptureEnd()
{
	bMouseCaptureInProgress = false;

	// Call SliderValueUpdated after released to trigger a save if we need one
	SliderValueUpdated(Slider->GetValue());
}
