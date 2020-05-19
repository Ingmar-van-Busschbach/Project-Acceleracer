// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "UI/AutoSettingWidget.h"
#include "ToggleSetting.generated.h"

/**
 * Base AutoSetting with generic toggle functionality (Such as a checkbox or switch)
 */
UCLASS(abstract)
class AUTOSETTINGS_API UToggleSetting : public UAutoSettingWidget
{
	GENERATED_BODY()
	
protected:

	virtual void UpdateSelection_Implementation(const FString& Value) override;

	// Called to update the widget with a new state
	UFUNCTION(BlueprintNativeEvent, Category = "Toggle Setting")
	void UpdateToggleState(bool State);

	// Takes a boolean state and applies the setting
	UFUNCTION(BlueprintCallable, Category = "Toggle Setting")
	void ToggleStateUpdated(bool State);
	
	
};
