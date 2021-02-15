/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_ecom_types.h"
#include "Core/EOSHelpers.h"
#include "EOSEcomTypes.generated.h"

class UCoreEcom;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/**
 * An enumeration of the different ownership statuses.
 */
UENUM(BlueprintType)
enum class EEOSEOwnershipStatus : uint8
{
	/** The catalog item is not owned by the local user */
	EOS_OS_NotOwned = 0,
	/** The catalog item is owned by the local user */
	EOS_OS_Owned = 1
};

/**
 * An enumeration defining the type of catalog item.  The primary use is to identify how the item is expended.
 */
UENUM(BlueprintType)
enum class EEOSEEcomItemType : uint8
{
	/** This entitlement is intended to persist. */
	EOS_EIT_Durable = 0,
	/**
	 * This entitlement is intended to be transient and redeemed.
	 *
	 * @see EOS_Ecom_RedeemEntitlements
	 */
	 EOS_EIT_Consumable = 1,
	 /** This entitlement has a type that is not currently intneded for an in-game store. */
	 EOS_EIT_Other = 2
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct FEOSEcomHTransaction
{
	GENERATED_BODY()
public:
	EOS_Ecom_TransactionHandle* Handle;
public:
	FEOSEcomHTransaction() {}
	FEOSEcomHTransaction(const EOS_Ecom_HTransaction& data)
	{
		Handle = data;
	}
public:
	operator EOS_Ecom_HTransaction() { return Handle; }
	operator EOS_Ecom_HTransaction() const { return Handle; }
};


/**
 * A unique identifier for a catalog item defined and stored with the backend catalog service.
 * A catalog item represents a distinct object within the catalog.  When acquired by an account, an
 * entitlement is granted that references a specific catalog item.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCatalogItemId
{
	GENERATED_BODY()
public:
	std::string ItemId;
public:
	FEOSEcomCatalogItemId() {}
	FEOSEcomCatalogItemId(const EOS_Ecom_CatalogItemId& data)
	{
		ItemId = data;
	}
public:
	operator EOS_Ecom_CatalogItemId() { return ItemId.c_str(); }
	operator EOS_Ecom_CatalogItemId() const { return ItemId.c_str(); }
};

/**
 * A unique identifier for a catalog offer defined and stored with the backend catalog service.
 * A catalog offer is a purchasable collection of 1 or more items, associated with a price (which
 * could be 0).  When an offer is purchased an entitlement is granted for each of the items
 * referenced by the offer.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCatalogOfferId
{
	GENERATED_BODY()
public:
	std::string OfferId;
public:
	FEOSEcomCatalogOfferId() {}
	FEOSEcomCatalogOfferId(const EOS_Ecom_CatalogOfferId& data)
	{
		OfferId = data;
	}
public:
	operator EOS_Ecom_CatalogOfferId() { return OfferId.c_str(); }
	operator EOS_Ecom_CatalogOfferId() const { return OfferId.c_str(); }
};

/**
 * An identifier which is defined on a catalog item and stored with the backend catalog service.
 * The entitlement name may not be unique.  A catalog may be configured with multiple items with the
 * same entitlement name in order to define a logical grouping of entitlements.  This is used to
 * retrieve all entitlements granted to an account grouped in this way.
 *
 * @see EOS_Ecom_QueryEntitlements
 */
USTRUCT(BlueprintType)
struct FEOSEcomEntitlementName
{
	GENERATED_BODY()
public:
	std::string Name;
public:
	FEOSEcomEntitlementName() {}
	FEOSEcomEntitlementName(const EOS_Ecom_EntitlementName& data)
	{
		Name = data;
	}
public:
	operator EOS_Ecom_EntitlementName() { return Name.c_str(); }
	operator EOS_Ecom_EntitlementName() const { return Name.c_str(); }
};

/**
 * A unique identifier for an entitlement owned by an account.  An entitlement is always associated
 * with a single account.  The entitlement id is provided to allow redeeming the entitlement as
 * well as identify individual entitlement grants.
 *
 * @see EOS_Ecom_QueryEntitlements
 * @see EOS_Ecom_RedeemEntitlements
 */
USTRUCT(BlueprintType)
struct FEOSEcomEntitlementId
{
	GENERATED_BODY()
public:
	std::string EntitlementId;
public:
	FEOSEcomEntitlementId() {}
	FEOSEcomEntitlementId(const EOS_Ecom_EntitlementId& data)
	{
		EntitlementId = data;
	}
public:
	operator EOS_Ecom_EntitlementId() { return EntitlementId.c_str(); }
	operator EOS_Ecom_EntitlementId() const { return EntitlementId.c_str(); }
};

/**
 * Contains information about a single entitlement associated with an account. Instances of this structure are
 * created by EOS_Ecom_CopyEntitlementByIndex, EOS_Ecom_CopyEntitlementByNameAndIndex, or EOS_Ecom_CopyEntitlementById.
 * They must be passed to EOS_Ecom_Entitlement_Release.
 */
USTRUCT(BlueprintType)
struct FEOSEcomEntitlement
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Name of the entitlement */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomEntitlementName EntitlementName;
	/** Id of the entitlement owned by an account */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomEntitlementId EntitlementId;
	/** Id of the item associated with the offer which granted this entitlement */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogItemId CatalogItemId;
	/**
	 * If queried using pagination then ServerIndex represents the index of the entitlement as it
	 * exists on the server.  If not queried using pagination then ServerIndex will be -1.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 ServerIndex;
	/** If true then the catalog has this entitlement marked as redeemed */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		bool bRedeemed;
	/** If not -1 then this is a POSIX timestamp that this entitlement will end */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString EndTimestamp;
public:
	explicit FEOSEcomEntitlement()
		: ApiVersion(EOS_ECOM_ENTITLEMENT_API_LATEST) 
		, ServerIndex(0)
		, bRedeemed(false) { }
	FEOSEcomEntitlement(const EOS_Ecom_Entitlement& data)
		: ApiVersion(EOS_ECOM_ENTITLEMENT_API_LATEST) 
		, EntitlementName(data.EntitlementName)
		, EntitlementId(data.EntitlementId)
		, CatalogItemId(data.CatalogItemId)
		, ServerIndex(data.ServerIndex)
		, bRedeemed((data.bRedeemed > 0))
		, EndTimestamp(LexToString(data.EndTimestamp)) {}
};

