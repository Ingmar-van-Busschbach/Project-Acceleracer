/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "EOSDestroySessionCallbackProxy.h"
#include "EOSCoreOnlinesubsystemTypes.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"
/*

UEOSDestroySessionCallbackProxy::UEOSDestroySessionCallbackProxy()
	: DestroySessionDelegate(FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnSessionDestroyed))
{

}

void UEOSDestroySessionCallbackProxy::Activate()
{
	IOnlineSessionPtr m_SessionInterface = Online::GetSessionInterface(EOSCORE_SUBSYSTEM);

	if (m_SessionInterface.IsValid())
	{
		DestroySessionCompleteDelegateHandle = m_SessionInterface->AddOnDestroySessionCompleteDelegate_Handle(DestroySessionDelegate);
		m_SessionInterface->DestroySession(NAME_GameSession);

		return;
	}
	else
	{
		FFrame::KismetExecutionMessage(TEXT("Sessions not supported by Online Subsystem"), ELogVerbosity::Warning);
	}
}

UEOSDestroySessionCallbackProxy* UEOSDestroySessionCallbackProxy::DestroySession(FString sessionName)
{
	UEOSDestroySessionCallbackProxy* Proxy = NewObject<UEOSDestroySessionCallbackProxy>();
	Proxy->SetFlags(RF_StrongRefOnFrame);
	Proxy->SessionName = MoveTemp(sessionName);
	return Proxy;
}

void UEOSDestroySessionCallbackProxy::OnSessionDestroyed(FName sessionName, bool bWasSuccessful)
{
	IOnlineSessionPtr m_SessionInterface = Online::GetSessionInterface(EOSCORE_SUBSYSTEM);

	if (m_SessionInterface.IsValid())
	{
		m_SessionInterface->ClearOnDestroySessionCompleteDelegate_Handle(DestroySessionCompleteDelegateHandle);
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
*/
