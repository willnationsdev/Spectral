// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "SkillDataIntf.generated.h"

UENUM(BlueprintType)
enum class ESkillDataName : uint8
{
    PowerF 		UMETA(DisplayName = "PowerF"),
    PowerI 		UMETA(DisplayName = "PowerI"),
    RangeF 		UMETA(DisplayName = "RangeF"),
    RangeI 		UMETA(DisplayName = "RangeI")
};

UINTERFACE()
class SPECTRAL_API USkillDataIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ISkillDataIntf {

    GENERATED_IINTERFACE_BODY()

public:

};
