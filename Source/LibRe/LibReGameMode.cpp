// Copyright Epic Games, Inc. All Rights Reserved.

#include "LibReGameMode.h"
#include "LibReCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALibReGameMode::ALibReGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
