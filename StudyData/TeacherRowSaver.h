#pragma once
#include "TableComponents.h"
#include "RowSaver.h"
class TeacherRowSaver :
	public RowSaver
{
public:
	TeacherRowSaver();
	virtual void save(Row * row, std::ostream & ostream) override;
	virtual ~TeacherRowSaver();
};

