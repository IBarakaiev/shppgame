// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "SurvivalHistory.h"
#include "SurvivalHistoryGameMode.h"
#include "SurvivalHistoryHUD.h"
#include "SurvivalHistoryCharacter.h"

ASurvivalHistoryGameMode::ASurvivalHistoryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASurvivalHistoryHUD::StaticClass();
}
