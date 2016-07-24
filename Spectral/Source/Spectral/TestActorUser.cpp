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
    storage = TScriptInterface<ICompositeStorageIntf>(NewObject<ATestActor>());
    if (ICompositeStorageIntf::Execute_GetName(storage.GetObjectRef()) == EStorageName::Skills) {
        UE_LOG(LogTemp, Warning, TEXT("ICompositeStorageIntf method works!"));
    }

    if (IMyInterfaceIntf::Execute_GetName(storage.GetObjectRef()) == EStorageName::Skills) {
        UE_LOG(LogTemp, Warning, TEXT("IMyInterfaceIntf method works!"));
    }
    /*
    if (storage.GetObjectRef()->GetClass()->ImplementsInterface(UStorageComponentIntf::StaticClass())) {
        UE_LOG(LogTemp, Warning, TEXT("ATestActor implements IStorageComponentIntf"));
    }
    if (storage.GetObjectRef()->GetClass()->ImplementsInterface(UCompositeStorageIntf::StaticClass())) {
        UE_LOG(LogTemp, Warning, TEXT("ATestActor implements ICompositeStorageIntf"));
    }
    if (ICompositeStorageIntf::Execute_GetName(storage.GetObjectRef()) == EStorageName::Skills) {
        UE_LOG(LogTemp, Warning, TEXT("Child's methods work!"));
    }
    //TScriptInterface<IStorageComponentIntf> s1(Cast<ATestActor>(storage.GetObjectRef())); //Cannot compile to execute!
    auto a = TScriptInterface<ICompositeStorageIntf>(Cast<ATestActor>(storage.GetObjectW()));
    */
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

