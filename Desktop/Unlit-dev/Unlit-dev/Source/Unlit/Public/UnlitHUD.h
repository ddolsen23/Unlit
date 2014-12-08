// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "UnlitHUD.generated.h"

UCLASS()
class AUnlitHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

public:

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

