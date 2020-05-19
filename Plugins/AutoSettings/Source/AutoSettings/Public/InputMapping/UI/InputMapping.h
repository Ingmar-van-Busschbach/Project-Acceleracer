// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "BindCaptureButton.h"
#include "InputMapping.generated.h"

/**
 * Shows a label for an input and allows the user to rebind it
 */
UCLASS(abstract)
class AUTOSETTINGS_API UInputMapping : public UUserWidget
{
	GENERATED_BODY()

public:
	UInputMapping(const FObjectInitializer& ObjectInitializer);

	// Force the mapping to refresh
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Mapping")
	void UpdateMapping();

	// Manually update bindings with a captured chord
	UFUNCTION(BlueprintCallable, Category = "Input Mapping")
	virtual void BindChord(FInputChord InChord) PURE_VIRTUAL(UInputMapping::BindChord, );
	
protected:
	// Mapping group index - if an input has multiple mappings, this will determine which one to use
	// A value of -1 will use the first mapping group available
	UPROPERTY(EditAnywhere, Category = "Input Mapping")
	int32 MappingGroup;

	// Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard
	// Key groups can be defined in project settings (AutoSettings page)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Mapping")
	FGameplayTag KeyGroup;

	// Tags to determine which key icon should be used
	// Key icons and tags can be defined in project settings (AutoSettings page)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Mapping")
	FGameplayTagContainer IconTags;

	UPROPERTY(BlueprintReadOnly, Category = "Input Mapping", meta = (BindWidget))
	UBindCaptureButton* BindCaptureButton;

	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;

	UBindCaptureButton* GetBindCaptureButton() const { return BindCaptureButton; }

	UFUNCTION(BlueprintNativeEvent, Category = "Input Mapping")
	void UpdateLabel();

private:
	UFUNCTION()
	void ChordCaptured(FInputChord InChord);
	
	
};
