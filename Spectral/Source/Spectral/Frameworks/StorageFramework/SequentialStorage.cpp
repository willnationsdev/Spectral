// Fill out your copyright notice in the Description page of Project Settings.

#include "Spectral.h"
#include "SequentialStorage.h"


// Sets default values
ASequentialStorage::ASequentialStorage()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASequentialStorage::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void ASequentialStorage::Tick( float DeltaTime )
{
    Super::Tick( DeltaTime );

}

// ISequentialStorageIntf
int32 ASequentialStorage::Size_Implementation() {
    return 0;
}

void ASequentialStorage::Resize_Implementation(int32 newSize) {

}

void ASequentialStorage::Clear_Implementation() {

}

bool ASequentialStorage::Empty_Implementation() {
    return false;
}

// IStorageComponentIntf
void ASequentialStorage::OnAdd_Implementation() {

}

void ASequentialStorage::OnRemove_Implementation() {

}

// ICompositeStorageIntf
EStorageName ASequentialStorage::GetName_Implementation() {
    return EStorageName::Skills;
}