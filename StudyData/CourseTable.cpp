#include "CourseTable.h"



CourseTable::CourseTable()
{
}


CourseTable::~CourseTable()
{
}

void CourseTable::createTable(std::istream& istream)
{
}

void CourseTable::saveTable(std::ostream & ostream)
{
	ostream << NAME << std::endl;
	for (auto& i : COLUMNS)
	{
		ostream << i << "\t";
	}
	ostream << std::endl;
	CourseRowSaver saver;
	for (auto& i : _rows)
	{
		saver.save(&i,ostream);
		ostream << std::endl;
	}
}
