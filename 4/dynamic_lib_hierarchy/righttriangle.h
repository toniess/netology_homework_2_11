#pragma once
#include "export_macros.h"
#include "triangle.h"

class RightTriangle : public Triangle
{
public:
	DYNAMIC_LIB_HIERARCHY_API RightTriangle(int cornerA, int cornerB,
		int sideA, int sideB, int sideC);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};