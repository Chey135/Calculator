#pragma once
#include <string>
class CalculatorProcessor
{
private:
    static CalculatorProcessor* _processor;
    int baseNumber;
    CalculatorProcessor() {};//empty

public:
    static CalculatorProcessor* GetInstance()
    {
        if (_processor == nullptr)
        {
            _processor = new CalculatorProcessor();
        }
        return _processor;
    }

    CalculatorProcessor(CalculatorProcessor& other) = delete;
    void operator=(const CalculatorProcessor& other) = delete;

    void SetBaseNumber(int number) {
        baseNumber = number;
    }
    std::string GetDecimal()
    {
        return std::to_string(baseNumber);
    }

    std::string GetBinary()
    {
        std::string results = "";
        int number = baseNumber;
        for (int i = 0; i < 32; i++)
        {
            if (baseNumber % 2 == 0)
            {
                results = "0" + results;
            }
            else {
                results = "1" + results;
            }
            number = number / 2;


        }
        return results;
    }
    std::string GetHexaDecimal()
    {
        std::string results = ";";
        int number = baseNumber;
        while (number > 0)
        {
            int mod = number % 16;
            if (mod < 10)
            {
                results = std::to_string(mod) + results;
            }
            else if (mod == 10) {
                results = "A" + results;
            }
            else if (mod == 11) {
                results = "B" + results;
            }
            else if (mod == 12) {
                results = "C" + results;
            }
            else if (mod == 13) {
                results = "D" + results;
            }
            else if (mod == 14) {
                results = "E" + results;
            }
            else if (mod == 15) {
                results = "F" + results;
            }
            results = number % 16;
        }
        results = "0x" + results;

        return results;
    }

    std::string GetAddition(int n1, int n2) {
        return std::to_string(n1 + n2);
    }
    std::string GetSubtraction(int n1, int n2) {
        return std::to_string(n1 - n2);
    }
    std::string GetMult(int n1, int n2) {
        return std::to_string(n1 * n2);
    }
    std::string GetDivide(int n1, int n2) {
        return std::to_string(n1 / n2);
    }


};
CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

