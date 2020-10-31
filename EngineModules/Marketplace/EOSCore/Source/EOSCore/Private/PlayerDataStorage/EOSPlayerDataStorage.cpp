/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "PlayerDataStorage/EOSPlayerDataStorage.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCoreLogging.h"

static size_t MaxChunkSize = 4096;

UCorePlayerDataStorage* UCorePlayerDataStorage::PlayerDataStorageObject = nullptr;
FEOSHPlayerDataStorageFileTransferRequest UCorePlayerDataStorage::FileTransferHandleRead = nullptr;
FEOSHPlayerDataStorageFileTransferRequest UCorePlayerDataStorage::FileTransferHandleWrite = nullptr;
FTransferInProgress UCorePlayerDataStorage::CurrentRead;
FTransferInProgress UCorePlayerDataStorage::CurrentWrite;

UCorePlayerDataStorage::UCorePlayerDataStorage()
{
	PlayerDataStorageObject = this;
}

void UCorePlayerDataStorage::EOSPlayerDataStorageQueryFile(FEOSPlayerDataStorageQueryFileOptions queryFileOptions, const FOnQueryFileCompleteCallback& callback)
{
	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PlayerDataStorage_QueryFileOptions m_Options = { queryFileOptions.ApiVersion, queryFileOptions.LocalUserId, TCHAR_TO_UTF8(*queryFileOptions.Filename) };
		FFileCompleteCallback* m_Data = new FFileCompleteCallback({ this, callback });
		EOS_PlayerDataStorage_QueryFile(EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnPlayerDataStorageQueryFileCallback);
	}
}

void UCorePlayerDataStorage::EOSPlayerDataStorageQueryFileList(FEOSPlayerDataStorageQueryFileListOptions queryFileListOptions, const FOnQueryFileListCompleteCallback& callback)
{
	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PlayerDataStorage_QueryFileListOptions m_Options = { queryFileListOptions.ApiVersion, queryFileListOptions.LocalUserId };
		FFileListCompleteCallback* m_Data = new FFileListCompleteCallback({ this, callback });
		EOS_PlayerDataStorage_QueryFileList(EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnPlayerDataStorageQueryFileListCallback);
	}
}

EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageCopyFileMetadataByFilename(FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions copyFileMetadataOptions, FEOSPlayerDataStorageFileMetadata& outMetadata)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		std::string fileName = TCHAR_TO_UTF8(*copyFileMetadataOptions.Filename);

		EOS_PlayerDataStorage_CopyFileMetadataByFilenameOptions m_Options = { copyFileMetadataOptions.ApiVersion, copyFileMetadataOptions.LocalUserId, fileName.c_str() };
		EOS_PlayerDataStorage_FileMetadata* m_MetaData = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PlayerDataStorage_CopyFileMetadataByFilename(EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_MetaData));

		if (m_Result == EOSResult::EOS_Success)
		{
			outMetadata = *m_MetaData;
		}
	}

	return m_Result;
}

EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageGetFileMetadataCount(FEOSPlayerDataStorageGetFileMetadataCountOptions getFileMetadataCountOptions, int32& outFileMetadataCount)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PlayerDataStorage_GetFileMetadataCountOptions m_Options = { getFileMetadataCountOptions.ApiVersion, getFileMetadataCountOptions.LocalUserId };

		int32_t m_OutFileMetadataCount = 0;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PlayerDataStorage_GetFileMetadataCount(EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_OutFileMetadataCount));

		if (m_Result == EOSResult::EOS_Success)
		{
			outFileMetadataCount = m_OutFileMetadataCount;
		}
	}

	return m_Result;
}

EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageCopyFileMetadataAtIndex(FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions copyFileMetadataOptions, FEOSPlayerDataStorageFileMetadata& outMetadata)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PlayerDataStorage_CopyFileMetadataAtIndexOptions m_Options = { copyFileMetadataOptions.ApiVersion, copyFileMetadataOptions.LocalUserId, static_cast<uint32_t>(copyFileMetadataOptions.Index) };
		EOS_PlayerDataStorage_FileMetadata* m_OutMetadata = NULL;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PlayerDataStorage_CopyFileMetadataAtIndex(EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_OutMetadata));

		if (m_Result == EOSResult::EOS_Success)
		{
			outMetadata = *m_OutMetadata;
		}
	}

	return m_Result;
}

