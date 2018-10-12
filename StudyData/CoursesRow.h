#pragma once
#include <vector>
#include "Row.h"

struct Courses:public Row
{
	int teacher;
	std::vector<int> students;
};