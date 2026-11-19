// Fill out your copyright notice in the Description page of Project Settings.


#include "MBPlayerState.h"

#include "MassBattle/MassBattle.h"

void AMBPlayerState::PostInitializeComponents()
{
	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] PlayerState::PostInitializeComponents  obj=%s")
		  , GFrameCounter, *GetName());

	Super::PostInitializeComponents();
}

void AMBPlayerState::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] PlayerState::BeginPlay  obj=%s  owner=%s")
		  , GFrameCounter, *GetName(), *GetNameSafe(GetOwner()));
}