/**
 * Contains information about a single item ownership associated with an account. This structure is
 * returned as part of the EOS_Ecom_QueryOwnershipCallbackInfo structure.
 */
USTRUCT(BlueprintType)
struct FEOSEcomItemOwnership
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Id of the catalog item */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogItemId Id;
	/** Is this catalog item owned by the local user */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		EEOSEOwnershipStatus OwnershipStatus;
public:
	explicit FEOSEcomItemOwnership()
		: ApiVersion(EOS_ECOM_ITEMOWNERSHIP_API_LATEST)
		, OwnershipStatus(EEOSEOwnershipStatus::EOS_OS_NotOwned)
		{ }
	FEOSEcomItemOwnership(const EOS_Ecom_ItemOwnership& data) 
		: ApiVersion(EOS_ECOM_ITEMOWNERSHIP_API_LATEST)
		, Id(data.Id)
		, OwnershipStatus(static_cast<EEOSEOwnershipStatus>(data.OwnershipStatus)) {}
};

/**
 * Contains information about a single item within the catalog. Instances of this structure are created
 * by EOS_Ecom_CopyOfferItemByIndex. They must be passed to EOS_Ecom_CatalogItem_Release.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCatalogItem
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product namespace in which this item exists */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString CatalogNamespace;
	/** The ID of this item */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogItemId Id;
	/** The entitlement name associated with this item */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomEntitlementName EntitlementName;
	/** Localized UTF-8 title of this item */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString TitleText;
	/** Localized UTF-8 description of this item */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString DescriptionText;
	/** Localized UTF-8 long description of this item */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString LongDescriptionText;
	/** Localized UTF-8 technical details of this item */ 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString TechnicalDetailsText;
	/** Localized UTF-8 developer of this item */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString DeveloperText;
	/** The type of item as defined in the catalog */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		EEOSEEcomItemType ItemType;
	/** If not -1 then this is the POSIX timestamp that the entitlement will end */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString EntitlementEndTimestamp;
