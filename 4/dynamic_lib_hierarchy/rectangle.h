#pragma once
#include "export_macros.h"
#include "parallelogram.h"

class Rectangle : public Parallelogram
{
public:
	DYNAMIC_LIB_HIERARCHY_API Rectangle(int sideAC, int sideBD);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};