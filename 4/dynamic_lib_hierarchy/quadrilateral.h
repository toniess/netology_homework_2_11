#pragma once
#include "export_macros.h"
#include "figure.h"


class Quadrilateral : public Figure
{
public:
	DYNAMIC_LIB_HIERARCHY_API Quadrilateral(int cornerA, int cornerB, int cornerC, int cornerD,
		int sideA, int sideB, int sideC, int sideD);

	DYNAMIC_LIB_HIERARCHY_API int getCornerA();
	DYNAMIC_LIB_HIERARCHY_API int getCornerB();
	DYNAMIC_LIB_HIERARCHY_API int getCornerC();
	DYNAMIC_LIB_HIERARCHY_API int getCornerD();

	DYNAMIC_LIB_HIERARCHY_API int getSideA();
	DYNAMIC_LIB_HIERARCHY_API int getSideB();
	DYNAMIC_LIB_HIERARCHY_API int getSideC();
	DYNAMIC_LIB_HIERARCHY_API int getSideD();

	DYNAMIC_LIB_HIERARCHY_API void printCorners() override;

	DYNAMIC_LIB_HIERARCHY_API bool isRight() override;

protected:
	int m_cornerA;
	int m_cornerB;
	int m_cornerC;
	int m_cornerD;

	int m_sideA;
	int m_sideB;
	int m_sideC;
	int m_sideD;
};