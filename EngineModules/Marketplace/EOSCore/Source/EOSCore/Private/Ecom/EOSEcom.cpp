/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Ecom/EOSEcom.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreEcom* UCoreEcom::EcomObject = nullptr;

UCoreEcom::UCoreEcom()
{
	EcomObject = this;
}

void UCoreEcom::EOSEcomQueryOwnership(FEOSEcomQueryOwnershipOptions options, const FOnEcomQueryOwnershipCallback& callback)
{
	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_QueryOwnershipOptions m_Options = { options.ApiVersion, options.LocalUserId, new EOS_Ecom_CatalogItemId[static_cast<uint32_t>(options.CatalogItemIds.Num())], static_cast<uint32_t>(options.CatalogItemIds.Num()), TCHAR_TO_UTF8(*options.CatalogNamespace) };

		for (int32 i = 0; i < options.CatalogItemIds.Num(); i++)
		{
			m_Options.CatalogItemIds[i] = options.CatalogItemIds[i];
		}

		FEcomQueryOwnershipCallback* m_Data = new FEcomQueryOwnershipCallback({ this, callback });
		EOS_Ecom_QueryOwnership(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnQueryOwnershipCallback);

		delete[] m_Options.CatalogItemIds;
	}
}

void UCoreEcom::EOSEcomQueryOwnershipToken(FEOSEcomQueryOwnershipTokenOptions options, const FOnEcomQueryOwnershipTokenCallback& callback)
{
	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_QueryOwnershipTokenOptions m_Options = { options.ApiVersion, options.LocalUserId, new EOS_Ecom_CatalogItemId[static_cast<uint32_t>(options.CatalogItemIds.Num())], static_cast<uint32_t>(static_cast<uint32_t>(options.CatalogItemIds.Num())), TCHAR_TO_UTF8(*options.CatalogNamespace) };

		for (int32 i = 0; i < options.CatalogItemIds.Num(); i++)
		{
			m_Options.CatalogItemIds[i] = options.CatalogItemIds[i];
		}

		FEcomQueryOwnershipTokenCallback* m_Data = new FEcomQueryOwnershipTokenCallback({ this, callback });
		EOS_Ecom_QueryOwnershipToken(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnQueryOwnershipTokenCallback);

		delete[] m_Options.CatalogItemIds;
	}
}

void UCoreEcom::EOSEcomQueryEntitlements(FEOSEcomQueryEntitlementsOptions options, const FOnEcomQueryEntitlementsCallback& callback)
{
	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_QueryEntitlementsOptions m_Options = { options.ApiVersion, options.LocalUserId, new EOS_Ecom_EntitlementName[options.EntitlementNames.Num()], static_cast<uint32_t>(options.EntitlementNames.Num()), options.bIncludeRedeemed };

		for (int32 i = 0; i < options.EntitlementNames.Num(); i++)
		{
			m_Options.EntitlementNames[i] = options.EntitlementNames[i];
		}

		FEcomQueryEntitlementsCallback* m_Data = new FEcomQueryEntitlementsCallback({ this, callback });
		EOS_Ecom_QueryEntitlements(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnQueryEntitlementsCallback);

		delete[] m_Options.EntitlementNames;
	}
}

void UCoreEcom::EOSEcomQueryOffers(FEOSEcomQueryOffersOptions options, const FOnEcomQueryQueryOffersCallback& callback)
{
	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_QueryOffersOptions m_Options = { options.ApiVersion, options.LocalUserId, TCHAR_TO_UTF8(*options.OverrideCatalogNamespace) };
		FEcomQueryOffersCallback* m_Data = new FEcomQueryOffersCallback({ this, callback });
		EOS_Ecom_QueryOffers(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnQueryOffersCallback);
	}
}

void UCoreEcom::EOSEcomCheckout(FEOSEcomCheckoutOptions options, const FOnEcomQueryCheckoutCallback& callback)
{
	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CheckoutOptions m_Options = { options.ApiVersion, options.LocalUserId, TCHAR_TO_UTF8(*options.OverrideCatalogNamespace), static_cast<uint32_t>(options.Entries.Num()) };
		EOS_Ecom_CheckoutEntry* m_Entries = new EOS_Ecom_CheckoutEntry[options.Entries.Num()];

		for (int32 i = 0; i < options.Entries.Num(); i++)
		{
			m_Entries[i].ApiVersion = options.Entries[i].ApiVersion;
			m_Entries[i].OfferId = options.Entries[i].OfferId;
		}

		m_Options.Entries = m_Entries;

		FEcomCheckoutCallback* m_Data = new FEcomCheckoutCallback({ this, callback });
		EOS_Ecom_Checkout(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnCheckoutCallback);

		delete[] m_Entries;
	}
}