public:
	explicit FEOSEcomCatalogItem()
		: ApiVersion(EOS_ECOM_CATALOGITEM_API_LATEST) 
		, ItemType(EEOSEEcomItemType::EOS_EIT_Other)
		{ }
	FEOSEcomCatalogItem(const EOS_Ecom_CatalogItem& data)
		: ApiVersion(EOS_ECOM_CATALOGITEM_API_LATEST)
		, CatalogNamespace(data.CatalogNamespace)
		, Id(data.Id)
		, EntitlementName(data.EntitlementName)
		, TitleText(data.TitleText)
		, DescriptionText(data.DescriptionText)
		, LongDescriptionText(data.LongDescriptionText)
		, TechnicalDetailsText(data.TechnicalDetailsText)
		, DeveloperText(data.DeveloperText)
		, ItemType(static_cast<EEOSEEcomItemType>(data.ItemType))
		, EntitlementEndTimestamp(LexToString(data.EntitlementEndTimestamp))
	{}
};

/**
 * Contains information about a single offer within the catalog. Instances of this structure are
 * created by EOS_Ecom_CopyOfferByIndex. They must be passed to EOS_Ecom_CatalogOffer_Release.
 * Prices are stored in the lowest denomination for the associated currency.  If CurrencyCode is
 * "USD" then a price of 299 represents "$2.99".
 */
USTRUCT(BlueprintType)
struct FEOSEcomCatalogOffer
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
		/**
		 * The index of this offer as it exists on the server.
		 * This is useful for understanding pagination data.
		 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 ServerIndex;
	/** Product namespace in which this offer exists */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString CatalogNamespace;
	/** The ID of this offer */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogOfferId Id;
	/** Localized UTF-8 title of this offer */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString TitleText;
	/** Localized UTF-8 description of this offer */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString DescriptionText;
	/** Localized UTF-8 long description of this offer */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString LongDescriptionText;
	/**
	 * Deprecated.
	 * EOS_Ecom_CatalogOffer::TechnicalDetailsText has been deprecated.
	 * EOS_Ecom_CatalogItem::TechnicalDetailsText is still valid.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString TechnicalDetailsText;
	/** The Currency Code for this offer */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString CurrencyCode;
	/**
	 * If this value is EOS_Success then OriginalPrice, CurrentPrice, and DiscountPercentage contain valid data.
	 * Otherwise this value represents the error that occurred on the price query.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		EOSResult PriceResult;
	/** The original price of this offer. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 OriginalPrice;
	/** The current price including discounts of this offer. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 CurrentPrice;
	/** A value from 0 to 100 define the percentage of the OrignalPrice that the CurrentPrice represents */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 DiscountPercentage;
	/** Contains the POSIX timestamp that the offer expires or -1 if it does not expire */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString ExpirationTimestamp;
	/** The number of times that the requesting account has purchased this offer. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 PurchasedCount;
	/**
	 * The maximum number of times that the offer can be purchased.
	 * A negative value implies there is no limit.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 PurchaseLimit;
	/** True if the user can purchase this offer. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		bool bAvailableForPurchase;
public:
	explicit FEOSEcomCatalogOffer()
		: ApiVersion(EOS_ECOM_CATALOGOFFER_API_LATEST) 
		, ServerIndex(0)
		, PriceResult(EOSResult::EOS_ServiceFailure)
		, OriginalPrice(0)
		, CurrentPrice(0)
		, DiscountPercentage(0)
		, PurchasedCount(0)
		, PurchaseLimit(0)
		, bAvailableForPurchase(false)
		{ }
	FEOSEcomCatalogOffer(const EOS_Ecom_CatalogOffer& data)
		: ApiVersion(EOS_ECOM_CATALOGOFFER_API_LATEST)
		, ServerIndex(data.ServerIndex)
		, CatalogNamespace(data.CatalogNamespace)
		, Id(data.Id)
		, TitleText(data.TitleText)
		, DescriptionText(data.DescriptionText)
		, LongDescriptionText(data.LongDescriptionText)
		, TechnicalDetailsText(data.TechnicalDetailsText_DEPRECATED)
		, CurrencyCode(data.CurrencyCode)
		, PriceResult(EOSHelpers::ToEOSCoreResult(data.PriceResult))
		, OriginalPrice(data.OriginalPrice)
		, CurrentPrice(data.CurrentPrice)
		, DiscountPercentage(data.DiscountPercentage)
		, ExpirationTimestamp(LexToString(data.ExpirationTimestamp))
		, PurchasedCount(data.PurchasedCount)
		, PurchaseLimit(data.PurchaseLimit)
		, bAvailableForPurchase((data.bAvailableForPurchase>0))
	
	{}
};

/**
 * Contains information about a key image used by the catalog.  Instances of this structure are
 * created by EOS_Ecom_CopyItemImageInfoByIndex.  They must be passed to EOS_Ecom_KeyImageInfo_Release.
 * A Key Image is defined within Dev Portal and is associated with a Catalog Item.  A Key Image is
 * intended to be used to provide imagery for an in-game store.
 *
 * @see EOS_Ecom_CopyItemImageInfoByIndex
 * @see EOS_Ecom_KeyImageInfo_Release
 */
