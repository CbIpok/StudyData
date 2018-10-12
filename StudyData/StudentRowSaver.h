#pragma once
#include "RowSaver.h"
class StudentRowSaver :
	public RowSaver
{
public:
	StudentRowSaver();
	virtual void save(const Row& row, std::ostream& ostream);
	virtual ~StudentRowSaver();
};

