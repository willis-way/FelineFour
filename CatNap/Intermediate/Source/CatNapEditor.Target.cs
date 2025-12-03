using UnrealBuildTool;

public class CatNapEditorTarget : TargetRules
{
	public CatNapEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("CatNap");
	}
}