void UCorePlayerDataStorage::EOSPlayerDataStorageDuplicateFile(FEOSPlayerDataStorageDuplicateFileOptions duplicateOptions, const FOnDuplicateFileCompleteCallback& callback)
{
	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		std::string m_Source = TCHAR_TO_UTF8(*duplicateOptions.SourceFilename);
		std::string m_Dest = TCHAR_TO_UTF8(*duplicateOptions.DestinationFilename);

		EOS_PlayerDataStorage_DuplicateFileOptions m_Options = { duplicateOptions.ApiVersion, duplicateOptions.LocalUserId, m_Source.c_str(), m_Dest.c_str() };
		FDuplicateFileCompleteCallback* m_Data = new FDuplicateFileCompleteCallback({ this, callback });
		EOS_PlayerDataStorage_DuplicateFile(EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnPlayerDataStorageDuplicateFileCallback);
	}
}

void UCorePlayerDataStorage::EOSPlayerDataStorageDeleteFile(FEOSPlayerDataStorageDeleteFileOptions deleteOptions, const FOnDeleteFileCompleteCallback& callback)
{
	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PlayerDataStorage_DeleteFileOptions m_Options = { deleteOptions.ApiVersion, deleteOptions.LocalUserId, TCHAR_TO_UTF8(*deleteOptions.Filename) };
		FDeleteFileCompleteCallback* m_Data = new FDeleteFileCompleteCallback({ this, callback });
		EOS_PlayerDataStorage_DeleteFile(EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnPlayerDataStorageDeleteFileCallback);
	}
}

void UCorePlayerDataStorage::EOSPlayerDataStorageReadFile(FEOSPlayerDataStorageReadFileOptions readOptions, const FOnReadFileCompleteCallback& callback)
{
	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PlayerDataStorage_ReadFileOptions m_Options = { readOptions.ApiVersion, readOptions.LocalUserId, TCHAR_TO_UTF8(*readOptions.RemoteFile), static_cast<uint32_t>(MaxChunkSize), OnFileDataReceived, OnFileTransferProgressUpdated };

		CurrentRead.LocalFile = readOptions.LocalFile;
		FReadFileCompleteCallback* m_Data = new FReadFileCompleteCallback({ this, callback });
		FileTransferHandleRead = EOS_PlayerDataStorage_ReadFile(EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnPlayerDataStorageReadFileCallback);
	}
}

void UCorePlayerDataStorage::EOSPlayerDataStorageWriteFile(FEOSPlayerDataStorageWriteFileOptions writeOptions, const FOnWriteFileCompleteCallback& callback)
{
	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

		if (!PlatformFile.FileExists(*writeOptions.LocalFile))
		{
			LogWarning("File does not exist!");

			return;
		}

		EOS_PlayerDataStorage_WriteFileOptions m_Options = { writeOptions.ApiVersion, writeOptions.LocalUserId, TCHAR_TO_UTF8(*writeOptions.RemoteFile), static_cast<uint32_t>(MaxChunkSize), OnFileDataSend, OnFileTransferProgressUpdated };

		IFileHandle* m_Handle = PlatformFile.OpenRead(*writeOptions.LocalFile);

		if (m_Handle)
		{
			CurrentWrite.CurrentIndex = 0;

			TArray<uint8> m_Data;
			m_Data.SetNum(m_Handle->Size());

			CurrentWrite.Data.SetNum(m_Handle->Size());
			CurrentWrite.TotalSize = m_Handle->Size();
			m_Handle->Read(m_Data.GetData(), m_Handle->Size());

			memcpy(static_cast<void*>(&CurrentWrite.Data[0]), static_cast<const void*>(&m_Data[0]), m_Data.Num());
			delete m_Handle;
		}

		FWriteFileCompleteCallback* m_Data = new FWriteFileCompleteCallback({ this, callback });
		FileTransferHandleWrite = EOS_PlayerDataStorage_WriteFile(EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()), &m_Options, m_Data, Internal_OnPlayerDataStorageWriteFileCallback);
	}
}

EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestGetFileRequestState(const FEOSHPlayerDataStorageFileTransferRequest& handle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;
	
	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState(handle));
	}

	return m_Result;
}

EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestGetFilename(const FEOSHPlayerDataStorageFileTransferRequest& handle, int32 filenameStringBufferSizeBytes, FString& outStringBuffer)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		char m_StringBuffer;
		int32 m_StringLength;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PlayerDataStorageFileTransferRequest_GetFilename(handle, filenameStringBufferSizeBytes, &m_StringBuffer, &m_StringLength));

		if (m_Result == EOSResult::EOS_Success)
		{
			outStringBuffer = &m_StringBuffer;
		}
	}

	return m_Result;
}

EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestCancelRequest(const FEOSHPlayerDataStorageFileTransferRequest& handle)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_PlayerDataStorageFileTransferRequest_CancelRequest(handle));
	}

	return m_Result;
}

void UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestRelease(const FEOSHPlayerDataStorageFileTransferRequest& handle)
{
	if (EOS_Platform_GetPlayerDataStorageInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_PlayerDataStorageFileTransferRequest_Release(handle);
	}
}

EOS_PlayerDataStorage_EReadResult UCorePlayerDataStorage::OnFileDataReceived(const EOS_PlayerDataStorage_ReadFileDataCallbackInfo* data)
{
	if (data)
	{
		return PlayerDataStorageObject->ReceiveData(data->Filename, data->DataChunk, data->DataChunkLengthBytes, data->TotalFileSizeBytes);
	}
	else
	{
		return EOS_PlayerDataStorage_EReadResult::EOS_RR_FailRequest;
	}
}

EOS_PlayerDataStorage_EReadResult UCorePlayerDataStorage::ReceiveData(const FString& filename, const void* data, size_t numBytes, size_t totalSize)
{
	if (data)
	{
		// initialize struct
		if (CurrentRead.CurrentIndex == 0 && CurrentRead.TotalSize == 0)
		{
			CurrentRead.TotalSize = totalSize;

			if (CurrentRead.TotalSize == 0)
			{
				return EOS_PlayerDataStorage_EReadResult::EOS_RR_ContinueReading;
			}

			CurrentRead.Data.SetNum(totalSize);
		}

		if (CurrentRead.TotalSize - CurrentRead.CurrentIndex >= numBytes)
		{
			memcpy(static_cast<void*>(&CurrentRead.Data[CurrentRead.CurrentIndex]), data, numBytes);
			CurrentRead.CurrentIndex += numBytes;

			return EOS_PlayerDataStorage_EReadResult::EOS_RR_ContinueReading;
		}
		else
		{
			LogWarning("Could not receive data: too much of it!");

			return EOS_PlayerDataStorage_EReadResult::EOS_RR_FailRequest;
		}
	}
	else
	{
		LogWarning("Could not receive data: Data pointer is null!");

		return EOS_PlayerDataStorage_EReadResult::EOS_RR_FailRequest;
	}

	return EOS_PlayerDataStorage_EReadResult::EOS_RR_CancelRequest;
}

void UCorePlayerDataStorage::OnProgress(const EOS_PlayerDataStorage_FileTransferProgressCallbackInfo* data)
{
	if (data)
	{
		OnFileTransferProgressCallbackDelegate.Broadcast(*data);
	}
}

EOS_PlayerDataStorage_EWriteResult UCorePlayerDataStorage::SendData(const FString& filename, void* data, uint32_t* bytesWritten)
{
	if (data && bytesWritten)
	{
		if (CurrentWrite.Done())
		{
			*bytesWritten = 0;

			return EOS_PlayerDataStorage_EWriteResult::EOS_WR_CompleteRequest;
		}

		size_t BytesToWrite = std::min(MaxChunkSize, CurrentWrite.TotalSize - CurrentWrite.CurrentIndex);

		if (BytesToWrite > 0)
		{
			memcpy(data, static_cast<const void*>(&CurrentWrite.Data[CurrentWrite.CurrentIndex]), BytesToWrite);
		}

		*bytesWritten = static_cast<uint32_t>(BytesToWrite);

		CurrentWrite.CurrentIndex += BytesToWrite;

		if (CurrentWrite.Done())
		{
			return EOS_PlayerDataStorage_EWriteResult::EOS_WR_CompleteRequest;
		}
		else
		{
			return EOS_PlayerDataStorage_EWriteResult::EOS_WR_ContinueWriting;
		}
	}
	else
	{
		LogError("Could not send data: pointer is null!");

		return EOS_PlayerDataStorage_EWriteResult::EOS_WR_FailRequest;
	}
}

