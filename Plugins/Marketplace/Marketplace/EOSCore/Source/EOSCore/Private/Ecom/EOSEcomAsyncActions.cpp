/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Ecom/EOSEcomAsyncActions.h"
#include "Ecom/EOSEcom.h"
#include "Core/EOSCorePluginPrivatePCH.h" 
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCoreLogging.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomQueryOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreEcomQueryOwnership* UEOSCoreEcomQueryOwnership::EOSEcomQueryOwnershipAsync(UObject* WorldContextObject, FEOSEcomQueryOwnershipOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreEcomQueryOwnership>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreEcomQueryOwnership::Activate()
{
	Super::Activate();
	UCoreEcom::GetEcom()->EOSEcomQueryOwnership(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomQueryOwnershipToken
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreEcomQueryOwnershipToken* UEOSCoreEcomQueryOwnershipToken::EOSEcomQueryOwnershipTokenAsync(UObject* WorldContextObject, FEOSEcomQueryOwnershipTokenOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreEcomQueryOwnershipToken>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreEcomQueryOwnershipToken::Activate()
{
	Super::Activate();
	UCoreEcom::GetEcom()->EOSEcomQueryOwnershipToken(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomQueryEntitlements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreEcomQueryEntitlements* UEOSCoreEcomQueryEntitlements::EOSEcomQueryEntitlementsAsync(UObject* WorldContextObject, FEOSEcomQueryEntitlementsOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreEcomQueryEntitlements>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreEcomQueryEntitlements::Activate()
{
	Super::Activate();
	UCoreEcom::GetEcom()->EOSEcomQueryEntitlements(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomQueryOffers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreEcomQueryOffers* UEOSCoreEcomQueryOffers::EOSEcomQueryOffersAsync(UObject* WorldContextObject, FEOSEcomQueryOffersOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreEcomQueryOffers>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreEcomQueryOffers::Activate()
{
	Super::Activate();
	UCoreEcom::GetEcom()->EOSEcomQueryOffers(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomCheckout
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreEcomCheckout* UEOSCoreEcomCheckout::EOSEcomCheckoutAsync(UObject* WorldContextObject, FEOSEcomCheckoutOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreEcomCheckout>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreEcomCheckout::Activate()
{
	Super::Activate();
	UCoreEcom::GetEcom()->EOSEcomCheckout(Options, Callback);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreEcomRedeemEntitlements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UEOSCoreEcomRedeemEntitlements* UEOSCoreEcomRedeemEntitlements::EOSEcomRedeemEntitlementsAsync(UObject* WorldContextObject, FEOSEcomRedeemEntitlementsOptions options)
{
	if (FPlatform::IsInitialized())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_AsyncObject = NewObject<UEOSCoreEcomRedeemEntitlements>();
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_AsyncObject->Options = options;

		return m_AsyncObject;
	}
	else
	{
		LogError("Plugin not initialized!");
	}

	return nullptr;
}

void UEOSCoreEcomRedeemEntitlements::Activate()
{
	Super::Activate();
	UCoreEcom::GetEcom()->EOSEcomRedeemEntitlements(Options, Callback);
}