void UCoreEcom::EOSEcomRedeemEntitlements(FEOSEcomRedeemEntitlementsOptions options, const FOnEcomQueryRedeemEntitlementsCallback& callback)
{
	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_RedeemEntitlementsOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<uint32_t>(options.EntitlementIds.Num()) };
		m_Options.EntitlementIds = new EOS_Ecom_EntitlementId[options.EntitlementIds.Num()];

		for (int32 i = 0; i < options.EntitlementIds.Num(); i++)
		{
			m_Options.EntitlementIds[i] = options.EntitlementIds[i];
		}

		FEcomRedeemEntitlementsCallback* m_Data = new FEcomRedeemEntitlementsCallback({ this, callback });
		EOS_Ecom_RedeemEntitlements(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnRedeemEntitlementsCallback);

		delete[] m_Options.EntitlementIds;
	}
}

int32 UCoreEcom::EOSEcomGetEntitlementsCount(FEOSEcomGetEntitlementsCountOptions options)
{
	int32 m_Result = 0;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_GetEntitlementsCountOptions m_Options = { options.ApiVersion, options.LocalUserId };

		m_Result = EOS_Ecom_GetEntitlementsCount(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

int32 UCoreEcom::EOSEcomGetEntitlementsByNameCount(FEOSEcomGetEntitlementsByNameCountOptions options)
{
	int32 m_Result = 0;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_GetEntitlementsByNameCountOptions m_Options = { options.ApiVersion, options.LocalUserId, options.EntitlementName };

		m_Result = EOS_Ecom_GetEntitlementsByNameCount(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyEntitlementByIndex(FEOSEcomCopyEntitlementByIndexOptions options, FEOSEcomEntitlement& outEntitlement)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyEntitlementByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<uint32_t>(options.EntitlementIndex) };
		EOS_Ecom_Entitlement* m_Entitlement = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyEntitlementByIndex(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Entitlement));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			outEntitlement = *m_Entitlement;
			EOS_Ecom_Entitlement_Release(m_Entitlement);
		}
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyEntitlementByNameAndIndex(FEOSEcomCopyEntitlementByNameAndIndexOptions options, FEOSEcomEntitlement& outEntitlement)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyEntitlementByNameAndIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, options.EntitlementName, static_cast<uint32_t>(options.Index) };
		EOS_Ecom_Entitlement* m_Entitlement = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyEntitlementByNameAndIndex(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Entitlement));

		if (m_Result == EOSResult::EOS_Success)
		{
			outEntitlement = *m_Entitlement;
			EOS_Ecom_Entitlement_Release(m_Entitlement);
		}
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyEntitlementById(FEOSEcomCopyEntitlementByIdOptions options, FEOSEcomEntitlement& outEntitlement)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyEntitlementByIdOptions m_Options = { options.ApiVersion, options.LocalUserId, options.EntitlementId };
		EOS_Ecom_Entitlement* m_Entitlement = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyEntitlementById(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Entitlement));

		if (m_Result == EOSResult::EOS_Success)
		{
			outEntitlement = *m_Entitlement;
			EOS_Ecom_Entitlement_Release(m_Entitlement);
		}
	}

	return m_Result;
}

int32 UCoreEcom::EOSEcomGetOfferCount(FEOSEcomGetOfferCountOptions options)
{
	int32 m_Result = 0;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_GetOfferCountOptions m_Options = { options.ApiVersion, options.LocalUserId };

		m_Result = EOS_Ecom_GetOfferCount(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyOfferByIndex(FEOSEcomCopyOfferByIndexOptions options, FEOSEcomCatalogOffer& outOffer)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyOfferByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<uint32_t>(options.OfferIndex) };
		EOS_Ecom_CatalogOffer* m_Offer = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyOfferByIndex(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Offer));

		if (m_Result == EOSResult::EOS_Success)
		{
			outOffer = *m_Offer;
			EOS_Ecom_CatalogOffer_Release(m_Offer);
		}
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyOfferById(FEOSEcomCopyOfferByIdOptions options, FEOSEcomCatalogOffer& outOffer)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyOfferByIdOptions m_Options = { options.ApiVersion, options.LocalUserId, options.OfferId };
		EOS_Ecom_CatalogOffer* m_Offer = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyOfferById(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Offer));

		if (m_Result == EOSResult::EOS_Success)
		{
			outOffer = *m_Offer;
			EOS_Ecom_CatalogOffer_Release(m_Offer);
		}
	}

	return m_Result;
}

