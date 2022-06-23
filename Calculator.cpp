#include "Calculator.h"

using std::cout; using std::endl; using std::string; using std::cin;

void  inputReceive()
{
	string userInput;

	cout << "Hello!" << endl;
	cout << "Please type 2 numbers and a desired operator between them." << endl;
	cout << "Example: 2 + 5" << endl;
	cout << "When finished hit enter." << endl;

	cin >> userInput;
	checkValidInput(userInput);

}
void checkValidInput(string& uInput)
{

}
bool checkValidDigit(char& digit)
{

}