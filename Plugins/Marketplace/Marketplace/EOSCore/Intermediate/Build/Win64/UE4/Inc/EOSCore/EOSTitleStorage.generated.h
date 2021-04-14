// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSTitleStorageFileTransferRequestHandle;
enum class EOSResult : uint8;
struct FEOSTitleStorageDeleteCacheOptions;
struct FEOSTitleStorageReadFileOptions;
struct FEOSTitleStorageCopyFileMetadataAtIndexOptions;
struct FEOSTitleStorageFileMetadata;
struct FEOSTitleStorageGetFileMetadataCountOptions;
struct FEOSTitleStorageCopyFileMetadataByFilenameOptions;
struct FEOSTitleStorageQueryFileListOptions;
struct FEOSTitleStorageQueryFileOptions;
class UCoreTitleStorage;
#ifdef EOSCORE_EOSTitleStorage_generated_h
#error "EOSTitleStorage.generated.h already included, missing '#pragma once' in EOSTitleStorage.h"
#endif
#define EOSCORE_EOSTitleStorage_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSTitleStorageFileTransferRequestCancelRequest); \
	DECLARE_FUNCTION(execEOSTitleStorageFileTransferRequestGetFilename); \
	DECLARE_FUNCTION(execEOSTitleStorageFileTransferRequestGetFileRequestState); \
	DECLARE_FUNCTION(execEOSTitleStorageDeleteCache); \
	DECLARE_FUNCTION(execEOSTitleStorageReadFile); \
	DECLARE_FUNCTION(execEOSTitleStorageCopyFileMetadataAtIndex); \
	DECLARE_FUNCTION(execEOSTitleStorageGetFileMetadataCount); \
	DECLARE_FUNCTION(execEOSTitleStorageCopyFileMetadataByFilename); \
	DECLARE_FUNCTION(execEOSTitleStorageQueryFileList); \
	DECLARE_FUNCTION(execEOSTitleStorageQueryFile); \
	DECLARE_FUNCTION(execGetTitleStorage);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSTitleStorageFileTransferRequestCancelRequest); \
	DECLARE_FUNCTION(execEOSTitleStorageFileTransferRequestGetFilename); \
	DECLARE_FUNCTION(execEOSTitleStorageFileTransferRequestGetFileRequestState); \
	DECLARE_FUNCTION(execEOSTitleStorageDeleteCache); \
	DECLARE_FUNCTION(execEOSTitleStorageReadFile); \
	DECLARE_FUNCTION(execEOSTitleStorageCopyFileMetadataAtIndex); \
	DECLARE_FUNCTION(execEOSTitleStorageGetFileMetadataCount); \
	DECLARE_FUNCTION(execEOSTitleStorageCopyFileMetadataByFilename); \
	DECLARE_FUNCTION(execEOSTitleStorageQueryFileList); \
	DECLARE_FUNCTION(execEOSTitleStorageQueryFile); \
	DECLARE_FUNCTION(execGetTitleStorage);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreTitleStorage(); \
	friend struct Z_Construct_UClass_UCoreTitleStorage_Statics; \
public: \
	DECLARE_CLASS(UCoreTitleStorage, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreTitleStorage)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUCoreTitleStorage(); \
	friend struct Z_Construct_UClass_UCoreTitleStorage_Statics; \
public: \
	DECLARE_CLASS(UCoreTitleStorage, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreTitleStorage)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreTitleStorage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreTitleStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreTitleStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreTitleStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreTitleStorage(UCoreTitleStorage&&); \
	NO_API UCoreTitleStorage(const UCoreTitleStorage&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreTitleStorage(UCoreTitleStorage&&); \
	NO_API UCoreTitleStorage(const UCoreTitleStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreTitleStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreTitleStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreTitleStorage)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_42_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreTitleStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_TitleStorage_EOSTitleStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
