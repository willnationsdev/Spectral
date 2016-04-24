// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "SkillReactiveIntf.generated.h"

UINTERFACE()
class SPECTRAL_API USkillReactiveIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ISkillReactiveIntf {
    GENERATED_IINTERFACE_BODY()

public:

    
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillReactiveIntf")
    void React();
};
