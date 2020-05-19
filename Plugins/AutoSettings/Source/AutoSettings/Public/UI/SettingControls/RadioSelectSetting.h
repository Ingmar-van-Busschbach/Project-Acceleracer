// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "SelectSetting.h"
#include "UI/GenericControls/RadioSelect/RadioSelect.h"
#include "RadioSelectSetting.generated.h"

/**
 * AutoSetting for a RadioSelect
 */
UCLASS(abstract)
class AUTOSETTINGS_API URadioSelectSetting : public USelectSetting
{
	GENERATED_BODY()
	
public:

	// RadioButton class to create for each option
	UPROPERTY(EditAnywhere, NoClear, Category = "Radio Select Setting")
	TSubclassOf<URadioButton> RadioButtonClass;

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Radio Select Setting", meta = (BindWidget))
	URadioSelect* RadioSelect;

	virtual void NativeConstruct() override;

	virtual void UpdateSelection_Implementation(const FString& Value) override;

	virtual void UpdateOptions_Implementation(const TArray<FSettingOption>& InOptions) override;

	virtual void NativePreConstruct() override;

private:

	UFUNCTION()
	void RadioSelectionChanged(FString Value);
	
};
