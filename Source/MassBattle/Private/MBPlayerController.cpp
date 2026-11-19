// Fill out your copyright notice in the Description page of Project Settings.


#include "MBPlayerController.h"
#include "GameFramework/GameModeBase.h"

#include "MassBattle/MassBattle.h"

void AMBPlayerController::PostInitializeComponents()
{
	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] Controller::PostInitializeComponents  obj=%s")
		  , GFrameCounter, *GetName());

	Super::PostInitializeComponents();
}

void AMBPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] Controller::BeginPlay  obj=%s")
		  , GFrameCounter, *GetName());
}

void AMBPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] Controller::OnPossess  pawn=%s")
		  , GFrameCounter, *GetNameSafe(InPawn));
}

void AMBPlayerController::OnUnPossess()
{
	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] Controller::OnUnPossess  pawn=%s")
		  , GFrameCounter, *GetNameSafe(GetPawn()));

	Super::OnUnPossess();
}

void AMBPlayerController::KillPawn()
{
	if (APawn* P = GetPawn())
	{
		UE_LOG(LogMassBattle, Log, TEXT("KillPawn: destroying %s"), *P->GetName());
		P->Destroy();
	}

	if (AGameModeBase* GM = GetWorld()->GetAuthGameMode())
	{
		GM->RestartPlayer(this);
	}
}