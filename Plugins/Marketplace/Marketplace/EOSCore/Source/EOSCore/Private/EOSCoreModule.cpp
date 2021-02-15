/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "EOSCoreModule.h"
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "EOSPlatform.h"
#include "EOSCorePlatformModule.h"
#include "Core/EOSCoreAsync.h"

#define LOCTEXT_NAMESPACE "FEOSCoreModule"

DEFINE_LOG_CATEGORY(LogEOSCore);

void FEOSCoreModule::StartupModule()
{
	
}

void FEOSCoreModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEOSCoreModule, EOSCore)

void UEOSCoreSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	
}

void UEOSCoreSubsystem::Deinitialize()
{
	if (GetClass() != UEOSCoreSubsystem::StaticClass()) return;

	if (EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
		FCStringAnsi::Strncpy(m_SocketId.SocketName, "EOSCORE", 8);

		EOS_P2P_CloseConnectionsOptions m_Options = { EOS_P2P_CLOSECONNECTIONS_API_LATEST, FPlatform::GetLocalProductId(), &m_SocketId };
		EOS_P2P_CloseConnections(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}
}