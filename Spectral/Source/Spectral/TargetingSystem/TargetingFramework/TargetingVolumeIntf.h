// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TargetableIntf.h"
#include "TargetingVolumeIntf.generated.h"

UINTERFACE()
class SPECTRAL_API UTargetingVolumeIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ITargetingVolumeIntf {
    GENERATED_IINTERFACE_BODY()
    
public:	
    
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TargetingVolumeIntf")
    TArray<TScriptInterface<ITargetableIntf>> GetTargetables();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TargetingVolumeIntf")
    TArray<FVector> GetTargetableLocations();
};
