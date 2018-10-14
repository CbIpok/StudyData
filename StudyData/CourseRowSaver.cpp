#include "CourseRowSaver.h"



CourseRowSaver::CourseRowSaver()
{
}

void CourseRowSaver::save(Row * row, std::ostream & ostream)
{
	ostream << row->id << "\t";
	ostream << row->name << "\t";
	ostream << (dynamic_cast<CourseRow*>(row))->teacher<<"\t";
	try {
		ostream << (dynamic_cast<CourseRow*>(row))->students.size() << "\t:";
		for (const auto& i : (dynamic_cast<CourseRow*>(row))->students)
		{
			ostream << "\t" << i;
		}
	}
	catch (std::bad_cast&)
	{

	}
	
}


CourseRowSaver::~CourseRowSaver()
{
}
