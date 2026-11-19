// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MBPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MASSBATTLE_API AMBPlayerState : public APlayerState
{
	GENERATED_BODY()
	
protected:
	virtual void PostInitializeComponents() override;

	virtual void BeginPlay() override;
};
