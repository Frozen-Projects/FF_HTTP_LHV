namespace UnrealBuildTool.Rules
{
    using System.IO;

    public class LibHv : ModuleRules
    {
        public void CopyDLLs(string FilePath, ReadOnlyTargetRules Target)
        {
            string BinariesDir = Path.Combine(Target.ProjectFile!.Directory.FullName, "Binaries", Target.Platform.ToString());

            string Filename = Path.GetFileName(FilePath);
            string DestPath = Path.Combine(BinariesDir, Filename);

            if (!Directory.Exists(BinariesDir))
            {
                Directory.CreateDirectory(BinariesDir);
            }

            if (!File.Exists(DestPath))
            {
                File.Copy(FilePath, DestPath, true);
            }

            RuntimeDependencies.Add(DestPath);
            PublicDelayLoadDLLs.Add(Path.Combine(DestPath));
        }

        public void LibInstall(ReadOnlyTargetRules Target)
        {
            string Path_Source = Path.Combine(ModuleDirectory, "Win64");
            PublicIncludePaths.Add(Path.Combine(Path_Source, "include"));

            string Path_Libs = Path.Combine(Path_Source, "lib");
            string[] List_Libs = Directory.GetFiles(Path_Libs, "*.lib", SearchOption.TopDirectoryOnly);

            foreach (string File in List_Libs)
            {
                if (File.EndsWith(".lib"))
                {
                    PublicAdditionalLibraries.Add(File);
                }
            }

            string Path_DLLs = Path.Combine(Path_Source, "bin");
            string[] List_DLLs = Directory.GetFiles(Path_DLLs, "*.dll", SearchOption.TopDirectoryOnly);

            foreach (string File in List_DLLs)
            {
                if (File.EndsWith(".dll"))
                {
                    CopyDLLs(File, Target);
                }
            }
        }

        public LibHv(ReadOnlyTargetRules Target) : base(Target)
        {
    		Type = ModuleType.External;
            CppCompileWarningSettings.UndefinedIdentifierWarningLevel = WarningLevel.Off;
            bEnableExceptions = true;

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                bUseRTTI = true;
                LibInstall(Target);
            }
        }
    }
}
