// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/TitleStorage/EOSTitleStorage.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSTitleStorage() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UCoreTitleStorage_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UCoreTitleStorage();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UEnum* Z_Construct_UEnum_EOSCore_EOSResult();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageFileMetadata();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageCopyFileMetadataAtIndexOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageCopyFileMetadataByFilenameOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageDeleteCacheCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageDeleteCacheOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageGetFileMetadataCountOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileListCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileListOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageReadFileCompleteCallback__DelegateSignature();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageReadFileOptions();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageDeleteCacheCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageReadFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageFileTransferProgressCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileListCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageFileTransferRequestCancelRequest)
	{
		P_GET_STRUCT(FEOSTitleStorageFileTransferRequestHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreTitleStorage::EOSTitleStorageFileTransferRequestCancelRequest(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageFileTransferRequestGetFilename)
	{
		P_GET_STRUCT(FEOSTitleStorageFileTransferRequestHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_filenameStringBufferSizeBytes);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outStringBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreTitleStorage::EOSTitleStorageFileTransferRequestGetFilename(Z_Param_handle,Z_Param_filenameStringBufferSizeBytes,Z_Param_Out_outStringBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageFileTransferRequestGetFileRequestState)
	{
		P_GET_STRUCT(FEOSTitleStorageFileTransferRequestHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreTitleStorage::EOSTitleStorageFileTransferRequestGetFileRequestState(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageDeleteCache)
	{
		P_GET_STRUCT(FEOSTitleStorageDeleteCacheOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=P_THIS->EOSTitleStorageDeleteCache(Z_Param_options,FOnTitleStorageDeleteCacheCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageReadFile)
	{
		P_GET_STRUCT(FEOSTitleStorageReadFileOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSTitleStorageFileTransferRequestHandle*)Z_Param__Result=P_THIS->EOSTitleStorageReadFile(Z_Param_options,FOnTitleStorageReadFileCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageCopyFileMetadataAtIndex)
	{
		P_GET_STRUCT(FEOSTitleStorageCopyFileMetadataAtIndexOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSTitleStorageFileMetadata,Z_Param_Out_outMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreTitleStorage::EOSTitleStorageCopyFileMetadataAtIndex(Z_Param_options,Z_Param_Out_outMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageGetFileMetadataCount)
	{
		P_GET_STRUCT(FEOSTitleStorageGetFileMetadataCountOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCoreTitleStorage::EOSTitleStorageGetFileMetadataCount(Z_Param_options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageCopyFileMetadataByFilename)
	{
		P_GET_STRUCT(FEOSTitleStorageCopyFileMetadataByFilenameOptions,Z_Param_options);
		P_GET_STRUCT_REF(FEOSTitleStorageFileMetadata,Z_Param_Out_outMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSResult*)Z_Param__Result=UCoreTitleStorage::EOSTitleStorageCopyFileMetadataByFilename(Z_Param_options,Z_Param_Out_outMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageQueryFileList)
	{
		P_GET_STRUCT(FEOSTitleStorageQueryFileListOptions,Z_Param_Options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSTitleStorageQueryFileList(Z_Param_Options,FOnTitleStorageQueryFileListCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execEOSTitleStorageQueryFile)
	{
		P_GET_STRUCT(FEOSTitleStorageQueryFileOptions,Z_Param_options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EOSTitleStorageQueryFile(Z_Param_options,FOnTitleStorageQueryFileCompleteCallback(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTitleStorage::execGetTitleStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCoreTitleStorage**)Z_Param__Result=UCoreTitleStorage::GetTitleStorage();
		P_NATIVE_END;
	}
	void UCoreTitleStorage::StaticRegisterNativesUCoreTitleStorage()
	{
		UClass* Class = UCoreTitleStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSTitleStorageCopyFileMetadataAtIndex", &UCoreTitleStorage::execEOSTitleStorageCopyFileMetadataAtIndex },
			{ "EOSTitleStorageCopyFileMetadataByFilename", &UCoreTitleStorage::execEOSTitleStorageCopyFileMetadataByFilename },
			{ "EOSTitleStorageDeleteCache", &UCoreTitleStorage::execEOSTitleStorageDeleteCache },
			{ "EOSTitleStorageFileTransferRequestCancelRequest", &UCoreTitleStorage::execEOSTitleStorageFileTransferRequestCancelRequest },
			{ "EOSTitleStorageFileTransferRequestGetFilename", &UCoreTitleStorage::execEOSTitleStorageFileTransferRequestGetFilename },
			{ "EOSTitleStorageFileTransferRequestGetFileRequestState", &UCoreTitleStorage::execEOSTitleStorageFileTransferRequestGetFileRequestState },
			{ "EOSTitleStorageGetFileMetadataCount", &UCoreTitleStorage::execEOSTitleStorageGetFileMetadataCount },
			{ "EOSTitleStorageQueryFile", &UCoreTitleStorage::execEOSTitleStorageQueryFile },
			{ "EOSTitleStorageQueryFileList", &UCoreTitleStorage::execEOSTitleStorageQueryFileList },
			{ "EOSTitleStorageReadFile", &UCoreTitleStorage::execEOSTitleStorageReadFile },
			{ "GetTitleStorage", &UCoreTitleStorage::execGetTitleStorage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataAtIndex_Parms
		{
			FEOSTitleStorageCopyFileMetadataAtIndexOptions options;
			FEOSTitleStorageFileMetadata outMetadata;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outMetadata;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataAtIndex_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::NewProp_outMetadata = { "outMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataAtIndex_Parms, outMetadata), Z_Construct_UScriptStruct_FEOSTitleStorageFileMetadata, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataAtIndex_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageCopyFileMetadataAtIndexOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::NewProp_outMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09 * Get the cached copy of a file's metadata by index. The metadata will be for the last retrieved version. The returned pointer must be released by the user when no longer needed.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is requesting metadata, and at what index\n\x09 * @param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOSTitleStorageFileMetadata_Release.\n\x09 * @return EOS_Success if the requested metadata is currently cached, otherwise an error result explaining what went wrong.\n\x09 *\n\x09 * @see EOSTitleStorageGetFileMetadataCount\n\x09 * @see EOSTitleStorageFileMetadata_Release\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Get the cached copy of a file's metadata by index. The metadata will be for the last retrieved version. The returned pointer must be released by the user when no longer needed.\n\n@param Options Object containing properties related to which user is requesting metadata, and at what index\n@param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOSTitleStorageFileMetadata_Release.\n@return EOS_Success if the requested metadata is currently cached, otherwise an error result explaining what went wrong.\n\n@see EOSTitleStorageGetFileMetadataCount\n@see EOSTitleStorageFileMetadata_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageCopyFileMetadataAtIndex", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataAtIndex_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataByFilename_Parms
		{
			FEOSTitleStorageCopyFileMetadataByFilenameOptions options;
			FEOSTitleStorageFileMetadata outMetadata;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outMetadata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataByFilename_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_outMetadata = { "outMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataByFilename_Parms, outMetadata), Z_Construct_UScriptStruct_FEOSTitleStorageFileMetadata, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataByFilename_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageCopyFileMetadataByFilenameOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_outMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09 * Create a cached copy of a file's metadata by filename. The metadata will be for the last retrieved or successfully saved version, and will not include any changes that have not\n\x09 * completed writing. The returned pointer must be released by the user when no longer needed.\n\x09 *\n\x09\x09 * @param Options Object containing properties related to which user is requesting metadata, and for which filename\n\x09 * @param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOSTitleStorageFileMetadata_Release.\n\x09 * @return EOS_Success if the metadata is currently cached, otherwise an error result explaining what went wrong\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Create a cached copy of a file's metadata by filename. The metadata will be for the last retrieved or successfully saved version, and will not include any changes that have not\ncompleted writing. The returned pointer must be released by the user when no longer needed.\n\n@param Options Object containing properties related to which user is requesting metadata, and for which filename\n@param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOSTitleStorageFileMetadata_Release.\n@return EOS_Success if the metadata is currently cached, otherwise an error result explaining what went wrong" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageCopyFileMetadataByFilename", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageCopyFileMetadataByFilename_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageDeleteCache_Parms
		{
			FEOSTitleStorageDeleteCacheOptions options;
			FScriptDelegate callback;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageDeleteCache_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageDeleteCache_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageDeleteCacheCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageDeleteCache_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageDeleteCacheOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09 * Clear previously cached file data. This operation will be done asynchronously. All cached files except those corresponding to the transfers in progress will be removed.\n\x09 * Warning: Use this with care. Cache system generally tries to clear old and unused cached files from time to time. Unnecessarily clearing cache can degrade performance as SDK will have to re-download data.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is deleting cache\n\x09 * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n\x09 * @param callback This function is called when the delete cache operation completes\n\x09 * @return EOS_Success if the operation was started correctly, otherwise an error result explaining what went wrong\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Clear previously cached file data. This operation will be done asynchronously. All cached files except those corresponding to the transfers in progress will be removed.\nWarning: Use this with care. Cache system generally tries to clear old and unused cached files from time to time. Unnecessarily clearing cache can degrade performance as SDK will have to re-download data.\n\n@param Options Object containing properties related to which user is deleting cache\n@param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n@param callback This function is called when the delete cache operation completes\n@return EOS_Success if the operation was started correctly, otherwise an error result explaining what went wrong" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageDeleteCache", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageDeleteCache_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageFileTransferRequestCancelRequest_Parms
		{
			FEOSTitleStorageFileTransferRequestHandle handle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestCancelRequest_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestCancelRequest_Parms, handle), Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09 * Attempt to cancel this file request in progress. This is a best-effort command and is not guaranteed to be successful if the request has completed before this function is called.\n\x09 *\n\x09 * @return EOS_Success if successful or already canceled, or EOS_NoChange if request is not cancelable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Attempt to cancel this file request in progress. This is a best-effort command and is not guaranteed to be successful if the request has completed before this function is called.\n\n@return EOS_Success if successful or already canceled, or EOS_NoChange if request is not cancelable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageFileTransferRequestCancelRequest", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestCancelRequest_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFilename_Parms
		{
			FEOSTitleStorageFileTransferRequestHandle handle;
			int32 filenameStringBufferSizeBytes;
			FString outStringBuffer;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outStringBuffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_filenameStringBufferSizeBytes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFilename_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_outStringBuffer = { "outStringBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFilename_Parms, outStringBuffer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_filenameStringBufferSizeBytes = { "filenameStringBufferSizeBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFilename_Parms, filenameStringBufferSizeBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFilename_Parms, handle), Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_outStringBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_filenameStringBufferSizeBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09 * Get the file name of the file this request is for. OutStringLength will always be set to the string length of the file name if it is not NULL.\n\x09 *\n\x09 * @param FilenameStringBufferSizeBytes The maximum number of bytes that can be written to OutStringBuffer\n\x09 * @param OutStringBuffer The buffer to write the NULL-terminated utf8 file name into, if successful\n\x09 * @return EOS_Success if the file name was successfully written to OutFilenameBuffer, a failure result otherwise\n\x09 *\n\x09 * @see EOSTitleStorageFILENAME_MAX_LENGTH_BYTES\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Get the file name of the file this request is for. OutStringLength will always be set to the string length of the file name if it is not NULL.\n\n@param FilenameStringBufferSizeBytes The maximum number of bytes that can be written to OutStringBuffer\n@param OutStringBuffer The buffer to write the NULL-terminated utf8 file name into, if successful\n@return EOS_Success if the file name was successfully written to OutFilenameBuffer, a failure result otherwise\n\n@see EOSTitleStorageFILENAME_MAX_LENGTH_BYTES" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageFileTransferRequestGetFilename", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFilename_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFileRequestState_Parms
		{
			FEOSTitleStorageFileTransferRequestHandle handle;
			EOSResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFileRequestState_Parms, ReturnValue), Z_Construct_UEnum_EOSCore_EOSResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFileRequestState_Parms, handle), Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09  * Get the current state of a file request.\n\x09  *\n\x09  * @return EOS_Success if complete and successful, EOS_RequestInProgress if the request is still in progress, or another state for failure.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Get the current state of a file request.\n\n@return EOS_Success if complete and successful, EOS_RequestInProgress if the request is still in progress, or another state for failure." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageFileTransferRequestGetFileRequestState", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageFileTransferRequestGetFileRequestState_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageGetFileMetadataCount_Parms
		{
			FEOSTitleStorageGetFileMetadataCountOptions options;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageGetFileMetadataCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageGetFileMetadataCount_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageGetFileMetadataCountOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::NewProp_options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09 * Get the count of files we have previously queried information for and files we have previously read from / written to.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is requesting the metadata count\n\x09 * @return If successful, the count of metadata currently cached. Returns 0 on failure.\n\x09 *\n\x09 * @see EOSTitleStorageCopyFileMetadataAtIndex\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Get the count of files we have previously queried information for and files we have previously read from / written to.\n\n@param Options Object containing properties related to which user is requesting the metadata count\n@return If successful, the count of metadata currently cached. Returns 0 on failure.\n\n@see EOSTitleStorageCopyFileMetadataAtIndex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageGetFileMetadataCount", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageGetFileMetadataCount_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageQueryFile_Parms
		{
			FEOSTitleStorageQueryFileOptions options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageQueryFile_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageQueryFile_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09 * Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened. Once a file has\n\x09 * been queried, its metadata will be available by the EOSTitleStorageCopyFileMetadataAtIndex and EOSTitleStorageCopyFileMetadataByFilename functions.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is querying files, and what file is being queried\n\x09 * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n\x09 * @param callback This function is called when the query operation completes\n\x09 *\n\x09 * @see EOSTitleStorageGetFileMetadataCount\n\x09 * @see EOSTitleStorageCopyFileMetadataAtIndex\n\x09 * @see EOSTitleStorageCopyFileMetadataByFilename\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened. Once a file has\nbeen queried, its metadata will be available by the EOSTitleStorageCopyFileMetadataAtIndex and EOSTitleStorageCopyFileMetadataByFilename functions.\n\n@param Options Object containing properties related to which user is querying files, and what file is being queried\n@param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n@param callback This function is called when the query operation completes\n\n@see EOSTitleStorageGetFileMetadataCount\n@see EOSTitleStorageCopyFileMetadataAtIndex\n@see EOSTitleStorageCopyFileMetadataByFilename" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageQueryFile", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageQueryFile_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageQueryFileList_Parms
		{
			FEOSTitleStorageQueryFileListOptions Options;
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageQueryFileList_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileListCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageQueryFileList_Parms, Options), Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileListOptions, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09 * Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files available for current user based on their settings (such as game role) and tags provided.\n\x09 * This is not required before a file can be downloaded by name.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is querying files and the list of tags\n\x09 * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n\x09 * @param callback This function is called when the query operation completes\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files available for current user based on their settings (such as game role) and tags provided.\nThis is not required before a file can be downloaded by name.\n\n@param Options Object containing properties related to which user is querying files and the list of tags\n@param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n@param callback This function is called when the query operation completes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageQueryFileList", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageQueryFileList_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics
	{
		struct CoreTitleStorage_eventEOSTitleStorageReadFile_Parms
		{
			FEOSTitleStorageReadFileOptions options;
			FScriptDelegate callback;
			FEOSTitleStorageFileTransferRequestHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageReadFile_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSTitleStorageFileTransferRequestHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageReadFile_Parms, callback), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageReadFileCompleteCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventEOSTitleStorageReadFile_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageReadFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::NewProp_options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|TitleStorage" },
		{ "Comment", "/**\n\x09 * Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over\n\x09 * multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at\n\x09 * least once if the request is started successfully.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data\n\x09 * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n\x09 * @param callback This function is called when the read operation completes\n\x09 * @return A valid Title Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n\x09 *\n\x09 * @see EOS_TitleStorageFileTransferRequest_Release\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over\nmultiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at\nleast once if the request is started successfully.\n\n@param Options Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data\n@param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n@param callback This function is called when the read operation completes\n@return A valid Title Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n\n@see EOS_TitleStorageFileTransferRequest_Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "EOSTitleStorageReadFile", nullptr, nullptr, sizeof(CoreTitleStorage_eventEOSTitleStorageReadFile_Parms), Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics
	{
		struct CoreTitleStorage_eventGetTitleStorage_Parms
		{
			UCoreTitleStorage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTitleStorage_eventGetTitleStorage_Parms, ReturnValue), Z_Construct_UClass_UCoreTitleStorage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOSCore|Interfaces" },
		{ "Comment", "/**\n\x09 * The following EOSTitleStorage* functions allow you to query metadata for available files from title storage as well as download and read their contents.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
		{ "ToolTip", "The following EOSTitleStorage* functions allow you to query metadata for available files from title storage as well as download and read their contents." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTitleStorage, nullptr, "GetTitleStorage", nullptr, nullptr, sizeof(CoreTitleStorage_eventGetTitleStorage_Parms), Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreTitleStorage_NoRegister()
	{
		return UCoreTitleStorage::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTitleStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTitleStorageDeleteCacheCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTitleStorageDeleteCacheCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTitleStorageReadFileCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTitleStorageReadFileCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTitleStorageFileTransferProgressCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTitleStorageFileTransferProgressCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTitleStorageQueryFileListCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTitleStorageQueryFileListCompleteCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTitleStorageQueryFileCompleteCallbackDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTitleStorageQueryFileCompleteCallbackDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTitleStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreTitleStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex, "EOSTitleStorageCopyFileMetadataAtIndex" }, // 1319669933
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename, "EOSTitleStorageCopyFileMetadataByFilename" }, // 649023728
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageDeleteCache, "EOSTitleStorageDeleteCache" }, // 1097437307
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest, "EOSTitleStorageFileTransferRequestCancelRequest" }, // 208978420
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename, "EOSTitleStorageFileTransferRequestGetFilename" }, // 2096314901
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState, "EOSTitleStorageFileTransferRequestGetFileRequestState" }, // 851809819
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount, "EOSTitleStorageGetFileMetadataCount" }, // 3376385083
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFile, "EOSTitleStorageQueryFile" }, // 201303698
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageQueryFileList, "EOSTitleStorageQueryFileList" }, // 3135443110
		{ &Z_Construct_UFunction_UCoreTitleStorage_EOSTitleStorageReadFile, "EOSTitleStorageReadFile" }, // 1600537612
		{ &Z_Construct_UFunction_UCoreTitleStorage_GetTitleStorage, "GetTitleStorage" }, // 300287689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTitleStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TitleStorage/EOSTitleStorage.h" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageDeleteCacheCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|TitleStorage|Delegates" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageDeleteCacheCompleteCallbackDelegate = { "OnTitleStorageDeleteCacheCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTitleStorage, OnTitleStorageDeleteCacheCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageDeleteCacheCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageDeleteCacheCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageDeleteCacheCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageReadFileCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|TitleStorage|Delegates" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageReadFileCompleteCallbackDelegate = { "OnTitleStorageReadFileCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTitleStorage, OnTitleStorageReadFileCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageReadFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageReadFileCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageReadFileCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageFileTransferProgressCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|TitleStorage|Delegates" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageFileTransferProgressCallbackDelegate = { "OnTitleStorageFileTransferProgressCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTitleStorage, OnTitleStorageFileTransferProgressCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageFileTransferProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageFileTransferProgressCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageFileTransferProgressCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileListCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|TitleStorage|Delegates" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileListCompleteCallbackDelegate = { "OnTitleStorageQueryFileListCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTitleStorage, OnTitleStorageQueryFileListCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileListCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileListCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileListCompleteCallbackDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileCompleteCallbackDelegate_MetaData[] = {
		{ "Category", "EOSCore|TitleStorage|Delegates" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileCompleteCallbackDelegate = { "OnTitleStorageQueryFileCompleteCallbackDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTitleStorage, OnTitleStorageQueryFileCompleteCallbackDelegate), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileCompleteCallbackDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileCompleteCallbackDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageDeleteCacheCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageReadFileCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageFileTransferProgressCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileListCompleteCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTitleStorage_Statics::NewProp_OnTitleStorageQueryFileCompleteCallbackDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTitleStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTitleStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTitleStorage_Statics::ClassParams = {
		&UCoreTitleStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreTitleStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTitleStorage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTitleStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTitleStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTitleStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTitleStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTitleStorage, 1060977331);
	template<> EOSCORE_API UClass* StaticClass<UCoreTitleStorage>()
	{
		return UCoreTitleStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTitleStorage(Z_Construct_UClass_UCoreTitleStorage, &UCoreTitleStorage::StaticClass, TEXT("/Script/EOSCore"), TEXT("UCoreTitleStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTitleStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
