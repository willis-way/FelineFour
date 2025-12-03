using UnrealBuildTool;

public class CatNapTarget : TargetRules
{
	public CatNapTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("CatNap");
	}
}
