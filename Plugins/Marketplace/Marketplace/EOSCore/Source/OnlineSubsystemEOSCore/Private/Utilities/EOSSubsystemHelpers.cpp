/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Utilities/EOSSubsystemHelpers.h"
#include "EOSCoreOnlinesubsystemTypes.h"
#include "Network/EOSCoreInternetAddr.h"
#include "EOSPlatform.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"

namespace EOSSubsystemHelpers
{
	int32 GetPendingDataSize(int32 channel, const FString& productId)
	{
		uint32_t PendingDataSize = 0;
		uint8_t m_Channel = channel;

		EOS_P2P_GetNextReceivedPacketSizeOptions m_Options = { EOS_P2P_GETNEXTRECEIVEDPACKETSIZE_API_LATEST, ProductIdFromString(productId), &m_Channel };
		EOS_P2P_GetNextReceivedPacketSize(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, &PendingDataSize);

		return PendingDataSize;
	}

	ELoginStatus::Type GetLoginStatus(EOS_ELoginStatus status)
	{
		switch (status)
		{
		case EOS_ELoginStatus::EOS_LS_NotLoggedIn:
			return ELoginStatus::NotLoggedIn;
		case EOS_ELoginStatus::EOS_LS_UsingLocalProfile:
			return ELoginStatus::UsingLocalProfile;
		case EOS_ELoginStatus::EOS_LS_LoggedIn:
			return ELoginStatus::LoggedIn;
		}

		return ELoginStatus::NotLoggedIn;
	}

	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, bool data)
	{
		EOS_Sessions_AttributeData m_AttributeData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, attributeName };
		m_AttributeData.Value.AsBool = data;
		m_AttributeData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;
		return m_AttributeData;
	}


	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, float data)
	{
		EOS_Sessions_AttributeData m_AttributeData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, attributeName };
		m_AttributeData.Value.AsDouble = data;
		m_AttributeData.ValueType = EOS_ESessionAttributeType::EOS_AT_DOUBLE;
		return m_AttributeData;
	}


	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, double data)
	{
		EOS_Sessions_AttributeData m_AttributeData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, attributeName };
		m_AttributeData.Value.AsDouble = data;
		m_AttributeData.ValueType = EOS_ESessionAttributeType::EOS_AT_DOUBLE;
		return m_AttributeData;
	}

	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, int64 data)
	{
		EOS_Sessions_AttributeData m_AttributeData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, attributeName };
		m_AttributeData.Value.AsInt64 = data;
		m_AttributeData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;
		return m_AttributeData;
	}


	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, int32 data)
	{
		EOS_Sessions_AttributeData m_AttributeData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, attributeName };
		m_AttributeData.Value.AsInt64 = data;
		m_AttributeData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;
		return m_AttributeData;
	}


	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, const char* data)
	{
		EOS_Sessions_AttributeData m_AttributeData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, attributeName };
		m_AttributeData.Value.AsUtf8 = data;
		m_AttributeData.ValueType = EOS_ESessionAttributeType::EOS_AT_STRING;
		return m_AttributeData;
	}

	EOS_HSessionDetails GetSessionHandleFromInviteId(const char* inviteId)
	{
		EOS_Sessions_CopySessionHandleByInviteIdOptions m_SessionHandleByInviteIdOptions = { EOS_SESSIONS_COPYSESSIONHANDLEBYINVITEID_API_LATEST, inviteId };

		EOS_HSessionDetails m_SessionDetailsHandle = nullptr;
		EOS_EResult m_Result = EOS_Sessions_CopySessionHandleByInviteId(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_SessionHandleByInviteIdOptions, &m_SessionDetailsHandle);

		return m_SessionDetailsHandle;
	}

	EOS_HSessionDetails GetSessionHandleFromUiEvent(uint64 eventId)
	{
		EOS_Sessions_CopySessionHandleByUiEventIdOptions m_SessionHandleByInviteIdOptions = { EOS_SESSIONS_COPYSESSIONHANDLEBYUIEVENTID_API_LATEST, eventId };

		EOS_HSessionDetails m_SessionDetailsHandle = nullptr;
		EOS_EResult m_Result = EOS_Sessions_CopySessionHandleByUiEventId(EOS_Platform_GetSessionsInterface(FPlatform::GetPlatformHandle()), &m_SessionHandleByInviteIdOptions, &m_SessionDetailsHandle);

		return m_SessionDetailsHandle;
	}

	void UpdateSessionDetails(const EOS_HSessionDetails& handle, FOnlineSession* session, const EOS_SessionDetails_Info* SessionDetails)
	{
		session->NumOpenPublicConnections = SessionDetails->NumOpenPublicConnections;
		session->SessionSettings.NumPublicConnections = SessionDetails->Settings->NumPublicConnections;

		TSharedPtr<FOnlineSessionInfoEOSCore> m_SessionInfo = MakeShared<FOnlineSessionInfoEOSCore>();
		m_SessionInfo->HostAddr = MakeShared<FEOSInternetAddr>(0, SessionDetails->HostAddress);
		m_SessionInfo->SessionId = MakeShared<FUniqueNetIdEOSCore>(SessionDetails->SessionId);
		session->OwningUserId = MakeShared<FUniqueNetIdEOSCore>(FString(SessionDetails->HostAddress));

		session->SessionInfo = m_SessionInfo;
		session->OwningUserName = UTF8_TO_TCHAR(SessionDetails->Settings->BucketId);

		session->SessionSettings.Set(TEXT("BucketId"), FString(SessionDetails->Settings->BucketId), EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
		session->SessionSettings.NumPublicConnections = SessionDetails->Settings->NumPublicConnections;
		session->SessionSettings.bAllowJoinInProgress = SessionDetails->Settings->bAllowJoinInProgress == EOS_TRUE ? true : false;
		session->SessionSettings.bAllowInvites = SessionDetails->Settings->bInvitesAllowed == EOS_TRUE ? true : false;
		
		EOS_SessionDetails_CopySessionAttributeByKeyOptions m_Options = { EOS_SESSIONDETAILS_COPYSESSIONATTRIBUTEBYKEY_API_LATEST, "SESSION_NAME" };
		EOS_SessionDetails_Attribute* m_Attribute = NULL;

		if (EOS_SessionDetails_CopySessionAttributeByKey(handle, &m_Options, &m_Attribute) == EOS_EResult::EOS_Success)
		{
			session->OwningUserName = m_Attribute->Data->Value.AsUtf8;
			EOS_SessionDetails_Attribute_Release(m_Attribute);
		}
	}

	void UpdateSessionModificationHandle(const FOnlineSessionSettings& NewSessionSettings, EOS_HSessionModification& ModificationHandle)
	{
		/* NumPublicConnections */
		{
			EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, "NumPublicConnections" };
			m_AttrData.Value.AsInt64 = NewSessionSettings.NumPublicConnections;
			m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;

			EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
			EOS_SessionModification_AddAttribute(ModificationHandle, &m_AttributeOptions);
		}

		/* NumPrivateConnections */
		{
			EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, "NumPrivateConnections" };
			m_AttrData.Value.AsInt64 = NewSessionSettings.NumPrivateConnections;
			m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;

			EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
			EOS_SessionModification_AddAttribute(ModificationHandle, &m_AttributeOptions);
		}

		/* bShouldAdvertise */
		{
			EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, "bShouldAdvertise" };
			m_AttrData.Value.AsBool = NewSessionSettings.bShouldAdvertise;
			m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

			EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
			EOS_SessionModification_AddAttribute(ModificationHandle, &m_AttributeOptions);
		}

		/* bAllowJoinInProgress */
		{
			EOS_SessionModification_SetJoinInProgressAllowedOptions m_JoinInProgresOptions = { EOS_SESSIONMODIFICATION_SETJOININPROGRESSALLOWED_API_LATEST, NewSessionSettings.bAllowJoinInProgress };
			EOS_SessionModification_SetJoinInProgressAllowed(ModificationHandle, &m_JoinInProgresOptions);
		}

		/* bIsLANMatch */
		{
			EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, "bIsLANMatch" };
			m_AttrData.Value.AsBool = NewSessionSettings.bIsLANMatch;
			m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

			EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
			EOS_SessionModification_AddAttribute(ModificationHandle, &m_AttributeOptions);
		}

		/* bIsDedicated */
		{
			EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, "bIsDedicated" };
			m_AttrData.Value.AsBool = NewSessionSettings.bIsDedicated;
			m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

			EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
			EOS_SessionModification_AddAttribute(ModificationHandle, &m_AttributeOptions);
		}

		/* bUsesStats */
		{
			EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, "bUsesStats" };
			m_AttrData.Value.AsBool = NewSessionSettings.bUsesStats;
			m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

			EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
			EOS_SessionModification_AddAttribute(ModificationHandle, &m_AttributeOptions);
		}

		/* bAllowInvites */
		{
			EOS_SessionModification_SetInvitesAllowedOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_SETINVITESALLOWED_API_LATEST, NewSessionSettings.bAllowInvites };
			EOS_SessionModification_SetInvitesAllowed(ModificationHandle, &m_AttributeOptions);
		}

		{
			EOS_EOnlineSessionPermissionLevel m_PermissionLevel = EOS_EOnlineSessionPermissionLevel::EOS_OSPF_InviteOnly;

			if (NewSessionSettings.bShouldAdvertise)
			{
				if (NewSessionSettings.bAllowJoinViaPresence)
				{
					m_PermissionLevel = EOS_EOnlineSessionPermissionLevel::EOS_OSPF_PublicAdvertised;
				}
				if (NewSessionSettings.bAllowJoinViaPresenceFriendsOnly)
				{
					m_PermissionLevel = EOS_EOnlineSessionPermissionLevel::EOS_OSPF_JoinViaPresence;
				}
			}

			EOS_SessionModification_SetPermissionLevelOptions m_SetPermissionLevelOptions = { EOS_SESSIONMODIFICATION_SETPERMISSIONLEVEL_API_LATEST, m_PermissionLevel };
			EOS_SessionModification_SetPermissionLevel(ModificationHandle, &m_SetPermissionLevelOptions);
		}

		/* bAntiCheatProtected */
		{
			EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, "bAntiCheatProtected" };
			m_AttrData.Value.AsBool = NewSessionSettings.bAntiCheatProtected;
			m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_BOOLEAN;

			EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
			EOS_SessionModification_AddAttribute(ModificationHandle, &m_AttributeOptions);
		}

		/* BuildUniqueId */
		{
			EOS_Sessions_AttributeData m_AttrData = { EOS_SESSIONS_SESSIONATTRIBUTEDATA_API_LATEST, "BuildUniqueId" };
			m_AttrData.Value.AsInt64 = NewSessionSettings.BuildUniqueId;
			m_AttrData.ValueType = EOS_ESessionAttributeType::EOS_AT_INT64;

			EOS_SessionModification_AddAttributeOptions m_AttributeOptions{ EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise };
			EOS_SessionModification_AddAttribute(ModificationHandle, &m_AttributeOptions);
		}

		for (auto m_Element : NewSessionSettings.Settings)
		{
			EOS_ESessionAttributeAdvertisementType m_Type;

			if (m_Element.Value.AdvertisementType == EOnlineDataAdvertisementType::DontAdvertise)
			{
				m_Type = EOS_ESessionAttributeAdvertisementType::EOS_SAAT_DontAdvertise;
			}
			else
			{
				m_Type = EOS_ESessionAttributeAdvertisementType::EOS_SAAT_Advertise;
			}

			EOS_Sessions_AttributeData m_AttrData;

			const char* m_Key = TCHAR_TO_UTF8(*m_Element.Key.ToString());

			switch (m_Element.Value.Data.GetType())
			{
				case EOnlineKeyValuePairDataType::Int32:
					int32 m_IntValue;
					m_Element.Value.Data.GetValue(m_IntValue);
					m_AttrData = CreateSessionAttributeData(m_Key, m_IntValue);
				break;
				case EOnlineKeyValuePairDataType::Double:
					double m_DoubleValue;
					m_Element.Value.Data.GetValue(m_DoubleValue);
					m_AttrData = CreateSessionAttributeData(m_Key, m_DoubleValue);
				break;
				case EOnlineKeyValuePairDataType::Float:
					float m_FloatValue;
					m_Element.Value.Data.GetValue(m_FloatValue);
					m_AttrData = CreateSessionAttributeData(m_Key, m_FloatValue);
				break;
				case EOnlineKeyValuePairDataType::Int64:
					int64 m_Int64Value;
					m_Element.Value.Data.GetValue(m_Int64Value);
					m_AttrData = CreateSessionAttributeData(m_Key, m_Int64Value);
				break;
				case EOnlineKeyValuePairDataType::String:
					FString m_StringValue;
					m_Element.Value.Data.GetValue(m_StringValue);
					m_AttrData = CreateSessionAttributeData(m_Key, TCHAR_TO_UTF8(*m_StringValue));
				break;
			}

			EOS_SessionModification_AddAttributeOptions m_AttributeOptions = { EOS_SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST, &m_AttrData, m_Type };
			EOS_SessionModification_AddAttribute(ModificationHandle, &m_AttributeOptions);
		}
	}


	EOS_ELoginCredentialType GetLoginCredentialType(const FString& str)
	{
		EOS_ELoginCredentialType m_Type = EOS_ELoginCredentialType::EOS_LCT_Password;

		if (str.Contains("Password"))
		{
			m_Type = EOS_ELoginCredentialType::EOS_LCT_Password;
		}
		else if (str.Contains("ExchangeCode"))
		{
			m_Type = EOS_ELoginCredentialType::EOS_LCT_ExchangeCode;
		}
		else if (str.Contains("PersistentAuth"))
		{
			m_Type = EOS_ELoginCredentialType::EOS_LCT_PersistentAuth;
		}
		else if (str.Contains("DeviceCode"))
		{
			m_Type = EOS_ELoginCredentialType::EOS_LCT_DeviceCode;
		}
		else if (str.Contains("Developer"))
		{
			m_Type = EOS_ELoginCredentialType::EOS_LCT_Developer;
		}
		else if (str.Contains("RefreshToken"))
		{
			m_Type = EOS_ELoginCredentialType::EOS_LCT_RefreshToken;
		}
		else if (str.Contains("AccountPortal"))
		{
			m_Type = EOS_ELoginCredentialType::EOS_LCT_AccountPortal;
		}
		else if (str.Contains("AccountPortal"))
		{
			m_Type = EOS_ELoginCredentialType::EOS_LCT_ExternalAuth;
		}

		return m_Type;
	}

	EOS_EpicAccountId AccountIdFromString(FString string)
	{
		return EOS_EpicAccountId_FromString(TCHAR_TO_UTF8(*string));
	}

	EOS_EResult AccountIdToString(EOS_EpicAccountId id, FString& string)
	{
		EOS_EResult m_Result = EOS_EResult::EOS_ServiceFailure;

		if (EOS_EpicAccountId_IsValid(id))
		{
			char m_Buffer[EOS_EPICACCOUNTID_MAX_LENGTH+1];
			int32_t m_BufferLen = EOS_EPICACCOUNTID_MAX_LENGTH+1;

			m_Result = EOS_EpicAccountId_ToString(id, m_Buffer, &m_BufferLen);

			if (m_Result == EOS_EResult::EOS_Success)
			{
				string = m_Buffer;
			}
		}

		return m_Result;
	}


	EOS_ProductUserId ProductIdFromString(FString string)
	{
		return EOS_ProductUserId_FromString(TCHAR_TO_UTF8(*string));
	}


	EOS_EResult ProductIdToString(EOS_ProductUserId id, FString& string)
	{
		EOS_EResult m_Result = EOS_EResult::EOS_ServiceFailure;

		if (EOS_ProductUserId_IsValid(id))
		{
			char m_Buffer[EOS_EPICACCOUNTID_MAX_LENGTH+1];
			int32_t m_BufferLen = EOS_EPICACCOUNTID_MAX_LENGTH+1;

			m_Result = EOS_ProductUserId_ToString(id, m_Buffer, &m_BufferLen);

			if (m_Result == EOS_EResult::EOS_Success)
			{
				string = m_Buffer;
			}
		}

		return m_Result;
	}


	EOS_ProductUserId GetLoggedInUserByIndex(int32 index)
	{
		return EOS_Connect_GetLoggedInUserByIndex(EOS_Platform_GetConnectInterface(FPlatform::GetPlatformHandle()), index);
	}

	EOS_EpicAccountId GetLoggedInAccountByIndex(int32 index)
	{
		return EOS_Auth_GetLoggedInAccountByIndex(EOS_Platform_GetAuthInterface(FPlatform::GetPlatformHandle()), index);
	}

}

