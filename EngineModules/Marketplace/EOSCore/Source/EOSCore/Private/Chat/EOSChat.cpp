/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Chat/EOSChat.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLogging.h"

UCoreChat* UCoreChat::ChatObject = nullptr;
static TArray<FOnChatMessageReceivedCallback> s_OnChatMessageReceivedCallbacks;

UCoreChat::UCoreChat()
	: bIsListeningForConnections(false)
{
	ChatObject = this;
}

void UCoreChat::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UCoreChat::Deinitialize()
{
	Super::Deinitialize();

	EOS_P2P_RemoveNotifyPeerConnectionRequest(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), ListeningId);
}

bool UCoreChat::Tick(float deltaTime)
{
	if (FPlatform::IsLoggedIn())
	{
		if (!bIsListeningForConnections)
		{
			EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST , "CHAT"};
			EOS_P2P_AddNotifyPeerConnectionRequestOptions m_Options = { EOS_P2P_ADDNOTIFYPEERCONNECTIONREQUEST_API_LATEST, FPlatform::GetLocalProductId(), &m_SocketId};
			ListeningId = EOS_P2P_AddNotifyPeerConnectionRequest(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, nullptr, OnIncomingChatConnection);

			bIsListeningForConnections = true;

			return true;
		}

		EOS_ProductUserId m_UserProductId = FPlatform::GetLocalProductId();

		if (EOS_ProductUserId_IsValid(m_UserProductId))
		{
			uint32_t m_NextPacketSize = 0;
			uint8_t m_Channel = (uint8)EEOSChannelType::DATA_CHAT;

			{
				EOS_P2P_GetNextReceivedPacketSizeOptions m_Options = { EOS_P2P_GETNEXTRECEIVEDPACKETSIZE_API_LATEST, m_UserProductId, &m_Channel };
				EOS_P2P_GetNextReceivedPacketSize(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_NextPacketSize);
			}

			if (m_NextPacketSize > 0)
			{
				EOS_P2P_ReceivePacketOptions m_Options = { EOS_P2P_RECEIVEPACKET_API_LATEST, m_UserProductId, m_NextPacketSize, &m_Channel };

				EOS_ProductUserId OutPeerId;
				EOS_P2P_SocketId OutSocketId;
				uint8_t OutChannel = 0;
				TArray<uint8> m_Data;
				m_Data.SetNumUninitialized(m_NextPacketSize);
				uint32_t OutBytesWritten = 0;

				if (EOS_P2P_ReceivePacket(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, &OutPeerId, &OutSocketId, &OutChannel, m_Data.GetData(), &OutBytesWritten) == EOS_EResult::EOS_Success)
				{
					FString m_ChatMessage = BytesToString(m_Data.GetData(), OutBytesWritten);

					LogVerbose("Received chat message of %d bytes", OutBytesWritten);

					OnChatMessageReceived.Broadcast(OutPeerId, m_UserProductId, m_ChatMessage);

					for (auto m_Element : s_OnChatMessageReceivedCallbacks)
						m_Element.ExecuteIfBound(OutPeerId, m_UserProductId, m_ChatMessage);
				}
			}
		}
	}

	return true;
}

void UCoreChat::SendChatMessage(FEOSProductUserId target, FString message, EEOSEPacketReliability reliability)
{
	uint32_t m_DataSize = message.Len();
	TArray<uint8> m_Data;
	m_Data.SetNumUninitialized(m_DataSize);
	StringToBytes(message, m_Data.GetData(), m_DataSize);

	EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST, "CHAT" };
	EOS_P2P_SendPacketOptions m_Options = { EOS_P2P_SENDPACKET_API_LATEST, FPlatform::GetLocalProductId(), target, &m_SocketId, (uint8)EEOSChannelType::DATA_CHAT, m_DataSize, m_Data.GetData(), true, static_cast<EOS_EPacketReliability>(reliability) };

	if (EOS_P2P_SendPacket(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options) == EOS_EResult::EOS_Success)
	{
		LogVerbose("Sent chat message of %i bytes to %s", message.Len(), *FString(target.accountId.c_str()));
	}
}

void UCoreChat::ListenForChatMessages(const FOnChatMessageReceivedCallback& callback)
{
	s_OnChatMessageReceivedCallbacks.Add(callback);
}

void UCoreChat::OnIncomingChatConnection(const EOS_P2P_OnIncomingConnectionRequestInfo* data)
{
	LogVerbose("");

	EOS_P2P_AcceptConnectionOptions m_Options = { EOS_P2P_ACCEPTCONNECTION_API_LATEST, data->LocalUserId, data->RemoteUserId, data->SocketId };
	
	if (EOS_P2P_AcceptConnection(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options) == EOS_EResult::EOS_Success)
	{
		LogVerbose("Accepted Incoming Chat Connection Request!");
	}
}