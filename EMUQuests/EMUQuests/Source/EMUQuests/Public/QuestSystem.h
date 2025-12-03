// EMU Intro to UE5.Thomas

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FQuestSystemModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
