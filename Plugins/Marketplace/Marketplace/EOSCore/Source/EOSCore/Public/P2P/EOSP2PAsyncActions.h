/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "P2P/EOSP2PTypes.h"
#include "Core/EOSCoreAsync.h"
//#include "EOSP2PAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreP2PQueryP2P
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/*
UCLASS()
class EOSCORE_API UEOSCoreP2PQueryP2P : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnQueryP2PCallbackDelegate OnSuccess;
private:
    FOnQueryP2PCallback Callback;
public:
    UEOSCoreP2PQueryP2P() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCoreP2PQueryP2P() { Callback.Unbind(); }
public:
    / **
    * EOS_P2P_QueryP2P is used to start an asynchronous query to retrieve information, such as display name, about another account.
    * Once the callback has been fired with a successful ResultCode, it is possible to call EOS_P2P_CopyP2P to receive an EOS_P2P containing the available information.
    *
    * @param Options structure containing the input parameters
    * @param ClientData arbitrary data that is passed back to you in the callback
    * @param callback a callback that is fired when the async operation completes, either successfully or in error
    *
    * @see EOS_P2P
    * @see EOS_P2P_CopyP2P
    * @see EOS_P2P_QueryP2POptions
    * @see EOS_P2P_OnQueryP2PCallback
    * /
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|P2P|Async", AutoCreateRefTerm = "clientData"))
		static UEOSCoreP2PQueryP2P* EOSP2PQueryP2PAsync(UObject* WorldContextObject, FEOSP2PQueryP2POptions options, TArray<uint8> clientData, float asyncTimeout = 30.f);
private:
	UFUNCTION()
        void HandleCallback(const FEOSP2PQueryP2PCallbackInfo& data, bool bWasSuccessful)
    {
		const FEOSP2PQueryP2PCallbackInfo m_Data = data;

		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();

		Callback.Unbind();
		SetReadyToDestroy();
    }
};*/
