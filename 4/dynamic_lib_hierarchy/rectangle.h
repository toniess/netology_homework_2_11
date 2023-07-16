#pragma once
#ifdef DYNAMIC_LIB_HIERARCHY_EXPORTS
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllimport)
#endif
#include "parallelogram.h"

class Rectangle : public Parallelogram
{
public:
	DYNAMIC_LIB_HIERARCHY_API Rectangle(int sideAC, int sideBD);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};