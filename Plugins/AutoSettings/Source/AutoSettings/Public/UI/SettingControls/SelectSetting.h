// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "UI/AutoSettingWidget.h"
#include "Misc/SettingOptionFactory.h"
#include "SelectSetting.generated.h"

/**
 * Base class for any AutoSetting containing multiple pre-defined options
 */
UCLASS(abstract)
class AUTOSETTINGS_API USelectSetting : public UAutoSettingWidget
{
	GENERATED_BODY()
public:
	// Predefined options
	UPROPERTY(EditAnywhere, Category = "Select Setting")
	TArray<FSettingOption> Options;

	// Factory to use to dynamically create options
	UPROPERTY(EditAnywhere, Category = "Select Setting")
	TSubclassOf<USettingOptionFactory> OptionFactory;

protected:

	virtual void NativePreConstruct() override;

	UFUNCTION(BlueprintNativeEvent, Category = "Select Setting")
	void UpdateOptions(const TArray<FSettingOption>& InOptions);

	FSettingOption GetOptionByValue(FString Value) const;

	FSettingOption GetOptionByLabel(FText Label) const;

	bool IsUpdatingSettingOptions() const { return bUpdatingSettingOptions; }

private:

	UPROPERTY()
	bool bUpdatingSettingOptions;

	TArray<FSettingOption> GetCombinedOptions() const;

	void DispatchUpdateOptions(const TArray<FSettingOption>& InOptions);

};
