// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "TargetingMethodIntf.generated.h"

UENUM(BlueprintType)
enum class ETargetingMethodName : uint8
{
    TargetingVolume UMETA(DisplayName = "TargetingVolume")
};

UINTERFACE()
class SPECTRAL_API UTargetingMethodIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ITargetingMethodIntf {

    GENERATED_IINTERFACE_BODY()

public:

};