USTRUCT(BlueprintType)
struct FEOSEcomKeyImageInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Describes the usage of the image (ex: home_thumbnail) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString Type;
	/** The URL of the image */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString Url;
	/** The expected width in pixels of the image */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 Width;
	/** The expected height in pixels of the image */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 Height;
public:
	explicit FEOSEcomKeyImageInfo()
		: ApiVersion(EOS_ECOM_KEYIMAGEINFO_API_LATEST) 
		, Width(0) 
		, Height(0) { }
	FEOSEcomKeyImageInfo(const EOS_Ecom_KeyImageInfo& data) 
		: ApiVersion(EOS_ECOM_KEYIMAGEINFO_API_LATEST) 
		, Type(data.Type)
		, Url(data.Url)
		, Width(data.Width)
		, Height(data.Height)
		{}
};

/**
 * Contains information about a single release within the catalog. Instances of this structure are
 * created by EOS_Ecom_CopyItemReleaseByIndex. They must be passed to EOS_Ecom_CatalogRelease_Release.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCatalogRelease
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The number of APP IDs */
	int32 CompatibleAppIdCount;
	/** A list of compatible APP IDs */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		TArray<FString> CompatibleAppIds;
	/** The number of platforms */
	int32 CompatiblePlatformCount;
	/** A list of compatible Platforms */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		TArray<FString> CompatiblePlatforms;
	/** Release note for compatible versions */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString ReleaseNote;
public:
	explicit FEOSEcomCatalogRelease()
		: ApiVersion(EOS_ECOM_CATALOGRELEASE_API_LATEST)
		, CompatibleAppIdCount(0)
		, CompatiblePlatformCount(0) { }
	FEOSEcomCatalogRelease(const EOS_Ecom_CatalogRelease& data)
		: ApiVersion(EOS_ECOM_CATALOGRELEASE_API_LATEST)
	{
		for (int32 i = 0; i < (int32)data.CompatibleAppIdCount; i++)
		{
			CompatibleAppIds.Add(data.CompatibleAppIds[i]);
		}
		CompatibleAppIdCount = CompatibleAppIds.Num();

		for (int32 i = 0; i < (int32)data.CompatiblePlatformCount; i++)
		{
			CompatiblePlatforms.Add(data.CompatiblePlatforms[i]);
		}
		CompatiblePlatformCount = CompatiblePlatforms.Num();
	
		ReleaseNote = data.ReleaseNote;
	}
};

/**
 * Contains information about a request to purchase a single offer.  This structure is set as part
 * of the EOS_Ecom_CheckoutOptions structure.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCheckoutEntry
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The ID of the offer to purchase */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogOfferId OfferId;
public:
	explicit FEOSEcomCheckoutEntry()
		: ApiVersion(EOS_ECOM_CHECKOUTENTRY_API_LATEST) { }
};

/**
 * Input parameters for the EOS_Ecom_QueryOwnership Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomQueryOwnershipOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose ownership to query */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** List of catalog item ids to check for ownership, matching in number to the CatalogItemIdCount */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		 TArray<FEOSEcomCatalogItemId> CatalogItemIds;
	/** Number of catalog item ids to query */
	uint32_t CatalogItemIdCount;
	/** Optional product namespace, if not the one specified during initialization */
		FString CatalogNamespace;
public:
	explicit FEOSEcomQueryOwnershipOptions()
		: ApiVersion(EOS_ECOM_QUERYOWNERSHIP_API_LATEST) { }
};

