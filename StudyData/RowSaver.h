#pragma once
#include "Row.h"
#include <ostream>
class RowSaver
{
public:
	RowSaver();
	virtual void save(const Row& row,const std::ostream& ostream) = 0;
	virtual ~RowSaver() = default;

private:

};
