// Copyright Epic Games, Inc. All Rights Reserved.

#include "CombatAIGameMode.h"
#include "CombatAICharacter.h"
#include "UObject/ConstructorHelpers.h"

ACombatAIGameMode::ACombatAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
