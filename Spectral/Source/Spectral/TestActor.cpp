// Fill out your copyright notice in the Description page of Project Settings.

#include "Spectral.h"
#include "TestActor.h"


// Sets default values
ATestActor::ATestActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
    Super::BeginPlay();
    OnAdd_Implementation();
}

// Called every frame
void ATestActor::Tick( float DeltaTime )
{
    Super::Tick( DeltaTime );

}

EStorageName ATestActor::GetName_Implementation() {
    return EStorageName::SN_Skills;
}

void ATestActor::OnAdd_Implementation() {
    UE_LOG(LogTemp, Warning, TEXT("OnAdd_Implementation has triggered"));
    return;
}
