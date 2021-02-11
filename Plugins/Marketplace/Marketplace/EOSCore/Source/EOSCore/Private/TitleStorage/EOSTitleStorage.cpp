/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "TitleStorage/EOSTitleStorage.h"
#include "eos_titlestorage.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

static size_t MaxChunkSizeTitleStorage = 4 * 4 * 4096;

UCoreTitleStorage* UCoreTitleStorage::TitleStorageObject = nullptr;
FTitleStorageTransferInProgress UCoreTitleStorage::CurrentRead;

UCoreTitleStorage::UCoreTitleStorage()
{
	TitleStorageObject = this;
}

void UCoreTitleStorage::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UCoreTitleStorage::Deinitialize()
{
	Super::Deinitialize();
}

void UCoreTitleStorage::EOSTitleStorageQueryFile(const FEOSTitleStorageQueryFileOptions options, const FOnTitleStorageQueryFileCompleteCallback& callback)
{
	LogVerbose("");

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_FileName = TCHAR_TO_UTF8(*options.Filename);
		EOS_TitleStorage_QueryFileOptions m_Options = { options.ApiVersion, options.LocalUserId, m_FileName.c_str() };

		FQueryFileOptionsCallback* m_Data = new FQueryFileOptionsCallback({ this, callback });
		EOS_TitleStorage_QueryFile(EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnTitleStorageQueryFileCallback);
	}
}

void UCoreTitleStorage::EOSTitleStorageQueryFileList(const FEOSTitleStorageQueryFileListOptions options, const FOnTitleStorageQueryFileListCompleteCallback& callback)
{
	LogVerbose("");

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_TitleStorage_QueryFileListOptions m_Options = { options.ApiVersion, options.LocalUserId };
		TArray<const char*> m_Arr;

		for (int32 i = 0; i < options.ListOfTags.Num(); i++)
		{
			m_Arr.Add(TCHAR_TO_UTF8(*options.ListOfTags[i]));
		}

		m_Options.ListOfTagsCount = options.ListOfTags.Num();

		m_Options.ListOfTags = m_Arr.GetData();

		FQueryFileListOptionsCallback* m_Data = new FQueryFileListOptionsCallback({ this, callback });
		EOS_TitleStorage_QueryFileList(EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnTitleStorageQueryFileListCallback);
	}
}

EOSResult UCoreTitleStorage::EOSTitleStorageCopyFileMetadataByFilename(const FEOSTitleStorageCopyFileMetadataByFilenameOptions options, FEOSTitleStorageFileMetadata& outMetadata)
{
	LogVerbose("");

	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_FileName = TCHAR_TO_UTF8(*options.Filename);
		EOS_TitleStorage_CopyFileMetadataByFilenameOptions m_Options = { options.ApiVersion, options.LocalUserId, m_FileName.c_str() };
		EOS_TitleStorage_FileMetadata* m_MetaData = NULL;
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_TitleStorage_CopyFileMetadataByFilename(EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_MetaData));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			outMetadata = *m_MetaData;
			EOS_TitleStorage_FileMetadata_Release(m_MetaData);
		}
	}

	return m_Result;
}

int32 UCoreTitleStorage::EOSTitleStorageGetFileMetadataCount(const FEOSTitleStorageGetFileMetadataCountOptions options)
{
	LogVerbose("");

	int32 m_Result = 0;

	if (EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_TitleStorage_GetFileMetadataCountOptions m_Options = { options.ApiVersion, options.LocalUserId };
		m_Result = EOS_TitleStorage_GetFileMetadataCount(EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()), &m_Options);
	}

	return m_Result;
}

EOSResult UCoreTitleStorage::EOSTitleStorageCopyFileMetadataAtIndex(FEOSTitleStorageCopyFileMetadataAtIndexOptions options, FEOSTitleStorageFileMetadata& outMetadata)
{
	LogVerbose("");

	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_TitleStorage_CopyFileMetadataAtIndexOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<uint32_t>(options.Index) };
		EOS_TitleStorage_FileMetadata* m_MetaData = NULL;
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_TitleStorage_CopyFileMetadataAtIndex(EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_MetaData));

		if (m_Result == EOSResult::EOS_Success)
		{
			outMetadata = *m_MetaData;
			EOS_TitleStorage_FileMetadata_Release(m_MetaData);
		}
	}

	return m_Result;
}

