// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "SelectSetting.h"
#include "UI/GenericControls/Spinner.h"
#include "SpinnerSetting.generated.h"

/**
 * AutoSetting for a Spinner
 */
UCLASS(abstract)
class AUTOSETTINGS_API USpinnerSetting : public USelectSetting
{
	GENERATED_BODY()
		
protected:
	UPROPERTY(BlueprintReadOnly, Category = "Spinner Setting", meta = (BindWidget))
	USpinner* Spinner;

	virtual void NativeConstruct() override;

	virtual void UpdateSelection_Implementation(const FString& Value) override;

	virtual void UpdateOptions_Implementation(const TArray<FSettingOption>& InOptions) override;

private:

	UFUNCTION()
	void SpinnerSelectionChanged(FString Value);
	
	
};