/**
 * Output parameters for the EOS_Ecom_QueryOwnership Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomQueryOwnershipCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Ecom_QueryOwnership */
	void* ClientData;
	/** Local user whose ownership was queried */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** List of catalog items and their ownership status */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		TArray<FEOSEcomItemOwnership> ItemOwnership;
	/** Number of ownership results are included in this callback */
		int32 ItemOwnershipCount;
public:
	explicit FEOSEcomQueryOwnershipCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr)
		, ItemOwnershipCount(0) {}
	FEOSEcomQueryOwnershipCallbackInfo(const EOS_Ecom_QueryOwnershipCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, ItemOwnershipCount(data.ItemOwnershipCount)
	{ 
		for (int32 i=0; i<ItemOwnershipCount; i++)
			ItemOwnership.Add(data.ItemOwnership[i]);
	}
};

/**
 * Input parameters for the EOS_Ecom_QueryOwnershipToken Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomQueryOwnershipTokenOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose ownership token to query */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** List of catalog item ids to check for ownership, matching in number to the CatalogItemIdCount */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		TArray<FEOSEcomCatalogItemId> CatalogItemIds;
	/** Number of catalog item ids to query */
		int32 CatalogItemIdCount;
	/** Optional product namespace, if not the one specified during initialization */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString CatalogNamespace;
public:
	explicit FEOSEcomQueryOwnershipTokenOptions()
		: ApiVersion(EOS_ECOM_QUERYOWNERSHIPTOKEN_API_LATEST) 
		, CatalogItemIdCount(CatalogItemIds.Num())
		{}
};

/**
 * Output parameters for the EOS_Ecom_QueryOwnershipToken Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomQueryOwnershipTokenCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Ecom_QueryOwnershipToken */
		void* ClientData;
	/** Local user whose ownership token was queried */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** Ownership token containing details about the catalog items queried */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString OwnershipToken;
public:
	explicit FEOSEcomQueryOwnershipTokenCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure) 
		, ClientData(nullptr) { }
	FEOSEcomQueryOwnershipTokenCallbackInfo(const EOS_Ecom_QueryOwnershipTokenCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, OwnershipToken(data.OwnershipToken) { }
};

/**
 * Input parameters for the EOS_Ecom_QueryEntitlements Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomQueryEntitlementsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose entitlement to query */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** List of entitlement names, matching in number to the EntitlementNameCount */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		TArray<FEOSEcomEntitlementName> EntitlementNames;
	/** Number of entitlement names to query */
		int32 EntitlementNameCount;
	/** Determines rater or not to include redeemed entitlements */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		bool bIncludeRedeemed;
public:
	explicit FEOSEcomQueryEntitlementsOptions()
		: ApiVersion(EOS_ECOM_QUERYENTITLEMENTS_API_LATEST)
		, EntitlementNameCount(EntitlementNames.Num())
		, bIncludeRedeemed(false)
		{}
};

/**
 * Output parameters for the EOS_Ecom_QueryEntitlements Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomQueryEntitlementsCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Ecom_QueryEntitlements */
		void* ClientData;
	/** Local user whose entitlement was queried */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSEcomQueryEntitlementsCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure) 
		, ClientData(nullptr) { }
	FEOSEcomQueryEntitlementsCallbackInfo(const EOS_Ecom_QueryEntitlementsCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId) { }
};

/**
 * Input parameters for the EOS_Ecom_QueryOffers Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomQueryOffersOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose offer to query */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** If not provided then the SandboxId is used as the catalog namespace */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString OverrideCatalogNamespace;
public:
	explicit FEOSEcomQueryOffersOptions()
		: ApiVersion(EOS_ECOM_QUERYOFFERS_API_LATEST)
		{}
};

/**
 * Output parameters for the EOS_Ecom_QueryOffers Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomQueryOffersCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Ecom_QueryOffers */
		void* ClientData;
	/** Local user whose offer was queried */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSEcomQueryOffersCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure) 
		, ClientData(nullptr) { }
	FEOSEcomQueryOffersCallbackInfo(const EOS_Ecom_QueryOffersCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId) { }
};

/**
 * Input parameters for the EOS_Ecom_Checkout Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCheckoutOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the user which is initiating the purchase */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** If not provided then the SandboxId is used as the catalog namespace */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString OverrideCatalogNamespace;
	/** The number of entries */
	uint32_t EntryCount;
	/** The items that the user intends to purchase */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		TArray<FEOSEcomCheckoutEntry> Entries;