int32 UCoreEcom::EOSEcomGetOfferItemCount(FEOSEcomGetOfferItemCountOptions options)
{
	int32 m_Result = 0;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_GetOfferItemCountOptions m_Options = { options.ApiVersion, options.LocalUserId, options.OfferId };

		m_Result = EOS_Ecom_GetOfferItemCount(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyOfferItemByIndex(FEOSEcomCopyOfferItemByIndexOptions options, FEOSEcomCatalogItem& outItem)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyOfferItemByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, options.OfferId, static_cast<uint32_t>(options.ItemIndex) };
		EOS_Ecom_CatalogItem* m_Item = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyOfferItemByIndex(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Item));

		if (m_Result == EOSResult::EOS_Success)
		{
			outItem = *m_Item;
			EOS_Ecom_CatalogItem_Release(m_Item);
		}
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyItemById(FEOSEcomCopyItemByIdOptions options, FEOSEcomCatalogItem& outItem)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyItemByIdOptions m_Options = { options.ApiVersion, options.LocalUserId, options.ItemId };
		EOS_Ecom_CatalogItem* m_Item = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyItemById(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Item));

		if (m_Result == EOSResult::EOS_Success)
		{
			outItem = *m_Item;
			EOS_Ecom_CatalogItem_Release(m_Item);
		}
	}

	return m_Result;
}

int32 UCoreEcom::EOSEcomGetOfferImageInfoCount(FEOSEcomGetOfferImageInfoCountOptions options)
{
	int32 m_Result = 0;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_GetOfferImageInfoCountOptions m_Options = { options.ApiVersion, options.LocalUserId, options.OfferId };

		m_Result = EOS_Ecom_GetOfferImageInfoCount(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyOfferImageInfoByIndex(FEOSEcomCopyOfferImageInfoByIndexOptions options, FEOSEcomKeyImageInfo& outImageInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyOfferImageInfoByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, options.OfferId, static_cast<uint32_t>(options.ImageInfoIndex) };
		EOS_Ecom_KeyImageInfo* m_ImageInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyOfferImageInfoByIndex(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_ImageInfo));

		if (m_Result == EOSResult::EOS_Success)
		{
			outImageInfo = *m_ImageInfo;
			EOS_Ecom_KeyImageInfo_Release(m_ImageInfo);
		}
	}

	return m_Result;
}

int32 UCoreEcom::EOSEcomGetItemImageInfoCount(FEOSEcomGetItemImageInfoCountOptions options)
{
	int32 m_Result = 0;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_GetItemImageInfoCountOptions m_Options = { options.ApiVersion, options.LocalUserId, options.ItemId };

		m_Result = EOS_Ecom_GetItemImageInfoCount(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyItemImageInfoByIndex(FEOSEcomCopyItemImageInfoByIndexOptions options, FEOSEcomKeyImageInfo& outImageInfo)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyItemImageInfoByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, options.ItemId, static_cast<uint32_t>(options.ImageInfoIndex)};
		EOS_Ecom_KeyImageInfo* m_ImageInfo = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyItemImageInfoByIndex(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_ImageInfo));

		if (m_Result == EOSResult::EOS_Success)
		{
			outImageInfo = *m_ImageInfo;
			EOS_Ecom_KeyImageInfo_Release(m_ImageInfo);
		}
	}

	return m_Result;
}

int32 UCoreEcom::EOSEcomGetItemReleaseCount(FEOSEcomGetItemReleaseCountOptions options)
{
	int32 m_Result = 0;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_GetItemReleaseCountOptions m_Options = { options.ApiVersion, options.LocalUserId, options.ItemId };

		m_Result = EOS_Ecom_GetItemReleaseCount(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyItemReleaseByIndex(FEOSEcomCopyItemReleaseByIndexOptions options, FEOSEcomCatalogRelease& outRelease)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyItemReleaseByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, options.ItemId, static_cast<uint32_t>(options.ReleaseIndex) };
		EOS_Ecom_CatalogRelease* m_Release = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyItemReleaseByIndex(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Release));

		if (m_Result == EOSResult::EOS_Success)
		{
			outRelease = *m_Release;
			EOS_Ecom_CatalogRelease_Release(m_Release);
		}
	}

	return m_Result;
}

