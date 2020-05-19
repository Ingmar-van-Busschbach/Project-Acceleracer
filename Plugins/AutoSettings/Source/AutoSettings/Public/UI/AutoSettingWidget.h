// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "Misc/SettingValueMask.h"
#include "GameplayTagContainer.h"
#include "AutoSettingWidget.generated.h"

/**
 * Widget that encapsulates a console variable to represent a setting
 */
UCLASS(abstract)
class AUTOSETTINGS_API UAutoSettingWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UAutoSettingWidget(const FObjectInitializer& ObjectInitializer);

	// Console variable to turn into a setting
	// e.g. "r.vsync"
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	FName CVarName;		

	// Transformations to apply to the value to get the subsection that this setting cares about
	// Leave this blank for no transformation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	TSubclassOf<USettingValueMask> ValueMask;

	// Should this setting automatically save to config when changed?
	// Saving also applies the setting if it hasn't been already
	// If false, "Save" function can be called for manual control
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	bool bAutoSave;

	// Should this setting automatically apply when changed?
	// Will also apply automatically if AutoSave is true
	// If false, "Apply" function can be called for manual control
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting", meta = (EditCondition="!bAutoSave"))
	bool bAutoApply;

	// Tags this setting has, for use by your own project
	// e.g. You might want to sync certain input-related settings to a cloud service but ignore scalability-related ones
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	FGameplayTagContainer SettingTags;

	// True if the setting has changed since the last time it was applied
	UFUNCTION(BlueprintPure, Category = "Setting")
	bool HasUnappliedChange() const { return bHasUnappliedChange; }

	// True if the setting has changed since the last time it was saved
	UFUNCTION(BlueprintPure, Category = "Setting")
	bool HasUnsavedChange() const { return bHasUnsavedChange;}

	// Apply the setting by setting the CVar to the current value
	UFUNCTION(BlueprintCallable, Category = "Setting")
	void Apply();

	// Save the current value to config
	// This will also Apply the current value if it hasn't been already
	UFUNCTION(BlueprintCallable, Category = "Setting")
	void Save();

	// Cancel unsaved changes, reverting to the value saved in config 
	UFUNCTION(BlueprintCallable, Category = "Setting")
	void Cancel();

protected:

	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;

	void ConsoleVariableSink();

	// Set value on control widget, used for setting default and current value
	UFUNCTION(BlueprintNativeEvent, Category = "Setting")
	void UpdateSelection(const FString& Value);

	// Update the setting's selected value
	// @param bSaveIfPossible Save the setting if AutoSave is enabled
	UFUNCTION(BlueprintCallable, Category = "Setting")
	void ApplySettingValue(FString Value, bool bSaveIfPossible = true);	

	bool IsUpdatingSettingSelection() const { return bUpdatingSettingSelection; }

private:
	UPROPERTY()
	FString CurrentValue;

	UPROPERTY()
	bool bHasUnappliedChange;

	UPROPERTY()
	bool bHasUnsavedChange;

	// True if UpdateSelection is being run
	UPROPERTY()
	bool bUpdatingSettingSelection;

	void ApplyInternal(bool bPendingSave);

	FString ProcessIncomingValue(FString Value) const;

	// @param	bRecombineWithConfigValue	If true, the config value will be used to recombine masked out values instead of the CVar value.
	FString ProcessOutgoingValue(FString Value, bool bRecombineWithConfigValue = false) const;

	// Sets the widget to the value of the setting from CVar or config
	void SetToSettingValue(bool bPreferConfigValue = false);

	void DispatchUpdateSelection(const FString& Value);
	
};
