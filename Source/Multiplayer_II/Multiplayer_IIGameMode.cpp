// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multiplayer_IIGameMode.h"
#include "Multiplayer_IICharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayer_IIGameMode::AMultiplayer_IIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
