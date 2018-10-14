#pragma once
#include "Table.h"
#include <vector>
#include "TableComponents.h"
#include <ostream>
class CourseTable :
	public Table
{
public:
	CourseTable();
	virtual ~CourseTable();
	const std::string NAME = "courses";
	const std::vector<std::string> COLUMNS{"id","name","teacher","studunts"};
	inline void addRow(const CourseRow& courseRow) { _rows.push_back(courseRow); };
	virtual void createTable(std::istream& istream);
	inline CourseRow operator [] (int i) { _rows[i]; };

	// Inherited via Table
	virtual void saveTable(std::ostream & ostream) override;

private:
	std::vector<CourseRow> _rows;



	
};

