/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "P2P/EOSP2P.h"
#include "Core/EOSCorePluginPrivatePCH.h"
#include "Core/EOSCoreLibrary.h"
#include "Core/EOSCoreLogging.h"

UCoreP2P* UCoreP2P::P2PObject = nullptr;

UCoreP2P::UCoreP2P()
{
	P2PObject = this;
}

EOSResult UCoreP2P::EOSP2PSendPacket(FEOSP2PSendPacketOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
		FCStringAnsi::Strncpy(m_SocketId.SocketName, TCHAR_TO_UTF8(*options.SocketId.SocketName), options.SocketId.SocketName.Len() +1);

		EOS_P2P_SendPacketOptions m_Options = { options.ApiVersion, options.LocalUserId, options.RemoteUserId, &m_SocketId, static_cast<uint8_t>(options.Channel), static_cast<uint32_t>(options.Data.Num()), options.Data.GetData(), options.bAllowDelayedDelivery, static_cast<EOS_EPacketReliability>(options.Reliability) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_SendPacket(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

EOSResult UCoreP2P::EOSP2PGetNextReceivedPacketSize(FEOSP2PGetNextReceivedPacketSizeOptions options, int32& outPacketSizeBytes)
{
	outPacketSizeBytes = 0;

	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		uint8_t m_Channel = options.RequestedChannel;
		uint32_t m_Size = 0;
		EOS_P2P_GetNextReceivedPacketSizeOptions m_Options = { options.ApiVersion, options.LocalUserId, (options.RequestedChannel == -1 ? nullptr : &m_Channel )};

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_GetNextReceivedPacketSize(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Size));

		if (m_Result == EOSResult::EOS_Success)
		{
			outPacketSizeBytes = m_Size;
		}
	}

	return m_Result;
}

EOSResult UCoreP2P::EOSP2PReceivePacket(FEOSP2PReceivePacketOptions options, FEOSProductUserId& outPeerId, FEOSP2PSocketId& outSocketId, int32& outChannel, TArray<uint8>& outData, int32& outBytesWritten)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		uint8_t m_OptionsChannel = options.RequestedChannel;

		EOS_P2P_ReceivePacketOptions m_Options = { options.ApiVersion, options.LocalUserId, static_cast<uint32_t>(options.MaxDataSizeBytes), (m_OptionsChannel == -1 ? nullptr : &m_OptionsChannel)};
		
		EOS_ProductUserId m_PeerId;
		EOS_P2P_SocketId m_SocketId;
		uint8_t m_Channel;
		TArray<uint8> m_Data;
		m_Data.SetNum(options.MaxDataSizeBytes);
		uint32_t m_BytesWritten = 0;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_ReceivePacket(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_PeerId, &m_SocketId, &m_Channel, m_Data.GetData(), &m_BytesWritten));
		
		if (m_Result == EOSResult::EOS_Success)
		{
			m_Data.SetNum(m_BytesWritten);

			outPeerId = m_PeerId;
			outSocketId = m_SocketId;
			outChannel = m_Channel;
			outData = m_Data;
			outBytesWritten = m_BytesWritten;
		}
	}

	return m_Result;
}

static FOnP2PIncomingConnectionRequestCallback OnP2PIncomingConnectionRequestCallback;
FEOSNotificationId UCoreP2P::EOSP2PAddNotifyPeerConnectionRequest(FEOSP2PAddNotifyPeerConnectionRequestOptions options, const FOnP2PIncomingConnectionRequestCallback& callback)
{
	FEOSNotificationId m_ID;

	if (FPlatform::IsInitialized())
	{
		OnP2PIncomingConnectionRequestCallback = callback;

		EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
		FCStringAnsi::Strncpy(m_SocketId.SocketName, TCHAR_TO_UTF8(*options.SocketId.SocketName), options.SocketId.SocketName.Len() +1);

		EOS_P2P_AddNotifyPeerConnectionRequestOptions m_Options = { options.ApiVersion, options.LocalUserId, (options.SocketId.SocketName.Len() > 0 ? &m_SocketId : nullptr) };

		m_ID = EOS_P2P_AddNotifyPeerConnectionRequest(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_P2P_OnIncomingConnectionRequestInfo* data)
			{
				UCoreP2P* m_P2P = static_cast<UCoreP2P*>(data->ClientData);
				check(m_P2P);

				if (m_P2P)
				{
					m_P2P->OnP2PIncomingConnectionRequestCallbackDelegate.Broadcast(*data);
					OnP2PIncomingConnectionRequestCallback.ExecuteIfBound(*data, true);
				}

				LogVerbose("");
			}));
	}

	return m_ID;
}

void UCoreP2P::EOSP2PRemoveNotifyPeerConnectionRequest(FEOSNotificationId id)
{
	if (FPlatform::IsInitialized())
	{
		EOS_P2P_RemoveNotifyPeerConnectionRequest(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), id);

		OnP2PIncomingConnectionRequestCallback.Clear();
		OnP2PIncomingConnectionRequestCallback.Unbind();

	}
}

FEOSNotificationId UCoreP2P::EOSP2PAddNotifyPeerConnectionClosed(FEOSP2PAddNotifyPeerConnectionClosedOptions options)
{
	FEOSNotificationId m_ID;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
		FCStringAnsi::Strncpy(m_SocketId.SocketName, TCHAR_TO_UTF8(*options.SocketId.SocketName), options.SocketId.SocketName.Len() +1);

		EOS_P2P_AddNotifyPeerConnectionClosedOptions m_Options = { options.ApiVersion, options.LocalUserId, (options.SocketId.SocketName.Len() > 0 ? &m_SocketId : nullptr)};

		m_ID = EOS_P2P_AddNotifyPeerConnectionClosed(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_P2P_OnRemoteConnectionClosedInfo* data)
			{
				UCoreP2P* m_P2P = static_cast<UCoreP2P*>(data->ClientData);
				check(m_P2P);
				
				if (m_P2P)
				{
					m_P2P->OnP2PRemoteConnectionClosedCallbackDelegate.Broadcast(*data);
				}
	
				LogVerbose("");
			}));
	}

	return m_ID;
}