int32 UCoreEcom::EOSEcomGetTransactionCount(FEOSEcomGetTransactionCountOptions options)
{
	int32 m_Result = 0;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_GetTransactionCountOptions m_Options = { options.ApiVersion, options.LocalUserId };
		
		m_Result = EOS_Ecom_GetTransactionCount(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyTransactionByIndex(FEOSEcomCopyTransactionByIndexOptions options, FEOSEcomHTransaction& outTransaction)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyTransactionByIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<uint32_t>(options.TransactionIndex) };
		EOS_Ecom_HTransaction m_Transaction;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyTransactionByIndex(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Transaction));

		if (m_Result == EOSResult::EOS_Success)
		{
			outTransaction = m_Transaction;
			EOS_Ecom_Transaction_Release(m_Transaction);
		}
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomCopyTransactionById(FEOSEcomCopyTransactionByIdOptions options, FEOSEcomHTransaction& outTransaction)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_CopyTransactionByIdOptions m_Options = { options.ApiVersion, options.LocalUserId, TCHAR_TO_UTF8(*options.TransactionId) };
		EOS_Ecom_HTransaction m_Transaction;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_CopyTransactionById(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Transaction));

		if (m_Result == EOSResult::EOS_Success)
		{
			outTransaction = m_Transaction;
			EOS_Ecom_Transaction_Release(m_Transaction);
		}
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomTransaction_GetTransactionId(const FEOSEcomHTransaction& handle, FString& transactionId)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		char m_Buffer[4096];
		int32_t m_Length = 0;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_Transaction_GetTransactionId(handle, m_Buffer, &m_Length));

		if (m_Result == EOSResult::EOS_Success)
		{
			transactionId = m_Buffer;
		}
	}

	return m_Result;
}

int32 UCoreEcom::EOSEcomTransaction_GetEntitlementsCount(const FEOSEcomHTransaction& handle, FEOSEcomTransactionGetEntitlementsCountOptions options)
{
	int32 m_Result = 0;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_GetEntitlementsCountOptions m_Options = { options.ApiVersion, options.LocalUserId };

		m_Result = EOS_Ecom_GetEntitlementsCount(EOS_Platform_GetEcomInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreEcom::EOSEcomTransaction_CopyEntitlementByIndex(const FEOSEcomHTransaction& handle, FEOSEcomTransactionCopyEntitlementByIndexOptions options, FEOSEcomEntitlement& outEntitlement)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_Ecom_Transaction_CopyEntitlementByIndexOptions m_Options = { options.ApiVersion, static_cast<uint32_t>(options.EntitlementIndex) };
		EOS_Ecom_Entitlement* m_Entitlement = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Ecom_Transaction_CopyEntitlementByIndex(handle, &m_Options, &m_Entitlement));

		if (m_Result == EOSResult::EOS_Success)
		{
			outEntitlement = *m_Entitlement;
			EOS_Ecom_Entitlement_Release(m_Entitlement);
		}
	}

	return m_Result;
}


void UCoreEcom::Internal_OnQueryOwnershipCallback(const EOS_Ecom_QueryOwnershipCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FEcomQueryOwnershipCallback* m_Data = static_cast<FEcomQueryOwnershipCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreEcom* m_Ecom = m_Data->EcomObject;
		check(m_Ecom);

		if (m_Ecom)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Ecom->OnEcomQueryOwnershipCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCoreEcom::Internal_OnQueryOwnershipTokenCallback(const EOS_Ecom_QueryOwnershipTokenCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FEcomQueryOwnershipTokenCallback* m_Data = static_cast<FEcomQueryOwnershipTokenCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreEcom* m_Ecom = m_Data->EcomObject;
		check(m_Ecom);

		if (m_Ecom)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Ecom->OnEcomQueryOwnershipTokenCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreEcom::Internal_OnQueryEntitlementsCallback(const EOS_Ecom_QueryEntitlementsCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FEcomQueryEntitlementsCallback* m_Data = static_cast<FEcomQueryEntitlementsCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreEcom* m_Ecom = m_Data->EcomObject;
		check(m_Ecom);

		if (m_Ecom)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Ecom->OnEcomQueryEntitlementsCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreEcom::Internal_OnQueryOffersCallback(const EOS_Ecom_QueryOffersCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FEcomQueryOffersCallback* m_Data = static_cast<FEcomQueryOffersCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreEcom* m_Ecom = m_Data->EcomObject;
		check(m_Ecom);

		if (m_Ecom)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Ecom->OnEcomQueryQueryOffersCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreEcom::Internal_OnCheckoutCallback(const EOS_Ecom_CheckoutCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FEcomCheckoutCallback* m_Data = static_cast<FEcomCheckoutCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreEcom* m_Ecom = m_Data->EcomObject;
		check(m_Ecom);

		if (m_Ecom)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Ecom->OnEcomQueryCheckoutCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCoreEcom::Internal_OnRedeemEntitlementsCallback(const EOS_Ecom_RedeemEntitlementsCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FEcomRedeemEntitlementsCallback* m_Data = static_cast<FEcomRedeemEntitlementsCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCoreEcom* m_Ecom = m_Data->EcomObject;
		check(m_Ecom);

		if (m_Ecom)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_Ecom->OnEcomQueryRedeemEntitlementsCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}
