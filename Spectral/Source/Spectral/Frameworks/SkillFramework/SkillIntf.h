// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "Frameworks/SkillFramework/SkillReceptiveIntf.h"
#include "SkillIntf.generated.h"

UINTERFACE()
class SPECTRAL_API USkillIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ISkillIntf {

    GENERATED_IINTERFACE_BODY()

public:


    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    void Apply(const TScriptInterface<ISkillReceptiveIntf> &target);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    void Revert(const TScriptInterface<ISkillReceptiveIntf> &target);

};
