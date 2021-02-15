/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlineSubsystemEOSCoreModule.h"
#include "OnlineSubsystemEOSCore.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"

IMPLEMENT_MODULE(FOnlineSubsystemEOSCoreModule, OnlineSubsystemEOSCore);

namespace FNetworkProtocolTypes
{
	const FName EOSCore(TEXT("EOSCORE"));
}

DEFINE_LOG_CATEGORY(LogEOSSubsystem);

/**
 * Class responsible for creating instance(s) of the subsystem
 */
class FOnlineFactoryEOSCore : public IOnlineFactory
{
public:
	FOnlineFactoryEOSCore() = default;
	virtual ~FOnlineFactoryEOSCore()
	{
		DestroySubsystem();
	}

	virtual void DestroySubsystem()
	{
		if (EOSCoreSingleton.IsValid())
		{
			EOSCoreSingleton->Shutdown();
			EOSCoreSingleton = NULL;
		}
	}

	virtual IOnlineSubsystemPtr CreateSubsystem(FName InstanceName)
	{
		bool bCreated = false;

		if (!EOSCoreSingleton)
		{
			EOSCoreSingleton = MakeShared<FOnlineSubsystemEOSCore, ESPMode::ThreadSafe>(InstanceName);
			bCreated = true;
		}

		if (EOSCoreSingleton)
		{
			if (!bCreated)
			{
				// Re-initialize because we didn't construct a new object
				EOSCoreSingleton->ReInit();
			}

			if (EOSCoreSingleton->IsEnabled())
			{
				if (!EOSCoreSingleton->Init())
				{
					UE_LOG_ONLINE(Warning, TEXT("OnlineSubsystemEOSCore failed to initialize!"));
					EOSCoreSingleton->Shutdown();
					EOSCoreSingleton = nullptr;
				}
			}
			else
			{
				UE_LOG_ONLINE(Warning, TEXT("OnlineSubsystemEOSCore is disabled!"));
				EOSCoreSingleton->Shutdown();
				EOSCoreSingleton = nullptr;
			}

			return EOSCoreSingleton;
		}

		return nullptr;
	}
private:
	static FOnlineSubsystemEOSCorePtr EOSCoreSingleton;
};

FOnlineSubsystemEOSCorePtr FOnlineFactoryEOSCore::EOSCoreSingleton = nullptr;

void FOnlineSubsystemEOSCoreModule::StartupModule()
{
	EOSCoreFactory = new FOnlineFactoryEOSCore();
	FOnlineSubsystemModule& OSM = FModuleManager::LoadModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
	OSM.RegisterPlatformService(EOSCORE_SUBSYSTEM, EOSCoreFactory);
}

void FOnlineSubsystemEOSCoreModule::ShutdownModule()
{
	if (EOSCoreFactory)
	{
		FOnlineSubsystemModule& OSM = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
		OSM.UnregisterPlatformService(EOSCORE_SUBSYSTEM);
		delete EOSCoreFactory;
		EOSCoreFactory = nullptr;
	}
}