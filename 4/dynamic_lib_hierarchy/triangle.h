#pragma once
#include "export_macros.h"
#include "figure.h"

 
class Triangle : public Figure
{
public:
	DYNAMIC_LIB_HIERARCHY_API Triangle(int, int, int, int, int, int);

	DYNAMIC_LIB_HIERARCHY_API int getCornerA();
	DYNAMIC_LIB_HIERARCHY_API int getCornerB();
	DYNAMIC_LIB_HIERARCHY_API int getCornerC();

	DYNAMIC_LIB_HIERARCHY_API int getSideA();
	DYNAMIC_LIB_HIERARCHY_API int getSideB();
	DYNAMIC_LIB_HIERARCHY_API int getSideC();

	DYNAMIC_LIB_HIERARCHY_API void printCorners() override;

	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;

protected:
	int m_cornerA;
	int m_cornerB;
	int m_cornerC;

	int m_sideA;
	int m_sideB;
	int m_sideC;
};
