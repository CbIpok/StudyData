#pragma once
#include "Row.h"
#include <vector>

struct StudentRow :public Row
{
	std::vector<int> courses;
};