//#include <iostream>

using namespace std;
//a simple calculator, only using 4 operators: +, -, *, /
int main() {
	double num1, num2;
	
	char operation;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter first number: ";
	cin >> num2;

	cout << "Enter operation: ";
	cin >> operation;

//operators using switch case statement
	switch (operation)
	{
	case '+':
		cout << "Total: " << num1 + num2 << endl;
	case '-':
		cout << "Difference: " << num1 - num2 << endl;
	case '*':
		cout << "Produuct: " << num1 * num2 << endl;
	case '/':
		cout << "Quotient: " << num1 / num2 << endl;

	}
	return 0;
}