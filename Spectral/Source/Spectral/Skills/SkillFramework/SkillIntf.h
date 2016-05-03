// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "SkillIntf.generated.h"

class USkillUserIntf;
class USkillExecutorIntf;
class USkillModStorageIntf;
class USkillEffectStorageIntf;

UINTERFACE()
class SPECTRAL_API USkillIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ISkillIntf {
    GENERATED_IINTERFACE_BODY()
    
public:	
    
    /*
     * Provides access to the ModStorage responsible for managing the relationship
     * between SkillMods and the Skill they are associated with.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    TScriptInterface<ISkillModStorageIntf> GetModStorage();

    /*
     * Provides access to the EffectStorage responsible for managing the relationship
     * between SkillEffects and the Skill they are associated with.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    TScriptInterface<ISkillEffectStorageIntf> GetEffectStorage();

    /*
     * Applies all SkillEffects within the Skill to the specified Target.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    void ApplySkill(const TScriptInterface<ISkillUserIntf>& Target);

    /*
     * Provides access to the SkillExecutor that distributed the Skill.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    TScriptInterface<ISkillExecutorIntf> GetSkillExecutor();
};
