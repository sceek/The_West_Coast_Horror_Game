// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "The_West_Coast_Horror.h"
#include "The_West_Coast_HorrorGameMode.h"
#include "The_West_Coast_HorrorHUD.h"

AThe_West_Coast_HorrorGameMode::AThe_West_Coast_HorrorGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FObjectFinder<UBlueprint> PlayerPawnObject(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnObject.Object != NULL)
	{
		DefaultPawnClass = (UClass*)PlayerPawnObject.Object->GeneratedClass;
	}

	// use our custom HUD class
	HUDClass = AThe_West_Coast_HorrorHUD::StaticClass();
}
