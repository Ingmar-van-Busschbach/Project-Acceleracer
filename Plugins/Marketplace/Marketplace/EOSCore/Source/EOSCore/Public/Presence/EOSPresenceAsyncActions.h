/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Presence/EOSPresenceTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSPresenceAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCorePresenceQueryPresence
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCorePresenceQueryPresence : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnPresenceQueryPresenceCompleteCallbackDelegate OnCallback;
private:
    FOnPresenceQueryPresenceCompleteCallback Callback;
public:
    UEOSCorePresenceQueryPresence() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCorePresenceQueryPresence() { Callback.Unbind(); }
public:
	/**
	* Query a user's presence. This must complete successfully before CopyPresence will have valid results. If HasPresence returns true for a remote
	* user, this does not need to be called.
	*
	* @param Options Object containing properties related to who is querying presence and for what user
	* @param ClientData Optional pointer to help track this request, that is returned in the completion callback
	* @param callback Pointer to a function that handles receiving the completion information
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Presence|Async"))
		static UEOSCorePresenceQueryPresence* EOSPresenceQueryPresenceAsync(UObject* WorldContextObject, FEOSPresenceQueryPresenceOptions options);
protected:
	FEOSPresenceQueryPresenceOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSPresenceQueryPresenceCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCorePresenceSetPresence
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCorePresenceSetPresence : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnPresenceSetPresenceCompleteCallbackDelegate OnCallback;
private:
	FOnPresenceSetPresenceCompleteCallback Callback;
public:
	UEOSCorePresenceSetPresence() { Callback.BindUFunction(this, "HandleCallback"); }
	~UEOSCorePresenceSetPresence() { Callback.Unbind(); }
public:
	/**
	* Sets your new presence with the data applied to a PresenceModificationHandle. The PresenceModificationHandle can be released safely after calling this function.
	*
	* @param Options Object containing a PresenceModificationHandle and associated user data
	* @param ClientData Optional pointer to help track this request, that is returned in the completion callback
	* @param callback Pointer to a function that handles receiving the completion information
	*
	* @see EOS_Presence_CreatePresenceModification
	* @see EOS_PresenceModification_Release
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Presence|Async"))
		static UEOSCorePresenceSetPresence* EOSPresenceSetPresenceAsync(UObject* WorldContextObject, FEOSPresenceSetPresenceOptions options);
protected:
	FEOSPresenceSetPresenceOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
		void HandleCallback(const FEOSPresenceSetPresenceCallbackInfo& data, bool bWasSuccessful)
	{
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
	}
};
