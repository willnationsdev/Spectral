// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Frameworks/StorageFramework/CompositeStorageIntf.h"
#include "SequentialStorageIntf.generated.h"

UINTERFACE(NotBlueprintable)
class SPECTRAL_API USequentialStorageIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ISequentialStorageIntf {

    GENERATED_IINTERFACE_BODY()

public:

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SequentialStorageIntf")
    EStorageName GetName();
};
