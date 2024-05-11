#include <iostream>
#include <time.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int result = 1 + rand() % 5;
	cout << result << endl;

	switch (result) 
	{
	case 3:
		cout << "Вы победили!";
		break;
	default:
		cout << "Вы  проиграли :(";
		break;
	}
	return 0;
}