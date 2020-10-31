/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Metrics/EOSMetrics.h"
#include "Core/EOSCorePluginPrivatePCH.h"

UCoreMetrics* UCoreMetrics::MetricsObject = nullptr;

UCoreMetrics::UCoreMetrics()
{
	MetricsObject = this;
}

EOSResult UCoreMetrics::EOSMetricsBeginPlayerSession(FEOSMetricsBeginPlayerSessionOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_HMetrics m_Metrics = EOS_Platform_GetMetricsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Metrics_BeginPlayerSessionOptions m_Options = { options.ApiVersion, static_cast<EOS_EMetricsAccountIdType>(options.AccountIdType) };
		m_Options.AccountId.External = nullptr;
		m_Options.GameSessionId = nullptr;
		m_Options.ServerIp = nullptr;
		
		std::string m_External = TCHAR_TO_UTF8(*options.External);
		std::string m_DisplayName = TCHAR_TO_UTF8(*options.DisplayName);
		std::string m_GameSessionId = TCHAR_TO_UTF8(*options.GameSessionId);
		std::string m_ServerIp = TCHAR_TO_UTF8(*options.ServerIp);

		switch (options.AccountIdType)
		{
		case EEOSEMetricsAccountIdType::EOS_MAIT_Epic:
			m_Options.AccountId.Epic = options.Epic;
			break;
		case EEOSEMetricsAccountIdType::EOS_MAIT_External:
			m_Options.AccountId.External = m_External.length() > 0 ? m_External.c_str() : nullptr;
			break;
		}

		m_Options.ControllerType = static_cast<EOS_EUserControllerType>(options.ControllerType);
		m_Options.DisplayName = m_DisplayName.c_str();
		m_Options.GameSessionId = m_GameSessionId.length() > 0 ? m_GameSessionId.c_str() : nullptr;
		m_Options.ServerIp = m_ServerIp.length() > 0 ? m_ServerIp.c_str() : nullptr;
		
		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Metrics_BeginPlayerSession(m_Metrics, &m_Options));
	}

	return m_Result;
}

EOSResult UCoreMetrics::EOSMetricsEndPlayerSession(FEOSMetricsEndPlayerSessionOptions options)
{
	EOSResult m_Result = EOSResult::EOS_ServiceFailure;

	if (EOS_HMetrics m_Metrics = EOS_Platform_GetMetricsInterface(FPlatform::GetPlatformHandle()))
	{
		EOS_Metrics_EndPlayerSessionOptions m_Options = { options.ApiVersion, static_cast<EOS_EMetricsAccountIdType>(options.AccountIdType) };
		m_Options.AccountId.External = nullptr;
		std::string m_External = TCHAR_TO_UTF8(*options.External);

		switch (options.AccountIdType)
		{
		case EEOSEMetricsAccountIdType::EOS_MAIT_Epic:
			m_Options.AccountId.Epic = options.Epic;
			break;
		case EEOSEMetricsAccountIdType::EOS_MAIT_External:
			m_Options.AccountId.External = m_External.length() > 0 ? m_External.c_str() : nullptr;
			break;
		}

		m_Result = EOSHelpers::ToEOSCoreResult(EOS_Metrics_EndPlayerSession(m_Metrics, &m_Options));
	}

	return m_Result;
}
