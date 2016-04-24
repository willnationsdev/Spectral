// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "SkillIntf.generated.h"

class USkillUserIntf;

UINTERFACE()
class SPECTRAL_API USkillIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ISkillIntf {
    GENERATED_IINTERFACE_BODY()
    
public:	
    
    /*
     * Causes the Skill to undergo "alterations" based on modifications queued
     * to take effect.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    void ApplyMods();

    /*
     * Causes the Skill to revert all "alterations" from modifications previously
     * triggered by ApplyMods().
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    void RevertMods();

    /*
     * Provides access to the ModStorage responsible for managing the relationship
     * between SkillMods and the Skill they are associated with.
     */
    // TODO: Need to add the IModStorageIntf and make it a return value here
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    void GetModStorage();

    /*
     * Applies all SkillEffects within the Skill to the specified Target.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    void ApplySkill(const TScriptInterface<ISkillUserIntf>& Target);

    /*
     * Provides access to the SkillExecutor that distributed the Skill.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    TScriptInterface<ISkillUserIntf> GetSkillExecutor();
};
