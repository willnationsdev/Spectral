// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TargetableIntf.h"
#include "TargetingAreaIntf.generated.h"

UINTERFACE()
class SPECTRAL_API UTargetingAreaIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};
    
class ITargetingAreaIntf {
    GENERATED_IINTERFACE_BODY()

public:	
    
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TargetingAreaIntf")
    TArray<TScriptInterface<ITargetableIntf>> GetTargets();
};
