// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SettingContainerUtils.generated.h"

class UWidget;
class UUserWidget;
class UAutoSettingWidget;

/**
 * Static helper functions for operating on multiple settings at the same time
 */
UCLASS()
class AUTOSETTINGS_API USettingContainerUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	// Gets all Settings in a User Widget which are descendant of the given Parent widget
	// @param UserWidget UserWidget which contains settings, defaults to self if not specified
	// @param Parent If specified, only descendants of this widget will be returned, otherwise all settings in the User Widget are returned
	UFUNCTION(BlueprintPure, Category = "Settings", meta = (DefaultToSelf = "UserWidget"))
	static TArray<UAutoSettingWidget*> GetChildSettings(UUserWidget* UserWidget, UWidget* Parent = nullptr);

	// True if any descendant Settings of Parent have unapplied changes
	// @param UserWidget UserWidget which contains settings, defaults to self if not specified
	// @param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked
	UFUNCTION(BlueprintPure, Category = "Settings", meta = (DefaultToSelf = "UserWidget"))
	static bool DoesAnyChildSettingHaveUnappliedChange(UUserWidget* UserWidget, UWidget* Parent = nullptr);

	// True if any descendant Settings of Parent have unsaved changes
	// @param UserWidget UserWidget which contains settings, defaults to self if not specified
	// @param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked
	UFUNCTION(BlueprintPure, Category = "Settings", meta = (DefaultToSelf = "UserWidget"))
	static bool DoesAnyChildSettingHaveUnsavedChange(UUserWidget* UserWidget, UWidget* Parent = nullptr);

	// Applies all changes in descendant Settings of Parent
	// @param UserWidget UserWidget which contains settings, defaults to self if not specified
	// @param Parent If specified, only descendants of this widget will be applied, otherwise all settings in the User Widget are applied
	UFUNCTION(BlueprintCallable, Category = "Settings", meta = (DefaultToSelf = "UserWidget"))
	static void ApplyChildSettings(UUserWidget* UserWidget, UWidget* Parent = nullptr);

	// Saves all changes in descendant Settings of Parent
	// @param UserWidget UserWidget which contains settings, defaults to self if not specified
	// @param Parent If specified, only descendants of this widget will be saved, otherwise all settings in the User Widget are saved
	UFUNCTION(BlueprintCallable, Category = "Settings", meta = (DefaultToSelf = "UserWidget"))
	static void SaveChildSettings(UUserWidget* UserWidget, UWidget* Parent = nullptr);

	// Cancels all changes in descendant Settings of Parent
	// @param UserWidget UserWidget which contains settings, defaults to self if not specified
	// @param Parent If specified, only descendants of this widget will be cancelled, otherwise all settings in the User Widget are cancelled
	UFUNCTION(BlueprintCallable, Category = "Settings", meta = (DefaultToSelf = "UserWidget"))
	static void CancelChildSettings(UUserWidget* UserWidget, UWidget* Parent = nullptr);
	
	
};
