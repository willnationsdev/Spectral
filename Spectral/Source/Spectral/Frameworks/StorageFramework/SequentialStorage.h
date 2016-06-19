// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SequentialStorage.generated.h"

UCLASS()
class SPECTRAL_API ASequentialStorage : public AInfo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASequentialStorage();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
