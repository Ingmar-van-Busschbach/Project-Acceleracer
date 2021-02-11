/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "EOSCreateSessionCallbackProxy.h"
#include "EOSCoreOnlinesubsystemTypes.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"

UEOSCreateSessionCallbackProxy::UEOSCreateSessionCallbackProxy()
	: NumPublicConnections(1)
	, CreateCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreateCompleted))
	, StartCompleteDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnStartCompleted))
{}

void UEOSCreateSessionCallbackProxy::Activate()
{
	IOnlineSessionPtr m_SessionInterface = Online::GetSessionInterface(EOSCORE_SUBSYSTEM);

	if (m_SessionInterface.IsValid())
	{
		CreateCompleteDelegateHandle = m_SessionInterface->AddOnCreateSessionCompleteDelegate_Handle(CreateCompleteDelegate);

		FOnlineSessionSettings Settings;
		Settings.NumPublicConnections = NumPublicConnections;
		Settings.bShouldAdvertise = true;
		Settings.bAllowJoinInProgress = bAllowJoinInProgress;
		Settings.bUsesPresence = true;
		Settings.bAllowJoinViaPresence = true;
		Settings.bAllowInvites = bAllowInvites;
		Settings.Set("SESSION_NAME", SessionName, EOnlineDataAdvertisementType::ViaOnlineService);

		m_SessionInterface->CreateSession(0, NAME_GameSession, Settings);
	}
	else
	{
		UE_LOG_ONLINE_SESSION(Error, TEXT("EOSCore platform service not available. Skipping CreateSession."));

		OnFailure.Broadcast();
	}
}

UEOSCreateSessionCallbackProxy* UEOSCreateSessionCallbackProxy::CreateEOSCoreSession(FString sessionName, int32 publicConnections, bool allowJoinInProgress /* = true */, bool allowInvites /* = true */)
{
	UEOSCreateSessionCallbackProxy* Proxy = NewObject<UEOSCreateSessionCallbackProxy>();
	Proxy->SetFlags(RF_StrongRefOnFrame);
	Proxy->SessionName = MoveTemp(sessionName);
	Proxy->NumPublicConnections = publicConnections;
	Proxy->bAllowJoinInProgress = allowJoinInProgress;
	Proxy->bAllowInvites = allowInvites;
	return Proxy;
}

void UEOSCreateSessionCallbackProxy::OnCreateCompleted(FName sessionName, bool bWasSuccessful)
{
	IOnlineSessionPtr m_SessionInterface = Online::GetSessionInterface(EOSCORE_SUBSYSTEM);

	if (m_SessionInterface.IsValid())
	{
		m_SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateCompleteDelegateHandle);

		if (bWasSuccessful)
		{
			StartCompleteDelegateHandle = m_SessionInterface->AddOnStartSessionCompleteDelegate_Handle(StartCompleteDelegate);
			m_SessionInterface->StartSession(NAME_GameSession);

			return;
		}
	}

	if (!bWasSuccessful)
	{
		OnFailure.Broadcast();
	}
}

void UEOSCreateSessionCallbackProxy::OnStartCompleted(FName sessionName, bool bWasSuccessful)
{
	IOnlineSessionPtr m_SessionInterface = Online::GetSessionInterface(EOSCORE_SUBSYSTEM);

	if (m_SessionInterface.IsValid())
	{
		m_SessionInterface->ClearOnStartSessionCompleteDelegate_Handle(StartCompleteDelegateHandle);
	}

	if (bWasSuccessful)
	{
		OnSuccess.Broadcast();
	}
	else
	{
		OnFailure.Broadcast();
	}
}
