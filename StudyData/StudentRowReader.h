#pragma once
#include "RowSaver.h"
class StudentRowReader :
	public RowSaver
{
public:
	StudentRowReader();
	~StudentRowReader();
	virtual Row* readRow(std::istream& istream);
};

