/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Core/EOSCoreLibrary.h"
#include "EOSCoreModule.h"
#include "Core/EOSCorePluginPrivatePCH.h"

void UEOSCoreLibrary::BreakLobbyIdStruct(FEOSLobbyId id, FString& outId)
{
	outId = id.LobbyID.c_str();
}

void UEOSCoreLibrary::BreakAccessTokenStruct(FAccessToken token, FString& outToken)
{
	outToken = token.AccessToken.c_str();
}

FAccessToken UEOSCoreLibrary::MakeAccessTokenStruct(FString token)
{
	return FAccessToken(TCHAR_TO_UTF8(*token));
}

void UEOSCoreLibrary::BreakLobbyInviteIdStruct(FLobbyInviteId inviteId, FString& outinviteId)
{
	outinviteId = inviteId.InviteId.c_str();
}

FLobbyInviteId UEOSCoreLibrary::MakeLobbyInviteIdStruct(FString inviteId)
{
	return FLobbyInviteId(TCHAR_TO_UTF8(*inviteId));
}

void UEOSCoreLibrary::BreakUIEventIdStruct(FEOSUIEventId eventId, FString& outEventId)
{
	outEventId = LexToString(eventId.EventId);
}

bool UEOSCoreLibrary::IsLobbyIdValid(FEOSLobbyId id)
{
	return !id.LobbyID.empty();
}

void UEOSCoreLibrary::EOS_Success(EOSResult status, ESuccessFail& result)
{
	if (status == EOSResult::EOS_Success)
		result = ESuccessFail::Success;
		else
		result = ESuccessFail::Fail;
}

bool UEOSCoreLibrary::IsProductUserIdIdenticalWith(FEOSProductUserId a, FEOSProductUserId b)
{
	if (EOSProductUserIdIsValid(a) && EOSProductUserIdIsValid(b))
	{
		FString aString;
		FString bString;

		EOSProductUserIdToString(a, aString);
		EOSProductUserIdToString(b, bString);

		return aString == bString;
	}
	else
	{
		return false;
	}
}

bool UEOSCoreLibrary::IsEpicAccountIdIdenticalWith(FEOSEpicAccountId a, FEOSEpicAccountId b)
{
	if (EOSEpicAccountIdIsValid(a) && EOSEpicAccountIdIsValid(b))
	{
		FString aString;
		FString bString;

		EOSEpicAccountIdToString(a, aString);
		EOSEpicAccountIdToString(b, bString);

		return aString == bString;
	}
	else
	{
		return false;
	}
}

bool UEOSCoreLibrary::IsLobbyIdIdenticalWith(FEOSLobbyId a, FEOSLobbyId b)
{
	return a.LobbyID == b.LobbyID;
}

bool UEOSCoreLibrary::GetSessionAttributeBool(const FEOSSessionsAttributeData& data)
{
	return data.AttributeData.Value.AsBool>0;
}

FString UEOSCoreLibrary::GetSessionAttributeInt64(const FEOSSessionsAttributeData& data)
{
	return LexToString(data.AttributeData.Value.AsInt64);
}

FString UEOSCoreLibrary::GetSessionAttributeDouble(const FEOSSessionsAttributeData& data)
{
	return LexToString(data.AttributeData.Value.AsDouble);
}

FString UEOSCoreLibrary::GetSessionAttributeString(const FEOSSessionsAttributeData& data)
{
	return data.AttributeData.Value.AsUtf8;
}

bool UEOSCoreLibrary::GetLobbyAttributeBool(const FEOSLobbyAttributeData& data)
{
	return data.AttributeData.Value.AsBool>0;
}

FString UEOSCoreLibrary::GetLobbyAttributeInt64(const FEOSLobbyAttributeData& data)
{
	return LexToString(data.AttributeData.Value.AsInt64);
}

FString UEOSCoreLibrary::GetLobbyAttributeDouble(const FEOSLobbyAttributeData& data)
{
	return LexToString(data.AttributeData.Value.AsDouble);
}

FString UEOSCoreLibrary::GetLobbyAttributeString(const FEOSLobbyAttributeData& data)
{
	return data.AttributeData.Value.AsUtf8;
}

FBucketId UEOSCoreLibrary::MakeBucketId(FString string)
{
	return FBucketId(TCHAR_TO_UTF8(*string));
}

void UEOSCoreLibrary::BreakBucketId(FBucketId bucket, FString& string)
{
	string = bucket.Data.c_str();
}

