// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSHPlayerDataStorageFileTransferRequest;
enum class EOSResult : uint8;
struct FEOSPlayerDataStorageWriteFileOptions;
struct FEOSPlayerDataStorageReadFileOptions;
struct FEOSPlayerDataStorageDeleteFileOptions;
struct FEOSPlayerDataStorageDuplicateFileOptions;
struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions;
struct FEOSPlayerDataStorageFileMetadata;
struct FEOSPlayerDataStorageGetFileMetadataCountOptions;
struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions;
struct FEOSPlayerDataStorageQueryFileListOptions;
struct FEOSPlayerDataStorageQueryFileOptions;
class UCorePlayerDataStorage;
#ifdef EOSCORE_EOSPlayerDataStorage_generated_h
#error "EOSPlayerDataStorage.generated.h already included, missing '#pragma once' in EOSPlayerDataStorage.h"
#endif
#define EOSCORE_EOSPlayerDataStorage_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSPlayerDataStorageFileTransferRequestRelease); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageFileTransferRequestCancelRequest); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageFileTransferRequestGetFilename); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageFileTransferRequestGetFileRequestState); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageWriteFile); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageReadFile); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageDeleteFile); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageDuplicateFile); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageCopyFileMetadataAtIndex); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageGetFileMetadataCount); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageCopyFileMetadataByFilename); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageQueryFileList); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageQueryFile); \
	DECLARE_FUNCTION(execGetPlayerDataStorage);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSPlayerDataStorageFileTransferRequestRelease); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageFileTransferRequestCancelRequest); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageFileTransferRequestGetFilename); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageFileTransferRequestGetFileRequestState); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageWriteFile); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageReadFile); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageDeleteFile); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageDuplicateFile); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageCopyFileMetadataAtIndex); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageGetFileMetadataCount); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageCopyFileMetadataByFilename); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageQueryFileList); \
	DECLARE_FUNCTION(execEOSPlayerDataStorageQueryFile); \
	DECLARE_FUNCTION(execGetPlayerDataStorage);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorePlayerDataStorage(); \
	friend struct Z_Construct_UClass_UCorePlayerDataStorage_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerDataStorage, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerDataStorage)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCorePlayerDataStorage(); \
	friend struct Z_Construct_UClass_UCorePlayerDataStorage_Statics; \
public: \
	DECLARE_CLASS(UCorePlayerDataStorage, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCorePlayerDataStorage)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCorePlayerDataStorage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePlayerDataStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerDataStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerDataStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerDataStorage(UCorePlayerDataStorage&&); \
	NO_API UCorePlayerDataStorage(const UCorePlayerDataStorage&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorePlayerDataStorage(UCorePlayerDataStorage&&); \
	NO_API UCorePlayerDataStorage(const UCorePlayerDataStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePlayerDataStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePlayerDataStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCorePlayerDataStorage)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_19_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCorePlayerDataStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_PlayerDataStorage_EOSPlayerDataStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
