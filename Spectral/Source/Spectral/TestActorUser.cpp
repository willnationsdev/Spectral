// Fill out your copyright notice in the Description page of Project Settings.

#include "Spectral.h"
#include "TestActor.h"
#include "TestActorUser.h"


// Sets default values
ATestActorUser::ATestActorUser()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActorUser::BeginPlay()
{
    Super::BeginPlay();
    storage = TScriptInterface<ICompositeStorageIntf>(new ATestActor());
    //storage->OnAdd();

    //#if UE_BUILD_DEBUG
        //GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "debug msg");
    //#endif
}

// Called every frame
void ATestActorUser::Tick( float DeltaTime )
{
    Super::Tick( DeltaTime );

}

