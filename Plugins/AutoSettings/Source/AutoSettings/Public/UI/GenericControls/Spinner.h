// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "Misc/SettingOption.h"
#include "Spinner.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpinnerSelectionChanged, FString, Value);

/**
 * UI element that uses Next and Previous buttons to cycle through options
 */
UCLASS(abstract)
class AUTOSETTINGS_API USpinner : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	// Option definitions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spinner")
	TArray<FSettingOption> Options;

	// Should the first and last options wrap around to each other?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spinner")
	bool bAllowWrapping;

	// Fired when selection changes
	UPROPERTY(BlueprintAssignable, Category = "Spinner")
	FSpinnerSelectionChanged SelectionChangedEvent;

	// Select the option with the specified value
	UFUNCTION(BlueprintCallable, Category = "Spinner")
	void SelectValue(FString Value);

	// Select the option with the specified index
	UFUNCTION(BlueprintCallable, Category = "Spinner")
	void SelectIndex(int32 Index);

	// Select the next option
	UFUNCTION(BlueprintCallable, Category = "Spinner")
	void Next();

	// Select the previous option
	UFUNCTION(BlueprintCallable, Category = "Spinner")
	void Previous();

	// True if selected option is not the last, or if wrapping is enabled
	UFUNCTION(BlueprintPure, Category = "Spinner")
	bool HasValidNext() const;

	// True if selected option is not the first, or if wrapping is enabled
	UFUNCTION(BlueprintPure, Category = "Spinner")
	bool HasValidPrevious() const;	

	// Return the currently selected option
	UFUNCTION(BlueprintPure, Category = "Spinner")
	FSettingOption GetCurrentOption() const;

	// Return the index of the currently selected option
	UFUNCTION(BlueprintPure, Category = "Spinner")
	int32 GetCurrentIndex() const {return CurrentIndex;}

	UFUNCTION(BlueprintNativeEvent, Category = "Spinner")
	void OnSelectionChanged(FSettingOption SelectedOption);

private:

	int32 CurrentIndex;
	
};
