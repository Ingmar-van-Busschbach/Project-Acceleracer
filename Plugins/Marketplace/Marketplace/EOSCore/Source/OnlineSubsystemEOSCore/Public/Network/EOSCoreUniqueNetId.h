/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemTypes.h"
#include "EOSCoreOnlinesubsystemTypes.h"

class FUniqueNetIdEOSCore : public FUniqueNetIdString
{
public:
	FUniqueNetIdEOSCore() 
	{
		Type = EOSCORE_SUBSYSTEM;
	}
	FUniqueNetIdEOSCore(const FString& string) 
		: FUniqueNetIdString(string)
	{
		Type = EOSCORE_SUBSYSTEM;
	}
	FUniqueNetIdEOSCore(const FUniqueNetId& other)
	{
		Type = EOSCORE_SUBSYSTEM;

		if (other.GetType() == EOSCORE_SUBSYSTEM)
		{
			UniqueNetIdStr = other.ToString();
		}
	}
	virtual const uint8* GetBytes() const override
	{
		return (const uint8*)UniqueNetIdStr.GetCharArray().GetData();
	}

	EOS_ProductUserId ToProductUserId() const;
};
