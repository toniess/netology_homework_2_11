#pragma once
#ifdef DYNAMIC_LIB_HIERARCHY_EXPORTS
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllimport)
#endif
#include "parallelogram.h"

class Rhomb : public Parallelogram
{
public:
	DYNAMIC_LIB_HIERARCHY_API Rhomb(int cornerAC, int cornerBD, int side);
	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};