#include <iostream>
#include "TableComponents.h"

using namespace std;

int main()
{
	StudentRow srow;
	srow.name = "name";
	srow.id = 0;
	srow.courses.push_back(1);
	StudentRowSaver saverS;
	//saverS.save(&srow, cout);
	cout << std::endl;

	CourseRow crow;
	crow.id = 0;
	crow.name = "name";
	crow.students.push_back(1);
	crow.teacher = 1;
	CourseRowSaver saverC;
	//saverC.save(&crow, cout);
	cout << std::endl;

	TeacherRow trow;
	trow.id = 0;
	trow.name = "name";
	trow.courses.push_back(1);
	trow.experience = 1;
	TeacherRowSaver saverT;
	//saverT.save(&trow, cout);
	cout << std::endl;

	CourseTable ctable;
	for (size_t i = 0; i < 10; i++)
	{
		ctable.addRow(crow);
		crow.id++;
		crow.name = "name" + to_string(i);
	}
	ctable.saveTable(cout);

	StudentTable stable;
	for (size_t i = 0; i < 10; i++)
	{
		stable.addRow(srow);
		srow.id++;
		srow.name = "name" + to_string(i);
	}
	stable.saveTable(cout);

	TeacherTable ttable;
	for (size_t i = 0; i < 10; i++)
	{
		ttable.addRow(trow);
		trow.id++;
		trow.name = "name" + to_string(i);
	}
	ttable.saveTable(cout);
} 