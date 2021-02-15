/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "EOSCorePlatformModule.h"
#include "EOSPlatform.h"
#include "EOSCorePlatformPCH.h"
#include "EOSCorePlatformLogging.h"

#if PLATFORM_ANDROID
#include "Android/eos_android.h"
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"

extern JavaVM* GJavaVM;
#endif

#if WITH_EDITOR
#include "Editor.h"
#endif

IMPLEMENT_MODULE(FEOSCorePlatformModule, EOSCorePlatform);
DEFINE_LOG_CATEGORY(LogEOSCorePlatform);
#define LOCTEXT_NAMESPACE "FEOSCorePlatformModule"

static TArray<FOnEOSMessage> s_Callbacks;
bool FEOSCorePlatformModule::bEnabled = false;

FString FEOSCorePlatformModule::ProductID;
FString FEOSCorePlatformModule::ProductName;
FString FEOSCorePlatformModule::ProductVersion;
FString FEOSCorePlatformModule::SandboxID;
FString FEOSCorePlatformModule::DeploymentID;
FString FEOSCorePlatformModule::ClientID;
FString FEOSCorePlatformModule::ClientSecret;

int32 FEOSCorePlatformModule::DevAuthToolPort;
FString FEOSCorePlatformModule::DevAuthToolHost;

FString FEOSCorePlatformModule::AuthLogin;
FString FEOSCorePlatformModule::AuthToken;

FString FEOSCorePlatformModule::EOSCorePluginVersion;

void EOS_CALL EOSSDKLoggingCallback(const EOS_LogMessage* InMsg)
{
	if (InMsg->Level != EOS_ELogLevel::EOS_LOG_Off)
	{
		switch (InMsg->Level)
		{
		case EOS_ELogLevel::EOS_LOG_Fatal:
			LogFatal("%s", UTF8_TO_TCHAR(InMsg->Message));
			break;
		case EOS_ELogLevel::EOS_LOG_Error:
			LogError("%s", UTF8_TO_TCHAR(InMsg->Message));
			break;
		case EOS_ELogLevel::EOS_LOG_Warning:
			LogWarning("%s", UTF8_TO_TCHAR(InMsg->Message));
			break;
		case EOS_ELogLevel::EOS_LOG_Info:
			LogDebug("%s", UTF8_TO_TCHAR(InMsg->Message));
			break;
		case EOS_ELogLevel::EOS_LOG_Verbose:
			LogVerbose("%s", UTF8_TO_TCHAR(InMsg->Message));
			break;
		case EOS_ELogLevel::EOS_LOG_VeryVerbose:
			LogVeryVerbose("%s", UTF8_TO_TCHAR(InMsg->Message));
			break;
		}

		if (s_Callbacks.Num() > 0) 
		{
			ELogLevel m_LogLevel = ELogLevel::EOS_LOG_Info;

			switch (InMsg->Level)
			{
			case EOS_ELogLevel::EOS_LOG_Off:
				m_LogLevel = ELogLevel::EOS_LOG_Off;
				break;
			case EOS_ELogLevel::EOS_LOG_Fatal:
				m_LogLevel = ELogLevel::EOS_LOG_Fatal;
				break;
			case EOS_ELogLevel::EOS_LOG_Error:
				m_LogLevel = ELogLevel::EOS_LOG_Error;
				break;
			case EOS_ELogLevel::EOS_LOG_Warning:
				m_LogLevel = ELogLevel::EOS_LOG_Warning;
				break;
			case EOS_ELogLevel::EOS_LOG_Info:
				m_LogLevel = ELogLevel::EOS_LOG_Info;
				break;
			case EOS_ELogLevel::EOS_LOG_Verbose:
				m_LogLevel = ELogLevel::EOS_LOG_Verbose;
				break;
			case EOS_ELogLevel::EOS_LOG_VeryVerbose:
				m_LogLevel = ELogLevel::EOS_LOG_VeryVerbose;
				break;
			}

			for (auto m_Element : s_Callbacks)
			{
				m_Element.ExecuteIfBound(m_LogLevel, UTF8_TO_TCHAR(InMsg->Category), UTF8_TO_TCHAR(InMsg->Message));
			}
		}
	}
}

