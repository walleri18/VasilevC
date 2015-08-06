#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int n;

	cout << "Enter n = ";
	cin >> n;

	switch (n)
	{
	case 1:
		cout << "First case-block" << endl;
		break;
	case 2:
		cout << "Second case-block" << endl;
		break;
	case 3:
		cout << "Third case-block" << endl;
		break;
	default:
		cout << "By default" << endl;
	}

	system("pause");
	return 0;
}