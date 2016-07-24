// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Frameworks/StorageFramework/CompositeStorageIntf.h"
#include "TestActorUser.generated.h"

UCLASS()
class SPECTRAL_API ATestActorUser : public AActor
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ATestActorUser();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TestActorUser")
	TScriptInterface<ICompositeStorageIntf> storage;

};
