// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EOSCore/Public/TitleStorage/EOSTitleStorageAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSTitleStorageAsyncActions() {}
// Cross Module References
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreTitleStorageQueryFile();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_EOSCore();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileListOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileListCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileListCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreTitleStorageReadFile_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreTitleStorageReadFile();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageReadFileOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageReadFileCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageReadFileCompleteCallbackDelegate__DelegateSignature();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_NoRegister();
	EOSCORE_API UClass* Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageDeleteCacheOptions();
	EOSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageDeleteCacheCallbackInfo();
	EOSCORE_API UFunction* Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageDeleteCacheCompleteCallbackDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCoreTitleStorageQueryFile::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSTitleStorageQueryFileCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreTitleStorageQueryFile::execEOSTitleStorageQueryFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSTitleStorageQueryFileOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreTitleStorageQueryFile**)Z_Param__Result=UEOSCoreTitleStorageQueryFile::EOSTitleStorageQueryFileAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreTitleStorageQueryFile::StaticRegisterNativesUEOSCoreTitleStorageQueryFile()
	{
		UClass* Class = UEOSCoreTitleStorageQueryFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSTitleStorageQueryFileAsync", &UEOSCoreTitleStorageQueryFile::execEOSTitleStorageQueryFileAsync },
			{ "HandleCallback", &UEOSCoreTitleStorageQueryFile::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics
	{
		struct EOSCoreTitleStorageQueryFile_eventEOSTitleStorageQueryFileAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSTitleStorageQueryFileOptions options;
			UEOSCoreTitleStorageQueryFile* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageQueryFile_eventEOSTitleStorageQueryFileAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageQueryFile_eventEOSTitleStorageQueryFileAsync_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageQueryFile_eventEOSTitleStorageQueryFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|TitleStorage|Async" },
		{ "Comment", "/**\n\x09 * Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened. Once a file has\n\x09 * been queried, its metadata will be available by the EOSTitleStorageCopyFileMetadataAtIndex and EOSTitleStorageCopyFileMetadataByFilename functions.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is querying files, and what file is being queried\n\x09 * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n\x09 * @param callback This function is called when the query operation completes\n\x09 *\n\x09 * @see EOSTitleStorageGetFileMetadataCount\n\x09 * @see EOSTitleStorageCopyFileMetadataAtIndex\n\x09 * @see EOSTitleStorageCopyFileMetadataByFilename\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ToolTip", "Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened. Once a file has\nbeen queried, its metadata will be available by the EOSTitleStorageCopyFileMetadataAtIndex and EOSTitleStorageCopyFileMetadataByFilename functions.\n\n@param Options Object containing properties related to which user is querying files, and what file is being queried\n@param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n@param callback This function is called when the query operation completes\n\n@see EOSTitleStorageGetFileMetadataCount\n@see EOSTitleStorageCopyFileMetadataAtIndex\n@see EOSTitleStorageCopyFileMetadataByFilename" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreTitleStorageQueryFile, nullptr, "EOSTitleStorageQueryFileAsync", nullptr, nullptr, sizeof(EOSCoreTitleStorageQueryFile_eventEOSTitleStorageQueryFileAsync_Parms), Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics
	{
		struct EOSCoreTitleStorageQueryFile_eventHandleCallback_Parms
		{
			FEOSTitleStorageQueryFileCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreTitleStorageQueryFile_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreTitleStorageQueryFile_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageQueryFile_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreTitleStorageQueryFile, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreTitleStorageQueryFile_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_NoRegister()
	{
		return UEOSCoreTitleStorageQueryFile::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync, "EOSTitleStorageQueryFileAsync" }, // 1939576120
		{ &Z_Construct_UFunction_UEOSCoreTitleStorageQueryFile_HandleCallback, "HandleCallback" }, // 1523465713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreTitleStorageQueryFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreTitleStorageQueryFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreTitleStorageQueryFile, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreTitleStorageQueryFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::ClassParams = {
		&UEOSCoreTitleStorageQueryFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreTitleStorageQueryFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreTitleStorageQueryFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreTitleStorageQueryFile, 2698945820);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreTitleStorageQueryFile>()
	{
		return UEOSCoreTitleStorageQueryFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreTitleStorageQueryFile(Z_Construct_UClass_UEOSCoreTitleStorageQueryFile, &UEOSCoreTitleStorageQueryFile::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreTitleStorageQueryFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreTitleStorageQueryFile);
	DEFINE_FUNCTION(UEOSCoreTitleStorageQueryFileList::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSTitleStorageQueryFileListCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreTitleStorageQueryFileList::execEOSTitleStorageQueryFileListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSTitleStorageQueryFileListOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreTitleStorageQueryFileList**)Z_Param__Result=UEOSCoreTitleStorageQueryFileList::EOSTitleStorageQueryFileListAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreTitleStorageQueryFileList::StaticRegisterNativesUEOSCoreTitleStorageQueryFileList()
	{
		UClass* Class = UEOSCoreTitleStorageQueryFileList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSTitleStorageQueryFileListAsync", &UEOSCoreTitleStorageQueryFileList::execEOSTitleStorageQueryFileListAsync },
			{ "HandleCallback", &UEOSCoreTitleStorageQueryFileList::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics
	{
		struct EOSCoreTitleStorageQueryFileList_eventEOSTitleStorageQueryFileListAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSTitleStorageQueryFileListOptions options;
			UEOSCoreTitleStorageQueryFileList* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageQueryFileList_eventEOSTitleStorageQueryFileListAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageQueryFileList_eventEOSTitleStorageQueryFileListAsync_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileListOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageQueryFileList_eventEOSTitleStorageQueryFileListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|TitleStorage|Async" },
		{ "Comment", "/**\n\x09 * Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files available for current user based on their settings (such as game role) and tags provided.\n\x09 * This is not required before a file can be downloaded by name.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is querying files and the list of tags\n\x09 * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n\x09 * @param callback This function is called when the query operation completes\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ToolTip", "Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files available for current user based on their settings (such as game role) and tags provided.\nThis is not required before a file can be downloaded by name.\n\n@param Options Object containing properties related to which user is querying files and the list of tags\n@param ClientData Optional pointer to help clients track this request, that is returned in the completion callback\n@param callback This function is called when the query operation completes" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList, nullptr, "EOSTitleStorageQueryFileListAsync", nullptr, nullptr, sizeof(EOSCoreTitleStorageQueryFileList_eventEOSTitleStorageQueryFileListAsync_Parms), Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics
	{
		struct EOSCoreTitleStorageQueryFileList_eventHandleCallback_Parms
		{
			FEOSTitleStorageQueryFileListCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreTitleStorageQueryFileList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreTitleStorageQueryFileList_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageQueryFileList_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSTitleStorageQueryFileListCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreTitleStorageQueryFileList_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_NoRegister()
	{
		return UEOSCoreTitleStorageQueryFileList::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync, "EOSTitleStorageQueryFileListAsync" }, // 767897160
		{ &Z_Construct_UFunction_UEOSCoreTitleStorageQueryFileList_HandleCallback, "HandleCallback" }, // 2029576816
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreTitleStorageQueryFileList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreTitleStorageQueryFileList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreTitleStorageQueryFileList, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageQueryFileListCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreTitleStorageQueryFileList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::ClassParams = {
		&UEOSCoreTitleStorageQueryFileList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreTitleStorageQueryFileList, 2109323823);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreTitleStorageQueryFileList>()
	{
		return UEOSCoreTitleStorageQueryFileList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreTitleStorageQueryFileList(Z_Construct_UClass_UEOSCoreTitleStorageQueryFileList, &UEOSCoreTitleStorageQueryFileList::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreTitleStorageQueryFileList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreTitleStorageQueryFileList);
	DEFINE_FUNCTION(UEOSCoreTitleStorageReadFile::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSTitleStorageReadFileCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreTitleStorageReadFile::execEOSTitleStorageReadFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSTitleStorageReadFileOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreTitleStorageReadFile**)Z_Param__Result=UEOSCoreTitleStorageReadFile::EOSTitleStorageReadFileAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreTitleStorageReadFile::StaticRegisterNativesUEOSCoreTitleStorageReadFile()
	{
		UClass* Class = UEOSCoreTitleStorageReadFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSTitleStorageReadFileAsync", &UEOSCoreTitleStorageReadFile::execEOSTitleStorageReadFileAsync },
			{ "HandleCallback", &UEOSCoreTitleStorageReadFile::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics
	{
		struct EOSCoreTitleStorageReadFile_eventEOSTitleStorageReadFileAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSTitleStorageReadFileOptions options;
			UEOSCoreTitleStorageReadFile* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageReadFile_eventEOSTitleStorageReadFileAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreTitleStorageReadFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageReadFile_eventEOSTitleStorageReadFileAsync_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageReadFileOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageReadFile_eventEOSTitleStorageReadFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|TitleStorage|Async" },
		{ "Comment", "/**\n\x09 * Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over\n\x09 * multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at\n\x09 * least once if the request is started successfully.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data\n\x09 * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n\x09 * @param callback This function is called when the read operation completes\n\x09 * @return A valid Title Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n\x09 *\n\x09 * @see EOS_TitleStorageFileTransferRequest_Release\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ToolTip", "Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over\nmultiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at\nleast once if the request is started successfully.\n\n@param Options Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data\n@param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n@param callback This function is called when the read operation completes\n@return A valid Title Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed\n\n@see EOS_TitleStorageFileTransferRequest_Release" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreTitleStorageReadFile, nullptr, "EOSTitleStorageReadFileAsync", nullptr, nullptr, sizeof(EOSCoreTitleStorageReadFile_eventEOSTitleStorageReadFileAsync_Parms), Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics
	{
		struct EOSCoreTitleStorageReadFile_eventHandleCallback_Parms
		{
			FEOSTitleStorageReadFileCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreTitleStorageReadFile_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreTitleStorageReadFile_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageReadFile_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSTitleStorageReadFileCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreTitleStorageReadFile, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreTitleStorageReadFile_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreTitleStorageReadFile_NoRegister()
	{
		return UEOSCoreTitleStorageReadFile::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync, "EOSTitleStorageReadFileAsync" }, // 3873879781
		{ &Z_Construct_UFunction_UEOSCoreTitleStorageReadFile_HandleCallback, "HandleCallback" }, // 1063469560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreTitleStorageReadFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreTitleStorageReadFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreTitleStorageReadFile, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageReadFileCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreTitleStorageReadFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::ClassParams = {
		&UEOSCoreTitleStorageReadFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreTitleStorageReadFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreTitleStorageReadFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreTitleStorageReadFile, 1102444298);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreTitleStorageReadFile>()
	{
		return UEOSCoreTitleStorageReadFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreTitleStorageReadFile(Z_Construct_UClass_UEOSCoreTitleStorageReadFile, &UEOSCoreTitleStorageReadFile::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreTitleStorageReadFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreTitleStorageReadFile);
	DEFINE_FUNCTION(UEOSCoreTitleStorageDeleteCache::execHandleCallback)
	{
		P_GET_STRUCT_REF(FEOSTitleStorageDeleteCacheCallbackInfo,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCoreTitleStorageDeleteCache::execEOSTitleStorageDeleteCacheAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEOSTitleStorageDeleteCacheOptions,Z_Param_options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCoreTitleStorageDeleteCache**)Z_Param__Result=UEOSCoreTitleStorageDeleteCache::EOSTitleStorageDeleteCacheAsync(Z_Param_WorldContextObject,Z_Param_options);
		P_NATIVE_END;
	}
	void UEOSCoreTitleStorageDeleteCache::StaticRegisterNativesUEOSCoreTitleStorageDeleteCache()
	{
		UClass* Class = UEOSCoreTitleStorageDeleteCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EOSTitleStorageDeleteCacheAsync", &UEOSCoreTitleStorageDeleteCache::execEOSTitleStorageDeleteCacheAsync },
			{ "HandleCallback", &UEOSCoreTitleStorageDeleteCache::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics
	{
		struct EOSCoreTitleStorageDeleteCache_eventEOSTitleStorageDeleteCacheAsync_Parms
		{
			UObject* WorldContextObject;
			FEOSTitleStorageDeleteCacheOptions options;
			UEOSCoreTitleStorageDeleteCache* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageDeleteCache_eventEOSTitleStorageDeleteCacheAsync_Parms, ReturnValue), Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageDeleteCache_eventEOSTitleStorageDeleteCacheAsync_Parms, options), Z_Construct_UScriptStruct_FEOSTitleStorageDeleteCacheOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageDeleteCache_eventEOSTitleStorageDeleteCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::NewProp_options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOSCore|TitleStorage|Async" },
		{ "Comment", "/**\n\x09 * Clear previously cached file data. This operation will be done asynchronously. All cached files except those corresponding to the transfers in progress will be removed.\n\x09 * Warning: Use this with care. Cache system generally tries to clear old and unused cached files from time to time. Unnecessarily clearing cache can degrade performance as SDK will have to re-download data.\n\x09 *\n\x09 * @param Options Object containing properties related to which user is deleting cache\n\x09 * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n\x09 * @param callback This function is called when the delete cache operation completes\n\x09 * @return EOS_Success if the operation was started correctly, otherwise an error result explaining what went wrong\n\x09 */" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ToolTip", "Clear previously cached file data. This operation will be done asynchronously. All cached files except those corresponding to the transfers in progress will be removed.\nWarning: Use this with care. Cache system generally tries to clear old and unused cached files from time to time. Unnecessarily clearing cache can degrade performance as SDK will have to re-download data.\n\n@param Options Object containing properties related to which user is deleting cache\n@param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks\n@param callback This function is called when the delete cache operation completes\n@return EOS_Success if the operation was started correctly, otherwise an error result explaining what went wrong" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache, nullptr, "EOSTitleStorageDeleteCacheAsync", nullptr, nullptr, sizeof(EOSCoreTitleStorageDeleteCache_eventEOSTitleStorageDeleteCacheAsync_Parms), Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics
	{
		struct EOSCoreTitleStorageDeleteCache_eventHandleCallback_Parms
		{
			FEOSTitleStorageDeleteCacheCallbackInfo data;
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
	void Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EOSCoreTitleStorageDeleteCache_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCoreTitleStorageDeleteCache_eventHandleCallback_Parms), &Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCoreTitleStorageDeleteCache_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FEOSTitleStorageDeleteCacheCallbackInfo, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache, nullptr, "HandleCallback", nullptr, nullptr, sizeof(EOSCoreTitleStorageDeleteCache_eventHandleCallback_Parms), Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_NoRegister()
	{
		return UEOSCoreTitleStorageDeleteCache::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics
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
	UObject* (*const Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EOSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync, "EOSTitleStorageDeleteCacheAsync" }, // 3226189186
		{ &Z_Construct_UFunction_UEOSCoreTitleStorageDeleteCache_HandleCallback, "HandleCallback" }, // 3955653690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UEOSCoreTitleStorageDeleteCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UEOSCoreTitleStorageDeleteCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/TitleStorage/EOSTitleStorageAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCoreTitleStorageDeleteCache, OnCallback), Z_Construct_UDelegateFunction_EOSCore_OnTitleStorageDeleteCacheCompleteCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCoreTitleStorageDeleteCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::ClassParams = {
		&UEOSCoreTitleStorageDeleteCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCoreTitleStorageDeleteCache, 2436434161);
	template<> EOSCORE_API UClass* StaticClass<UEOSCoreTitleStorageDeleteCache>()
	{
		return UEOSCoreTitleStorageDeleteCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCoreTitleStorageDeleteCache(Z_Construct_UClass_UEOSCoreTitleStorageDeleteCache, &UEOSCoreTitleStorageDeleteCache::StaticClass, TEXT("/Script/EOSCore"), TEXT("UEOSCoreTitleStorageDeleteCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCoreTitleStorageDeleteCache);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
