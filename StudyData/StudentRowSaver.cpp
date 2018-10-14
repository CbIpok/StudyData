#include "StudentRowSaver.h"



StudentRowSaver::StudentRowSaver()
{
}

/*void StudentRowSaver::save(const Row * row,  std::ostream & ostream)
{
	
}*/


StudentRowSaver::~StudentRowSaver()
{
}

void StudentRowSaver::save(Row * row, std::ostream & ostream)
{
	ostream << row->id << "\t";
	ostream << row->name << "\t";
	try {
		ostream << (dynamic_cast<StudentRow*>(row))->courses.size() << "\t:";
		for (const auto& i : (dynamic_cast<StudentRow*>(row))->courses)
		{
			ostream << "\t" << i;
		}
	}
	catch(std::bad_cast&)
	{

	}
}
