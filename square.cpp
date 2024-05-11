#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int number;
    bool flag = false;

    while (!flag) {
        cout << "¬ведите число: ";
        cin >> number;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ќшибка: введите число" << endl;
            continue;
        }

        number = number * number;
        cout << " вадрат числа: " << number << endl;
        if (number == 1) {
            flag = true;
        }

        cout << "’отите продолжить ввод (y/n)?" << endl;
        char input;
        cin >> input;

        if (input != 'n' && input != 'N') {
            flag = false;
        }
        else {
            break;
        }

    }

    return 0;
}