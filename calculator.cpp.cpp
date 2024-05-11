#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	float number1, number2, result;
	cout << "Enter number one: ";
	cin >> number1;

	cout << "Enter number two: ";
	cin >> number2;

	char simv;
	cout << "Enter simv operation: ";
	cin >> simv;

	switch (simv)
	{
	case '+':
		result = number1 + number2;
		break;
	case '-':
		result = number1 - number2;
		break;
	case '*':
		result = number1 * number2;
		break;
	case '/':
		result = number1 / number2;
		break;
	default:
		result = 0;
		break;
	}

	cout << "Result: " << result << endl;
	return 0;
}