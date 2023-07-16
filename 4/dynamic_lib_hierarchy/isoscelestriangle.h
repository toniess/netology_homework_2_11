#pragma once
#ifdef DYNAMIC_LIB_HIERARCHY_EXPORTS
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllimport)
#endif
#include "triangle.h"

class IsoscelesTriangle : public Triangle
{
public:
	DYNAMIC_LIB_HIERARCHY_API IsoscelesTriangle(int cornerA, int cornerBC,
		int sideA, int sideBC);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};