static FDelegateHandle s_BeginPieDelegateHandle;
static FDelegateHandle s_EndPieDelegateHandle;
void FEOSCorePlatformModule::StartupModule()
{
	TSharedPtr<IPlugin> m_PluginPtr = IPluginManager::Get().FindPlugin("EOSCore");

	if (m_PluginPtr)
	{
		EOSCorePluginVersion = m_PluginPtr->GetDescriptor().VersionName;
	}

	LoadSettings();
	LoadEOSModules();
	InitPlatform(TCHAR_TO_UTF8(*ProductName), TCHAR_TO_UTF8(*ProductVersion));

#if WITH_EDITOR 
	if (IsRunningGame())
	{
		if (!FPlatform::IsInitialized())
			FPlatform::Create(TCHAR_TO_UTF8(*ProductID), TCHAR_TO_UTF8(*SandboxID), TCHAR_TO_UTF8(*DeploymentID), TCHAR_TO_UTF8(*ClientID), TCHAR_TO_UTF8(*ClientSecret), std::string(64, '1'));
	}

	if (!s_BeginPieDelegateHandle.IsValid())
	{
		
		s_BeginPieDelegateHandle = FEditorDelegates::BeginPIE.AddLambda([](bool bSimulating)
		{
			if (!FPlatform::IsInitialized() && !bSimulating)
				FPlatform::Create(TCHAR_TO_UTF8(*ProductID), TCHAR_TO_UTF8(*SandboxID), TCHAR_TO_UTF8(*DeploymentID), TCHAR_TO_UTF8(*ClientID), TCHAR_TO_UTF8(*ClientSecret), std::string(64, '1'));
		});
	}

	if (!s_EndPieDelegateHandle.IsValid())
	{
		s_EndPieDelegateHandle = FEditorDelegates::EndPIE.AddLambda([](bool bSimulating)
		{
			if (FPlatform::IsInitialized() && !bSimulating)
				FPlatform::Release();
		});
	}
#else
	if (!FPlatform::IsInitialized())
	{
		FPlatform::Create(TCHAR_TO_UTF8(*ProductID), TCHAR_TO_UTF8(*SandboxID), TCHAR_TO_UTF8(*DeploymentID), TCHAR_TO_UTF8(*ClientID), TCHAR_TO_UTF8(*ClientSecret), std::string(64, '1'));
	}
#endif
}

void FEOSCorePlatformModule::ShutdownModule()
{
	FPlatform::Release();
	EOS_Shutdown();
	UnloadEOSModules();

#if WITH_EDITOR
	s_BeginPieDelegateHandle.Reset();
	s_EndPieDelegateHandle.Reset();
#endif

#if !WITH_EDITOR
	if (IsRunningGame())
	{
		FPlatform::Release();
	}
#endif

	s_Callbacks.Empty();
} 

void FEOSCorePlatformModule::LoadEOSModules()
{
	FString BaseDir = IPluginManager::Get().FindPlugin("EOSCore")->GetBaseDir();
	FString LibraryPath;
#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/EOSLibrary/Bin/EOSSDK-Win64-Shipping.dll"));
#elif PLATFORM_LINUX
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/EOSLibrary/Bin/libEOSSDK-Linux-Shipping.so"));
#elif PLATFORM_MAC
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/EOSLibrary/Bin/libEOSSDK-Mac-Shipping.dylib"));
#elif PLATFORM_ANDROID
	LibraryPath = FString("libEOSSDK.so");
#endif

	EOSHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	if (!EOSHandle)
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load EOS third party library"));
	}
	else
	{
		LogVerbose("EOS SDK Loaded! Core Version: %s", *EOSCorePluginVersion);
	}
}

void FEOSCorePlatformModule::UnloadEOSModules()
{
	FPlatform::Release();
	FPlatformProcess::FreeDllHandle(EOSHandle);
	EOSHandle = nullptr;
}

