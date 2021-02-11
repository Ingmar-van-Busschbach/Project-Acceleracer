using System.IO;
using UnrealBuildTool;

public class OnlineSubsystemEOSCore : ModuleRules
{
    public OnlineSubsystemEOSCore(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Private/EOSCoreOnlineSubsystemPrivatePCH.h";

        PublicDependencyModuleNames.AddRange(
        new string[]
            {
                "Core",
                "EOSLibrary",
                "EOSCore",
                "PacketHandler",
                "EOSCorePlatform"
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
                "Sockets",
                "OnlineSubsystem",
                "OnlineSubsystemUtils",
            }
        );

        if (Target.Version.MinorVersion >= 24)
        {
            PrivateDependencyModuleNames.AddRange
            (
                new string[]
                {
                    "NetCore"
                }
            );
        }
    }
}
