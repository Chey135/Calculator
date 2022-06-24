#pragma once
#include <string>
class IBaseCommand
{
public:
	virtual std::string Execute() = 0;
};

