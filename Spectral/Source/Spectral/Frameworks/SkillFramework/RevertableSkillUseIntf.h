// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "SkillReceptiveIntf.h"
#include "RevertableSkillUseIntf.generated.h"

UINTERFACE()
class SPECTRAL_API URevertableSkillUseIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API IRevertableSkillUseIntf {

    GENERATED_IINTERFACE_BODY()

public:

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RevertibleSkillUseIntf")
    void Apply(const TScriptInterface<ISkillReceptiveIntf> &target);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RevertibleSkillUseIntf")
    void Revert(const TScriptInterface<ISkillReceptiveIntf> &target);
};
