// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Unlit.h"
#include "UnlitGameMode.h"
#include "UnlitHUD.h"
#include "UnlitCharacter.h"

AUnlitGameMode::AUnlitGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/MyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnlitHUD::StaticClass();
}
