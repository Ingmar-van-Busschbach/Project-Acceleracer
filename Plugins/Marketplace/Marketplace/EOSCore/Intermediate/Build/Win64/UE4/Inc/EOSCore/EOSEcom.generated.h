// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSEcomHTransaction;
struct FEOSEcomTransactionCopyEntitlementByIndexOptions;
struct FEOSEcomEntitlement;
enum class EOSResult : uint8;
struct FEOSEcomTransactionGetEntitlementsCountOptions;
struct FEOSEcomCopyTransactionByIdOptions;
struct FEOSEcomCopyTransactionByIndexOptions;
struct FEOSEcomGetTransactionCountOptions;
struct FEOSEcomCopyItemReleaseByIndexOptions;
struct FEOSEcomCatalogRelease;
struct FEOSEcomGetItemReleaseCountOptions;
struct FEOSEcomCopyItemImageInfoByIndexOptions;
struct FEOSEcomKeyImageInfo;
struct FEOSEcomGetItemImageInfoCountOptions;
struct FEOSEcomCopyOfferImageInfoByIndexOptions;
struct FEOSEcomGetOfferImageInfoCountOptions;
struct FEOSEcomCopyItemByIdOptions;
struct FEOSEcomCatalogItem;
struct FEOSEcomCopyOfferItemByIndexOptions;
struct FEOSEcomGetOfferItemCountOptions;
struct FEOSEcomCopyOfferByIdOptions;
struct FEOSEcomCatalogOffer;
struct FEOSEcomCopyOfferByIndexOptions;
struct FEOSEcomGetOfferCountOptions;
struct FEOSEcomCopyEntitlementByIdOptions;
struct FEOSEcomCopyEntitlementByNameAndIndexOptions;
struct FEOSEcomCopyEntitlementByIndexOptions;
struct FEOSEcomGetEntitlementsByNameCountOptions;
struct FEOSEcomGetEntitlementsCountOptions;
struct FEOSEcomRedeemEntitlementsOptions;
struct FEOSEcomCheckoutOptions;
struct FEOSEcomQueryOffersOptions;
struct FEOSEcomQueryEntitlementsOptions;
struct FEOSEcomQueryOwnershipTokenOptions;
struct FEOSEcomQueryOwnershipOptions;
class UCoreEcom;
#ifdef EOSCORE_EOSEcom_generated_h
#error "EOSEcom.generated.h already included, missing '#pragma once' in EOSEcom.h"
#endif
#define EOSCORE_EOSEcom_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSEcomTransaction_CopyEntitlementByIndex); \
	DECLARE_FUNCTION(execEOSEcomTransaction_GetEntitlementsCount); \
	DECLARE_FUNCTION(execEOSEcomTransaction_GetTransactionId); \
	DECLARE_FUNCTION(execEOSEcomCopyTransactionById); \
	DECLARE_FUNCTION(execEOSEcomCopyTransactionByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetTransactionCount); \
	DECLARE_FUNCTION(execEOSEcomCopyItemReleaseByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetItemReleaseCount); \
	DECLARE_FUNCTION(execEOSEcomCopyItemImageInfoByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetItemImageInfoCount); \
	DECLARE_FUNCTION(execEOSEcomCopyOfferImageInfoByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetOfferImageInfoCount); \
	DECLARE_FUNCTION(execEOSEcomCopyItemById); \
	DECLARE_FUNCTION(execEOSEcomCopyOfferItemByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetOfferItemCount); \
	DECLARE_FUNCTION(execEOSEcomCopyOfferById); \
	DECLARE_FUNCTION(execEOSEcomCopyOfferByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetOfferCount); \
	DECLARE_FUNCTION(execEOSEcomCopyEntitlementById); \
	DECLARE_FUNCTION(execEOSEcomCopyEntitlementByNameAndIndex); \
	DECLARE_FUNCTION(execEOSEcomCopyEntitlementByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetEntitlementsByNameCount); \
	DECLARE_FUNCTION(execEOSEcomGetEntitlementsCount); \
	DECLARE_FUNCTION(execEOSEcomRedeemEntitlements); \
	DECLARE_FUNCTION(execEOSEcomCheckout); \
	DECLARE_FUNCTION(execEOSEcomQueryOffers); \
	DECLARE_FUNCTION(execEOSEcomQueryEntitlements); \
	DECLARE_FUNCTION(execEOSEcomQueryOwnershipToken); \
	DECLARE_FUNCTION(execEOSEcomQueryOwnership); \
	DECLARE_FUNCTION(execGetEcom);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSEcomTransaction_CopyEntitlementByIndex); \
	DECLARE_FUNCTION(execEOSEcomTransaction_GetEntitlementsCount); \
	DECLARE_FUNCTION(execEOSEcomTransaction_GetTransactionId); \
	DECLARE_FUNCTION(execEOSEcomCopyTransactionById); \
	DECLARE_FUNCTION(execEOSEcomCopyTransactionByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetTransactionCount); \
	DECLARE_FUNCTION(execEOSEcomCopyItemReleaseByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetItemReleaseCount); \
	DECLARE_FUNCTION(execEOSEcomCopyItemImageInfoByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetItemImageInfoCount); \
	DECLARE_FUNCTION(execEOSEcomCopyOfferImageInfoByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetOfferImageInfoCount); \
	DECLARE_FUNCTION(execEOSEcomCopyItemById); \
	DECLARE_FUNCTION(execEOSEcomCopyOfferItemByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetOfferItemCount); \
	DECLARE_FUNCTION(execEOSEcomCopyOfferById); \
	DECLARE_FUNCTION(execEOSEcomCopyOfferByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetOfferCount); \
	DECLARE_FUNCTION(execEOSEcomCopyEntitlementById); \
	DECLARE_FUNCTION(execEOSEcomCopyEntitlementByNameAndIndex); \
	DECLARE_FUNCTION(execEOSEcomCopyEntitlementByIndex); \
	DECLARE_FUNCTION(execEOSEcomGetEntitlementsByNameCount); \
	DECLARE_FUNCTION(execEOSEcomGetEntitlementsCount); \
	DECLARE_FUNCTION(execEOSEcomRedeemEntitlements); \
	DECLARE_FUNCTION(execEOSEcomCheckout); \
	DECLARE_FUNCTION(execEOSEcomQueryOffers); \
	DECLARE_FUNCTION(execEOSEcomQueryEntitlements); \
	DECLARE_FUNCTION(execEOSEcomQueryOwnershipToken); \
	DECLARE_FUNCTION(execEOSEcomQueryOwnership); \
	DECLARE_FUNCTION(execGetEcom);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreEcom(); \
	friend struct Z_Construct_UClass_UCoreEcom_Statics; \
public: \
	DECLARE_CLASS(UCoreEcom, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreEcom)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCoreEcom(); \
	friend struct Z_Construct_UClass_UCoreEcom_Statics; \
public: \
	DECLARE_CLASS(UCoreEcom, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreEcom)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreEcom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreEcom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreEcom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreEcom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreEcom(UCoreEcom&&); \
	NO_API UCoreEcom(const UCoreEcom&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreEcom(UCoreEcom&&); \
	NO_API UCoreEcom(const UCoreEcom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreEcom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreEcom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreEcom)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_25_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreEcom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Ecom_EOSEcom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
