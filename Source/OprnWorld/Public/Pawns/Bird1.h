// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Bird1.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;
class UInputMappingContext;

UCLASS()
class OPRNWORLD_API ABird1 : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABird1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
