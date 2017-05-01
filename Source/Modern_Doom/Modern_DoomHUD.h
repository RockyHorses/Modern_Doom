// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "Modern_DoomHUD.generated.h"

UCLASS()
class AModern_DoomHUD : public AHUD
{
	GENERATED_BODY()

public:
	AModern_DoomHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

