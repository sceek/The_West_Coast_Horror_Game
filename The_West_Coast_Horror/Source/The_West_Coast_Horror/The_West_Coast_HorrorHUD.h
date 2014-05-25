// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once 

#include "The_West_Coast_HorrorHUD.generated.h"

UCLASS()
class AThe_West_Coast_HorrorHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

public:

	/** Primary draw call for the HUD */
	virtual void DrawHUD() OVERRIDE;

private:
	/** Crosshair asset pointer */
	UTexture2D* CrosshairTex;

};

