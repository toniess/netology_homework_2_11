#pragma once
#include "export_macros.h"
#include "rectangle.h"

class Square : public Rectangle
{
public:
	
DYNAMIC_LIB_HIERARCHY_API Square(int side);
	
DYNAMIC_LIB_HIERARCHY_API bool isRight() override;
};