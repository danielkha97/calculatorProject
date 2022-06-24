#include "Calculator.h"





void Calculator::inputReceive()
{
	string val1, val2;
	char op;

	cout << "\n\nHello!" << endl;
	cout << "Please enter an expression with the following format:" << endl;
	cout << "Number [enter] Operator [enter] Number [enter]" << endl;
	cout << "Legal operators: +  -  :  * \n\n" << endl;

	do { cin >> val1; } while (!checkIfNum(val1));
	do { cin >> op; } while (!checkIfOperator(op));
	do { cin >> val2; } while (!checkIfNum(val2));
	calculateResult(std::stod(val1), std::stod(val2), op);


}

/*
Regex used for validation,
first: the '-' is optional,and then a digit (at least one)
second: the '-' is optional and then a digit, followed by a period, and then a digita again
cin -> ignores whitespaces
*/
bool Calculator::checkIfNum(string& val)
{
	std::regex intFormat("-?\\d+");
	std::regex floatFormat("-?\\d+\\.\\d+");
	if (!std::regex_match(val, intFormat) && !std::regex_match(val, floatFormat))
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\n The number you've entered is illegal, please try again" << endl;

		return false;
	}
	return true;
}
bool Calculator::checkIfOperator(char& op)
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
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\n The operator you've entered is illegal, please try again" << endl;
		return false;
	}
}
void Calculator::calculateResult(const double& val1, const double& val2, char& op)
{
	switch (op) {
	case '-':
		cout << "The result is: " << (val1 - val2) << endl;
		break;
	case'+':
		cout << "The result is: " << (val1 + val2) << endl;
		break;
	case '*':
		cout << "The result is: " << (val1 * val2) << endl;
		break;
	case':':
		cout << "The result is: " << (val1 / val2) << endl;
		break;
	}
}

