#pragma once
#include "export_macros.h"
#include "parallelogram.h"

class Rhomb : public Parallelogram
{
public:
	DYNAMIC_LIB_HIERARCHY_API Rhomb(int cornerAC, int cornerBD, int side);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};