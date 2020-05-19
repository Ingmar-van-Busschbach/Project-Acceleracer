// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Console/CVarChangeListenerManager.h"
#include "GameplayTagContainer.h"
#include "SettingsManager.generated.h"

// Represents data for a saved setting
USTRUCT(BlueprintType)
struct FAutoSettingData
{
	GENERATED_BODY()
	
public:

	// Key of the setting, typically the CVar name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	FName Key;

	// Value of the setting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	FString Value;

	// Setting tags for use when saving
	// Can be used to categorize or flag certain settings that might be useful to external logic
	// Transient
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Category = "Settings")
	FGameplayTagContainer Tags;

	FAutoSettingData(FName Key, FString Value) : Key(Key), Value(Value)
	{}

	FAutoSettingData(FName Key, FString Value, FGameplayTagContainer Tags) : Key(Key), Value(Value), Tags(Tags)
	{}

	FAutoSettingData() {};
	
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingSavedSignature, FAutoSettingData, SettingData);

/**
 * Handles saving, loading, and applying settings
 */
UCLASS()
class AUTOSETTINGS_API USettingsManager : public UObject
{
	GENERATED_BODY()
	
public:

	// Fired when a setting is saved (Must actually be a save, not a config update)
	UPROPERTY(BlueprintAssignable, Category = "Settings")
	FSettingSavedSignature OnSettingSaved;

	// Get singleton instance
	static USettingsManager* Get();

	// Return a setting's value from CVar or config
	// @param	bPreferConfigValue	If true, the saved config value will be preferred over the applied CVar value if they differ
	UFUNCTION(BlueprintPure, Category = "Settings")
	static FString GetValue(FName Key, bool bPreferConfigValue = false);

	// Register new int console variable and check config for a saved value
	UFUNCTION(BlueprintCallable, Category = "Settings")
	static void RegisterIntCVarSetting(FName Name, int32 DefaultValue, const FString& Help);

	// Register new bool console variable and check config for a saved value
	UFUNCTION(BlueprintCallable, Category = "Settings")
	static void RegisterBoolCVarSetting(FName Name, bool DefaultValue, const FString& Help);

	// Register new float console variable and check config for a saved value
	UFUNCTION(BlueprintCallable, Category = "Settings")
	static void RegisterFloatCVarSetting(FName Name, float DefaultValue, const FString& Help);

	// Register new string console variable and check config for a saved value
	UFUNCTION(BlueprintCallable, Category = "Settings")
	static void RegisterStringCVarSetting(FName Name, const FString& DefaultValue, const FString& Help);


	// Register CVar and add callback for value updates
	UFUNCTION(BlueprintCallable, Category = "Settings")
	static void RegisterIntCVarSettingWithCallback(FName Name, int32 DefaultValue, const FString& Help, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Register CVar and add callback for value updates
	UFUNCTION(BlueprintCallable, Category = "Settings")
	static void RegisterBoolCVarSettingWithCallback(FName Name, bool DefaultValue, const FString& Help, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Register CVar and add callback for value updates
	UFUNCTION(BlueprintCallable, Category = "Settings")
	static void RegisterFloatCVarSettingWithCallback(FName Name, float DefaultValue, const FString& Help, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Register CVar and add callback for value updates
	UFUNCTION(BlueprintCallable, Category = "Settings")
	static void RegisterStringCVarSettingWithCallback(FName Name, const FString& DefaultValue, const FString& Help, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Auto detect, apply, and save scalability settings
	// Note: To change how your project determines which settings to apply from the result, see [ScalabilitySettings] in BaseScalability.ini and override the values in your project's DefaultScalability.ini
	UFUNCTION(BlueprintCallable, Category = "Settings", meta = (DisplayName = "Auto Detect Settings"))
	static void AutoDetectSettingsStatic(int32 WorkScale = 10, float CPUMultiplier = 1.0f, float GPUMultiplier = 1.0f);

	// Applies and saves a setting
	UFUNCTION(BlueprintCallable, Category = "Settings", meta = (DisplayName = "Save Setting"))
	static void SaveSettingStatic(FAutoSettingData SettingData);

	// Applies a setting
	UFUNCTION(BlueprintCallable, Category = "Settings", meta = (DisplayName = "Apply Setting"))
	static void ApplySettingStatic(FAutoSettingData SettingData);

	USettingsManager();
	
	// Initialize the settings manager, loading and applying any settings saved in config
	void Init();

	// Get a setting value from config
	FString GetConfigValue(FName Key) const;

	// True if the setting has a value in config
	bool HasConfigValue(FName Key) const;

	// Get a setting value from the specified section of config
	FString GetConfigValue(FName Key, FConfigSection* Section) const;

	// Saves the value in config for a setting
	// @param	bApplySetting	If true, apply the setting before saving it
	void SaveSetting(FAutoSettingData SettingData, bool bApplySetting);

	// Updates a value in config but is not considered saving a setting
	void SetConfigValue(FName Key, FString Value);

	// Applies a setting in the console
	void ApplySetting(FAutoSettingData SettingData);
	
private:

	static USettingsManager* Singleton;

	UPROPERTY()
	FString IniFilename;

	static FString GetSectionName();

	// Load and apply any settings in config
	void ApplySettingsFromConfig();

	void AutoDetectSettings(int32 WorkScale = 10, float CPUMultiplier = 1.0f, float GPUMultiplier = 1.0f);
	
	FConfigSection* GetSection() const;
};