FEOSTitleStorageFileTransferRequestHandle UCoreTitleStorage::EOSTitleStorageReadFile(FEOSTitleStorageReadFileOptions options, const FOnTitleStorageReadFileCompleteCallback& callback)
{
	LogVerbose("");

	FEOSTitleStorageFileTransferRequestHandle m_Handle;

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_FileName = TCHAR_TO_UTF8(*options.Filename);
		EOS_TitleStorage_ReadFileOptions m_Options = { options.ApiVersion, options.LocalUserId, m_FileName.c_str(), static_cast<uint32_t>(MaxChunkSizeTitleStorage), OnReadFileDataCallback, OnFileTransferProgressCallback };

		FReadFileCallback* m_Data = new FReadFileCallback({ this, callback });
		m_Handle = EOS_TitleStorage_ReadFile(EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnTitleStorageReadFileCallback);

		CurrentRead.LocalFile = options.SaveFileName;
		CurrentRead.CurrentTransferHandle = m_Handle;
	}

	return m_Handle;
}

EOSResult UCoreTitleStorage::EOSTitleStorageDeleteCache(FEOSTitleStorageDeleteCacheOptions options, const FOnTitleStorageDeleteCacheCompleteCallback& callback)
{
	LogVerbose("");

	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetAchievementsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_TitleStorage_DeleteCacheOptions m_Options = { options.ApiVersion, options.LocalUserId };

		FDeleteCacheCallback* m_Data = new FDeleteCacheCallback({ this, callback });
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_TitleStorage_DeleteCache(EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnTitleStorageDeleteCacheCallback));
	}

	return m_Result;
}

EOSResult UCoreTitleStorage::EOSTitleStorageFileTransferRequestGetFileRequestState(FEOSTitleStorageFileTransferRequestHandle handle)
{
	LogVerbose("");

	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()))
	{
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_TitleStorageFileTransferRequest_GetFileRequestState(handle));
	}

	return m_Result;
}

EOSResult UCoreTitleStorage::EOSTitleStorageFileTransferRequestGetFilename(FEOSTitleStorageFileTransferRequestHandle handle, int32 filenameStringBufferSizeBytes, FString& outStringBuffer)
{
	LogVerbose("");

	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()))
	{
		char m_Arr[EOS_TITLESTORAGE_FILENAME_MAX_LENGTH_BYTES + 1];
		int32_t* m_Length = nullptr;
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_TitleStorageFileTransferRequest_GetFilename(handle, (EOS_TITLESTORAGE_FILENAME_MAX_LENGTH_BYTES+1), m_Arr, m_Length));

		if (m_Result == EOSResult::EOS_Success)
		{
			outStringBuffer = UTF8_TO_TCHAR(m_Arr);
		}
	}

	return m_Result;
}

EOSResult UCoreTitleStorage::EOSTitleStorageFileTransferRequestCancelRequest(FEOSTitleStorageFileTransferRequestHandle handle)
{
	LogVerbose("");

	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetTitleStorageInterface(FPlatform::GetPlatformHandle()))
	{
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_TitleStorageFileTransferRequest_CancelRequest(handle));
	}

	return m_Result;
}

void UCoreTitleStorage::Internal_OnTitleStorageQueryFileCallback(const EOS_TitleStorage_QueryFileCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryFileOptionsCallback* m_Data = static_cast<FQueryFileOptionsCallback*>(data->ClientData);
	check(m_Data);
	
	if (m_Data)
	{
		UCoreTitleStorage* m_TitleStorage = m_Data->TitleStorageObject;
		check(m_TitleStorage);

		if (m_TitleStorage)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_TitleStorage->OnTitleStorageQueryFileCompleteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}

}

