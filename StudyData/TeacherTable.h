#pragma once
#include "Table.h"
#include <vector>
#include "TableComponents.h"

class TeacherTable :
	public Table
{
public:
	TeacherTable();
	virtual ~TeacherTable();
	const std::string NAME = "teacher";
	const std::vector<std::string> COLUMNS{ "id","name","exp","courses" };
	virtual void createTable(std::istream& istream);
	inline void addRow(const TeacherRow& teacherRow) { _rows.push_back(teacherRow); };;
	inline TeacherRow operator [] (int i) { _rows[i]; };

	// Inherited via Table
	virtual void saveTable(std::ostream & ostream) override;
private:
	std::vector<TeacherRow> _rows;

	
};

