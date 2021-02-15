/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/
#pragma once

#include "CoreMinimal.h"
#include "Containers/Ticker.h"
#include "Modules/ModuleInterface.h"
#include "EOSLibrary/Include/eos_types.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EOSCorePlatformModule.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogEOSCorePlatform, Log, All);

struct EOS_SessionsHandle;

class EOSCOREPLATFORM_API FEOSCorePlatformModule : public IModuleInterface, FTickerObjectBase
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool SupportsDynamicReloading() override { return false; }
	virtual bool SupportsAutomaticShutdown() override { return false; }
public:
	static FEOSCorePlatformModule* Get() { return FModuleManager::GetModulePtr<FEOSCorePlatformModule>(FName("EOSCore")); }
protected:
	void LoadEOSModules();
	void UnloadEOSModules();
	void InitPlatform(std::string productName, std::string productVersion);
	bool AreEOSModulesLoaded();
	void LoadSettings();
	bool Tick(float deltaTime) override;
public:
	static bool bEnabled;
	static FString ProductID;
	static FString ProductName;
	static FString ProductVersion;
	static FString SandboxID;
	static FString DeploymentID;
	static FString ClientID;
	static FString ClientSecret;
	static FString EncryptionKey;

	static int32 DevAuthToolPort;
	static FString DevAuthToolHost;

	static FString AuthLogin;
	static FString AuthToken;

	static FString EOSCorePluginVersion;
private:
	void* EOSHandle;
	bool bModuleLoaded;
	FDelegateHandle DelegateHandle;
}; 

UENUM(BlueprintType)
enum class ELogLevel : uint8
{
	EOS_LOG_Off,
	EOS_LOG_Fatal,
	EOS_LOG_Error,
	EOS_LOG_Warning,
	EOS_LOG_Info,
	EOS_LOG_Verbose,
	EOS_LOG_VeryVerbose
};

DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnEOSMessage, ELogLevel, logLevel, const FString&, category, const FString&, message);

UCLASS(BlueprintType)
class EOSCOREPLATFORM_API UEOSCorePlatformUtilities : public UObject 
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static void ListenForEOSMessages(const FOnEOSMessage& callback);
};