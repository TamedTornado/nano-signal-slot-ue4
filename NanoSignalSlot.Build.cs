using System.IO;
using UnrealBuildTool;

public class NanoSignalSlot : ModuleRules
{
    public NanoSignalSlot(TargetInfo Target)
	{
		Type = ModuleType.External;

		string TTFSMBaseDir = Path.Combine(UEBuildConfiguration.UEThirdPartySourceDirectory, "nano-signal-slot");
		string TTFSMDir = Path.Combine(TTFSMBaseDir, "nano-signal-slot-module");
		
		PublicIncludePaths.Add(TTFSMDir);

		if ( Target.Platform == UnrealTargetPlatform.Win64 )
		{
			PublicAdditionalLibraries.Add(Path.Combine(TTFSMBaseDir, "x64", "Release", "nano-signal-slot-module.lib"));
		}
		// TODO: Other platforms!
	}
}

