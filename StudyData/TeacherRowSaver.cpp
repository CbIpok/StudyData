#include "TeacherRowSaver.h"



TeacherRowSaver::TeacherRowSaver()
{
}

void TeacherRowSaver::save(Row * row, std::ostream & ostream)
{
	ostream << row->id << "\t";
	ostream << row->name << "\t";
	ostream << (dynamic_cast<TeacherRow*>(row))->experience << "\t";
	try {
		ostream << (dynamic_cast<TeacherRow*>(row))->courses.size() << "\t:";
		for (const auto& i : (dynamic_cast<TeacherRow*>(row))->courses)
		{
			ostream << "\t" << i;
		}
	}
	catch (std::bad_cast&)
	{

	}
}


TeacherRowSaver::~TeacherRowSaver()
{
}
