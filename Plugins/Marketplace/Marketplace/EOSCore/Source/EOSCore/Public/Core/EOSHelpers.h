/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Core/EOSTypes.h"

namespace EOSHelpers
{
	static EOSResult ToEOSCoreResult(EOS_EResult result)
	{
		EOSResult m_Result = EOSResult::EOS_ServiceFailure;

		FString m_String = EOS_EResult_ToString(result);

		UEnum* EnumClass = StaticEnum<EOSResult>();

		for (int32 i = 0; i < (int32)EOSResult::MAX; i++)
		{
			FString m_ResultAsString = EnumClass->GetNameStringByIndex(i);;

			if (m_String == m_ResultAsString)
			{
				m_Result = (EOSResult)i;
				break;
			}
		}

		return m_Result;
	}

	static EOS_EResult ToEOSResult(EOSResult result)
	{
		EOS_EResult m_Result = EOS_EResult::EOS_ServiceFailure;

		UEnum* EnumClass = StaticEnum<EOSResult>();
		FString m_ResultAsString = EnumClass->GetNameStringByIndex((int32)result);

		for (int32 i = 0; i < (int32)EOS_EResult::EOS_Lobby_MemberUpdateOnly; i++)
		{
			FString m_String = EOS_EResult_ToString((EOS_EResult)i);

			if (m_String == m_ResultAsString)
			{
				m_Result = (EOS_EResult)i;
				break;
			}
		}

		return m_Result;
	}
}