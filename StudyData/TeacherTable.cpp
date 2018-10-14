#include "TeacherTable.h"



TeacherTable::TeacherTable()
{
}


TeacherTable::~TeacherTable()
{
}

void TeacherTable::createTable(std::istream& istream)
{
}

void TeacherTable::saveTable(std::ostream & ostream)
{
	ostream << NAME << std::endl;
	for (auto& i : COLUMNS)
	{
		ostream << i << "\t";
	}
	ostream << std::endl;
	TeacherRowSaver saver;
	for (auto& i : _rows)
	{
		saver.save(&i, ostream);
		ostream << std::endl;
	}
}