FBlueprintSessionResult UEOSSubsystemHelpers::CreateSessionResultFromInviteId(FString inviteId)
{
	FBlueprintSessionResult m_Result;
	m_Result.OnlineResult.PingInMs = -1;

	EOS_HSessionDetails m_SessionDetailsHandle = EOSSubsystemHelpers::GetSessionHandleFromInviteId(TCHAR_TO_UTF8(*inviteId));

	if (m_SessionDetailsHandle)
	{
		EOS_SessionDetails_Info* m_SessionInfo = new EOS_SessionDetails_Info;
		EOS_SessionDetails_CopyInfoOptions m_CopyInfoOptions = { EOS_SESSIONDETAILS_COPYINFO_API_LATEST };

		EOS_EResult m_CopySessionDetailsResult = EOS_SessionDetails_CopyInfo(m_SessionDetailsHandle, &m_CopyInfoOptions, &m_SessionInfo);

		m_Result.OnlineResult.Session.SessionSettings.Set("INVITE_ID", inviteId);

		EOSSubsystemHelpers::UpdateSessionDetails(m_SessionDetailsHandle, &m_Result.OnlineResult.Session, m_SessionInfo);
	}

	return m_Result;
}

FBlueprintSessionResult UEOSSubsystemHelpers::CreateSessionResultFromUiEvent(FString eventId)
{
	FBlueprintSessionResult m_Result;
	m_Result.OnlineResult.PingInMs = -1;

	EOS_HSessionDetails m_SessionDetailsHandle = EOSSubsystemHelpers::GetSessionHandleFromUiEvent(FCString::Atoi64(*eventId));

	if (m_SessionDetailsHandle)
	{
		EOS_SessionDetails_Info* m_SessionInfo = new EOS_SessionDetails_Info;
		EOS_SessionDetails_CopyInfoOptions m_CopyInfoOptions = { EOS_SESSIONDETAILS_COPYINFO_API_LATEST };

		EOS_EResult m_CopySessionDetailsResult = EOS_SessionDetails_CopyInfo(m_SessionDetailsHandle, &m_CopyInfoOptions, &m_SessionInfo);

		m_Result.OnlineResult.Session.SessionSettings.Set("EVENT_ID", FCString::Atoi64(*eventId));

		EOSSubsystemHelpers::UpdateSessionDetails(m_SessionDetailsHandle, &m_Result.OnlineResult.Session, m_SessionInfo);
	}

	return m_Result;
}