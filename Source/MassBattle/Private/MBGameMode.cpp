// Fill out your copyright notice in the Description page of Project Settings.


#include "MBGameMode.h"
#include "MBCharacter.h"
#include "MBGameState.h"
#include "MBPlayerController.h"
#include "MBPlayerState.h"

#include "MassBattle/MassBattle.h"

AMBGameMode::AMBGameMode()
{
	DefaultPawnClass = AMBCharacter::StaticClass();
	PlayerControllerClass = AMBPlayerController::StaticClass();
	GameStateClass = AMBGameState::StaticClass();
	PlayerStateClass = AMBPlayerState::StaticClass();
}

void AMBGameMode::PostInitializeComponents()
{
	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] GameMode::PostInitializeComponents  obj=%s")
		  , GFrameCounter, *GetName());

	Super::PostInitializeComponents();
}

void AMBGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] GameMode::InitGame  map=%s")
		  , GFrameCounter, *MapName);
}

void AMBGameMode::StartPlay()
{
	Super::StartPlay();

	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] GameMode::StartPlay")
		  , GFrameCounter);
}

void AMBGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] GameMode::PostLogin  controller=%s")
		  , GFrameCounter, *GetNameSafe(NewPlayer));
}