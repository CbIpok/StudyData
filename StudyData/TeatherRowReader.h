#pragma once
#include "RowReader.h"
class TeatherRowReader:RowReader
{
public:
	TeatherRowReader();
	~TeatherRowReader();
	virtual Row* readRow(std::istream& istream);
};

