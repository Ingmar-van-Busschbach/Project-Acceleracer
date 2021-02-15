using System.IO;
using UnrealBuildTool;

public class EOSCorePlatform : ModuleRules
{
    public EOSCorePlatform(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Private/EOSCorePlatformPCH.h";

        PublicDependencyModuleNames.AddRange(
        new string[]
            {
                "Core",
                "EOSLibrary"
            }
        );
        
        PrivateDependencyModuleNames.AddRange
        (
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Projects",
                "Networking",
            }
        );

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });
        }

        if (Target.bBuildEditor == true)
        {
            PrivateDependencyModuleNames.Add("UnrealEd");
        }
    }
}
