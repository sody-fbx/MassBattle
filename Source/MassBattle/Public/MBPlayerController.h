// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MBPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MASSBATTLE_API AMBPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// 검증용 : 콘솔에서 KillPawn 입력 -> Pawn 파괴 후 재스폰/재빙의(Possess)
	UFUNCTION(Exec)
	void KillPawn();

protected:
	virtual void PostInitializeComponents() override;

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
};
