// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "SkillSystem/Enums/ESkillDataName.h"
#include "SkillSystem/Enums/ESkillDataType.h"


class SkillData {
public:
    template <typename DataType, ESkillDataType T, ESkillDataName N> SkillData(const DataType* d);
    template <typename DataType> const DataType* getData();
    ESkillDataName getName();
protected:
    void* data;
    ESkillDataName name;
    ESkillDataType type;
};

