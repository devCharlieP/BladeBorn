// Fill out your copyright notice in the Description page of Project Settings.


#include "BBGameMode.h"
#include "BBPlayerController.h"
#include "BBCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABBGameMode::ABBGameMode()
{
    // use our custom PlayerController class
	PlayerControllerClass = ABBPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BladeBorn/Blueprints/BP_Character"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/BladeBorn/Blueprints/BP_PlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}

void ABBGameMode::PostLogin(APlayerController * NewPlayer)
{
    Super::PostLogin(NewPlayer);
}
