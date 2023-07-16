#pragma once
#ifdef DYNAMIC_LIB_HIERARCHY_EXPORTS
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllimport)
#endif
#include "triangle.h"

class RightTriangle : public Triangle
{
public:
	DYNAMIC_LIB_HIERARCHY_API RightTriangle(int cornerA, int cornerB,
		int sideA, int sideB, int sideC);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};