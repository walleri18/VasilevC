#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	double x, y;
	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	if (y != 0) cout << "x / y = " << x / y << endl;
	else cout << "Division by zero!" << endl;

	system("pause");
	return 0;
}