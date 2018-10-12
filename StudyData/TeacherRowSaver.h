#pragma once
#include "RowSaver.h"
class TeacherRowSaver :
	public RowSaver
{
public:
	TeacherRowSaver();
	virtual void save(const Row& row, std::ostream& ostream);
	virtual ~TeacherRowSaver();
};

