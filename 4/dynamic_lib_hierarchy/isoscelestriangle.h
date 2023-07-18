#pragma once
#include "export_macros.h"
#include "triangle.h"

class IsoscelesTriangle : public Triangle
{
public:
	DYNAMIC_LIB_HIERARCHY_API IsoscelesTriangle(int cornerA, int cornerBC,
		int sideA, int sideBC);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};