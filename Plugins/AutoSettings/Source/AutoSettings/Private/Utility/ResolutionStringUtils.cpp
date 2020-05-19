// Copyright Sam Bonifacio. All Rights Reserved.

#include "Utility/ResolutionStringUtils.h"
#include "Internationalization/Regex.h"

FString UResolutionStringUtils::GetPixelsString(FString ResolutionString)
{
	return PointToString(GetPixels(ResolutionString));
}

FIntPoint UResolutionStringUtils::GetPixels(FString ResolutionString)
{
	const FRegexPattern Digits(TEXT(R"(\d+)"));
	FRegexMatcher DigitsMatcher(Digits, ResolutionString);

	DigitsMatcher.FindNext();
	const FString X = DigitsMatcher.GetCaptureGroup(0);
	DigitsMatcher.FindNext();
	const FString Y = DigitsMatcher.GetCaptureGroup(0);

	return FIntPoint(FCString::Atoi(*X), FCString::Atoi(*Y));
}

FString UResolutionStringUtils::GetMode(FString ResolutionString)
{
	const FRegexPattern ModePattern(TEXT(R"([^0-9,x]+)"));
	FRegexMatcher ModeMatcher(ModePattern, ResolutionString);

	ModeMatcher.FindNext();
	return ModeMatcher.GetCaptureGroup(0);
}

FString UResolutionStringUtils::PointToString(FIntPoint Pixels)
{
	TArray<FStringFormatArg> Args;
	Args.Add(FStringFormatArg(Pixels.X));
	Args.Add(FStringFormatArg(Pixels.Y));
	return FString::Format(TEXT("{0}x{1}"), Args);
}
