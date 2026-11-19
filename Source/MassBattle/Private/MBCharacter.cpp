// Fill out your copyright notice in the Description page of Project Settings.


#include "MBCharacter.h"

#include "MassBattle/MassBattle.h"

// Sets default values
AMBCharacter::AMBCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMBCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] Character::BeginPlay  obj=%s")
		, GFrameCounter, *GetName());
}

void AMBCharacter::PostInitializeComponents()
{
	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] Character::PostInitializeComponents  obj=%s")
		, GFrameCounter, *GetName());

	Super::PostInitializeComponents();
}

void AMBCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] Character::PossessedBy  controller=%s")
		, GFrameCounter, *GetNameSafe(NewController));
}

void AMBCharacter::Destroyed()
{
	UE_LOG(LogMassBattle, Log, TEXT("[Frame %llu] Character::Destroyed  obj=%s")
		, GFrameCounter, *GetName());

	Super::Destroyed();
}

// Called every frame
void AMBCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMBCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

