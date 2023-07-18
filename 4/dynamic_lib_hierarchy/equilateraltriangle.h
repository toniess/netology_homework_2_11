#pragma once
#include "isoscelestriangle.h"
#include "export_macros.h"

class EquilateralTriangle : public IsoscelesTriangle
{
public:
	DYNAMIC_LIB_HIERARCHY_API EquilateralTriangle(int side);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};