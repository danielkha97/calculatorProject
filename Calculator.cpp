#include "Calculator.h"

void Calculator::inputReceive()
{
	string val1, val2;
	char input_operator;

	do { cin >> val1; } while (!Validator::isValidNumber(val1));
	do { cin >> input_operator; } while (!Validator::isValidOperator(input_operator));
	do { cin >> val2; } while (!Validator::isValidNumber(val2));
	try { calculateResult(std::stol(val1), std::stol(val2), input_operator); }
	catch (const char* msg) { cout << msg << endl; }
}

void Calculator::calculateResult(const int& val1, const int& val2, char& input_operator)
{
	switch (input_operator) {
	case '-':
		cout << "The result is: " << (val1 - val2) << endl;
		break;
	case'+':
		cout << "The result is: " << (val1 + val2) << endl;
		break;
	case '*':
		cout << "The result is: " << (val1 * val2) << endl;
		break;
	case'/':
		if (val2 == 0)
			throw "\nDivision by Zero, illegal\n";
		cout << "The result is: " << (val1 / val2) << endl;
		break;
	}
}

