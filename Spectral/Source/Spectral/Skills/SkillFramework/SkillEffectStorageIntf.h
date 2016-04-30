// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SkillEffectStorageIntf.generated.h"

class ISkillEffectIntf;

/**
*
*/
UINTERFACE()
class SPECTRAL_API USkillEffectStorageIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class ISkillEffectStorageIntf {
    GENERATED_IINTERFACE_BODY()

public:

    /*
     * Returns an array of the SkillEffects managed by the SkillEffectStorage.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillEffectStorageIntf")
    TArray<TScriptInterface<ISkillEffectIntf>> GetSkillEffects() const;

    /*
     * Adds a new SkillEffect to the array of skill effects.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillEffectStorageIntf")
    void AddSkillEffect(const TScriptInterface<ISkillEffectIntf>& SkillEffect);

    /*
     * Removes the referenced SkillEffect from the array of skill effects.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillEffectStorageIntf")
    void RemoveSkillEffectByRef(const TScriptInterface<ISkillEffectIntf>& SkillEffect);

    /*
     * Removes the SkillEffect at Index from the array of skill effects.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillEffectStorageIntf")
    void RemoveSkillEffectByIndex(int32 Index);
};