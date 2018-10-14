#include "StudentTable.h"



StudentTable::StudentTable()
{
}


StudentTable::~StudentTable()
{
}

void StudentTable::createTable(std::istream& istream)
{
}

void StudentTable::saveTable(std::ostream & ostream)
{
	ostream << NAME << std::endl;
	for (auto& i : COLUMNS)
	{
		ostream << i << "\t";
	}
	ostream << std::endl;
	StudentRowSaver saver;
	for (auto& i : _rows)
	{
		saver.save(&i, ostream);
		ostream << std::endl;
	}
}
