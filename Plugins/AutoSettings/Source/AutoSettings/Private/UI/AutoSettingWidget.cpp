// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/AutoSettingWidget.h"
#include "Console/ConsoleUtils.h"
#include "SettingsManager.h"
#include "Misc/AutoSettingsLogs.h"
#include "Misc/AutoSettingsError.h"

UAutoSettingWidget::UAutoSettingWidget(const FObjectInitializer& ObjectInitializer)
	: UUserWidget(ObjectInitializer),
	bAutoSave(true),
	bAutoApply(true),
	bUpdatingSettingSelection(false)
{
	bIsVariable = false;
}

void UAutoSettingWidget::Apply()
{
	ApplyInternal(false);
}

void UAutoSettingWidget::Save()
{
	if (HasUnappliedChange())
	{
		ApplyInternal(true);
	}

	// The value we are applying is destined for the config, so process the outgoing value using the config instead of the CVar
	const FString FinalConfigValue = ProcessOutgoingValue(CurrentValue, true);

	UE_LOG(LogAutoSettings, Log, TEXT("Saving setting %s with value %s"), *CVarName.ToString(), *FinalConfigValue);
	USettingsManager::Get()->SaveSetting(FAutoSettingData(CVarName, FinalConfigValue, SettingTags), false);
	bHasUnsavedChange = false;
}

void UAutoSettingWidget::Cancel()
{
	// We want to reset to the config value rather than the current CVar value in case we are reverting changes that were already applied
	SetToSettingValue(true);

	// Also reset CVar value to config value if it was applied but not saved
	// Process incoming and outgoing so we leave masked out values unaffected
	const FString ConfigValue = ProcessIncomingValue(USettingsManager::GetValue(CVarName, true));
	UConsoleUtils::SetStringCVar(CVarName, ProcessOutgoingValue(ConfigValue, false));

	bHasUnappliedChange = false;
	bHasUnsavedChange = false;
}

void UAutoSettingWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (!UConsoleUtils::IsCVarRegistered(CVarName))
	{
		if(IsDesignTime())
		{
			// Just silently fail at design time
			// CVar might not be registered because PIE hasn't run yet
			return;
		}
		else
		{
			// Log and keep going
			FAutoSettingsError::LogMissingCVar(GetName(), CVarName);
		}
	}

	// Set widget to the value of the CVar
	SetToSettingValue();

	// Register sink
	IConsoleManager::Get().RegisterConsoleVariableSink_Handle(FConsoleCommandDelegate::CreateUObject(this, &UAutoSettingWidget::ConsoleVariableSink));
}

void UAutoSettingWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UAutoSettingWidget::ConsoleVariableSink()
{
	if (!UConsoleUtils::IsCVarRegistered(CVarName))
	{
		// If CVar is not registered log an error and ignore
		UE_LOG(LogAutoSettings, Error, TEXT("CVar %s is not registered"), *CVarName.ToString());
		return;
	}

	if (HasUnappliedChange())
	{
		// If we have an unapplied change, the setting widget was purposefully desynchronized from the CVar value and we should ignore CVar changes
		return;
	}

	// The CVar value changed so update the widget to reflect the new value

	const FString CVarValue = ProcessIncomingValue(UConsoleUtils::GetStringCVar(CVarName));
	if (CVarValue != CurrentValue)
	{
		CurrentValue = CVarValue;
		DispatchUpdateSelection(CurrentValue);
	}
}

void UAutoSettingWidget::UpdateSelection_Implementation(const FString & Value)
{
}

void UAutoSettingWidget::ApplySettingValue(FString Value, bool bSaveIfPossible)
{
	// Don't try to apply or save in design time
	// Some widgets can potentially get here through PreConstruct
	if (IsDesignTime())
		return;

	if (CurrentValue != Value)
	{
		CurrentValue = Value;
	}

	// Apply / save - regardless of previous setting value
	// Currently applied or saved value may be different anyway

	const bool bShouldSave = bAutoSave && bSaveIfPossible;

	if (bAutoApply || bShouldSave)
	{
		ApplyInternal(bShouldSave);
	}
	else
	{
		bHasUnappliedChange = true;
	}

	if (bShouldSave)
	{
		Save();
	}
	else
	{
		bHasUnsavedChange = true;
	}

}

void UAutoSettingWidget::ApplyInternal(bool bPendingSave)
{
	// Make sure the old value is saved so we can revert to it if canceled
	if (!USettingsManager::Get()->HasConfigValue(CVarName))
	{
		// If there is no saved value in config, write the currently applied (old) value
		// Don't mask the value, save the entire CVar including masked out parts
		// Otherwise we will be saving empty data for the masked out parts and mislead other settings that care about those parts into thinking they have valid data saved
		USettingsManager::Get()->SaveSetting(FAutoSettingData(CVarName, UConsoleUtils::GetStringCVar(CVarName), SettingTags), false);
	}

	// The value we are applying is destined for the CVar, so process the outgoing value using the CVar
	const FString FinalCVarValue = ProcessOutgoingValue(CurrentValue, false);

	UE_LOG(LogAutoSettings, Log, TEXT("Applying setting %s with value %s"), *CVarName.ToString(), *FinalCVarValue);

	UConsoleUtils::SetStringCVar(CVarName, FinalCVarValue);
	bHasUnappliedChange = false;
}

FString UAutoSettingWidget::ProcessIncomingValue(FString Value) const
{
	if (ValueMask)
	{
		return Cast<USettingValueMask>(ValueMask->GetDefaultObject())->MaskValue(Value);
	}

	return Value;
}

FString UAutoSettingWidget::ProcessOutgoingValue(FString Value, bool bRecombineWithConfigValue) const
{
	if (ValueMask)
	{
		const FString RetrievedValue = bRecombineWithConfigValue ? USettingsManager::Get()->GetConfigValue(CVarName) : UConsoleUtils::GetStringCVar(CVarName);
		return Cast<USettingValueMask>(ValueMask->GetDefaultObject())->RecombineValues(Value, RetrievedValue);
	}

	return Value;
}

void UAutoSettingWidget::SetToSettingValue(bool bPreferConfigValue)
{
	CurrentValue = ProcessIncomingValue(USettingsManager::GetValue(CVarName, bPreferConfigValue));
	DispatchUpdateSelection(CurrentValue);
}

void UAutoSettingWidget::DispatchUpdateSelection(const FString & Value)
{
	bUpdatingSettingSelection = true;
	UpdateSelection(Value);
	bUpdatingSettingSelection = false;
}