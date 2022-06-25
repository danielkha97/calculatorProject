#pragma once
#include <stdio.h>
#include <regex>
#include <iostream>
#include <limits>

/*
Regex used for validation,
first: the '-' is optional,and then a digit (at least one)
second: the '-' is optional and then a digit, followed by a period, and then a digita again
cin -> ignores whitespaces
*/

using std::cout; using std::endl; using std::string; using std::cin;
class Validator {
	friend class Calculator;

	static bool isValidNumber(string& val);
	static bool isValidOperator(char& input_operator);
};