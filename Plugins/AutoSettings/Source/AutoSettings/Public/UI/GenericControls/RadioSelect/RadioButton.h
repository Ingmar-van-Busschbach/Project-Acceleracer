// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "RadioButton.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadioSelectedSignature, FString, Value);

/**
 * A single generic radio button
 */
UCLASS(abstract)
class AUTOSETTINGS_API URadioButton : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// Event triggered when this button is selected
	UPROPERTY(BlueprintAssignable, Category = "Radio Button")
	FRadioSelectedSignature OnSelected;
	
	// Set whether the button is selected or not
	UFUNCTION(BlueprintCallable, Category = "Radio Button")
	void SetSelected(bool InSelected);

	// Return the value associated with the button
	UFUNCTION(BlueprintPure, Category = "Radio Button")
	FString GetValue() const { return Value;}

	// Set the value associated with the button
	UFUNCTION(BlueprintCallable, Category = "Radio Button")
	void SetValue(FString InValue) {Value = InValue;}

	// Set the label of the button
	UFUNCTION(BlueprintCallable, Category = "Radio Button")
	void SetLabel(FText InLabel) {Label = InLabel;}

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Radio Button", meta = (ExposeOnSpawn))
	FText Label;

	UPROPERTY(BlueprintReadOnly, Category = "Radio Button", meta = (ExposeOnSpawn))
	FString Value;

	UFUNCTION(BlueprintImplementableEvent, Category = "Radio Button")
	void UpdateLabel(const FText& InLabel);

	UFUNCTION(BlueprintImplementableEvent, Category = "Radio Button")
	void UpdateSelected(bool InSelected);

	UFUNCTION(BlueprintCallable, Category = "Radio Button")
	void TriggerSelection();

	UFUNCTION(BlueprintPure, Category = "Radio Button")
	FText GetLabel() const {return Label;}

	UFUNCTION(BlueprintPure, Category = "Radio Button")
	bool GetSelected() const {return Selected;}

	virtual void NativeConstruct() override;

private:

	UPROPERTY()
	bool Selected;
	
	
};
