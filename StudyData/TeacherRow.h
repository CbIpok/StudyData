#pragma once
#include "Row.h"
#include <vector>
struct TeacherRow : Row
{
	int experience;
	std::vector<int> courses;
};