#pragma once
#ifdef DYNAMIC_LIB_HIERARCHY_EXPORTS
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllimport)
#endif

#include "isoscelestriangle.h"


class EquilateralTriangle : public IsoscelesTriangle
{
public:
	DYNAMIC_LIB_HIERARCHY_API EquilateralTriangle(int side);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};