EOS_PlayerDataStorage_EWriteResult UCorePlayerDataStorage::OnFileDataSend(const EOS_PlayerDataStorage_WriteFileDataCallbackInfo* data, void* outDataBuffer, uint32_t* outDataWritten)
{
	if (data)
	{
		return PlayerDataStorageObject->SendData(data->Filename, outDataBuffer, outDataWritten);
	}

	return EOS_PlayerDataStorage_EWriteResult::EOS_WR_FailRequest;
}

void UCorePlayerDataStorage::OnFileTransferProgressUpdated(const EOS_PlayerDataStorage_FileTransferProgressCallbackInfo* data)
{
	if (data)
	{
		if (data->TotalFileSizeBytes > 0)
		{
			LogVerbose("");
		}

		PlayerDataStorageObject->OnProgress(data);
	}
}

void UCorePlayerDataStorage::Internal_OnPlayerDataStorageQueryFileCallback(const EOS_PlayerDataStorage_QueryFileCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FFileCompleteCallback* m_Data = static_cast<FFileCompleteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCorePlayerDataStorage* m_PlayerDataStorage = m_Data->PlayerDataStorageObject;
		check(m_PlayerDataStorage);

		if (m_PlayerDataStorage)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_PlayerDataStorage->OnQueryFileCompleteCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}

void UCorePlayerDataStorage::Internal_OnPlayerDataStorageQueryFileListCallback(const EOS_PlayerDataStorage_QueryFileListCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FFileListCompleteCallback* m_Data = static_cast<FFileListCompleteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCorePlayerDataStorage* m_PlayerDataStorage = m_Data->PlayerDataStorageObject;
		check(m_PlayerDataStorage);

		if (m_PlayerDataStorage)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_PlayerDataStorage->OnQueryFileListCompleteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCorePlayerDataStorage::Internal_OnPlayerDataStorageDuplicateFileCallback(const EOS_PlayerDataStorage_DuplicateFileCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FDuplicateFileCompleteCallback* m_Data = static_cast<FDuplicateFileCompleteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCorePlayerDataStorage* m_PlayerDataStorage = m_Data->PlayerDataStorageObject;
		check(m_PlayerDataStorage);

		if (m_PlayerDataStorage)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_PlayerDataStorage->OnDuplicateFileCompleteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCorePlayerDataStorage::Internal_OnPlayerDataStorageDeleteFileCallback(const EOS_PlayerDataStorage_DeleteFileCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FDeleteFileCompleteCallback* m_Data = static_cast<FDeleteFileCompleteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCorePlayerDataStorage* m_PlayerDataStorage = m_Data->PlayerDataStorageObject;
		check(m_PlayerDataStorage);

		if (m_PlayerDataStorage)
		{
			m_Data->Callback.ExecuteIfBound(*data);
			m_PlayerDataStorage->OnDeleteFileCompleteCallbackDelegate.Broadcast(*data);
		}

		delete m_Data;
	}
}

void UCorePlayerDataStorage::Internal_OnPlayerDataStorageReadFileCallback(const EOS_PlayerDataStorage_ReadFileCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

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
	
	EOS_PlayerDataStorageFileTransferRequest_CancelRequest(FileTransferHandleRead);
	CurrentRead.Reset();

	FReadFileCompleteCallback* m_Data = static_cast<FReadFileCompleteCallback*>(data->ClientData);
	check(m_Data);
	UCorePlayerDataStorage* m_PlayerDataStorage = m_Data->PlayerDataStorageObject;
	check(m_PlayerDataStorage);

	m_Data->Callback.ExecuteIfBound(*data);
	m_PlayerDataStorage->OnReadFileCompleteCallbackDelegate.Broadcast(*data);

	delete m_Data;
}

void UCorePlayerDataStorage::Internal_OnPlayerDataStorageWriteFileCallback(const EOS_PlayerDataStorage_WriteFileCallbackInfo* data)
{
	LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));

	FWriteFileCompleteCallback* m_Data = static_cast<FWriteFileCompleteCallback*>(data->ClientData);
	check(m_Data);
	if (m_Data)
	{
		UCorePlayerDataStorage* m_PlayerDataStorage = m_Data->PlayerDataStorageObject;
		check(m_PlayerDataStorage);

		if (m_PlayerDataStorage)
		{

			EOS_PlayerDataStorageFileTransferRequest_CancelRequest(FileTransferHandleWrite);
			CurrentWrite.Reset();

			m_Data->Callback.ExecuteIfBound(*data);
			PlayerDataStorageObject->OnWriteFileCompleteCallbackDelegate.Broadcast(*data);
		}

	delete m_Data;
	}
}