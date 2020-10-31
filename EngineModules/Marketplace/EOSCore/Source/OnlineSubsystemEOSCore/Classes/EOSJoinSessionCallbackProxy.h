/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "FindSessionsCallbackProxy.h"
//#include "EOSJoinSessionCallbackProxy.generated.h"

/*
UCLASS()
class  ONLINESUBSYSTEMEOSCORE_API UEOSJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnFailure;
public:
	UEOSJoinSessionCallbackProxy();
public:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "EOSCore|Session")
		static UEOSJoinSessionCallbackProxy* JoinSessionFromInvite(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& inviteId);
public:
	virtual void Activate() override;
private:
	void OnCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
private:
	FString InviteId;
	TWeakObjectPtr<APlayerController> PlayerControllerWeakPtr;
	FOnJoinSessionCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;
};*/

/*
UCLASS()
class ONLINESUBSYSTEMEOSCORE_API UEOSJoinSessionByIdCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnFailure;
public:
	UEOSJoinSessionByIdCallbackProxy();
public:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "EOSCore|Session")
		static UEOSJoinSessionByIdCallbackProxy* JoinSessionById(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& sessionId);
public:
	virtual void Activate() override;
private:
	void OnCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
private:
	FString SessionId;
	TWeakObjectPtr<APlayerController> PlayerControllerWeakPtr;
	FOnJoinSessionCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;
};*/