#include<iostream>
using namespace std;
void main()
{
	char sign;
	bool t;
	double num1, num2, result;
	cout << "enter number 1 \n";
	cin >> num1;
	cout << "enter sign \n";
	cin >> sign;
	if ((sign == '+') or (sign == '-') or (sign == '*') or (sign == '+') or (sign == '/')) { t = 1; }
	else { cout << "error: wrong symbol"; t = 0; }
	if (t == 1) {
		cout << "enter number 2 \n";
		cin >> num2;
		switch (sign)
		{
		case '+':
		{
			result = num1 + num2;
			break;
		}
		case '-':
		{
			result = num1 - num2;
			break;
		}
		case '*':
		{
			result = num1 * num2;
			break;
		}
		case '/':
		{
			result = num1 / num2;
			break;
		}
		}
		if ((sign == '/') && (num1 == 0)) { cout << "error: division by zero"; }
		else { cout << "result=" << result; }
		cin.get();
		cin.get();
	}
	else {
		cin.get();
		cin.get();
	}
}
