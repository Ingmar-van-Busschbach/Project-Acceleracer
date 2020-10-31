/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Network/EOSCoreUniqueNetId.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
#include "Utilities/EOSSubsystemHelpers.h"

EOS_ProductUserId FUniqueNetIdEOSCore::ToProductUserId() const
{
	return EOSSubsystemHelpers::ProductIdFromString(ToString());
}
