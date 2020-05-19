// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "KeyLabel.h"
#include "InputLabel.generated.h"

/**
 * Base label for an input
 */
UCLASS(abstract)
class AUTOSETTINGS_API UInputLabel : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UInputLabel(const FObjectInitializer& ObjectInitializer);

	// Mapping group index - if an input has multiple mappings, this will determine which one to use
	// A value of -1 will use the first mapping group available
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Label")
	int32 MappingGroup;

	// Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard
	// Key groups can be defined in project settings (AutoSettings page)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Label", meta = (EditCondition="!bUsePlayerKeyGroup"))
	FGameplayTag KeyGroup;

	// If true will use the Key Group of the owning player
	// See InputMappingManager SetPlayerKeyGroup
	UPROPERTY(EditAnywhere, Category = "Input Label")
	bool bUsePlayerKeyGroup;

	// Tags to determine which key icon should be used
	// Key icons and tags can be defined in project settings (AutoSettings page)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Label")
	FGameplayTagContainer IconTags;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Label")
	void UpdateLabel();

protected:

	virtual void NativeConstruct() override;

private:

	UFUNCTION()
	void MappingsChanged(APlayerController* Player);	
	
};
