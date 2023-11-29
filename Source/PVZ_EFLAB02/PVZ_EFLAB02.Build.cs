// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PVZ_EFLAB02 : ModuleRules
{
	public PVZ_EFLAB02(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
