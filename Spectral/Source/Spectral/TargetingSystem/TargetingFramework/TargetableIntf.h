// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TargetingPermissionsIntf.h"
#include "TargetableIntf.generated.h"

/**
 * 
 */
UINTERFACE()
class SPECTRAL_API UTargetableIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};
    
class ITargetableIntf {
    GENERATED_IINTERFACE_BODY()

public:

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TargetableIntf")
    FVector GetTargetableLocation();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TargetableIntf")
    TScriptInterface<ITargetingPermissionsIntf> GetTargetingPermissions();
};
