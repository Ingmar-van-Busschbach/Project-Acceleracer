/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Modules/ModuleInterface.h"
#include "EOSCoreModule.generated.h"

class FEOSCoreModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool SupportsDynamicReloading() override { return true; }
public:
	static FEOSCoreModule* Get() { return FModuleManager::GetModulePtr<FEOSCoreModule>(FName("EOSCore")); }
};

UCLASS()
class EOSCORE_API UEOSCoreSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const { return true; }
};