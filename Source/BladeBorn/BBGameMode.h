// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BladeBorn.h"
#include "GameFramework/GameModeBase.h"
#include "BBGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BLADEBORN_API ABBGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABBGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	
};
