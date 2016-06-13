// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SkillEffectIntf.generated.h"

class ISkillEffectStorageIntf;

/**
*
*/
UINTERFACE()
class SPECTRAL_API USkillEffectIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class ISkillEffectIntf {
    GENERATED_IINTERFACE_BODY()

public:

    /*
     * Applies the modifications made by this SkillEffect on a given SkillUser.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillEffectIntf")
    void ApplyEffect(const TScriptInterface<class ISkillUserIntf>& Skill);

    /*
     * Reverts the modifications made by this SkillEffect on a given SkillUser.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillEffectIntf")
    void RevertEffect(const TScriptInterface<class ISkillUserIntf>& Skill);

    /*
     * Returns a reference to the containing Storage object.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillEffectIntf")
    TScriptInterface<ISkillEffectStorageIntf> GetStorage();
};