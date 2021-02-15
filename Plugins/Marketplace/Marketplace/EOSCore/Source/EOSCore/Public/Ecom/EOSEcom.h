/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "eos_ecom_types.h"
#include "Ecom/EOSEcomTypes.h"
#include "EOSEcom.generated.h"

/**
 * The Ecom Interface exposes all catalog, purchasing, and ownership entitlement features available with the Epic Games store
 * All Ecom Interface calls take a handle of type EOS_HEcom as the first parameter.
 * This handle can be retrieved from a EOS_HPlatform handle by using the EOS_Platform_GetEcomInterface function.
 *
 * NOTE: At this time, this feature is only available for products that are part of the Epic Games store.
 *
 * @see EOS_Platform_GetEcomInterface
 */

UCLASS()
class EOSCORE_API UCoreEcom : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
   UCoreEcom();
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreEcom* GetEcom() { return EcomObject; }
public:
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Ecom|Delegates")
		FOnEcomQueryOwnershipCallbackDelegate OnEcomQueryOwnershipCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Ecom|Delegates")
		FOnEcomQueryOwnershipTokenCallbackDelegate OnEcomQueryOwnershipTokenCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Ecom|Delegates")
		FOnEcomQueryEntitlementsCallbackDelegate OnEcomQueryEntitlementsCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Ecom|Delegates")
		FOnEcomQueryQueryOffersCallbackDelegate OnEcomQueryQueryOffersCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Ecom|Delegates")
		FOnEcomQueryCheckoutCallbackDelegate OnEcomQueryCheckoutCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|Ecom|Delegates")
		FOnEcomQueryRedeemEntitlementsCallbackDelegate OnEcomQueryRedeemEntitlementsCallbackDelegate;
