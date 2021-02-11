/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Ecom/EOSEcomTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSEcomAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomQueryOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreEcomQueryOwnership : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnEcomQueryOwnershipCallbackDelegate OnCallback;
private:
    FOnEcomQueryOwnershipCallback Callback;
public:
    UEOSCoreEcomQueryOwnership() { Callback.BindUFunction(this, "HandleCallback"); }
public:
    /**
    * Query the ownership status for a given list of catalog item ids defined with Epic Online Services.
    * This data will be cached for a limited time and retrieved again from the backend when necessary
    *
    * @param options structure containing the account and catalog item ids to retrieve
    * @param ClientData arbitrary data that is passed back to you in the callback
    * @param callback a callback that is fired when the async operation completes, either successfully or in error
    */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Ecom|Async"))
        static UEOSCoreEcomQueryOwnership* EOSEcomQueryOwnershipAsync(UObject* WorldContextObject, FEOSEcomQueryOwnershipOptions options);
protected:
    FEOSEcomQueryOwnershipOptions Options;
public:
    virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSEcomQueryOwnershipCallbackInfo& data, bool bWasSuccessful)
    {
        OnCallback.Broadcast(data);
        Callback.Unbind();
        SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomQueryOwnershipToken
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreEcomQueryOwnershipToken : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnEcomQueryOwnershipTokenCallbackDelegate OnCallback;
private:
    FOnEcomQueryOwnershipTokenCallback Callback;
public:
    UEOSCoreEcomQueryOwnershipToken() { Callback.BindUFunction(this, "HandleCallback"); }
public:
    /**
    * Query the ownership status for a given list of catalog item ids defined with Epic Online Services.
    * The data is return via the callback in the form of a signed JWT that should be verified by an external backend server using a public key for authenticity.
    *
    * @param options structure containing the account and catalog item ids to retrieve in token form
    * @param ClientData arbitrary data that is passed back to you in the callback
    * @param callback a callback that is fired when the async operation completes, either successfully or in error
    */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Ecom|Async"))
        static UEOSCoreEcomQueryOwnershipToken* EOSEcomQueryOwnershipTokenAsync(UObject* WorldContextObject, FEOSEcomQueryOwnershipTokenOptions options);
protected:
    FEOSEcomQueryOwnershipTokenOptions Options;
public:
    virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSEcomQueryOwnershipTokenCallbackInfo& data, bool bWasSuccessful)
    {
        OnCallback.Broadcast(data);
        Callback.Unbind();
        SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomQueryEntitlements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreEcomQueryEntitlements : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnEcomQueryEntitlementsCallbackDelegate OnCallback;
private:
    FOnEcomQueryEntitlementsCallback Callback;
public:
    UEOSCoreEcomQueryEntitlements() { Callback.BindUFunction(this, "HandleCallback"); }
public:
    /**
    * Query the entitlement information defined with Epic Online Services.
    * A set of entitlement names can be provided to filter the set of entitlements associated with the account.
    * This data will be cached for a limited time and retrieved again from the backend when necessary.
    * Use EOS_Ecom_CopyEntitlementByIndex, EOS_Ecom_CopyEntitlementByNameAndIndex, and EOS_Ecom_CopyEntitlementById to get the entitlement details.
    * Use EOS_Ecom_GetEntitlementsByNameCount to retrieve the number of entitlements with a specific entitlement name.
    *
    * @param options structure containing the account and entitlement names to retrieve
    * @param ClientData arbitrary data that is passed back to you in the callback
    * @param callback a callback that is fired when the async operation completes, either successfully or in error
    */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Ecom|Async"))
        static UEOSCoreEcomQueryEntitlements* EOSEcomQueryEntitlementsAsync(UObject* WorldContextObject, FEOSEcomQueryEntitlementsOptions options);
protected:
    FEOSEcomQueryEntitlementsOptions Options;
public:
    virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSEcomQueryEntitlementsCallbackInfo& data, bool bWasSuccessful)
    {
        OnCallback.Broadcast(data);
        Callback.Unbind();
        SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomQueryOffers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreEcomQueryOffers : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnEcomQueryQueryOffersCallbackDelegate OnCallback;
private:
    FOnEcomQueryQueryOffersCallback Callback;
public:
    UEOSCoreEcomQueryOffers() { Callback.BindUFunction(this, "HandleCallback"); }
public:
    /**
    * Query for a list of catalog offers defined with Epic Online Services.
    * This data will be cached for a limited time and retrieved again from the backend when necessary.
    *
    * @param options structure containing filter criteria
    * @param ClientData arbitrary data that is passed back to you in the callback
    * @param callback a callback that is fired when the async operation completes, either successfully or in error
    */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Ecom|Async"))
        static UEOSCoreEcomQueryOffers* EOSEcomQueryOffersAsync(UObject* WorldContextObject, FEOSEcomQueryOffersOptions options);
protected:
    FEOSEcomQueryOffersOptions Options;
public:
    virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSEcomQueryOffersCallbackInfo& data, bool bWasSuccessful)
    {
        OnCallback.Broadcast(data);
        Callback.Unbind();
        SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomCheckout
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreEcomCheckout : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnEcomQueryCheckoutCallbackDelegate OnCallback;
private:
    FOnEcomQueryCheckoutCallback Callback;
public:
    UEOSCoreEcomCheckout() { Callback.BindUFunction(this, "HandleCallback"); }
public:
    /**
    * Initiates the purchase flow for a set of offers.  The callback is triggered after the purchase flow.
    * On success, the set of entitlements that were unlocked will be cached.
    * On success, a Transaction Id will be returned. The Transaction Id can be used to obtain a
    * const FEOSEcomHTransaction& handle. The handle can then be used to retrieve the entitlements rewarded by the purchase.
    *
    * @see EOS_Ecom_Transaction_Release
    *
    * @param options structure containing filter criteria
    * @param ClientData arbitrary data that is passed back to you in the callback
    * @param callback a callback that is fired when the async operation completes, either successfully or in error
    */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Ecom|Async"))
        static UEOSCoreEcomCheckout* EOSEcomCheckoutAsync(UObject* WorldContextObject, FEOSEcomCheckoutOptions options);
protected:
    FEOSEcomCheckoutOptions Options;
public:
    virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSEcomCheckoutCallbackInfo& data, bool bWasSuccessful)
    {
        OnCallback.Broadcast(data);
        Callback.Unbind();
        SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomRedeemEntitlements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreEcomRedeemEntitlements : public UEOSCoreAsyncAction
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
        FOnEcomQueryRedeemEntitlementsCallbackDelegate OnCallback;
private:
    FOnEcomQueryRedeemEntitlementsCallback Callback;
public:
    UEOSCoreEcomRedeemEntitlements() { Callback.BindUFunction(this, "HandleCallback"); }
public:
    /**
    * Requests that the provided entitlement be marked redeemed.  This will cause that entitlement
    * to no longer be returned from QueryEntitlements unless the include redeemed request flag is set true.
    *
    * @param options structure containing entitlement to redeem
    * @param ClientData arbitrary data that is passed back to you in the callback
    * @param callback a callback that is fired when the async operation completes, either successfully or in error
    */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|Ecom|Async"))
        static UEOSCoreEcomRedeemEntitlements* EOSEcomRedeemEntitlementsAsync(UObject* WorldContextObject, FEOSEcomRedeemEntitlementsOptions options);
protected:
    FEOSEcomRedeemEntitlementsOptions Options;
public:
    virtual void Activate() override;
private:
    UFUNCTION()
        void HandleCallback(const FEOSEcomRedeemEntitlementsCallbackInfo& data, bool bWasSuccessful)
    {
        OnCallback.Broadcast(data);
        Callback.Unbind();
        SetReadyToDestroy();
    }
};