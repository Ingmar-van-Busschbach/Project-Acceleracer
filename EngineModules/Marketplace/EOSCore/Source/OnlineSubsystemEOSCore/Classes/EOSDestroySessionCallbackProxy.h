/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

/*

#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "EOSDestroySessionCallbackProxy.generated.h"

UCLASS()
class ONLINESUBSYSTEMEOSCORE_API UEOSDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
public:
	UEOSDestroySessionCallbackProxy();
public:
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnFailure;
private:
	int32 NumPublicConnections;
	FString SessionName;

	FOnDestroySessionCompleteDelegate DestroySessionDelegate;

	FDelegateHandle DestroySessionCompleteDelegateHandle;
public:
	virtual void Activate() override;
public:
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Session", meta = (BlueprintInternalUseOnly = "true"))
		static UEOSDestroySessionCallbackProxy* DestroySession(FString sessionName);
private:
	void OnSessionDestroyed(FName sessionName, bool bWasSuccessful);
};
*/