void UCoreTitleStorage::Internal_OnTitleStorageQueryFileListCallback(const EOS_TitleStorage_QueryFileListCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FQueryFileListOptionsCallback* m_Data = static_cast<FQueryFileListOptionsCallback*>(data->ClientData);
	check(m_Data);

	if (m_Data)
	{
		UCoreTitleStorage* m_TitleStorage = m_Data->TitleStorageObject;
		check(m_TitleStorage);

		if (m_TitleStorage)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_TitleStorage->OnTitleStorageQueryFileListCompleteCallbackDelegate.Broadcast(*data);

		}
		delete m_Data;
	}
}

void UCoreTitleStorage::Internal_OnTitleStorageDeleteCacheCallback(const EOS_TitleStorage_DeleteCacheCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FDeleteCacheCallback* m_Data = static_cast<FDeleteCacheCallback*>(data->ClientData);
	check(m_Data);

	if (m_Data)
	{
		UCoreTitleStorage* m_TitleStorage = m_Data->TitleStorageObject;
		check(m_TitleStorage);

		if (m_TitleStorage)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_TitleStorage->OnTitleStorageDeleteCacheCompleteCallbackDelegate.Broadcast(*data);

			delete m_Data;
		}
	}
}

void UCoreTitleStorage::Internal_OnTitleStorageReadFileCallback(const EOS_TitleStorage_ReadFileCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FReadFileCallback* m_Data = static_cast<FReadFileCallback*>(data->ClientData);
	check(m_Data);

	if (data->ResultCode == EOS_EResult::EOS_Success)
	{
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		IFileHandle* m_Handle = PlatformFile.OpenWrite(*CurrentRead.LocalFile);

		if (m_Handle)
		{
			if (m_Handle->Write(CurrentRead.Data.GetData(), CurrentRead.Data.Num()))
			{
				LogVerbose("");
			}

			delete m_Handle;
		}
	}

	CurrentRead.Reset();

	if (m_Data)
	{
		UCoreTitleStorage* m_TitleStorage = m_Data->TitleStorageObject;
		check(m_TitleStorage);

		if (m_TitleStorage)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_TitleStorage->OnTitleStorageReadFileCompleteCallbackDelegate.Broadcast(*data);

			delete m_Data;
		}
	}
}

EOS_TitleStorage_EReadResult UCoreTitleStorage::OnReadFileDataCallback(const EOS_TitleStorage_ReadFileDataCallbackInfo* data)
{
	LogVerbose("");

	if (data)
	{
		return TitleStorageObject->ReceiveData(data->Filename, data->DataChunk, data->DataChunkLengthBytes, data->TotalFileSizeBytes);
	}
	else
	{
		return EOS_TitleStorage_EReadResult::EOS_TS_RR_FailRequest;
	}
}

void UCoreTitleStorage::OnFileTransferProgressCallback(const EOS_TitleStorage_FileTransferProgressCallbackInfo* data)
{
	LogVerbose("Transfered: %d/%d", data->BytesTransferred, data->TotalFileSizeBytes);
}

EOS_TitleStorage_EReadResult UCoreTitleStorage::ReceiveData(const FString& filename, const void* data, size_t numBytes, size_t totalSize)
{
	LogVerbose("");

	if (data)
	{
		// initialize struct
		if (CurrentRead.CurrentIndex == 0 && CurrentRead.TotalSize == 0)
		{
			CurrentRead.TotalSize = totalSize;

			if (CurrentRead.TotalSize == 0)
			{
				return EOS_TitleStorage_EReadResult::EOS_TS_RR_ContinueReading;
			}

			CurrentRead.Data.SetNum(totalSize);
		}

		if (CurrentRead.TotalSize - CurrentRead.CurrentIndex >= numBytes)
		{
			memcpy(static_cast<void*>(&CurrentRead.Data[CurrentRead.CurrentIndex]), data, numBytes);
			CurrentRead.CurrentIndex += numBytes;

			return EOS_TitleStorage_EReadResult::EOS_TS_RR_ContinueReading;
		}
		else
		{
			LogWarning("Could not receive data: too much of it!");

			return EOS_TitleStorage_EReadResult::EOS_TS_RR_FailRequest;
		}
	}
	else
	{
		LogWarning("Could not receive data: Data pointer is null!");

		return EOS_TitleStorage_EReadResult::EOS_TS_RR_FailRequest;
	}

	return EOS_TitleStorage_EReadResult::EOS_TS_RR_CancelRequest;
}
