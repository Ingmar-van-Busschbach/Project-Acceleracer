// Copyright Sam Bonifacio. All Rights Reserved.

#include "Utility/SettingContainerUtils.h"
#include "UI/AutoSettingWidget.h"
#include "Blueprint/WidgetTree.h"

TArray<UAutoSettingWidget*> USettingContainerUtils::GetChildSettings(UUserWidget* UserWidget, UWidget* Parent)
{
	// Use widget tree so that named slots are included

	UWidgetTree* Tree = UserWidget->WidgetTree;

	TArray<UWidget*> WidgetsToTest;

	// If no parent specified, check entire tree of user widget
	if (IsValid(Parent))
	{
		Tree->GetChildWidgets(Parent, WidgetsToTest);
	}
	else
	{
		Tree->GetAllWidgets(WidgetsToTest);
	}

	TArray<UAutoSettingWidget*> ChildSettings;

	// Filter AutoSettingWidgets
	for (UWidget* Widget : WidgetsToTest)
	{
		UAutoSettingWidget* Setting = Cast<UAutoSettingWidget>(Widget);
		if (Setting)
		{
			ChildSettings.Add(Setting);
		}
	}

	return ChildSettings;
}

bool USettingContainerUtils::DoesAnyChildSettingHaveUnappliedChange(UUserWidget* UserWidget, UWidget* Parent)
{
	return GetChildSettings(UserWidget, Parent).ContainsByPredicate([](UAutoSettingWidget* Setting) { return Setting->HasUnappliedChange(); });
}

bool USettingContainerUtils::DoesAnyChildSettingHaveUnsavedChange(UUserWidget* UserWidget, UWidget* Parent)
{
	return GetChildSettings(UserWidget, Parent).ContainsByPredicate([](UAutoSettingWidget* Setting) { return Setting->HasUnsavedChange(); });
}

void USettingContainerUtils::ApplyChildSettings(UUserWidget* UserWidget, UWidget* Parent)
{
	for (UAutoSettingWidget* Setting : GetChildSettings(UserWidget, Parent))
	{
		Setting->Apply();
	}
}

void USettingContainerUtils::SaveChildSettings(UUserWidget* UserWidget, UWidget* Parent)
{
	for (UAutoSettingWidget* Setting : GetChildSettings(UserWidget, Parent))
	{
		Setting->Save();
	}
}

void USettingContainerUtils::CancelChildSettings(UUserWidget* UserWidget, UWidget* Parent)
{
	for (UAutoSettingWidget* Setting : GetChildSettings(UserWidget, Parent))
	{
		Setting->Cancel();
	}
}

