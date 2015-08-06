#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int n;

	cout << "Enter number from 0 to 10: ";
	cin >> n;

	switch (n)
	{
	case 0:
		cout << "The number is zero!" << endl;
		break;
	case 1:
	case 2:
	case 3:
	case 5:
	case 8:
		cout << "This is Fibonacci number!" << endl;
		break;
	default:
		cout << "This is integer number!" << endl;
	}

	system("pause");
	return 0;
}