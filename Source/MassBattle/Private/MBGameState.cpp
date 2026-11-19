// Fill out your copyright notice in the Description page of Project Settings.


#include "MBGameState.h"

#include "MassBattle/MassBattle.h"

void AMBGameState::PostInitializeComponents()
{
	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] GameState::PostInitializeComponents  obj=%s")
		  , GFrameCounter, *GetName());

	Super::PostInitializeComponents();
}

void AMBGameState::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] GameState::BeginPlay  obj=%s")
		  , GFrameCounter, *GetName());
}