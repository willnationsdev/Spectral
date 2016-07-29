
#include "SkillSystem/SkillData.h"

template <typename DataType, ESkillDataType T, ESkillDataName N>
SkillData::SkillData(const DataType* d)
        : data( (void*) d ), type(T), name(N) {
}

template <typename DataType>
const DataType* SkillData::getData<DataType>() {
    return (DataType*) data;
}

ESkillDataName SkillData::getName() {
    return name;
}
