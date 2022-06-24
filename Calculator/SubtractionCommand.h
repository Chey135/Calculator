#pragma once
#include <string>
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"
class SubtractionCommand : public IBaseCommand
{
private:
	CalculatorProcessor* process = nullptr;
	int n1 = 0;
	int n2 = 0;

public:
	SubtractionCommand(CalculatorProcessor* _proc, int _one, int _two)
	{
		process = _proc;
		n1 = _one;
		n2 = _two;
	}

	std::string Execute() {
		return process->GetSubtraction(n1, n2);
	}
};

