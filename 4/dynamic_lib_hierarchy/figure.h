#pragma once
#ifdef DYNAMIC_LIB_HIERARCHY_EXPORTS
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_HIERARCHY_API __declspec(dllimport)
#endif
#include <iostream>

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