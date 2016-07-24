// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Frameworks/StorageFramework/CompositeStorageIntf.h"
#include "MyInterfaceIntf.h"
#include "TestActor.generated.h"

UCLASS()
class SPECTRAL_API ATestActor : public AActor, public ICompositeStorageIntf, public IMyInterfaceIntf
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ATestActor();

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick( float DeltaSeconds ) override;

    EStorageName GetName_Implementation();

    void OnAdd_Implementation();
    void OnFun_Implementation();

    bool isEqual_Implementation(const TScriptInterface<IMyInterfaceIntf> &other);
};
