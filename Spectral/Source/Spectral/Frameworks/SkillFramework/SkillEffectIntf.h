// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "Frameworks/SkillFramework/SkillReceptiveIntf.h"
#include "SkillEffectIntf.generated.h"

UENUM(BlueprintType)
enum class ESkillEffectName : uint8
{
    DealDamage              UMETA(DisplayName = "DealDamage"),
    RestoreHealth 	        UMETA(DisplayName = "RestoreHealth"),
    BlockDirectionalDamage  UMETA(DisplayName = "BlockDirectionalDamage")
};

UINTERFACE(NotBlueprintable)
class SPECTRAL_API USkillEffectIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ISkillEffectIntf {

    GENERATED_IINTERFACE_BODY()

public:

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    void Apply(const TScriptInterface<ISkillReceptiveIntf> &target);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillIntf")
    void Revert(const TScriptInterface<ISkillReceptiveIntf> &target);

};