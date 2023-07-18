#pragma once
#include "export_macros.h"
#include "quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
	DYNAMIC_LIB_HIERARCHY_API Parallelogram(int cornerAC, int cornerBD, int sideAC, int sideBD);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};