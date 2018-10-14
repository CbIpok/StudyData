#pragma once
#include <string>

struct Row
{
	int id;
	std::string name;
	virtual void MakeItAvalibleForDynamicCast() {};
};
