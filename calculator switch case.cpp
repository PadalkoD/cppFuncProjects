#include <iostream>
using namespace std;
int main()
{

	float num1, num2;
	char op;
	cout << "input two number:  ";
	cin >> num1 >> num2;
	cout << "input operation:   ";
	switch (op) {
	case '+':
		cout << num1 << "+" << num2 << "=" << (num1 + num2);
		break;
	case  '-':
		cout << num1 << "-" << num2 << "=" << (num1 - num2);
		break;
	case '*':
		cout << num1 << "*" << num2 << "=" << (num1 * num2);
		break;
	case '/':
		(num2) ?
			cout << num1 << "/" << num2 << "=" << (num1 / num2) :
			cout << "division by zero";
		break;
	default:
		cout << "incorrect operation";
	}
}
















	















































