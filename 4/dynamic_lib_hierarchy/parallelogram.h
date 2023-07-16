#pragma once
#ifdef DYNAMIC_LIB_HIERARCHY_EXPORTS
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllimport)
#endif
#include "quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
	DYNAMIC_LIB_HIERARCHY_API Parallelogram(int cornerAC, int cornerBD, int sideAC, int sideBD);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};