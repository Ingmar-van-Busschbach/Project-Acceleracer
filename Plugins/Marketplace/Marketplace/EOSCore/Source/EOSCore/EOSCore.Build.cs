// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EOSCore : ModuleRules
{
	public EOSCore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Private/Core/EOSCorePluginPrivatePCH.h";
       
        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"EOSLibrary",
				"Projects",
                "EOSCorePlatform"
			}
			);
        PrivateDependencyModuleNames.AddRange(
            new string[]
                {
                    "Engine",
                    "Slate",
                    "SlateCore",
                    "CoreUObject"
                }
            );
    }
}
