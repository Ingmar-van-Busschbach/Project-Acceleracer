// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "GlobalKeyIconTagManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGlobalKeyIconTagsModifiedEvent);

/**
 * Handles global key icon tags
 * Useful for platform-specific gamepad button icons where you might want to globally use one set or another
 */
UCLASS()
class AUTOSETTINGS_API UGlobalKeyIconTagManager : public UObject
{
	GENERATED_BODY()
	
public:

	// Fired when the GlobalKeyIconTags are modified
	UPROPERTY()
	FGlobalKeyIconTagsModifiedEvent OnGlobalKeyIconTagsModified;

	// Get singleton instance
	static UGlobalKeyIconTagManager* Get();

	// Set global key icon tags to determine which icon set is chosen for key icons
	UFUNCTION(BlueprintCallable, Category = "Key Icons")
	static void SetGlobalKeyIconTags(FGameplayTagContainer InGlobalIconTags);

	// Get icon for key including global icon tags
	UFUNCTION(BlueprintPure, Category = "Key Icons")
	static class UTexture* GetIconForKey(FKey InKey, FGameplayTagContainer IconTags);
	
private:
	static UGlobalKeyIconTagManager* Singleton;

	UPROPERTY()
	FGameplayTagContainer GlobalKeyIconTags;
	
};
