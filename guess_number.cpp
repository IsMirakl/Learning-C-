#include <iostream>
#include <time.h>>
using namespace std;

int main() {

	setlocale(0, "");
	srand(time(NULL));
	int rand_num = 1 + rand() % 5;
	bool stop = false;
	int number;

	do {
		cout << "Введите число: ";
		cin >> number;
		if (number != rand_num) {
			cout << "Вы не угадали" << endl;
		}
		else {
			stop = true;
		}
	} while (!stop);
	cout << "Вы угадали !";
	return 0;
}
