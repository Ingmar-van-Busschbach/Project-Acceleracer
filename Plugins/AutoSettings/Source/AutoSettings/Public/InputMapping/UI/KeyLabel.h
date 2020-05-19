// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "GameplayTagContainer.h"
#include "KeyLabel.generated.h"

/**
 * Shows the icon for a specific key or falls back to text label
 */
UCLASS(abstract)
class AUTOSETTINGS_API UKeyLabel : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UKeyLabel(const FObjectInitializer& ObjectInitializer);

	// Text to display when key is invalid or unbound
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Key Label")
	FText KeyInvalidText;

	// If not empty, text to display instead of key label
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Key Label")
	FText LabelOverride;

	// Key that this label is for
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Key Label")
	FKey Key;

	// Tags to determine which key icon should be used
	// Key icons and tags can be defined in project settings (AutoSettings page)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Key Label")
	FGameplayTagContainer IconTags;

	// Implement this to respond to data changes
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Key Label")
	void UpdateKeyLabel();
	
protected:

	// Label text to display for the key
	UFUNCTION(BlueprintPure, Category = "Key Label")
	FText GetDisplayName() const;

	// Icon texture for the key
	UFUNCTION(BlueprintPure, Category = "Key Label")
	UTexture* GetIcon() const;

	// True if the key has an icon defined
	UFUNCTION(BlueprintPure, Category = "Key Label")
	bool HasIcon() const;

	// True if the key is valid
	UFUNCTION(BlueprintPure, Category = "Key Label")
	bool HasValidKey() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Key Label")
	FSlateBrush GetIconBrush() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Key Label")
	ESlateVisibility GetIconVisibility() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Key Label")
	ESlateVisibility GetDisplayNameVisibility() const;

	virtual void NativeConstruct() override;

private:

	UFUNCTION()
	void OnGlobalKeyIconTagsModified();
	
};
