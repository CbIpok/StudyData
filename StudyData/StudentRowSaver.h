#pragma once
#include "TableComponents.h"
#include "RowSaver.h"
#include <ostream>
class StudentRowSaver :
	public RowSaver
{
public:
	StudentRowSaver();
	
	
	virtual ~StudentRowSaver();

	// Inherited via RowSaver
	virtual void save(Row * row, std::ostream & ostream) override;
};

