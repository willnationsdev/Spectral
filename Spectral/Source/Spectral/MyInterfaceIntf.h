// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "Frameworks/StorageFramework/CompositeStorageIntf.h"
#include "MyInterfaceIntf.generated.h"

UINTERFACE()
class SPECTRAL_API UMyInterfaceIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API IMyInterfaceIntf {

    GENERATED_IINTERFACE_BODY()

public:

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MyInterfaceIntf")
    bool isEqual(const TScriptInterface<IMyInterfaceIntf> &other);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "CompositeStorageIntf")
    EStorageName GetName();

};
