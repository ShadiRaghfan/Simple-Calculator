#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double input1, input2;
	string op;

	cout << "Please enter the first input: ";
	cin >> input1;

	cout << "Please enter the second input: ";
	cin >> input2;

	cout << "Please choose the operator \nMultiplication: x\nDivision: /\nAddition: +\nSubtraction: -\n";
	cout << "Operator: ";
	cin >> op;

	if (op == "+")
	{
		double result(input1 + input2);
		cout << "Result: " << result;
	}
	else if (op == "-")
	{
		double result1(input1 - input2);
		cout << "Result: " << result1;

	}
	else if (op == "x")
	{
		double result2(input1 * input2);
		cout << "Result: " << result2;
	}
	else if (op == "/")
	{
		double result3(input1 / input2);
			cout << "Result: " << result3;
	}
	else
	{
		cout << "Invalid operator.";
	}

	cout << endl;
	return 0;
}