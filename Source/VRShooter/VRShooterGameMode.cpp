// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "VRShooterGameMode.h"
#include "VRShooterHUD.h"
#include "VRShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVRShooterGameMode::AVRShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVRShooterHUD::StaticClass();
}
