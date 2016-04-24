// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "SkillExecutorIntf.generated.h"

/*
 * Carries a Skill from a SkillUser to a set of other SkillUsers targeted for
 * distribution. Ideally, there are many kinds of SkillExecutors, for example...
 * - static volumes (like a wall, circle, or projectile)
 * - dynamic volumes (like an expanding wave)
 * - targeted 
 */
UINTERFACE()
class SPECTRAL_API USkillExecutorIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ISkillExecutorIntf {
    GENERATED_IINTERFACE_BODY()

public:

    /*
     * Provides access to the SkillExecutor that distributed the Skill.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    TScriptInterface<class ISkillUserIntf> GetSkillOwner();

    /*
     *
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    TScriptInterface<class ISkillIntf> GetSkill();
};
