// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "ToggleSetting.h"
#include "Components/CheckBox.h"
#include "CheckBoxSetting.generated.h"

/**
 * AutoSetting for a native Unreal CheckBox
 */
UCLASS(abstract)
class AUTOSETTINGS_API UCheckBoxSetting : public UToggleSetting
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Category = "CheckBox Setting", meta = (BindWidget))
	UCheckBox* CheckBox;

	virtual void NativeConstruct() override;

	virtual void UpdateToggleState_Implementation(bool State) override;
	
private:

	UFUNCTION()
	void CheckBoxStateChanged(bool IsChecked);
	
};
