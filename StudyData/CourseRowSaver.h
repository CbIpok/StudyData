#pragma once
#include "TableComponents.h"
#include "RowSaver.h"
class CourseRowSaver :
	public RowSaver
{
public:
	CourseRowSaver();
	virtual void save(Row * row, std::ostream & ostream) override;
	virtual ~CourseRowSaver();
};

