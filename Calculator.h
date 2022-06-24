#pragma once
#include <stdio.h>
#include <iostream>
#include <regex>
#include <string>
#include <limits>
#include <ios>
#include <conio.h>

using std::cout; using std::endl; using std::string; using std::cin;

class Calculator {
private:
	void inputReceive();
	bool checkIfNum(string& val);
	bool checkIfOperator(char& op);
	void calculateResult(const double& val1, const double& val2, char& op);
public:
	Calculator() { inputReceive(); }
};
