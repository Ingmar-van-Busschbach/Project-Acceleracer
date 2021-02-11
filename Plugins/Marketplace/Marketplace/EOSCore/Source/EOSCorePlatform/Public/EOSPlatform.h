/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_sdk.h"
#include <string>

DECLARE_MULTICAST_DELEGATE(FOnEOSCoreInitialized);

/**
* Creates EOSPlugin Platform
*/
class EOSCOREPLATFORM_API FPlatform
{
public:
	FPlatform() noexcept(false) {};
	FPlatform(FPlatform const&) = delete;
	FPlatform& operator=(FPlatform const&) = delete;
	virtual ~FPlatform() {};
public:
	static bool Create(std::string productId, std::string sandboxId, std::string deploymentId, std::string clientId, std::string clientSecret, std::string encryptionKey);
	static void Release();
	static void Update();
	static bool IsLoggedIn(int32 userId=0);
	static EOS_EpicAccountId GetLocalAccountId(int32 userId=0);
	static FString GetLocalAccountIdString(int32 userId = 0);
	static EOS_ProductUserId GetLocalProductId(int32 userId = 0);
	static FString GetLocalProductIdString(int32 userId = 0);
public:
	static EOS_HPlatform const GetPlatformHandle() { return PlatformHandle; };
	static bool IsInitialized() { return bIsInitialized; }
	static FPlatform& Get();
public:
	static FOnEOSCoreInitialized OnEOSCoreInitialized;
private:
	static EOS_HPlatform PlatformHandle;
	static bool bIsInitialized;
	static std::string CacheDirStr;
};
