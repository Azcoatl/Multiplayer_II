// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Multiplayer_II : ModuleRules
{
	public Multiplayer_II(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
