// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TimerIntf.h"
#include "DiscreteTimerIntf.generated.h"

/**
*
*/
UINTERFACE()
class SPECTRAL_API UDiscreteTimerIntf : public UTimerIntf
{
    GENERATED_UINTERFACE_BODY()
};

class IDiscreteTimerIntf {
    GENERATED_IINTERFACE_BODY()

public:

    /*
     *
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "DiscreteTimerIntf")
    int32 GetTime();
};

