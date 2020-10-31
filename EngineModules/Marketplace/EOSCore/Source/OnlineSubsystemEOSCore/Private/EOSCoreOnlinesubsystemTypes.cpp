
#include "EOSCoreOnlinesubsystemTypes.h"
#include "Network/EOSCoreUniqueNetId.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"

FOnlineSessionInfoEOSCore::FOnlineSessionInfoEOSCore()
	: HostAddr(nullptr)
	, SessionId(new FUniqueNetIdEOSCore("INVALID"))
{}