void FEOSCorePlatformModule::InitPlatform(std::string productName, std::string productVersion)
{
	if (EOSHandle)
	{
		EOS_InitializeOptions m_InitializeOptions = { EOS_INITIALIZE_API_LATEST, nullptr, nullptr, nullptr, productName.c_str(), productVersion.c_str(), nullptr, nullptr };

#if PLATFORM_ANDROID

		if (GJavaVM)
		{
			LogVerbose("Android JAVA VM is Valid");
		}

		//static EOS_Android_InitializeOptions m_AndroidOptions = { EOS_ANDROID_INITIALIZEOPTIONS_API_LATEST, GJavaVM, nullptr, nullptr };
		JNIEnv* Env = FAndroidApplication::GetJavaEnv();
		JavaVM* VM = nullptr;
		Env->GetJavaVM(&VM);
		static EOS_Android_InitializeOptions m_AndroidOptions = { 0 };
		m_AndroidOptions.ApiVersion = EOS_ANDROID_INITIALIZEOPTIONS_API_LATEST;
		m_AndroidOptions.VM = VM;
		
		/*m_AndroidOptions.OptionalInternalDirectory = androidPath;
		m_AndroidOptions.OptionalExternalDirectory = androidPath;*/
		m_InitializeOptions.SystemInitializeOptions = &m_AndroidOptions;
#endif
		EOS_EResult m_Result = EOS_Initialize(&m_InitializeOptions);

		EOS_Logging_SetCallback(&EOSSDKLoggingCallback);
		EOS_Logging_SetLogLevel(EOS_ELogCategory::EOS_LC_ALL_CATEGORIES, EOS_ELogLevel::EOS_LOG_Verbose);

		bModuleLoaded = m_Result == EOS_EResult::EOS_Success;

		if (bModuleLoaded)
		{
			LogDebug("Module Initialized! Result: %s", *EOSCorePluginVersion, UTF8_TO_TCHAR(EOS_EResult_ToString(m_Result)));
		}
		else
		{
			LogError("Module Failed to Initialize! Result: %s", UTF8_TO_TCHAR(EOS_EResult_ToString(m_Result)));
		}
	}
	else
	{
		LogError("Module not loaded!");
	}
}

bool FEOSCorePlatformModule::AreEOSModulesLoaded()
{
	bool bLoadedClientDll = true;
	bool bLoadedServerDll = true;

	return EOSHandle != nullptr;
}

void FEOSCorePlatformModule::LoadSettings()
{
	DevAuthToolPort = 0;

	/* cache values from defaultengine.ini */
	GConfig->GetBool(TEXT("EOSCORE"), TEXT("bEnabled"), bEnabled, GEngineIni);
	GConfig->GetString(TEXT("EOSCORE"), TEXT("ProductID"), ProductID, GEngineIni);
	GConfig->GetString(TEXT("EOSCORE"), TEXT("SandboxID"), SandboxID, GEngineIni);
	GConfig->GetString(TEXT("EOSCORE"), TEXT("DeploymentID"), DeploymentID, GEngineIni);
	GConfig->GetString(TEXT("EOSCORE"), TEXT("ClientID"), ClientID, GEngineIni);
	GConfig->GetString(TEXT("EOSCORE"), TEXT("ClientSecret"), ClientSecret, GEngineIni);

	GConfig->GetString(TEXT("EOSCORE"), TEXT("ProductName"), ProductName, GEngineIni);
	GConfig->GetString(TEXT("EOSCORE"), TEXT("ProductVersion"), ProductVersion, GEngineIni);

	GConfig->GetInt(TEXT("EOSCORE"), TEXT("DevAuthToolPort"), DevAuthToolPort, GEngineIni);
	GConfig->GetString(TEXT("EOSCORE"), TEXT("DevAuthToolHost"), DevAuthToolHost, GEngineIni);

	if (ProductName.Len() == 0)
	{
		ProductName = "EOSCore";
	}

	if (ProductVersion.Len() == 0)
	{
		ProductVersion = "1.0";
	}

	if (DevAuthToolPort == 0)
	{
		if (!FParse::Value(FCommandLine::Get(), TEXT("DEVPORT="), DevAuthToolPort))
		{
			DevAuthToolPort = 1111;
		}
	}

	if (DevAuthToolHost.Len() == 0)
	{
		if (FParse::Value(FCommandLine::Get(), TEXT("DEVHOST="), DevAuthToolHost))
		{
			DevAuthToolHost = "localhost";
		}
	}

	FParse::Value(FCommandLine::Get(), TEXT("AUTH_LOGIN="), AuthLogin);
	FParse::Value(FCommandLine::Get(), TEXT("AUTH_TOKEN="), AuthToken);
}

bool FEOSCorePlatformModule::Tick(float deltaTime)
{
	FPlatform::Update();

	return true;
}

#undef LOCTEXT_NAMESPACE

void UEOSCorePlatformUtilities::ListenForEOSMessages(const FOnEOSMessage& callback)
{
	s_Callbacks.Add(callback);
}
