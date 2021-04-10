#include <iostream>
#include "Rational.h"
using namespace std;
int main()
{
	int choose = 0;
	Rational tom;
	Rational tom2;
	Rational result;
	while (choose != -1)
	{
		cout << "Choose how many operands you want to use 1 or 2 " << endl;
		cin >> choose;
		if (choose == -1)
		{
			break;
		}
		if (choose == 1)
		{
			cout << "choose the type of operator you want to use : " << endl;
			cout << "1- reverse" << endl;
			cin >> choose;
			cout << "enter the operand :" << endl;
			cin >> tom;
			if (choose == 1)
			{
				 tom.Reverse();
				cout << "this is the result  " << tom;
			}
		}
		if (choose == 2) {
			cout << "choose the type of operator you want to use : " << endl;
			cout << "1 - for adding ,2 - for Subtraction, 3- multiplication ,4 - Division" << endl;
			cin >> choose;
			cout << "Enter the first number -" << endl;
			cin >> tom;
			cout << "Enter the second number -" << endl;
			cin >> tom2;
			if (choose == 1)
			{
				result = tom + tom2;
				cout << "the result is = " << result << endl;
			}
			if (choose == 2)
			{
				result = tom - tom2;
				cout << "the result is = " << result << endl;
			}
			if (choose == 3)
			{
				result = tom * tom2;
				cout << "the result is = " << result << endl;
			}
			if (choose == 4)
			{
				result = tom / tom2;
				cout << "the result is = " << result << endl;
			}
		}
		cout << "  if you want to end this program choose -1" << endl;
	}
	return 0;
}