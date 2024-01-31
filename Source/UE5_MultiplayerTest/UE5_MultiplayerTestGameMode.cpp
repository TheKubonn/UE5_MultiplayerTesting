// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_MultiplayerTestGameMode.h"
#include "UE5_MultiplayerTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_MultiplayerTestGameMode::AUE5_MultiplayerTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
