// Fill out your copyright notice in the Description page of Project Settings.


#include "MassBattleProbe.h"
#include "MassBattleRenderTest.h"

// Sets default values
AMassBattleProbe::AMassBattleProbe()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMassBattleProbe::BeginPlay()
{
	Super::BeginPlay();
	
	MassBattleRender::PrintHello();
}

// Called every frame
void AMassBattleProbe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

