/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "EOSCreateSessionCallbackProxy.generated.h"

UCLASS()
class ONLINESUBSYSTEMEOSCORE_API UEOSCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
public:
	UEOSCreateSessionCallbackProxy();
public:
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnFailure;
private:
	FString SessionName;
	int32 NumPublicConnections;
	bool bAllowJoinInProgress;
	bool bAllowInvites;

	FOnCreateSessionCompleteDelegate CreateCompleteDelegate;
	FOnStartSessionCompleteDelegate StartCompleteDelegate;

	FDelegateHandle CreateCompleteDelegateHandle;
	FDelegateHandle StartCompleteDelegateHandle;
public:
	virtual void Activate() override;
public:
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Session", meta = (BlueprintInternalUseOnly = "true"))
		static UEOSCreateSessionCallbackProxy* CreateEOSCoreSession(FString	sessionName, int32 publicConnections, bool allowJoinInProgress = true, bool allowInvites = true);
private:
	void OnCreateCompleted(FName sessionName, bool bWasSuccessful);
	void OnStartCompleted(FName sessionName, bool bWasSuccessful);
};
