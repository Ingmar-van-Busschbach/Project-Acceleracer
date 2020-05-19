// Copyright Sam Bonifacio. All Rights Reserved.

#include "InputMapping/GlobalKeyIconTagManager.h"
#include "Misc/AutoSettingsConfig.h"

UGlobalKeyIconTagManager* UGlobalKeyIconTagManager::Singleton = nullptr;

UGlobalKeyIconTagManager* UGlobalKeyIconTagManager::Get()
{
	if (!Singleton)
	{
		Singleton = NewObject<UGlobalKeyIconTagManager>();
		Singleton->AddToRoot();
	}

	return Singleton;
}

void UGlobalKeyIconTagManager::SetGlobalKeyIconTags(FGameplayTagContainer InGlobalIconTags)
{
	if (Get()->GlobalKeyIconTags != InGlobalIconTags)
	{
		Get()->GlobalKeyIconTags = InGlobalIconTags;
		Get()->OnGlobalKeyIconTagsModified.Broadcast();
	}
}

UTexture* UGlobalKeyIconTagManager::GetIconForKey(FKey InKey, FGameplayTagContainer IconTags)
{
	IconTags.AppendTags(Get()->GlobalKeyIconTags);
	return GetDefault<UAutoSettingsConfig>()->GetIconForKey(InKey, IconTags);
}
