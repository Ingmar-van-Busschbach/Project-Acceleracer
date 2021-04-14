// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/PlayerDataStorage/EOSPlayerDataStorage.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPlayerDataStorage() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCorePlayerDataStorage_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCorePlayerDataStorage();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageFileMetadata();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDeleteFileCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageDeleteFileOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDuplicateFileCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageDuplicateFileOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSHPlayerDataStorageFileTransferRequest();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageGetFileMetadataCountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryFileCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryFileListCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileListOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnReadFileCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageReadFileOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnWriteFileCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageWriteFileOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnWriteFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnReadFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnFileTransferProgressCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDeleteFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDuplicateFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryFileListCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryFileCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageFileTransferRequestRelease)
	{
		P_GET_STRUCT_REF(FEOSHPlayerDataStorageFileTransferRequest,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestRelease(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageFileTransferRequestCancelRequest)
	{
		P_GET_STRUCT_REF(FEOSHPlayerDataStorageFileTransferRequest,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestCancelRequest(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageFileTransferRequestGetFilename)
	{
		P_GET_STRUCT_REF(FEOSHPlayerDataStorageFileTransferRequest,Z_Param_Out_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_filenameStringBufferSizeBytes);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outStringBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestGetFilename(Z_Param_Out_handle,Z_Param_filenameStringBufferSizeBytes,Z_Param_Out_outStringBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageFileTransferRequestGetFileRequestState)
	{
		P_GET_STRUCT_REF(FEOSHPlayerDataStorageFileTransferRequest,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestGetFileRequestState(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageWriteFile)
	{
		P_GET_STRUCT(FEOSPlayerDataStorageWriteFileOptions,Z_Param_writeOptions);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSPlayerDataStorageWriteFile(Z_Param_writeOptions,FOnWriteFileCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageReadFile)
	{
		P_GET_STRUCT(FEOSPlayerDataStorageReadFileOptions,Z_Param_readOptions);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSPlayerDataStorageReadFile(Z_Param_readOptions,FOnReadFileCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageDeleteFile)
	{
		P_GET_STRUCT(FEOSPlayerDataStorageDeleteFileOptions,Z_Param_deleteOptions);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSPlayerDataStorageDeleteFile(Z_Param_deleteOptions,FOnDeleteFileCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageDuplicateFile)
	{
		P_GET_STRUCT(FEOSPlayerDataStorageDuplicateFileOptions,Z_Param_duplicateOptions);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSPlayerDataStorageDuplicateFile(Z_Param_duplicateOptions,FOnDuplicateFileCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageCopyFileMetadataAtIndex)
	{
		P_GET_STRUCT(FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions,Z_Param_copyFileMetadataOptions);
		P_GET_STRUCT_REF(FEOSPlayerDataStorageFileMetadata,Z_Param_Out_outMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePlayerDataStorage::EOSPlayerDataStorageCopyFileMetadataAtIndex(Z_Param_copyFileMetadataOptions,Z_Param_Out_outMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageGetFileMetadataCount)
	{
		P_GET_STRUCT(FEOSPlayerDataStorageGetFileMetadataCountOptions,Z_Param_getFileMetadataCountOptions);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outFileMetadataCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePlayerDataStorage::EOSPlayerDataStorageGetFileMetadataCount(Z_Param_getFileMetadataCountOptions,Z_Param_Out_outFileMetadataCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageCopyFileMetadataByFilename)
	{
		P_GET_STRUCT(FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions,Z_Param_copyFileMetadataOptions);
		P_GET_STRUCT_REF(FEOSPlayerDataStorageFileMetadata,Z_Param_Out_outMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCorePlayerDataStorage::EOSPlayerDataStorageCopyFileMetadataByFilename(Z_Param_copyFileMetadataOptions,Z_Param_Out_outMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageQueryFileList)
	{
		P_GET_STRUCT(FEOSPlayerDataStorageQueryFileListOptions,Z_Param_queryFileListOptions);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSPlayerDataStorageQueryFileList(Z_Param_queryFileListOptions,FOnQueryFileListCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execEOSPlayerDataStorageQueryFile)
	{
		P_GET_STRUCT(FEOSPlayerDataStorageQueryFileOptions,Z_Param_queryFileOptions);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSPlayerDataStorageQueryFile(Z_Param_queryFileOptions,FOnQueryFileCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerDataStorage::execGetPlayerDataStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCorePlayerDataStorage**)Z_Param__Result=UCorePlayerDataStorage::GetPlayerDataStorage();
		P_NATIVE_END;
	}
	void UCorePlayerDataStorage::StaticRegisterNativesUCorePlayerDataStorage()
	{
		UClass* Class = UCorePlayerDataStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPlayerDataStorageCopyFileMetadataAtIndex", &UCorePlayerDataStorage::execEOSPlayerDataStorageCopyFileMetadataAtIndex },
			{ "EOSPlayerDataStorageCopyFileMetadataByFilename", &UCorePlayerDataStorage::execEOSPlayerDataStorageCopyFileMetadataByFilename },
			{ "EOSPlayerDataStorageDeleteFile", &UCorePlayerDataStorage::execEOSPlayerDataStorageDeleteFile },
			{ "EOSPlayerDataStorageDuplicateFile", &UCorePlayerDataStorage::execEOSPlayerDataStorageDuplicateFile },
			{ "EOSPlayerDataStorageFileTransferRequestCancelRequest", &UCorePlayerDataStorage::execEOSPlayerDataStorageFileTransferRequestCancelRequest },
			{ "EOSPlayerDataStorageFileTransferRequestGetFilename", &UCorePlayerDataStorage::execEOSPlayerDataStorageFileTransferRequestGetFilename },
			{ "EOSPlayerDataStorageFileTransferRequestGetFileRequestState", &UCorePlayerDataStorage::execEOSPlayerDataStorageFileTransferRequestGetFileRequestState },
			{ "EOSPlayerDataStorageFileTransferRequestRelease", &UCorePlayerDataStorage::execEOSPlayerDataStorageFileTransferRequestRelease },
			{ "EOSPlayerDataStorageGetFileMetadataCount", &UCorePlayerDataStorage::execEOSPlayerDataStorageGetFileMetadataCount },
			{ "EOSPlayerDataStorageQueryFile", &UCorePlayerDataStorage::execEOSPlayerDataStorageQueryFile },
			{ "EOSPlayerDataStorageQueryFileList", &UCorePlayerDataStorage::execEOSPlayerDataStorageQueryFileList },
			{ "EOSPlayerDataStorageReadFile", &UCorePlayerDataStorage::execEOSPlayerDataStorageReadFile },
			{ "EOSPlayerDataStorageWriteFile", &UCorePlayerDataStorage::execEOSPlayerDataStorageWriteFile },
			{ "GetPlayerDataStorage", &UCorePlayerDataStorage::execGetPlayerDataStorage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataAtIndex_Parms
		{
			FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions copyFileMetadataOptions;
			FEOSPlayerDataStorageFileMetadata outMetadata;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outMetadata;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_copyFileMetadataOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataAtIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::NewProp_outMetadata = { "outMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataAtIndex_Parms, outMetadata), Z_Construct_UScriptStruct_FEOSPlayerDataStorageFileMetadata, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::NewProp_copyFileMetadataOptions = { "copyFileMetadataOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataAtIndex_Parms, copyFileMetadataOptions), Z_Construct_UScriptStruct_FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::NewProp_outMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::NewProp_copyFileMetadataOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Get the cached copy of a file's metadata by index. The metadata will be for the last retrieved or successfully saved version, and will not include any local changes that have not been\n     * committed by calling SaveFile. The returned pointer must be released by the user when no longer needed.\n     *\n     * @param CopyFileMetadataOptions Object containing properties related to which user is requesting metadata, and at what index\n     * @param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOS_PlayerDataStorage_FileMetadata_Release.\n     * @return EOSResult::EOS_Success if the requested metadata is currently cached, otherwise an error result explaining what went wrong\n     *\n     * @see EOS_PlayerDataStorage_GetFileMetadataCount\n     * @see EOS_PlayerDataStorage_FileMetadata_Release\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Get the cached copy of a file's metadata by index. The metadata will be for the last retrieved or successfully saved version, and will not include any local changes that have not been\ncommitted by calling SaveFile. The returned pointer must be released by the user when no longer needed.\n\n@param CopyFileMetadataOptions Object containing properties related to which user is requesting metadata, and at what index\n@param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOS_PlayerDataStorage_FileMetadata_Release.\n@return EOSResult::EOS_Success if the requested metadata is currently cached, otherwise an error result explaining what went wrong\n\n@see EOS_PlayerDataStorage_GetFileMetadataCount\n@see EOS_PlayerDataStorage_FileMetadata_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageCopyFileMetadataAtIndex", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataAtIndex_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataByFilename_Parms
		{
			FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions copyFileMetadataOptions;
			FEOSPlayerDataStorageFileMetadata outMetadata;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outMetadata;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_copyFileMetadataOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataByFilename_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::NewProp_outMetadata = { "outMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataByFilename_Parms, outMetadata), Z_Construct_UScriptStruct_FEOSPlayerDataStorageFileMetadata, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::NewProp_copyFileMetadataOptions = { "copyFileMetadataOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataByFilename_Parms, copyFileMetadataOptions), Z_Construct_UScriptStruct_FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::NewProp_outMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::NewProp_copyFileMetadataOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Create the cached copy of a file's metadata by filename. The metadata will be for the last retrieved or successfully saved version, and will not include any changes that have not\n     * completed writing. The returned pointer must be released by the user when no longer needed.\n     *\n     * @param CopyFileMetadataOptions Object containing properties related to which user is requesting metadata, and for which filename\n     * @param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOS_PlayerDataStorage_FileMetadata_Release.\n     * @return EOSResult::EOS_Success if the metadata is currently cached, otherwise an error result explaining what went wrong\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Create the cached copy of a file's metadata by filename. The metadata will be for the last retrieved or successfully saved version, and will not include any changes that have not\ncompleted writing. The returned pointer must be released by the user when no longer needed.\n\n@param CopyFileMetadataOptions Object containing properties related to which user is requesting metadata, and for which filename\n@param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOS_PlayerDataStorage_FileMetadata_Release.\n@return EOSResult::EOS_Success if the metadata is currently cached, otherwise an error result explaining what went wrong" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageCopyFileMetadataByFilename", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageCopyFileMetadataByFilename_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageDeleteFile_Parms
		{
			FEOSPlayerDataStorageDeleteFileOptions deleteOptions;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_deleteOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageDeleteFile_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnDeleteFileCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::NewProp_deleteOptions = { "deleteOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageDeleteFile_Parms, deleteOptions), Z_Construct_UScriptStruct_FEOSPlayerDataStorageDeleteFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::NewProp_deleteOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Deletes an existing file in the cloud. If successful, the file's data will be removed from our local cache.\n     *\n     * @param DelteOptions Object containing properties related to which user is deleting the file, and what file name is\n     * @param callback This function is called when the delete operation completes\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Deletes an existing file in the cloud. If successful, the file's data will be removed from our local cache.\n\n@param DelteOptions Object containing properties related to which user is deleting the file, and what file name is\n@param callback This function is called when the delete operation completes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageDeleteFile", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageDeleteFile_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageDuplicateFile_Parms
		{
			FEOSPlayerDataStorageDuplicateFileOptions duplicateOptions;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_duplicateOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageDuplicateFile_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnDuplicateFileCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::NewProp_duplicateOptions = { "duplicateOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageDuplicateFile_Parms, duplicateOptions), Z_Construct_UScriptStruct_FEOSPlayerDataStorageDuplicateFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::NewProp_duplicateOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Copies the data of an existing file to a new filename. This action happens entirely on the server and will not upload the contents of the source destination file from the host. This\n     * function paired with a subsequent EOS_PlayerDataStorage_DeleteFile can be used to rename a file. If successful, the destination file's metadata will be updated in our local cache.\n     *\n     * @param DuplicateOptions Object containing properties related to which user is duplicating the file, and what the source and destination file names are\n     * @param callback This function is called when the duplicate operation completes\n     *\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Copies the data of an existing file to a new filename. This action happens entirely on the server and will not upload the contents of the source destination file from the host. This\nfunction paired with a subsequent EOS_PlayerDataStorage_DeleteFile can be used to rename a file. If successful, the destination file's metadata will be updated in our local cache.\n\n@param DuplicateOptions Object containing properties related to which user is duplicating the file, and what the source and destination file names are\n@param callback This function is called when the duplicate operation completes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageDuplicateFile", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageDuplicateFile_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestCancelRequest_Parms
		{
			FEOSHPlayerDataStorageFileTransferRequest handle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestCancelRequest_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestCancelRequest_Parms, handle), Z_Construct_UScriptStruct_FEOSHPlayerDataStorageFileTransferRequest, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Attempt to cancel this file request in progress. This is a best-effort command and is not guaranteed to be successful if the request has completed before this function is called.\n     *\n     * @return EOS_Success if successful, or EOS_NoChange if request is not cancelable or is already canceled\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Attempt to cancel this file request in progress. This is a best-effort command and is not guaranteed to be successful if the request has completed before this function is called.\n\n@return EOS_Success if successful, or EOS_NoChange if request is not cancelable or is already canceled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageFileTransferRequestCancelRequest", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestCancelRequest_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFilename_Parms
		{
			FEOSHPlayerDataStorageFileTransferRequest handle;
			int32 filenameStringBufferSizeBytes;
			FString outStringBuffer;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outStringBuffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_filenameStringBufferSizeBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFilename_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_outStringBuffer = { "outStringBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFilename_Parms, outStringBuffer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_filenameStringBufferSizeBytes = { "filenameStringBufferSizeBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFilename_Parms, filenameStringBufferSizeBytes), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFilename_Parms, handle), Z_Construct_UScriptStruct_FEOSHPlayerDataStorageFileTransferRequest, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_outStringBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_filenameStringBufferSizeBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Get the file name of the file this request is for. OutStringLength will always be set to the string length of the file name if it is not NULL.\n     *\n     * @param FilenameStringBufferSizeBytes The maximum number of bytes that can be written to OutStringBuffer\n     * @param OutStringBuffer The buffer to write the NULL-terminated utf8 file name into, if successful\n     * @return EOS_Success if the file name was successfully written to OutFilenameBuffer, a failure result otherwise\n     *\n     * @see EOS_PLAYERDATASTORAGE_FILENAME_MAX_LENGTH_BYTES\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Get the file name of the file this request is for. OutStringLength will always be set to the string length of the file name if it is not NULL.\n\n@param FilenameStringBufferSizeBytes The maximum number of bytes that can be written to OutStringBuffer\n@param OutStringBuffer The buffer to write the NULL-terminated utf8 file name into, if successful\n@return EOS_Success if the file name was successfully written to OutFilenameBuffer, a failure result otherwise\n\n@see EOS_PLAYERDATASTORAGE_FILENAME_MAX_LENGTH_BYTES" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageFileTransferRequestGetFilename", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFilename_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFileRequestState_Parms
		{
			FEOSHPlayerDataStorageFileTransferRequest handle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFileRequestState_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFileRequestState_Parms, handle), Z_Construct_UScriptStruct_FEOSHPlayerDataStorageFileTransferRequest, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n      * Get the current state of a file request.\n      *\n      * @return EOS_Success if complete and successful, EOS_PlayerDataStorage_RequestInProgress if the request is still in progress, or another state for failure.\n      */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Get the current state of a file request.\n\n@return EOS_Success if complete and successful, EOS_PlayerDataStorage_RequestInProgress if the request is still in progress, or another state for failure." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageFileTransferRequestGetFileRequestState", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestGetFileRequestState_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestRelease_Parms
		{
			FEOSHPlayerDataStorageFileTransferRequest handle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::NewProp_handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestRelease_Parms, handle), Z_Construct_UScriptStruct_FEOSHPlayerDataStorageFileTransferRequest, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::NewProp_handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::NewProp_handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n    * Free the memory used by a cloud-storage file request handle. This will not cancel a request in progress.\n    */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Free the memory used by a cloud-storage file request handle. This will not cancel a request in progress." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageFileTransferRequestRelease", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageFileTransferRequestRelease_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageGetFileMetadataCount_Parms
		{
			FEOSPlayerDataStorageGetFileMetadataCountOptions getFileMetadataCountOptions;
			int32 outFileMetadataCount;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outFileMetadataCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_getFileMetadataCountOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageGetFileMetadataCount_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::NewProp_outFileMetadataCount = { "outFileMetadataCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageGetFileMetadataCount_Parms, outFileMetadataCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::NewProp_getFileMetadataCountOptions = { "getFileMetadataCountOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageGetFileMetadataCount_Parms, getFileMetadataCountOptions), Z_Construct_UScriptStruct_FEOSPlayerDataStorageGetFileMetadataCountOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::NewProp_outFileMetadataCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::NewProp_getFileMetadataCountOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Get the count of files we have previously queried information for and files we have previously read from / written to.\n     *\n     * @param GetFileMetadataCountOptions Object containing properties related to which user is requesting the metadata count\n     * @param OutFileMetadataCount If successful, the count of metadata currently cached\n     * @return EOSResult::EOS_Success if the input was valid, otherwise an error result explaining what went wrong\n     *\n     * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Get the count of files we have previously queried information for and files we have previously read from / written to.\n\n@param GetFileMetadataCountOptions Object containing properties related to which user is requesting the metadata count\n@param OutFileMetadataCount If successful, the count of metadata currently cached\n@return EOSResult::EOS_Success if the input was valid, otherwise an error result explaining what went wrong\n\n@see EOS_PlayerDataStorage_CopyFileMetadataAtIndex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageGetFileMetadataCount", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageGetFileMetadataCount_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageQueryFile_Parms
		{
			FEOSPlayerDataStorageQueryFileOptions queryFileOptions;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_queryFileOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageQueryFile_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryFileCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::NewProp_queryFileOptions = { "queryFileOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageQueryFile_Parms, queryFileOptions), Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::NewProp_queryFileOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n    * Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened, saved, copied, or deleted. Once a file has\n    * been queried, its metadata will be available by the EOS_PlayerDataStorage_CopyFileMetadataAtIndex and EOS_PlayerDataStorage_CopyFileMetadataByFilename functions.\n    *\n    * @param Options Object containing properties related to which user is querying files, and what file is being queried\n    * @param callback This function is called when the query operation completes\n    *\n    * @see EOS_PlayerDataStorage_GetFileMetadataCount\n    * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex\n    * @see EOS_PlayerDataStorage_CopyFileMetadataByFilename\n    */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened, saved, copied, or deleted. Once a file has\nbeen queried, its metadata will be available by the EOS_PlayerDataStorage_CopyFileMetadataAtIndex and EOS_PlayerDataStorage_CopyFileMetadataByFilename functions.\n\n@param Options Object containing properties related to which user is querying files, and what file is being queried\n@param callback This function is called when the query operation completes\n\n@see EOS_PlayerDataStorage_GetFileMetadataCount\n@see EOS_PlayerDataStorage_CopyFileMetadataAtIndex\n@see EOS_PlayerDataStorage_CopyFileMetadataByFilename" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageQueryFile", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageQueryFile_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageQueryFileList_Parms
		{
			FEOSPlayerDataStorageQueryFileListOptions queryFileListOptions;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_queryFileListOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageQueryFileList_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnQueryFileListCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::NewProp_queryFileListOptions = { "queryFileListOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageQueryFileList_Parms, queryFileListOptions), Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileListOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::NewProp_queryFileListOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files owned by this user for this application. This is not required before a file may be opened,\n     * saved, copied, or deleted.\n     *\n     * @param Options Object containing properties related to which user is querying files\n     * @param callback This function is called when the query operation completes\n     *\n     * @see EOS_PlayerDataStorage_GetFileMetadataCount\n     * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex\n     * @see EOS_PlayerDataStorage_CopyFileMetadataByFilename\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files owned by this user for this application. This is not required before a file may be opened,\nsaved, copied, or deleted.\n\n@param Options Object containing properties related to which user is querying files\n@param callback This function is called when the query operation completes\n\n@see EOS_PlayerDataStorage_GetFileMetadataCount\n@see EOS_PlayerDataStorage_CopyFileMetadataAtIndex\n@see EOS_PlayerDataStorage_CopyFileMetadataByFilename" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageQueryFileList", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageQueryFileList_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageReadFile_Parms
		{
			FEOSPlayerDataStorageReadFileOptions readOptions;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_readOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageReadFile_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnReadFileCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::NewProp_readOptions = { "readOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageReadFile_Parms, readOptions), Z_Construct_UScriptStruct_FEOSPlayerDataStorageReadFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::NewProp_readOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over\n     * multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at\n     * least once if the request is started successfully.\n     *\n     * @param ReadOptions Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data\n     * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n     * @param callback This function is called when the read operation completes\n     * @return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n     *\n     * @see EOS_PlayerDataStorageFileTransferRequest_Release\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over\nmultiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at\nleast once if the request is started successfully.\n\n@param ReadOptions Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data\n@param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n@param callback This function is called when the read operation completes\n@return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n\n@see EOS_PlayerDataStorageFileTransferRequest_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageReadFile", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageReadFile_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics
	{
		struct CorePlayerDataStorage_eventEOSPlayerDataStorageWriteFile_Parms
		{
			FEOSPlayerDataStorageWriteFileOptions writeOptions;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_writeOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageWriteFile_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnWriteFileCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::NewProp_writeOptions = { "writeOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventEOSPlayerDataStorageWriteFile_Parms, writeOptions), Z_Construct_UScriptStruct_FEOSPlayerDataStorageWriteFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::NewProp_writeOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|PlayerDataStorage" },
		{ "Comment", "/**\n     * Write new data to a specific file, potentially overwriting any existing file by the same name, to the cloud. This request will occur asynchronously, potentially over multiple frames.\n     * All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at least once if the\n     * request is started successfully.\n     *\n     * @param WriteOptions Object containing properties related to which user is writing the file, what the file's name is, and related mechanisms for writing the data\n     * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n     * @param callback This function is called when the write operation completes\n     * @return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n     *\n     * @see EOS_PlayerDataStorageFileTransferRequest_Release\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "Write new data to a specific file, potentially overwriting any existing file by the same name, to the cloud. This request will occur asynchronously, potentially over multiple frames.\nAll callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at least once if the\nrequest is started successfully.\n\n@param WriteOptions Object containing properties related to which user is writing the file, what the file's name is, and related mechanisms for writing the data\n@param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n@param callback This function is called when the write operation completes\n@return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n\n@see EOS_PlayerDataStorageFileTransferRequest_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "EOSPlayerDataStorageWriteFile", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventEOSPlayerDataStorageWriteFile_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics
	{
		struct CorePlayerDataStorage_eventGetPlayerDataStorage_Parms
		{
			UCorePlayerDataStorage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerDataStorage_eventGetPlayerDataStorage_Parms, ReturnValue), Z_Construct_UClass_UCorePlayerDataStorage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerDataStorage, nullptr, "GetPlayerDataStorage", nullptr, nullptr, sizeof(CorePlayerDataStorage_eventGetPlayerDataStorage_Parms), Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePlayerDataStorage_NoRegister()
	{
		return UCorePlayerDataStorage::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerDataStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWriteFileCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWriteFileCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReadFileCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadFileCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFileTransferProgressCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileTransferProgressCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeleteFileCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeleteFileCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDuplicateFileCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDuplicateFileCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryFileListCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryFileListCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryFileCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryFileCompleteCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerDataStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePlayerDataStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex, "EOSPlayerDataStorageCopyFileMetadataAtIndex" }, // 2659147012
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename, "EOSPlayerDataStorageCopyFileMetadataByFilename" }, // 3907480888
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile, "EOSPlayerDataStorageDeleteFile" }, // 3929484702
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile, "EOSPlayerDataStorageDuplicateFile" }, // 912912705
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest, "EOSPlayerDataStorageFileTransferRequestCancelRequest" }, // 1241506827
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename, "EOSPlayerDataStorageFileTransferRequestGetFilename" }, // 574150768
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState, "EOSPlayerDataStorageFileTransferRequestGetFileRequestState" }, // 1016627659
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease, "EOSPlayerDataStorageFileTransferRequestRelease" }, // 326551956
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount, "EOSPlayerDataStorageGetFileMetadataCount" }, // 968021055
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile, "EOSPlayerDataStorageQueryFile" }, // 3193110420
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList, "EOSPlayerDataStorageQueryFileList" }, // 3758619921
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageReadFile, "EOSPlayerDataStorageReadFile" }, // 2767136435
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile, "EOSPlayerDataStorageWriteFile" }, // 898089412
		{ &Z_Construct_UFunction_UCorePlayerDataStorage_GetPlayerDataStorage, "GetPlayerDataStorage" }, // 3859072058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerDataStorage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The following EOS_PlayerDataStorage_* functions allow you to query file metadata; create/upload files; and duplicate, read, and delete existing files\n */" },
		{ "IncludePath", "PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
		{ "ToolTip", "The following EOS_PlayerDataStorage_* functions allow you to query file metadata; create/upload files; and duplicate, read, and delete existing files" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnWriteFileCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|PlayerDataStorage|Delegates" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnWriteFileCompleteCallbackDelegate = { "OnWriteFileCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerDataStorage, OnWriteFileCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnWriteFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnWriteFileCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnWriteFileCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnReadFileCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|PlayerDataStorage|Delegates" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnReadFileCompleteCallbackDelegate = { "OnReadFileCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerDataStorage, OnReadFileCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnReadFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnReadFileCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnReadFileCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnFileTransferProgressCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|PlayerDataStorage|Delegates" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnFileTransferProgressCallbackDelegate = { "OnFileTransferProgressCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerDataStorage, OnFileTransferProgressCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnFileTransferProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnFileTransferProgressCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnFileTransferProgressCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDeleteFileCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|PlayerDataStorage|Delegates" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDeleteFileCompleteCallbackDelegate = { "OnDeleteFileCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerDataStorage, OnDeleteFileCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnDeleteFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDeleteFileCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDeleteFileCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDuplicateFileCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|PlayerDataStorage|Delegates" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDuplicateFileCompleteCallbackDelegate = { "OnDuplicateFileCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerDataStorage, OnDuplicateFileCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnDuplicateFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDuplicateFileCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDuplicateFileCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileListCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|PlayerDataStorage|Delegates" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileListCompleteCallbackDelegate = { "OnQueryFileListCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerDataStorage, OnQueryFileListCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnQueryFileListCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileListCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileListCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|PlayerDataStorage|Delegates" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileCompleteCallbackDelegate = { "OnQueryFileCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerDataStorage, OnQueryFileCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnQueryFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileCompleteCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePlayerDataStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnWriteFileCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnReadFileCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnFileTransferProgressCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDeleteFileCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnDuplicateFileCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileListCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerDataStorage_Statics::NewProp_OnQueryFileCompleteCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerDataStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerDataStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerDataStorage_Statics::ClassParams = {
		&UCorePlayerDataStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePlayerDataStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerDataStorage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerDataStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerDataStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerDataStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerDataStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerDataStorage, 2882665387);
	template<> EOSCORE_API UClass* StaticClass<UCorePlayerDataStorage>()
	{
		return UCorePlayerDataStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerDataStorage(Z_Construct_UClass_UCorePlayerDataStorage, &UCorePlayerDataStorage::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCorePlayerDataStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerDataStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
