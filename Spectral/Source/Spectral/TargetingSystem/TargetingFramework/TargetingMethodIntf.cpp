// Fill out your copyright notice in the Description page of Project Settings.

#include "Spectral.h"
#include "TargetingMethodIntf.h"


// Sets default values
ATargetingMethodIntf::ATargetingMethodIntf()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATargetingMethodIntf::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetingMethodIntf::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

