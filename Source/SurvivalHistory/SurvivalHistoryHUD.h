// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "SurvivalHistoryHUD.generated.h"

UCLASS()
class ASurvivalHistoryHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASurvivalHistoryHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

