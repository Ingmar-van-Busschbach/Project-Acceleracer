// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "RadioButton.h"
#include "Components/PanelWidget.h"
#include "Misc/SettingOption.h"
#include "RadioSelect.generated.h"

/**
 * Base class for a widget that contains multiple radio buttons, of which only one may be selected at a time
 */
UCLASS(abstract)
class AUTOSETTINGS_API URadioSelect : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// Option definitions
	UPROPERTY(EditAnywhere, Category = "Radio Select")
	TArray<FSettingOption> Options;

	// RadioButton class to create for each option
	UPROPERTY(EditAnywhere, NoClear, Category = "Radio Select")
	TSubclassOf<URadioButton> RadioButtonClass;

	// Fired when the selection changes
	UPROPERTY(BlueprintAssignable, Category = "Radio Select")
	FRadioSelectedSignature SelectionChangedEvent;

	// Returns the available options
	UFUNCTION(BlueprintPure, Category = "Radio Select")
	TArray<FSettingOption> GetOptions() const { return Options; }

	// Set the available options
	UFUNCTION(BlueprintCallable, Category = "Radio Select")
	void SetOptions(TArray<FSettingOption> InOptions);

	// Select the option of the given value
	UFUNCTION(BlueprintCallable, Category = "Radio Select")
	void Select(FString Value);

	// Returns the Radio Button widgets created by this Radio Select
	UFUNCTION(BlueprintPure, Category = "Radio Select")
	TArray<URadioButton*> GetRadioButtonWidgets() const { return RadioButtons; }

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Radio Select", meta = (BindWidget))
	UPanelWidget* ButtonContainer;

	virtual void NativePreConstruct() override;

	// Called when a Radio Button is created to run any initialization on the widget and slot
	UFUNCTION(BlueprintNativeEvent, Category = "Radio Select")
	void OnButtonCreated(URadioButton* Button, UPanelSlot* NewSlot);

private:

	UPROPERTY()
	TArray<URadioButton*> RadioButtons;

	UFUNCTION()
	void ButtonSelected(FString Value);
	
	
};
