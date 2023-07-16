#pragma once
#ifdef DYNAMIC_LIB_HIERARCHY_EXPORTS
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllimport)
#endif
#include "rectangle.h"

class Square : public Rectangle
{
public:
	
DYNAMIC_LIB_HIERARCHY_API Square(int side);
	
DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};