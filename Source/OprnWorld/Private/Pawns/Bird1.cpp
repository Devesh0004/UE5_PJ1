// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/Bird1.h"

// Sets default values
ABird1::ABird1()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABird1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABird1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABird1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

