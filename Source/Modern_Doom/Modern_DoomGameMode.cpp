// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Modern_Doom.h"
#include "Modern_DoomGameMode.h"
#include "Modern_DoomHUD.h"
#include "Modern_DoomCharacter.h"

AModern_DoomGameMode::AModern_DoomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AModern_DoomHUD::StaticClass();
}
