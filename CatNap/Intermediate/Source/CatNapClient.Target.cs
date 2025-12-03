using UnrealBuildTool;

public class CatNapClientTarget : TargetRules
{
	public CatNapClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("CatNap");
	}
}