void UCoreP2P::EOSP2PRemoveNotifyPeerConnectionClosed(FEOSNotificationId id)
{
	if (FPlatform::IsInitialized())
	{
		EOS_P2P_RemoveNotifyPeerConnectionClosed(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), id);
	}
}

EOSResult UCoreP2P::EOSP2PAcceptConnection(FEOSP2PAcceptConnectionOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
		FCStringAnsi::Strncpy(m_SocketId.SocketName, TCHAR_TO_UTF8(*options.SocketId.SocketName), options.SocketId.SocketName.Len() +1);

		EOS_P2P_AcceptConnectionOptions m_Options = { options.ApiVersion, options.LocalUserId, options.RemoteUserId, &m_SocketId };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_AcceptConnection(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

EOSResult UCoreP2P::EOSP2PCloseConnection(FEOSP2PCloseConnectionOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
		FCStringAnsi::Strncpy(m_SocketId.SocketName, TCHAR_TO_UTF8(*options.SocketId.SocketName), options.SocketId.SocketName.Len() +1);

		EOS_P2P_CloseConnectionOptions m_Options = { options.ApiVersion, options.LocalUserId, options.RemoteUserId, &m_SocketId };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_CloseConnection(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

EOSResult UCoreP2P::EOSP2PCloseConnections(FEOSP2PCloseConnectionsOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_SocketId m_SocketId = { EOS_P2P_SOCKETID_API_LATEST };
		FCStringAnsi::Strncpy(m_SocketId.SocketName, TCHAR_TO_UTF8(*options.SocketId.SocketName), options.SocketId.SocketName.Len() +1);

		EOS_P2P_CloseConnectionsOptions m_Options = { options.ApiVersion, options.LocalUserId, &m_SocketId };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_CloseConnections(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

static FOnP2PQueryNATTypeCompleteCallback EOSP2PQueryNATTypeCallback;
void UCoreP2P::EOSP2PQueryNATType(const FOnP2PQueryNATTypeCompleteCallback& callback)
{
	if (FPlatform::IsInitialized())
	{
		EOSP2PQueryNATTypeCallback = callback;
		EOS_P2P_QueryNATTypeOptions m_Options = { EOS_P2P_QUERYNATTYPE_API_LATEST };
		
		EOS_P2P_QueryNATType(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, this, ([](const EOS_P2P_OnQueryNATTypeCompleteInfo* data)
			{
				UCoreP2P* m_P2P = static_cast<UCoreP2P*>(data->ClientData);
				check(m_P2P);

				if (m_P2P)
				{
					m_P2P->OnP2PQueryNATTypeCompleteCallbackDelegate.Broadcast(*data);
					EOSP2PQueryNATTypeCallback.ExecuteIfBound(*data, true);
				}
				LogVerbose("%s", *FString(EOS_EResult_ToString(data->ResultCode)));
			}));
	}
}

EOSResult UCoreP2P::EOSP2PGetNATType(FEOSP2PGetNATTypeOptions options, EEOSENATType& outNATType)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_GetNATTypeOptions m_Options = { options.ApiVersion };

		EOS_ENATType m_NAT = EOS_ENATType::EOS_NAT_Unknown;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_GetNATType(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_NAT));

		if (m_Result == EOSResult::EOS_Success) 
		{
			outNATType = static_cast<EEOSENATType>(m_NAT);
		}
	}
	
	return m_Result;
}

EOSResult UCoreP2P::EOSP2PSetRelayControl(FEOSP2PSetRelayControlOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_SetRelayControlOptions m_Options = { options.ApiVersion, static_cast<EOS_ERelayControl>(options.RelayControl) };

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_SetRelayControl(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

EOSResult UCoreP2P::EOSP2PGetRelayControl(FEOSP2PGetRelayControlOptions options, EEOSERelayControl& outRelayControl)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_GetRelayControlOptions m_Options = { options.ApiVersion };
		
		EOS_ERelayControl m_RelayControl = EOS_ERelayControl::EOS_RC_AllowRelays;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_GetRelayControl(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_RelayControl));

		if (m_Result == EOSResult::EOS_Success)
		{
			outRelayControl = static_cast<EEOSERelayControl>(m_RelayControl);
		}
	}

	return m_Result;
}

EOSResult UCoreP2P::EOSP2PSetPortRange(FEOSP2PSetPortRangeOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_SetPortRangeOptions m_Options = { options.ApiVersion, static_cast<uint16_t>(options.Port), static_cast<uint16_t>(options.MaxAdditionalPortsToTry) };
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_SetPortRange(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options));
	}

	return m_Result;
}

EOSResult UCoreP2P::EOSP2PGetPortRange(FEOSP2PGetPortRangeOptions options, int32& outPort, int32 outNumAdditionalPortsToTry)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (FPlatform::IsInitialized())
	{
		EOS_P2P_GetPortRangeOptions m_Options = { options.ApiVersion };

		uint16_t m_Port = 0;
		uint16_t m_AdditionalPorts = 0;

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_P2P_GetPortRange(EOS_Platform_GetP2PInterface(FPlatform::GetPlatformHandle()), &m_Options, &m_Port, &m_AdditionalPorts));

		if (m_Result == EOSResult::EOS_Success)
		{
			outPort = m_Port;
			outNumAdditionalPortsToTry = m_AdditionalPorts;
		}
	}

	return m_Result;
}
