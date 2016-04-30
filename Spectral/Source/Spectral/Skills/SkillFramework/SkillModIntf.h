// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SkillModIntf.generated.h"

/**
*
*/
UINTERFACE()
class SPECTRAL_API USkillModIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class ISkillModIntf {
    GENERATED_IINTERFACE_BODY()

public:

    /*
     * Applies the modifications associated with this SkillMod to a given Skill
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillModIntf")
    void ApplyMod(const TScriptInterface<class ISkillIntf>& Skill);
};