public:
	explicit FEOSEcomCheckoutOptions()
		: ApiVersion(EOS_ECOM_CHECKOUT_API_LATEST)
		, EntryCount(0)
		{}
};

/**
 * Output parameters for the EOS_Ecom_Checkout Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCheckoutCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Ecom_Checkout */
	void* ClientData;
	/** The Account ID of the user which initiated the purchase */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The transaction id which can be used to obtain an EOS_Ecom_HTransaction using EOS_Ecom_CopyTransactionById. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString TransactionId;
public:
	explicit FEOSEcomCheckoutCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure) 
		, ClientData(nullptr) { }
	FEOSEcomCheckoutCallbackInfo(const EOS_Ecom_CheckoutCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId) 
		, TransactionId(data.TransactionId) { }
};

/**
 * Input parameters for the EOS_Ecom_RedeemEntitlements Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomRedeemEntitlementsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the user which is redeeming entitlements */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The number of entitlements to redeem. */
		int32 EntitlementIdCount;
	/** The entitlements to redeem. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		TArray<FEOSEcomEntitlementId> EntitlementIds;
public:
	explicit FEOSEcomRedeemEntitlementsOptions()
		: ApiVersion(EOS_ECOM_REDEEMENTITLEMENTS_API_LATEST)
		, EntitlementIdCount(0)
		{}
};

/**
 * Output parameters for the EOS_Ecom_RedeemEntitlements Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomRedeemEntitlementsCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful query, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Ecom_RedeemEntitlements */
		void* ClientData;
	/** The Account ID of the user which has redeemed entitlements */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSEcomRedeemEntitlementsCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure) 
		, ClientData(nullptr) { }
	FEOSEcomRedeemEntitlementsCallbackInfo(const EOS_Ecom_RedeemEntitlementsCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)  { }
};

