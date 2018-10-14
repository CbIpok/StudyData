#pragma once
#include "Table.h"
#include <vector>
#include "TableComponents.h"

class StudentTable :
	public Table
{
public:
	StudentTable();
	virtual ~StudentTable();
	const std::string NAME = "student";
	const std::vector<std::string> COLUMNS{ "id","name","courses" };
	virtual void createTable(std::istream& istream);
	inline void addRow(const StudentRow& studentRow) { _rows.push_back(studentRow); };;

	// Inherited via Table
	virtual void saveTable(std::ostream & ostream) override;
	inline StudentRow operator [] (int i) { _rows[i]; };
private:
	std::vector<StudentRow> _rows;

	
};

