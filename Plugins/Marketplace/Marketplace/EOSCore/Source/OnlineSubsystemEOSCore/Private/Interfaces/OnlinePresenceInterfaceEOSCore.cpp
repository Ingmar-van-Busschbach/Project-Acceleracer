/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlinePresenceInterfaceEOSCore.h"
#include "OnlineSubsystemEOSCore.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
#include "OnlineSubsystemEOSCoreLogging.h"

FOnlineSubsystemEOSCore* FOnlinePresenceEOSCore::Subsystem = nullptr;

FOnlinePresenceEOSCore::FOnlinePresenceEOSCore(FOnlineSubsystemEOSCore* subsystem)
{
	Subsystem = subsystem;
}

FOnlinePresenceEOSCore::~FOnlinePresenceEOSCore()
{
}

void FOnlinePresenceEOSCore::SetPresence(const FUniqueNetId& User, const FOnlineUserPresenceStatus& Status, const FOnPresenceTaskCompleteDelegate& Delegate /*= FOnPresenceTaskCompleteDelegate()*/)
{
	LogVerbose("Not implemented");
}

void FOnlinePresenceEOSCore::QueryPresence(const FUniqueNetId& User, const FOnPresenceTaskCompleteDelegate& Delegate /*= FOnPresenceTaskCompleteDelegate()*/)
{
	LogVerbose("Not implemented");
}

EOnlineCachedResult::Type FOnlinePresenceEOSCore::GetCachedPresence(const FUniqueNetId& User, TSharedPtr<FOnlineUserPresence>& OutPresence)
{
	LogVerbose("Not implemented");

	return EOnlineCachedResult::NotFound;
}

EOnlineCachedResult::Type FOnlinePresenceEOSCore::GetCachedPresenceForApp(const FUniqueNetId& LocalUserId, const FUniqueNetId& User, const FString& AppId, TSharedPtr<FOnlineUserPresence>& OutPresence)
{
	LogVerbose("Not implemented");

	return EOnlineCachedResult::NotFound;
}
