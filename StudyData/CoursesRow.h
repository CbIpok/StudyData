#pragma once
#include <vector>
#include "Row.h"

struct CourseRow:public Row
{
	int teacher;
	std::vector<int> students;
};