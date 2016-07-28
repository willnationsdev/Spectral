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

    /*
     * Returns the number of items currently stored in the internal array.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SequentialStorageIntf")
    int32 Size();

    /*
     * Changes the capacity to the given amount, truncating values later on.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SequentialStorageIntf")
    void Resize(int32 newSize);

    /*
     * Resets the internal array's size to 0. Shorthand for Resize(0).
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SequentialStorageIntf")
    void Clear();

    /*
     * Returns whether the internal array's size is non-zero.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SequentialStorageIntf")
    bool Empty();
};
