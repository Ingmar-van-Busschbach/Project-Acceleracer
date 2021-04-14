// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPlayerDataStorageAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileListOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileListCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnQueryFileListCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageDuplicateFileOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageDuplicateFileCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDuplicateFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageDeleteFileOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageDeleteFileCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnDeleteFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageReadFileOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageReadFileCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnReadFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageWriteFileOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerDataStorageWriteFileCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnWriteFileCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageQueryFile::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSPlayerDataStorageQueryFileCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageQueryFile::execEOSPlayerDataStorageQueryFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSPlayerDataStorageQueryFileOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCorePlayerDataStorageQueryFile**)Z_Param__Result=UEOSCorePlayerDataStorageQueryFile::EOSPlayerDataStorageQueryFileAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCorePlayerDataStorageQueryFile::StaticRegisterNativesUEOSCorePlayerDataStorageQueryFile()
	{
		UClass* Class = UEOSCorePlayerDataStorageQueryFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPlayerDataStorageQueryFileAsync", &UEOSCorePlayerDataStorageQueryFile::execEOSPlayerDataStorageQueryFileAsync },
			{ "HandleCallback", &UEOSCorePlayerDataStorageQueryFile::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics
	{
		struct EOSCorePlayerDataStorageQueryFile_eventEOSPlayerDataStorageQueryFileAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSPlayerDataStorageQueryFileOptions options;
			UEOSCorePlayerDataStorageQueryFile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageQueryFile_eventEOSPlayerDataStorageQueryFileAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageQueryFile_eventEOSPlayerDataStorageQueryFileAsync_Parms, options), Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageQueryFile_eventEOSPlayerDataStorageQueryFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|PlayerDataStorage|Async" },
		{ "Comment", "/**\n    * Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened, saved, copied, or deleted. Once a file has\n    * been queried, its metadata will be available by the EOS_PlayerDataStorage_CopyFileMetadataAtIndex and EOS_PlayerDataStorage_CopyFileMetadataByFilename functions.\n    *\n    * @param Options Object containing properties related to which user is querying files, and what file is being queried\n    * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n    * @param callback This function is called when the query operation completes\n    *\n    * @see EOS_PlayerDataStorage_GetFileMetadataCount\n    * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex\n    * @see EOS_PlayerDataStorage_CopyFileMetadataByFilename\n    */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened, saved, copied, or deleted. Once a file has\nbeen queried, its metadata will be available by the EOS_PlayerDataStorage_CopyFileMetadataAtIndex and EOS_PlayerDataStorage_CopyFileMetadataByFilename functions.\n\n@param Options Object containing properties related to which user is querying files, and what file is being queried\n@param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n@param callback This function is called when the query operation completes\n\n@see EOS_PlayerDataStorage_GetFileMetadataCount\n@see EOS_PlayerDataStorage_CopyFileMetadataAtIndex\n@see EOS_PlayerDataStorage_CopyFileMetadataByFilename" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile, nullptr, "EOSPlayerDataStorageQueryFileAsync", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageQueryFile_eventEOSPlayerDataStorageQueryFileAsync_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics
	{
		struct EOSCorePlayerDataStorageQueryFile_eventHandleCallback_Parms
		{
			FEOSPlayerDataStorageQueryFileCallbackInfo data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCorePlayerDataStorageQueryFile_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCorePlayerDataStorageQueryFile_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageQueryFile_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageQueryFile_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_NoRegister()
	{
		return UEOSCorePlayerDataStorageQueryFile::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync, "EOSPlayerDataStorageQueryFileAsync" }, // 3591565278
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFile_HandleCallback, "HandleCallback" }, // 2836034248
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCorePlayerDataStorageQueryFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCorePlayerDataStorageQueryFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCorePlayerDataStorageQueryFile, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCorePlayerDataStorageQueryFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::ClassParams = {
		&UEOSCorePlayerDataStorageQueryFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCorePlayerDataStorageQueryFile, 464577308);
	template<> EOSCORE_API UClass* StaticClass<UEOSCorePlayerDataStorageQueryFile>()
	{
		return UEOSCorePlayerDataStorageQueryFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCorePlayerDataStorageQueryFile(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFile, &UEOSCorePlayerDataStorageQueryFile::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCorePlayerDataStorageQueryFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCorePlayerDataStorageQueryFile);
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageQueryFileList::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSPlayerDataStorageQueryFileListCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageQueryFileList::execEOSPlayerDataStorageQueryFileListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSPlayerDataStorageQueryFileListOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCorePlayerDataStorageQueryFileList**)Z_Param__Result=UEOSCorePlayerDataStorageQueryFileList::EOSPlayerDataStorageQueryFileListAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCorePlayerDataStorageQueryFileList::StaticRegisterNativesUEOSCorePlayerDataStorageQueryFileList()
	{
		UClass* Class = UEOSCorePlayerDataStorageQueryFileList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPlayerDataStorageQueryFileListAsync", &UEOSCorePlayerDataStorageQueryFileList::execEOSPlayerDataStorageQueryFileListAsync },
			{ "HandleCallback", &UEOSCorePlayerDataStorageQueryFileList::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics
	{
		struct EOSCorePlayerDataStorageQueryFileList_eventEOSPlayerDataStorageQueryFileListAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSPlayerDataStorageQueryFileListOptions options;
			UEOSCorePlayerDataStorageQueryFileList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageQueryFileList_eventEOSPlayerDataStorageQueryFileListAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageQueryFileList_eventEOSPlayerDataStorageQueryFileListAsync_Parms, options), Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileListOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageQueryFileList_eventEOSPlayerDataStorageQueryFileListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|PlayerDataStorage|Async" },
		{ "Comment", "/**\n     * Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files owned by this user for this application. This is not required before a file may be opened,\n     * saved, copied, or deleted.\n     *\n     * @param Options Object containing properties related to which user is querying files\n     * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n     * @param callback This function is called when the query operation completes\n     *\n     * @see EOS_PlayerDataStorage_GetFileMetadataCount\n     * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex\n     * @see EOS_PlayerDataStorage_CopyFileMetadataByFilename\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files owned by this user for this application. This is not required before a file may be opened,\nsaved, copied, or deleted.\n\n@param Options Object containing properties related to which user is querying files\n@param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n@param callback This function is called when the query operation completes\n\n@see EOS_PlayerDataStorage_GetFileMetadataCount\n@see EOS_PlayerDataStorage_CopyFileMetadataAtIndex\n@see EOS_PlayerDataStorage_CopyFileMetadataByFilename" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList, nullptr, "EOSPlayerDataStorageQueryFileListAsync", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageQueryFileList_eventEOSPlayerDataStorageQueryFileListAsync_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics
	{
		struct EOSCorePlayerDataStorageQueryFileList_eventHandleCallback_Parms
		{
			FEOSPlayerDataStorageQueryFileListCallbackInfo data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCorePlayerDataStorageQueryFileList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCorePlayerDataStorageQueryFileList_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageQueryFileList_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSPlayerDataStorageQueryFileListCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageQueryFileList_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_NoRegister()
	{
		return UEOSCorePlayerDataStorageQueryFileList::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync, "EOSPlayerDataStorageQueryFileListAsync" }, // 1443164786
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageQueryFileList_HandleCallback, "HandleCallback" }, // 708129066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCorePlayerDataStorageQueryFileList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCorePlayerDataStorageQueryFileList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCorePlayerDataStorageQueryFileList, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnQueryFileListCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCorePlayerDataStorageQueryFileList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::ClassParams = {
		&UEOSCorePlayerDataStorageQueryFileList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCorePlayerDataStorageQueryFileList, 1307714918);
	template<> EOSCORE_API UClass* StaticClass<UEOSCorePlayerDataStorageQueryFileList>()
	{
		return UEOSCorePlayerDataStorageQueryFileList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCorePlayerDataStorageQueryFileList(Z_Construct_UClass_UEOSCorePlayerDataStorageQueryFileList, &UEOSCorePlayerDataStorageQueryFileList::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCorePlayerDataStorageQueryFileList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCorePlayerDataStorageQueryFileList);
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageDuplicateFile::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSPlayerDataStorageDuplicateFileCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageDuplicateFile::execEOSPlayerDataStorageDuplicateFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSPlayerDataStorageDuplicateFileOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCorePlayerDataStorageDuplicateFile**)Z_Param__Result=UEOSCorePlayerDataStorageDuplicateFile::EOSPlayerDataStorageDuplicateFileAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCorePlayerDataStorageDuplicateFile::StaticRegisterNativesUEOSCorePlayerDataStorageDuplicateFile()
	{
		UClass* Class = UEOSCorePlayerDataStorageDuplicateFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPlayerDataStorageDuplicateFileAsync", &UEOSCorePlayerDataStorageDuplicateFile::execEOSPlayerDataStorageDuplicateFileAsync },
			{ "HandleCallback", &UEOSCorePlayerDataStorageDuplicateFile::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics
	{
		struct EOSCorePlayerDataStorageDuplicateFile_eventEOSPlayerDataStorageDuplicateFileAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSPlayerDataStorageDuplicateFileOptions options;
			UEOSCorePlayerDataStorageDuplicateFile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageDuplicateFile_eventEOSPlayerDataStorageDuplicateFileAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageDuplicateFile_eventEOSPlayerDataStorageDuplicateFileAsync_Parms, options), Z_Construct_UScriptStruct_FEOSPlayerDataStorageDuplicateFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageDuplicateFile_eventEOSPlayerDataStorageDuplicateFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|PlayerDataStorage|Async" },
		{ "Comment", "/**\n     * Copies the data of an existing file to a new filename. This action happens entirely on the server and will not upload the contents of the source destination file from the host. This\n     * function paired with a subsequent EOS_PlayerDataStorage_DeleteFile can be used to rename a file. If successful, the destination file's metadata will be updated in our local cache.\n     *\n     * @param DuplicateOptions Object containing properties related to which user is duplicating the file, and what the source and destination file names are\n     * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n     * @param callback This function is called when the duplicate operation completes\n     *\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "Copies the data of an existing file to a new filename. This action happens entirely on the server and will not upload the contents of the source destination file from the host. This\nfunction paired with a subsequent EOS_PlayerDataStorage_DeleteFile can be used to rename a file. If successful, the destination file's metadata will be updated in our local cache.\n\n@param DuplicateOptions Object containing properties related to which user is duplicating the file, and what the source and destination file names are\n@param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n@param callback This function is called when the duplicate operation completes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile, nullptr, "EOSPlayerDataStorageDuplicateFileAsync", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageDuplicateFile_eventEOSPlayerDataStorageDuplicateFileAsync_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics
	{
		struct EOSCorePlayerDataStorageDuplicateFile_eventHandleCallback_Parms
		{
			FEOSPlayerDataStorageDuplicateFileCallbackInfo data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCorePlayerDataStorageDuplicateFile_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCorePlayerDataStorageDuplicateFile_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageDuplicateFile_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSPlayerDataStorageDuplicateFileCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageDuplicateFile_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_NoRegister()
	{
		return UEOSCorePlayerDataStorageDuplicateFile::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync, "EOSPlayerDataStorageDuplicateFileAsync" }, // 795930901
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageDuplicateFile_HandleCallback, "HandleCallback" }, // 3752005281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCorePlayerDataStorageDuplicateFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCorePlayerDataStorageDuplicateFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCorePlayerDataStorageDuplicateFile, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnDuplicateFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCorePlayerDataStorageDuplicateFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::ClassParams = {
		&UEOSCorePlayerDataStorageDuplicateFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCorePlayerDataStorageDuplicateFile, 3421047537);
	template<> EOSCORE_API UClass* StaticClass<UEOSCorePlayerDataStorageDuplicateFile>()
	{
		return UEOSCorePlayerDataStorageDuplicateFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCorePlayerDataStorageDuplicateFile(Z_Construct_UClass_UEOSCorePlayerDataStorageDuplicateFile, &UEOSCorePlayerDataStorageDuplicateFile::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCorePlayerDataStorageDuplicateFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCorePlayerDataStorageDuplicateFile);
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageDeleteFile::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSPlayerDataStorageDeleteFileCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageDeleteFile::execEOSPlayerDataStorageDeleteFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSPlayerDataStorageDeleteFileOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCorePlayerDataStorageDeleteFile**)Z_Param__Result=UEOSCorePlayerDataStorageDeleteFile::EOSPlayerDataStorageDeleteFileAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCorePlayerDataStorageDeleteFile::StaticRegisterNativesUEOSCorePlayerDataStorageDeleteFile()
	{
		UClass* Class = UEOSCorePlayerDataStorageDeleteFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPlayerDataStorageDeleteFileAsync", &UEOSCorePlayerDataStorageDeleteFile::execEOSPlayerDataStorageDeleteFileAsync },
			{ "HandleCallback", &UEOSCorePlayerDataStorageDeleteFile::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics
	{
		struct EOSCorePlayerDataStorageDeleteFile_eventEOSPlayerDataStorageDeleteFileAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSPlayerDataStorageDeleteFileOptions options;
			UEOSCorePlayerDataStorageDeleteFile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageDeleteFile_eventEOSPlayerDataStorageDeleteFileAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageDeleteFile_eventEOSPlayerDataStorageDeleteFileAsync_Parms, options), Z_Construct_UScriptStruct_FEOSPlayerDataStorageDeleteFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageDeleteFile_eventEOSPlayerDataStorageDeleteFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|PlayerDataStorage|Async" },
		{ "Comment", "/**\n     * Deletes an existing file in the cloud. If successful, the file's data will be removed from our local cache.\n     *\n     * @param DelteOptions Object containing properties related to which user is deleting the file, and what file name is\n     * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n     * @param callback This function is called when the delete operation completes\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "Deletes an existing file in the cloud. If successful, the file's data will be removed from our local cache.\n\n@param DelteOptions Object containing properties related to which user is deleting the file, and what file name is\n@param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n@param callback This function is called when the delete operation completes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile, nullptr, "EOSPlayerDataStorageDeleteFileAsync", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageDeleteFile_eventEOSPlayerDataStorageDeleteFileAsync_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics
	{
		struct EOSCorePlayerDataStorageDeleteFile_eventHandleCallback_Parms
		{
			FEOSPlayerDataStorageDeleteFileCallbackInfo data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCorePlayerDataStorageDeleteFile_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCorePlayerDataStorageDeleteFile_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageDeleteFile_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSPlayerDataStorageDeleteFileCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageDeleteFile_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_NoRegister()
	{
		return UEOSCorePlayerDataStorageDeleteFile::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync, "EOSPlayerDataStorageDeleteFileAsync" }, // 807780598
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageDeleteFile_HandleCallback, "HandleCallback" }, // 3225401233
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCorePlayerDataStorageDeleteFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCorePlayerDataStorageDeleteFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCorePlayerDataStorageDeleteFile, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnDeleteFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCorePlayerDataStorageDeleteFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::ClassParams = {
		&UEOSCorePlayerDataStorageDeleteFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCorePlayerDataStorageDeleteFile, 3026558188);
	template<> EOSCORE_API UClass* StaticClass<UEOSCorePlayerDataStorageDeleteFile>()
	{
		return UEOSCorePlayerDataStorageDeleteFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCorePlayerDataStorageDeleteFile(Z_Construct_UClass_UEOSCorePlayerDataStorageDeleteFile, &UEOSCorePlayerDataStorageDeleteFile::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCorePlayerDataStorageDeleteFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCorePlayerDataStorageDeleteFile);
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageReadFile::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSPlayerDataStorageReadFileCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageReadFile::execEOSPlayerDataStorageReadFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSPlayerDataStorageReadFileOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCorePlayerDataStorageReadFile**)Z_Param__Result=UEOSCorePlayerDataStorageReadFile::EOSPlayerDataStorageReadFileAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCorePlayerDataStorageReadFile::StaticRegisterNativesUEOSCorePlayerDataStorageReadFile()
	{
		UClass* Class = UEOSCorePlayerDataStorageReadFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPlayerDataStorageReadFileAsync", &UEOSCorePlayerDataStorageReadFile::execEOSPlayerDataStorageReadFileAsync },
			{ "HandleCallback", &UEOSCorePlayerDataStorageReadFile::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics
	{
		struct EOSCorePlayerDataStorageReadFile_eventEOSPlayerDataStorageReadFileAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSPlayerDataStorageReadFileOptions options;
			UEOSCorePlayerDataStorageReadFile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageReadFile_eventEOSPlayerDataStorageReadFileAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageReadFile_eventEOSPlayerDataStorageReadFileAsync_Parms, options), Z_Construct_UScriptStruct_FEOSPlayerDataStorageReadFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageReadFile_eventEOSPlayerDataStorageReadFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|PlayerDataStorage|Async" },
		{ "Comment", "/**\n     * Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over\n     * multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at\n     * least once if the request is started successfully.\n     *\n     * @param ReadOptions Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data\n     * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n     * @param callback This function is called when the read operation completes\n     * @return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n     *\n     * @see EOS_PlayerDataStorageFileTransferRequest_Release\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over\nmultiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at\nleast once if the request is started successfully.\n\n@param ReadOptions Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data\n@param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n@param callback This function is called when the read operation completes\n@return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n\n@see EOS_PlayerDataStorageFileTransferRequest_Release" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile, nullptr, "EOSPlayerDataStorageReadFileAsync", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageReadFile_eventEOSPlayerDataStorageReadFileAsync_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics
	{
		struct EOSCorePlayerDataStorageReadFile_eventHandleCallback_Parms
		{
			FEOSPlayerDataStorageReadFileCallbackInfo data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCorePlayerDataStorageReadFile_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCorePlayerDataStorageReadFile_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageReadFile_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSPlayerDataStorageReadFileCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageReadFile_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_NoRegister()
	{
		return UEOSCorePlayerDataStorageReadFile::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync, "EOSPlayerDataStorageReadFileAsync" }, // 516139203
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageReadFile_HandleCallback, "HandleCallback" }, // 2678852986
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCorePlayerDataStorageReadFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCorePlayerDataStorageReadFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCorePlayerDataStorageReadFile, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnReadFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCorePlayerDataStorageReadFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::ClassParams = {
		&UEOSCorePlayerDataStorageReadFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCorePlayerDataStorageReadFile, 3207151158);
	template<> EOSCORE_API UClass* StaticClass<UEOSCorePlayerDataStorageReadFile>()
	{
		return UEOSCorePlayerDataStorageReadFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCorePlayerDataStorageReadFile(Z_Construct_UClass_UEOSCorePlayerDataStorageReadFile, &UEOSCorePlayerDataStorageReadFile::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCorePlayerDataStorageReadFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCorePlayerDataStorageReadFile);
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageWriteFile::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSPlayerDataStorageWriteFileCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCorePlayerDataStorageWriteFile::execEOSPlayerDataStorageWriteFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSPlayerDataStorageWriteFileOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCorePlayerDataStorageWriteFile**)Z_Param__Result=UEOSCorePlayerDataStorageWriteFile::EOSPlayerDataStorageWriteFileAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCorePlayerDataStorageWriteFile::StaticRegisterNativesUEOSCorePlayerDataStorageWriteFile()
	{
		UClass* Class = UEOSCorePlayerDataStorageWriteFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSPlayerDataStorageWriteFileAsync", &UEOSCorePlayerDataStorageWriteFile::execEOSPlayerDataStorageWriteFileAsync },
			{ "HandleCallback", &UEOSCorePlayerDataStorageWriteFile::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics
	{
		struct EOSCorePlayerDataStorageWriteFile_eventEOSPlayerDataStorageWriteFileAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSPlayerDataStorageWriteFileOptions options;
			UEOSCorePlayerDataStorageWriteFile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageWriteFile_eventEOSPlayerDataStorageWriteFileAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageWriteFile_eventEOSPlayerDataStorageWriteFileAsync_Parms, options), Z_Construct_UScriptStruct_FEOSPlayerDataStorageWriteFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageWriteFile_eventEOSPlayerDataStorageWriteFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|PlayerDataStorage|Async" },
		{ "Comment", "/**\n     * Write new data to a specific file, potentially overwriting any existing file by the same name, to the cloud. This request will occur asynchronously, potentially over multiple frames.\n     * All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at least once if the\n     * request is started successfully.\n     *\n     * @param WriteOptions Object containing properties related to which user is writing the file, what the file's name is, and related mechanisms for writing the data\n     * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n     * @param callback This function is called when the write operation completes\n     * @return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n     *\n     * @see EOS_PlayerDataStorageFileTransferRequest_Release\n     */" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "Write new data to a specific file, potentially overwriting any existing file by the same name, to the cloud. This request will occur asynchronously, potentially over multiple frames.\nAll callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at least once if the\nrequest is started successfully.\n\n@param WriteOptions Object containing properties related to which user is writing the file, what the file's name is, and related mechanisms for writing the data\n@param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n@param callback This function is called when the write operation completes\n@return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n\n@see EOS_PlayerDataStorageFileTransferRequest_Release" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile, nullptr, "EOSPlayerDataStorageWriteFileAsync", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageWriteFile_eventEOSPlayerDataStorageWriteFileAsync_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics
	{
		struct EOSCorePlayerDataStorageWriteFile_eventHandleCallback_Parms
		{
			FEOSPlayerDataStorageWriteFileCallbackInfo data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCorePlayerDataStorageWriteFile_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCorePlayerDataStorageWriteFile_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCorePlayerDataStorageWriteFile_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSPlayerDataStorageWriteFileCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCorePlayerDataStorageWriteFile_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_NoRegister()
	{
		return UEOSCorePlayerDataStorageWriteFile::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync, "EOSPlayerDataStorageWriteFileAsync" }, // 3651288870
		{ &Z_Construct_UFunction_UEOSCorePlayerDataStorageWriteFile_HandleCallback, "HandleCallback" }, // 4111622836
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCorePlayerDataStorageWriteFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCorePlayerDataStorageWriteFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerDataStorage/EOSPlayerDataStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCorePlayerDataStorageWriteFile, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnWriteFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCorePlayerDataStorageWriteFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::ClassParams = {
		&UEOSCorePlayerDataStorageWriteFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCorePlayerDataStorageWriteFile, 3347113991);
	template<> EOSCORE_API UClass* StaticClass<UEOSCorePlayerDataStorageWriteFile>()
	{
		return UEOSCorePlayerDataStorageWriteFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCorePlayerDataStorageWriteFile(Z_Construct_UClass_UEOSCorePlayerDataStorageWriteFile, &UEOSCorePlayerDataStorageWriteFile::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCorePlayerDataStorageWriteFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCorePlayerDataStorageWriteFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
