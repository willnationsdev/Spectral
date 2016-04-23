// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Spectral.h"
#include "SpectralGameMode.h"
#include "SpectralPawn.h"

ASpectralGameMode::ASpectralGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ASpectralPawn::StaticClass();
}

