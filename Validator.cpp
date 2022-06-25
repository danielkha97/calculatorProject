#include "Validator.h"

bool Validator::isValidNumber(string& val)
{
	std::regex intFormat("-?\\d+");
//	std::regex floatFormat("-?\\d+\\.\\d+");

	if (!std::regex_match(val, intFormat))// && !std::regex_match(val, floatFormat))
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\n The number you've entered is illegal, please try again" << endl;

		return false;
	}
	return true;
}

bool Validator::isValidOperator(char& input_operator)
{
	switch (input_operator)
	{
	case '-':
		return true;
	case'+':
		return true;
	case '*':
		return true;
	case'/':
		return true;
	default:
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); /*ignores the rest of the input buffer*/
		cout << "\n The operator you've entered is illegal, please try again" << endl;
		return false;
	}
}