/**
 * Input parameters for the EOS_Ecom_GetEntitlementsCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomGetEntitlementsCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user for which to retrieve the entitlement count */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSEcomGetEntitlementsCountOptions()
		: ApiVersion(EOS_ECOM_GETENTITLEMENTSCOUNT_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_GetEntitlementsByNameCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomGetEntitlementsByNameCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user for which to retrieve the entitlement count */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** Name of the entitlement to count in the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomEntitlementName EntitlementName;
public:
	explicit FEOSEcomGetEntitlementsByNameCountOptions()
		: ApiVersion(EOS_ECOM_GETENTITLEMENTSBYNAMECOUNT_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyEntitlementByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyEntitlementByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose entitlement is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** Index of the entitlement to retrieve from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 EntitlementIndex;
public:
	explicit FEOSEcomCopyEntitlementByIndexOptions()
		: ApiVersion(EOS_ECOM_COPYENTITLEMENTBYINDEX_API_LATEST)
		, EntitlementIndex(0)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyEntitlementByNameAndIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyEntitlementByNameAndIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose entitlement is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** Name of the entitlement to retrieve from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomEntitlementName EntitlementName;
	/** Index of the entitlement within the named set to retrieve from the cache. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 Index;
public:
	explicit FEOSEcomCopyEntitlementByNameAndIndexOptions()
		: ApiVersion(EOS_ECOM_COPYENTITLEMENTBYNAMEANDINDEX_API_LATEST)
		, Index(0)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyEntitlementById Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyEntitlementByIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
		/** Local user whose entitlement is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** Id of the entitlement to retrieve from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomEntitlementId EntitlementId;
public:
	explicit FEOSEcomCopyEntitlementByIdOptions()
		: ApiVersion(EOS_ECOM_COPYENTITLEMENTBYID_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_GetOfferCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomGetOfferCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose offers are being accessed */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSEcomGetOfferCountOptions()
		: ApiVersion(EOS_ECOM_GETOFFERCOUNT_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyOfferByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyOfferByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose offer is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The index of the offer to get. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 OfferIndex;
public:
	explicit FEOSEcomCopyOfferByIndexOptions()
		: ApiVersion(EOS_ECOM_COPYOFFERBYINDEX_API_LATEST)
		, OfferIndex(0) {}
};

/**
 * Input parameters for the EOS_Ecom_CopyOfferById Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyOfferByIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose offer is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The id of the offer to get. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogOfferId OfferId;
public:
	explicit FEOSEcomCopyOfferByIdOptions()
		: ApiVersion(EOS_ECOM_COPYOFFERBYID_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_GetOfferItemCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomGetOfferItemCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose offer is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The id of the offer to get. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogOfferId OfferId;
public:
	explicit FEOSEcomGetOfferItemCountOptions()
		: ApiVersion(EOS_ECOM_COPYOFFERBYINDEX_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyOfferById Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyOfferItemByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose item is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The ID of the offer to get the items for. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogOfferId OfferId;
	/** The index of the item to get. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 ItemIndex;
public:
	explicit FEOSEcomCopyOfferItemByIndexOptions()
		: ApiVersion(EOS_ECOM_COPYOFFERITEMBYINDEX_API_LATEST)
		, ItemIndex(0)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyItemById Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyItemByIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose item is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The ID of the item to get. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogItemId ItemId;
public:
	explicit FEOSEcomCopyItemByIdOptions()
		: ApiVersion(EOS_ECOM_COPYITEMBYID_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_GetOfferImageInfoCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomGetOfferImageInfoCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose offer image is being accessed. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The ID of the offer to get the images for. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogOfferId OfferId;
public:
	explicit FEOSEcomGetOfferImageInfoCountOptions()
		: ApiVersion(EOS_ECOM_GETOFFERIMAGEINFOCOUNT_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyOfferImageInfoByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyOfferImageInfoByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose offer image is being copied. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The ID of the offer to get the images for. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogOfferId OfferId;
	/** The index of the image to get. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 ImageInfoIndex;
public:
	explicit FEOSEcomCopyOfferImageInfoByIndexOptions()
		: ApiVersion(EOS_ECOM_COPYOFFERIMAGEINFOBYINDEX_API_LATEST)
		, ImageInfoIndex(0)
		{}
};

/**
 * Input parameters for the EOS_Ecom_GetItemImageInfoCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomGetItemImageInfoCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose item image is being accessed */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The ID of the item to get the images for. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogItemId ItemId;
public:
	explicit FEOSEcomGetItemImageInfoCountOptions()
		: ApiVersion(EOS_ECOM_GETITEMIMAGEINFOCOUNT_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyItemImageInfoByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyItemImageInfoByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose item image is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The ID of the item to get the images for. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogItemId ItemId;
	/** The index of the image to get. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 ImageInfoIndex;
public:
	explicit FEOSEcomCopyItemImageInfoByIndexOptions()
		: ApiVersion(EOS_ECOM_COPYITEMIMAGEINFOBYINDEX_API_LATEST)
		, ImageInfoIndex(0)
		{}
};

/**
 * Input parameters for the EOS_Ecom_GetItemReleaseCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomGetItemReleaseCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose item release is being accessed */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The ID of the item to get the releases for. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogItemId ItemId;
public:
	explicit FEOSEcomGetItemReleaseCountOptions()
		: ApiVersion(EOS_ECOM_GETITEMRELEASECOUNT_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyItemReleaseByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyItemReleaseByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose item release is being copied */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The ID of the item to get the releases for. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEcomCatalogItemId ItemId;
	/** The index of the release to get. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 ReleaseIndex;
public:
	explicit FEOSEcomCopyItemReleaseByIndexOptions()
		: ApiVersion(EOS_ECOM_GETITEMRELEASECOUNT_API_LATEST)
		, ReleaseIndex(0)
		{}
};

/**
 * Input parameters for the EOS_Ecom_GetTransactionCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomGetTransactionCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose transaction count to get */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSEcomGetTransactionCountOptions()
		: ApiVersion(EOS_ECOM_GETTRANSACTIONCOUNT_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyTransactionByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyTransactionByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose transaction to get */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The index of the transaction to get */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 TransactionIndex;
public:
	explicit FEOSEcomCopyTransactionByIndexOptions()
		: ApiVersion(EOS_ECOM_COPYTRANSACTIONBYINDEX_API_LATEST)
		, TransactionIndex(0)
		{}
};

/**
 * Input parameters for the EOS_Ecom_CopyTransactionById Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomCopyTransactionByIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user whose transaction to get */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
	/** The id of the transaction to get */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FString TransactionId;
public:
	explicit FEOSEcomCopyTransactionByIdOptions()
		: ApiVersion(EOS_ECOM_COPYTRANSACTIONBYID_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_Transaction_GetEntitlementsCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomTransactionGetEntitlementsCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Local user for which to retrieve the entitlement count */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		FEOSEpicAccountId LocalUserId;
public:
	explicit FEOSEcomTransactionGetEntitlementsCountOptions()
		: ApiVersion(EOS_ECOM_COPYTRANSACTIONBYID_API_LATEST)
		{}
};

/**
 * Input parameters for the EOS_Ecom_Transaction_CopyEntitlementByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSEcomTransactionCopyEntitlementByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The index of the entitlement to get */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ecom")
		int32 EntitlementIndex;
public:
	explicit FEOSEcomTransactionCopyEntitlementByIndexOptions()
		: ApiVersion(EOS_ECOM_COPYTRANSACTIONBYID_API_LATEST)
		, EntitlementIndex(0)
		{}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEcomQueryOwnershipCallback, const FEOSEcomQueryOwnershipCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEcomQueryOwnershipTokenCallback, const FEOSEcomQueryOwnershipTokenCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEcomQueryEntitlementsCallback, const FEOSEcomQueryEntitlementsCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEcomQueryQueryOffersCallback, const FEOSEcomQueryOffersCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEcomQueryCheckoutCallback, const FEOSEcomCheckoutCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEcomQueryRedeemEntitlementsCallback, const FEOSEcomRedeemEntitlementsCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEcomQueryOwnershipCallbackDelegate, const FEOSEcomQueryOwnershipCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEcomQueryOwnershipTokenCallbackDelegate, const FEOSEcomQueryOwnershipTokenCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEcomQueryEntitlementsCallbackDelegate, const FEOSEcomQueryEntitlementsCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEcomQueryQueryOffersCallbackDelegate, const FEOSEcomQueryOffersCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEcomQueryCheckoutCallbackDelegate, const FEOSEcomCheckoutCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEcomQueryRedeemEntitlementsCallbackDelegate, const FEOSEcomRedeemEntitlementsCallbackInfo&, data);

struct FEcomQueryOwnershipCallback
{
public:
	UCoreEcom* EcomObject;
	FOnEcomQueryOwnershipCallback Callback;
public:
	FEcomQueryOwnershipCallback(UCoreEcom* obj, const FOnEcomQueryOwnershipCallback& callback)
		: EcomObject(obj)
		, Callback(callback) {}
};

struct FEcomQueryOwnershipTokenCallback
{
public:
	UCoreEcom* EcomObject;
	FOnEcomQueryOwnershipTokenCallback Callback;
public:
	FEcomQueryOwnershipTokenCallback(UCoreEcom* obj, const FOnEcomQueryOwnershipTokenCallback& callback)
		: EcomObject(obj)
		, Callback(callback) {}
};

struct FEcomQueryEntitlementsCallback
{
public:
	UCoreEcom* EcomObject;
	FOnEcomQueryEntitlementsCallback Callback;
public:
	FEcomQueryEntitlementsCallback(UCoreEcom* obj, const FOnEcomQueryEntitlementsCallback& callback)
		: EcomObject(obj)
		, Callback(callback) {}
};

struct FEcomQueryOffersCallback
{
public:
	UCoreEcom* EcomObject;
	FOnEcomQueryQueryOffersCallback Callback;
public:
	FEcomQueryOffersCallback(UCoreEcom* obj, const FOnEcomQueryQueryOffersCallback& callback)
		: EcomObject(obj)
		, Callback(callback) {}
};

struct FEcomCheckoutCallback
{
public:
	UCoreEcom* EcomObject;
	FOnEcomQueryCheckoutCallback Callback;
public:
	FEcomCheckoutCallback(UCoreEcom* obj, const FOnEcomQueryCheckoutCallback& callback)
		: EcomObject(obj)
		, Callback(callback) {}
};

struct FEcomRedeemEntitlementsCallback
{
public:
	UCoreEcom* EcomObject;
	FOnEcomQueryRedeemEntitlementsCallback Callback;
public:
	FEcomRedeemEntitlementsCallback(UCoreEcom* obj, const FOnEcomQueryRedeemEntitlementsCallback& callback)
		: EcomObject(obj)
		, Callback(callback) {}
};