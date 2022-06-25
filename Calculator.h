#pragma once
#include "Validator.h"

using std::cout; using std::endl; using std::string; using std::cin;

class Calculator {
private:
	void inputReceive();
	void calculateResult(const int& val1, const int& val2, char& input_operator);
public:
	Calculator() { inputReceive(); }
};
