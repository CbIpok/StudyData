#pragma once
#include <vector>
#include <istream>
#include <ostream>
class Table
{
public:
	Table();
	virtual ~Table();
	virtual void createTable(std::istream& istream) = 0;
	virtual void saveTable(std::ostream& ostream) = 0;
private:
	
};

