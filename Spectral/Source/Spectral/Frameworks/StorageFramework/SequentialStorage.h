// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Frameworks/StorageFramework/SequentialStorageIntf.h"
#include "Frameworks/StorageFramework/StorageComponentIntf.h"
#include "Frameworks/StorageFramework/CompositeStorageIntf.h"
#include "SequentialStorage.generated.h"

UCLASS()
class SPECTRAL_API ASequentialStorage : public AInfo, public ISequentialStorageIntf,
    public IStorageComponentIntf, public ICompositeStorageIntf
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ASequentialStorage();

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick( float DeltaSeconds ) override;

    // ISequentialStorageIntf
    int32 Size_Implementation();
    void Resize_Implementation(int32 newSize);
    void Clear_Implementation();
    bool Empty_Implementation();

    // IStorageComponentIntf
    void OnAdd_Implementation();
    void OnRemove_Implementation();

    // ICompositeStorageIntf
    EStorageName GetName_Implementation();
};
