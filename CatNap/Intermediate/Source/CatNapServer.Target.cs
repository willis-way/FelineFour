using UnrealBuildTool;

public class CatNapServerTarget : TargetRules
{
	public CatNapServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("CatNap");
	}
}