public:
	/**
	* Query the ownership status for a given list of catalog item ids defined with Epic Online Services.
	* This data will be cached for a limited time and retrieved again from the backend when necessary
	*
	* @param options structure containing the account and catalog item ids to retrieve
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		void EOSEcomQueryOwnership(FEOSEcomQueryOwnershipOptions options, const FOnEcomQueryOwnershipCallback& callback);

	/**
	* Query the ownership status for a given list of catalog item ids defined with Epic Online Services.
	* The data is return via the callback in the form of a signed JWT that should be verified by an external backend server using a public key for authenticity.
	*
	* @param options structure containing the account and catalog item ids to retrieve in token form
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		void EOSEcomQueryOwnershipToken(FEOSEcomQueryOwnershipTokenOptions options, const FOnEcomQueryOwnershipTokenCallback& callback);

	/**
	* Query the entitlement information defined with Epic Online Services.
	* A set of entitlement names can be provided to filter the set of entitlements associated with the account.
	* This data will be cached for a limited time and retrieved again from the backend when necessary.
	* Use EOS_Ecom_CopyEntitlementByIndex, EOS_Ecom_CopyEntitlementByNameAndIndex, and EOS_Ecom_CopyEntitlementById to get the entitlement details.
	* Use EOS_Ecom_GetEntitlementsByNameCount to retrieve the number of entitlements with a specific entitlement name.
	*
	* @param options structure containing the account and entitlement names to retrieve
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		void EOSEcomQueryEntitlements(FEOSEcomQueryEntitlementsOptions options, const FOnEcomQueryEntitlementsCallback& callback);

	/**
	* Query for a list of catalog offers defined with Epic Online Services.
	* This data will be cached for a limited time and retrieved again from the backend when necessary.
	*
	* @param options structure containing filter criteria
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		void EOSEcomQueryOffers(FEOSEcomQueryOffersOptions options, const FOnEcomQueryQueryOffersCallback& callback);

	/**
	* Initiates the purchase flow for a set of offers.  The callback is triggered after the purchase flow.
	* On success, the set of entitlements that were unlocked will be cached.
	* On success, a Transaction Id will be returned. The Transaction Id can be used to obtain a
	* const FEOSEcomHTransaction& handle. The handle can then be used to retrieve the entitlements rewarded by the purchase.
	*
	* @see EOS_Ecom_Transaction_Release
	*
	* @param options structure containing filter criteria
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		void EOSEcomCheckout(FEOSEcomCheckoutOptions options, const FOnEcomQueryCheckoutCallback& callback);

	/**
	* Requests that the provided entitlement be marked redeemed.  This will cause that entitlement
	* to no longer be returned from QueryEntitlements unless the include redeemed request flag is set true.
	*
	* @param options structure containing entitlement to redeem
	* @param callback a callback that is fired when the async operation completes, either successfully or in error
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		void EOSEcomRedeemEntitlements(FEOSEcomRedeemEntitlementsOptions options, const FOnEcomQueryRedeemEntitlementsCallback& callback);

	/**
	* Fetch the number of entitlements that are cached for a given local user.
	*
	* @param options structure containing the account id being accessed
	*
	* @see EOS_Ecom_CopyEntitlementByIndex
	*
	* @return the number of entitlements found.
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static int32 EOSEcomGetEntitlementsCount(FEOSEcomGetEntitlementsCountOptions options);

	/**
	* Fetch the number of entitlements with the given Entitlement Name that are cached for a given local user.
	*
	* @param options structure containing the account id and name being accessed
	*
	* @see EOS_Ecom_CopyEntitlementByNameAndIndex
	*
	* @return the number of entitlements found.
	*/
    UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static int32 EOSEcomGetEntitlementsByNameCount(FEOSEcomGetEntitlementsByNameCountOptions options);

	/**
	* Fetches an entitlement from a given index.
		*
		* @param options structure containing the account id and index being accessed
		* @param OutEntitlement the entitlement for the given index, if it exists and is valid, use EOS_Ecom_Entitlement_Release when finished
		*
	* @see EOS_Ecom_Entitlement_Release
	*
	* @return EOS_Success if the information is available and passed out in OutEntitlement
	*         EOS_Ecom_EntitlementStale if the entitlement information is stale and passed out in OutEntitlement
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if the entitlement is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyEntitlementByIndex(FEOSEcomCopyEntitlementByIndexOptions options, FEOSEcomEntitlement& outEntitlement);

	/**
	* Fetches a single entitlement with a given Entitlement Name.  The Index is used to access individual
	* entitlements among those with the same Entitlement Name.  The Index can be a value from 0 to
	* one less than the result from EOS_Ecom_GetEntitlementsByNameCount.
	*
	* @param options structure containing the account id, entitlement name, and index being accessed
	* @param OutEntitlement the entitlement for the given name index pair, if it exists and is valid, use EOS_Ecom_Entitlement_Release when finished
	*
	* @see EOS_Ecom_Entitlement_Release
	*
	* @return EOS_Success if the information is available and passed out in OutEntitlement
	*         EOS_Ecom_EntitlementStale if the entitlement information is stale and passed out in OutEntitlement
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if the entitlement is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyEntitlementByNameAndIndex(FEOSEcomCopyEntitlementByNameAndIndexOptions options, FEOSEcomEntitlement& outEntitlement);

	/**
	* Fetches the entitlement with the given id.
	*
	* @param options structure containing the account id and entitlement id being accessed
	* @param OutEntitlement the entitlement for the given id, if it exists and is valid, use EOS_Ecom_Entitlement_Release when finished
	*
	* @see EOS_Ecom_CopyEntitlementByNameAndIndex
	* @see EOS_Ecom_Entitlement_Release
	*
	* @return EOS_Success if the information is available and passed out in OutEntitlement
	*         EOS_Ecom_EntitlementStale if the entitlement information is stale and passed out in OutEntitlement
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if the entitlement is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyEntitlementById(FEOSEcomCopyEntitlementByIdOptions options, FEOSEcomEntitlement& outEntitlement);

	/**
	* Fetch the number of offers that are cached for a given local user.
	*
	* @param options structure containing the account id being accessed
	*
	* @see EOS_Ecom_CopyOfferByIndex
	*
	* @return the number of offers found.
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static int32 EOSEcomGetOfferCount(FEOSEcomGetOfferCountOptions options);

	/**
	* Fetches an offer from a given index.  The pricing and text are localized to the provided account.
	*
	* @param options structure containing the account id and index being accessed
	* @param OutOffer the offer for the given index, if it exists and is valid, use EOS_Ecom_CatalogOffer_Release when finished
	*
	* @see EOS_Ecom_CatalogOffer_Release
	* @see EOS_Ecom_GetOfferItemCount
	*
	* @return EOS_Success if the information is available and passed out in OutOffer
	*         EOS_Ecom_CatalogOfferStale if the offer information is stale and passed out in OutOffer
	*         EOS_Ecom_CatalogOfferPriceInvalid if the offer information has an invalid price and passed out in OutOffer
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if the offer is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyOfferByIndex(FEOSEcomCopyOfferByIndexOptions options, FEOSEcomCatalogOffer& outOffer);

	/**
	* Fetches an offer with a given ID.  The pricing and text are localized to the provided account.
	*
	* @param options structure containing the account id and offer id being accessed
	* @param OutOffer the offer for the given index, if it exists and is valid, use EOS_Ecom_CatalogOffer_Release when finished
	*
	* @see EOS_Ecom_CatalogOffer_Release
	* @see EOS_Ecom_GetOfferItemCount
	*
	* @return EOS_Success if the information is available and passed out in OutOffer
	*         EOS_Ecom_CatalogOfferStale if the offer information is stale and passed out in OutOffer
	*         EOS_Ecom_CatalogOfferPriceInvalid if the offer information has an invalid price and passed out in OutOffer
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if the offer is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyOfferById(FEOSEcomCopyOfferByIdOptions options, FEOSEcomCatalogOffer& outOffer);

	/**
	* Fetch the number of items that are associated with a given cached offer for a local user.
	*
	* @return the number of items found.
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static int32 EOSEcomGetOfferItemCount(FEOSEcomGetOfferItemCountOptions options);

	/**
	* Fetches an item from a given index.
	*
	* @param options structure containing the account id and index being accessed
	* @param OutItem the item for the given index, if it exists and is valid, use EOS_Ecom_CatalogItem_Release when finished
	*
	* @see EOS_Ecom_CatalogItem_Release
	* @see EOS_Ecom_GetItemImageInfoCount
	* @see EOS_Ecom_GetItemReleaseCount
	*
	* @return EOS_Success if the information is available and passed out in OutItem
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_Ecom_CatalogItemState if the item information is stale
	*         EOS_NotFound if the item is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyOfferItemByIndex(FEOSEcomCopyOfferItemByIndexOptions options, FEOSEcomCatalogItem& outItem);

	/**
	* Fetches an item with a given ID.
	*
	* @param options structure containing the item id being accessed
	* @param OutItem the item for the given index, if it exists and is valid, use EOS_Ecom_CatalogItem_Release when finished
	*
	* @see EOS_Ecom_CatalogItem_Release
	* @see EOS_Ecom_GetItemImageInfoCount
	* @see EOS_Ecom_GetItemReleaseCount
	*
	* @return EOS_Success if the information is available and passed out in OutItem
	*         EOS_Ecom_CatalogItemState if the item information is stale and passed out in OutItem
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if the offer is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyItemById(FEOSEcomCopyItemByIdOptions options, FEOSEcomCatalogItem& outItem);

	/**
	* Fetch the number of images that are associated with a given cached offer for a local user.
	*
	* @return the number of images found.
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static int32 EOSEcomGetOfferImageInfoCount(FEOSEcomGetOfferImageInfoCountOptions options);

	/**
	* Fetches an image from a given index.
	*
	* @param options structure containing the offer id and index being accessed
	* @param OutImageInfo the image for the given index, if it exists and is valid, use EOS_Ecom_KeyImageInfo_Release when finished
	*
	* @see EOS_Ecom_KeyImageInfo_Release
	*
	* @return EOS_Success if the information is available and passed out in OutImageInfo
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_Ecom_CatalogOfferStale if the associated offer information is stale
	*         EOS_NotFound if the image is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyOfferImageInfoByIndex(FEOSEcomCopyOfferImageInfoByIndexOptions options, FEOSEcomKeyImageInfo& outImageInfo);

	/**
	* Fetch the number of images that are associated with a given cached item for a local user.
	*
	* @return the number of images found.
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static int32 EOSEcomGetItemImageInfoCount(FEOSEcomGetItemImageInfoCountOptions options);

	/**
	* Fetches an image from a given index.
	*
	* @param options structure containing the item id and index being accessed
	* @param OutImageInfo the image for the given index, if it exists and is valid, use EOS_Ecom_KeyImageInfo_Release when finished
	*
	* @see EOS_Ecom_KeyImageInfo_Release
	*
	* @return EOS_Success if the information is available and passed out in OutImageInfo
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_Ecom_CatalogItemState if the associated item information is stale
	*         EOS_NotFound if the image is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyItemImageInfoByIndex(FEOSEcomCopyItemImageInfoByIndexOptions options, FEOSEcomKeyImageInfo& outImageInfo);

	/**
	* Fetch the number of releases that are associated with a given cached item for a local user.
	*
	* @return the number of releases found.
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static int32 EOSEcomGetItemReleaseCount(FEOSEcomGetItemReleaseCountOptions options);

	/**
	* Fetches a release from a given index.
	*
	* @param options structure containing the item id and index being accessed
	* @param OutRelease the release for the given index, if it exists and is valid, use EOS_Ecom_CatalogRelease_Release when finished
	*
	* @see EOS_Ecom_CatalogRelease_Release
	*
	* @return EOS_Success if the information is available and passed out in OutRelease
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_Ecom_CatalogItemState if the associated item information is stale
	*         EOS_NotFound if the release is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyItemReleaseByIndex(FEOSEcomCopyItemReleaseByIndexOptions options, FEOSEcomCatalogRelease& outRelease);

	/**
	* Fetch the number of transactions that are cached for a given local user.
	*
	* @see EOS_Ecom_CheckoutCallbackInfo
	* @see EOS_Ecom_CopyTransactionByIndex
	*
	* @return the number of transactions found.
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static int32 EOSEcomGetTransactionCount(FEOSEcomGetTransactionCountOptions options);

	/**
	* Fetches the transaction handle at the given index.
	*
	* @param options structure containing the account id and index being accessed
	*
	* @see EOS_Ecom_CheckoutCallbackInfo
	* @see EOS_Ecom_Transaction_Release
	*
	* @return EOS_Success if the information is available and passed out in OutTransaction
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if the transaction is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyTransactionByIndex(FEOSEcomCopyTransactionByIndexOptions options, FEOSEcomHTransaction& outTransaction);

	/**
	* Fetches the transaction handle at the given index.
	*
	* @param options structure containing the account id and transaction id being accessed
	*
	* @see EOS_Ecom_CheckoutCallbackInfo
	* @see EOS_Ecom_Transaction_Release
	*
	* @return EOS_Success if the information is available and passed out in OutTransaction
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if the transaction is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomCopyTransactionById(FEOSEcomCopyTransactionByIdOptions options, FEOSEcomHTransaction& outTransaction);

	/**
	* The Ecom Transaction Interface exposes getters for accessing information about a completed transaction.
	* All Ecom Transaction Interface calls take a handle of type EOS_Ecom_HTransaction as the first parameter.
	* A const FEOSEcomHTransaction& handle is originally returned as part of the EOS_Ecom_CheckoutCallbackInfo struct.
	* A const FEOSEcomHTransaction& handle can also be retrieved from a EOS_HEcom handle using EOS_Ecom_CopyTransactionByIndex.
	* It is expected that after a transaction that EOS_Ecom_Transaction_Release is called.
	* When EOS_Platform_Release is called any remaining transactions will also be released.
	*
	* @see EOS_Ecom_CheckoutCallbackInfo
	* @see EOS_Ecom_GetTransactionCount
	* @see EOS_Ecom_CopyTransactionByIndex
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomTransaction_GetTransactionId(const FEOSEcomHTransaction& handle, FString& transactionId);

	/**
	* Fetch the number of entitlements that are part of this transaction.
	*
	* @param options structure containing the account id being accessed
	*
	* @see EOS_Ecom_Transaction_CopyEntitlementByIndex
	*
	* @return the number of entitlements found.
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static int32 EOSEcomTransaction_GetEntitlementsCount(const FEOSEcomHTransaction& handle, FEOSEcomTransactionGetEntitlementsCountOptions options);

	/**
	* Fetches an entitlement from a given index.
	*
	* @param options structure containing the index being accessed
	* @param OutEntitlement the entitlement for the given index, if it exists and is valid, use EOS_Ecom_Entitlement_Release when finished
	*
	* @see EOS_Ecom_Entitlement_Release
	*
	* @return EOS_Success if the information is available and passed out in OutEntitlement
	*         EOS_Ecom_EntitlementStale if the entitlement information is stale and passed out in OutEntitlement
	*         EOS_InvalidParameters if you pass a null pointer for the out parameter
	*         EOS_NotFound if the entitlement is not found
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Ecom")
		static EOSResult EOSEcomTransaction_CopyEntitlementByIndex(const FEOSEcomHTransaction& handle, FEOSEcomTransactionCopyEntitlementByIndexOptions options, FEOSEcomEntitlement& outEntitlement);
private:
	static void Internal_OnQueryOwnershipCallback(const EOS_Ecom_QueryOwnershipCallbackInfo* data);
	static void Internal_OnQueryOwnershipTokenCallback(const EOS_Ecom_QueryOwnershipTokenCallbackInfo* data);
	static void Internal_OnQueryEntitlementsCallback(const EOS_Ecom_QueryEntitlementsCallbackInfo* data);
	static void Internal_OnQueryOffersCallback(const EOS_Ecom_QueryOffersCallbackInfo* data);
	static void Internal_OnCheckoutCallback(const EOS_Ecom_CheckoutCallbackInfo* data);
	static void Internal_OnRedeemEntitlementsCallback(const EOS_Ecom_RedeemEntitlementsCallbackInfo* data);
private:
   static UCoreEcom* EcomObject;
};
