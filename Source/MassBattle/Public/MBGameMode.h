// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MBGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MASSBATTLE_API AMBGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMBGameMode();

	virtual void PostInitializeComponents() override;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void StartPlay() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
