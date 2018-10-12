#pragma once
#include "RowReader.h"
class CourseRowReader :
	public RowReader
{
public:
	CourseRowReader();
	virtual Row* readRow(std::istream& istream);
	virtual ~CourseRowReader();
};

