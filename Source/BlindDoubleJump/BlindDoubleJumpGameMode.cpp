// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlindDoubleJumpGameMode.h"
#include "BlindDoubleJumpCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABlindDoubleJumpGameMode::ABlindDoubleJumpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