FSessionInviteId UEOSCoreLibrary::MakeSessionsInviteId(FString string)
{
	return FSessionInviteId(TCHAR_TO_UTF8(*string));
}

void UEOSCoreLibrary::BreakSessionsInviteId(FSessionInviteId id, FString& string)
{
	string = id.Data.c_str();
}

FString UEOSCoreLibrary::EOSEResultToString(EOSResult result)
{
	return EOS_EResult_ToString(static_cast<EOS_EResult>(result));
}

bool UEOSCoreLibrary::EOSEResultIsOperationComplete(EOSResult result)
{
	return EOS_EResult_IsOperationComplete(static_cast<EOS_EResult>(result)) > 0;
}

EOSResult UEOSCoreLibrary::EOSByteArrayToString(const TArray<uint8> array, int32 length, FString& string)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	char* m_Buffer = new char[2048];
	uint32_t outBuffer = 2048;
	m_Result = EOSHelpers::ToEOSCoreResult(EOS_ByteArray_ToString(array.GetData(), array.Num(), m_Buffer, &outBuffer));
	if (m_Result == EOSResult::EOS_Success)
	{
		string = m_Buffer;
	}
	delete[] m_Buffer;
	return m_Result;
}

bool UEOSCoreLibrary::EOSEpicAccountIdIsValid(FEOSEpicAccountId id)
{
	if (id.accountId.length() > 0)
		return EOS_EpicAccountId_IsValid(id) != EOS_FALSE;
	
	return false;
}

EOSResult UEOSCoreLibrary::EOSEpicAccountIdToString(FEOSEpicAccountId id, FString& string)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOSEpicAccountIdIsValid(id))
	{
		char m_Buffer[EOS_EPICACCOUNTID_MAX_LENGTH+1];
		int32_t m_BufferLen = EOS_EPICACCOUNTID_MAX_LENGTH+1;
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_EpicAccountId_ToString(id, m_Buffer, &m_BufferLen));
		if (m_Result == EOSResult::EOS_Success)
		{
			string = m_Buffer;
		}
	}

	return m_Result;
}

FEOSEpicAccountId UEOSCoreLibrary::EOSEpicAccountIdFromString(FString string)
{
	return EOS_EpicAccountId_FromString(TCHAR_TO_UTF8(*string));
}

bool UEOSCoreLibrary::EOSProductUserIdIsValid(FEOSProductUserId id)
{
	if (id.accountId.length() > 0)
		return EOS_ProductUserId_IsValid(id) != EOS_FALSE;

	return false;
}

EOSResult UEOSCoreLibrary::EOSProductUserIdToString(FEOSProductUserId id, FString& string)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOSProductUserIdIsValid(id))
	{
		char m_Buffer[EOS_EPICACCOUNTID_MAX_LENGTH+1];
		int32_t m_OutBuffer = EOS_EPICACCOUNTID_MAX_LENGTH+1;
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_ProductUserId_ToString(id, m_Buffer, &m_OutBuffer));
		if (m_Result == EOSResult::EOS_Success)
		{
			string = m_Buffer;
		}
	}
	
	return m_Result;
}

FEOSProductUserId UEOSCoreLibrary::EOSProductUserIdFromString(FString string)
{
	return EOS_ProductUserId_FromString(TCHAR_TO_UTF8(*string));
}

TArray<uint8> UEOSCoreLibrary::CoreStringToByte(FString string)
{
	TArray<uint8> m_Arr;
	m_Arr.SetNumUninitialized(string.Len());

	StringToBytes(string, m_Arr.GetData(), m_Arr.Num());

	return m_Arr;
}

FString UEOSCoreLibrary::CoreBytesToString(const TArray<uint8>& data)
{
	return BytesToString(data.GetData(), data.Num());
}

FEOSProductUserId UEOSCoreLibrary::GetCurrentProductId()
{
	return FPlatform::GetLocalProductId();
}

FEOSEpicAccountId UEOSCoreLibrary::GetCurrentAccountId()
{
	return FPlatform::GetLocalAccountId();
}

EOSResult UEOSCoreLibrary::EOSContinuanceTokenToString(FContinuanceToken token, FString& string)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	char m_Buffer[1024];
	int32_t m_OutBuffer = 1024;
	m_Result = EOSHelpers::ToEOSCoreResult(EOS_ContinuanceToken_ToString(token.Token, m_Buffer, &m_OutBuffer));
	if (m_Result == EOSResult::EOS_Success)
	{
		string = m_Buffer;
	}

	return m_Result;
}
