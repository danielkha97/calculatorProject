#include "CalculatorManager.h"

void CalculatorManager::Run()
{
	displayMessage();
	while (_getch() != 'q')
		Calculator calc;

}
void CalculatorManager::displayMessage()
{
	cout << "\n\nHello!\n" << endl;
	cout << "Please enter an expression in the following format:" << endl;
	cout << "Number [enter] Operator [enter] Number [enter]" << endl;
	cout << "Legal operators: +  -  /  * \n\n" << endl;
	cout << "To end press q\n\n" << endl;
}