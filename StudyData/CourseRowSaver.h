#pragma once
#include "RowSaver.h"
class CourseRowSaver :
	public RowSaver
{
public:
	CourseRowSaver();
	virtual void save(const Row& row, std::ostream& ostream);
	virtual ~CourseRowSaver();
};

