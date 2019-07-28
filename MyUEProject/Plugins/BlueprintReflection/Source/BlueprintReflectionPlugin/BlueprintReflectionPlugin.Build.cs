//
//  Created by Derek van Vliet on 2014-12-10.
//  Copyright (c) 2014 Get Set Games Inc. All rights reserved.
//

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class BlueprintReflectionPlugin : ModuleRules
	{
		public BlueprintReflectionPlugin(ReadOnlyTargetRules Target) : base(Target)
		{

            //��ģ�鲻��Ҫ����  true ������
            //bUsePrecompiled = true;

            PrivateIncludePaths.AddRange(
				new string[] {
					"BlueprintReflectionPlugin/Private",
				});

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine"
				});
		}
	}
}