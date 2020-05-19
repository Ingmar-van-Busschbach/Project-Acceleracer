#include "Utility/AutoSettingsStringUtils.h"

bool FAutoSettingsStringUtils::IsTruthy(const FString& String)
{
	return String != "0" && String.ToLower() != "false";
}
