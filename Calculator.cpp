#include "Calculator.h"
#define  invalidInput 'C'


using std::cout; using std::endl; using std::string; using std::cin;

void  inputReceive()
{
	string val1, val2;
	char op;

	cout << "Hello!" << endl;
	cout << "Please enter an expression with the following foramt:" << endl;
	cout << "Number [space] Operator [space] Number [space]" << endl;

	do { cin >> val1; } while (!checkIfNum(val1));
	do { cin >> op; } while (!checkIfOperator(op));
	do { cin >> val2; } while (!checkIfNum(val2));
}

/*
Regex used for validation,
first: the '-' is optional,and then a digit (at least one)
second: the '-' is optional and then a digit, followed by a period, and then a digita again

cin -> ignores whitespaces
*/
bool checkIfNum(string& val)
{
	std::regex intFormat("-?\\d+");
	std::regex floatFormat("-?\\d+\\.\\d+");
	if (!std::regex_match(val, intFormat) && !std::regex_match(val, floatFormat))
	{
		cout << "\n The number you've entered is illegal" << endl;
		return false;
	}


	return true;
}
bool checkIfOperator(char& op)
{
	switch (op)
	{
	case '-':
		return true;
	case'+':
		return true;
	case '*':
		return true;
	case':':
		return true;
	default:
		cout << "\n The operator you've entered is illegal" << endl;
		return false;
	}
}