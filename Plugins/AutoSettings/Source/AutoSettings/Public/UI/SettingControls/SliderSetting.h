// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "UI/AutoSettingWidget.h"
#include "SliderSetting.generated.h"

/**
 * Base AutoSetting with generic slider functionality
 */
UCLASS(abstract)
class AUTOSETTINGS_API USliderSetting : public UAutoSettingWidget
{
	GENERATED_BODY()

public:

	USliderSetting(const FObjectInitializer& ObjectInitializer);

	// Value assigned with the left-most position of the slider
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Slider Setting")
	float LeftValue;

	// Value assigned with the right-most position of the slider
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Slider Setting")
	float RightValue;

protected:

	virtual void UpdateSelection_Implementation(const FString& Value) override;

	// Called to update the slider with a new setting value
	// Not called when the slider's value itself is changed
	// @param NormalizedValue Value mapped to range 0-1 between left value and right value
	// @param RawValue Raw value of the setting
	UFUNCTION(BlueprintNativeEvent, Category = "Slider Setting")
	void UpdateSliderValue(float NormalizedValue, float RawValue);

	// Takes a slider value in range 0-1, maps it and applies the setting
	UFUNCTION(BlueprintCallable, Category = "Slider Setting")
	void SliderValueUpdated(float NormalizedValue);

	// Called when the slider's value changes
	// Useful for updating UI such as labels to reflect the internal value
	UFUNCTION(BlueprintImplementableEvent, Category = "Slider Setting")
	void OnSliderValueUpdated(float NormalizedValue, float RawValue);

	// Used to determine if the slider value can also be saved when it is applied
	// e.g. Apply the value as the slider value is updating from mouse drag, but for optimization only save when the handle is released
	UFUNCTION(BlueprintNativeEvent, Category = "Slider Setting")
	bool ShouldSaveCurrentValue() const;
	
};
