// Copyright Epic Games, Inc. All Rights Reserved.

#include "tencentGameMode.h"
#include "tencentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtencentGameMode::AtencentGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
