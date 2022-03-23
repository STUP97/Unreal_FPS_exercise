// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPSProjectGameModeBase.h"


void AFPSProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("HELLO WORLD, this is FPS Project."));
	}
}
