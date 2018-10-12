#pragma once
#include "Row.h"
#include <istream>

class RowReader
{
public:
	RowReader();
	virtual Row* readRow(std::istream& istream) = 0;
	virtual ~RowReader() =  default;

private:

};
