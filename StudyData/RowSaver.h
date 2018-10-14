#pragma once
#include "Row.h"
#include <ostream>
class RowSaver
{
public:
	RowSaver();
	virtual void save(Row * row, std::ostream & ostream) = 0;
	virtual ~RowSaver() = default;

private:

};
