// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class FAutoSettingsError
{
public:
	static void LogError(const FString& Message);

	static void LogInvalidClass(const FString& SourceObjectName, const FString& ClassPropertyName);
	static void LogInvalidClass(UClass* SourceClass, const FString& ClassPropertyName);

	static void LogWidgetCreationFailed(UClass* SourceClass, const FString& WidgetName);

	static void LogMissingCVar(const FString& Context, const FName& CVar);

private:

	static FString GetSafeClassName(UClass* Class);
	
};
