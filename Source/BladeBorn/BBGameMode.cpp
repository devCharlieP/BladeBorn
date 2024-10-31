// Fill out your copyright notice in the Description page of Project Settings.


#include "BBGameMode.h"
#include "BBCharacter.h"
#include "BBPlayerController.h"

ABBGameMode::ABBGameMode()
{
    DefaultPawnClass = ABBCharacter::StaticClass();
    PlayerControllerClass = ABBPlayerController::StaticClass();
}

void ABBGameMode::PostLogin(APlayerController * NewPlayer)
{
    Super::PostLogin(NewPlayer);
}
