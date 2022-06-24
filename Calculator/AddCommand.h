#pragma once
#include <string>
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"
class AddCommand : public IBaseCommand
{
private:
	CalculatorProcessor* process = nullptr;
	int n1 = 0;
	int n2 = 0;

public:
	AddCommand(CalculatorProcessor* _proc, int _one, int _two)
	{
		process = _proc;
		n1 = _one;
		n2 = _two;
	}

	std::string Execute() {
		return process->GetAddition(n1, n2);
	}
};

