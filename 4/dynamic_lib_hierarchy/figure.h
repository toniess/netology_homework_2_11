#pragma once
#include <iostream>
#include "export_macros.h"

class Figure
{
public:
	DYNAMIC_LIB_HIERARCHY_API Figure();

	DYNAMIC_LIB_HIERARCHY_API int getCornerCount();
	
	DYNAMIC_LIB_HIERARCHY_API virtual bool isRight();

	DYNAMIC_LIB_HIERARCHY_API virtual void printCorners();

	DYNAMIC_LIB_HIERARCHY_API void print_info();

protected:
	Figure(int corners);
	
	std::string m_name = "Фигура";

private:
	int m_corner;
};