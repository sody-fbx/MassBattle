// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MBGameState.generated.h"

/**
 * 
 */
UCLASS()
class MASSBATTLE_API AMBGameState : public AGameStateBase
{
	GENERATED_BODY()
	
protected:
	virtual void PostInitializeComponents() override;

	virtual void BeginPlay() override;
};
