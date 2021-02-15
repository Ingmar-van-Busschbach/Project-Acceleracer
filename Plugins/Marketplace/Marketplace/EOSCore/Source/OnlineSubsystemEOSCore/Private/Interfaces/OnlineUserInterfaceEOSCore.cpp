/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlineUserInterfaceEOSCore.h"
#include "OnlineSubsystemEOSCore.h"
#include "Network/EOSCoreUniqueNetId.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
#include "OnlineSubsystemEOSCoreLogging.h"

FOnlineSubsystemEOSCore* FOnlineUserEOSCore::Subsystem = nullptr;

FOnlineUserEOSCore::FOnlineUserEOSCore(FOnlineSubsystemEOSCore* subsystem)
{
	Subsystem = subsystem;
}

FOnlineUserEOSCore::~FOnlineUserEOSCore()
{
}

bool FOnlineUserEOSCore::QueryUserInfo(int32 LocalUserNum, const TArray<TSharedRef<const FUniqueNetId> >& UserIds)
{
	LogVerbose("Not implemented");

	return false;
}

bool FOnlineUserEOSCore::GetAllUserInfo(int32 LocalUserNum, TArray< TSharedRef<class FOnlineUser> >& OutUsers)
{
	LogVerbose("Not implemented");

	return false;
}

TSharedPtr<FOnlineUser> FOnlineUserEOSCore::GetUserInfo(int32 LocalUserNum, const class FUniqueNetId& UserId)
{
	LogVerbose("Not implemented");
	
	return nullptr;
}

bool FOnlineUserEOSCore::QueryUserIdMapping(const FUniqueNetId& UserId, const FString& DisplayNameOrEmail, const FOnQueryUserMappingComplete& Delegate /*= FOnQueryUserMappingComplete()*/)
{
	LogVerbose("Not implemented");

	return false;
}

bool FOnlineUserEOSCore::QueryExternalIdMappings(const FUniqueNetId& UserId, const FExternalIdQueryOptions& QueryOptions, const TArray<FString>& ExternalIds, const FOnQueryExternalIdMappingsComplete& Delegate /*= FOnQueryExternalIdMappingsComplete()*/)
{
	LogVerbose("Not implemented");
	
	return false;
}

void FOnlineUserEOSCore::GetExternalIdMappings(const FExternalIdQueryOptions& QueryOptions, const TArray<FString>& ExternalIds, TArray<TSharedPtr<const FUniqueNetId>>& OutIds)
{
	LogVerbose("Not implemented");

}

TSharedPtr<const FUniqueNetId> FOnlineUserEOSCore::GetExternalIdMapping(const FExternalIdQueryOptions& QueryOptions, const FString& ExternalId)
{
	LogVerbose("Not implemented");

	return MakeShared<FUniqueNetIdEOSCore>();
}
