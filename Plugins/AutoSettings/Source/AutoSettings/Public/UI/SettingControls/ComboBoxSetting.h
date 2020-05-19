// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "SelectSetting.h"
#include "Components/ComboBoxString.h"
#include "ComboBoxSetting.generated.h"

/**
 * AutoSetting for a native Unreal ComboBox
 */
UCLASS(abstract)
class AUTOSETTINGS_API UComboBoxSetting : public USelectSetting
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "ComboBox Setting", meta = (BindWidget))
	UComboBoxString* ComboBox;

	virtual void NativeConstruct() override;

	virtual void UpdateSelection_Implementation(const FString& Value) override;

	virtual void UpdateOptions_Implementation(const TArray<FSettingOption>& InOptions) override;

private:
	UFUNCTION()
	void ComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType);
	
	
};
