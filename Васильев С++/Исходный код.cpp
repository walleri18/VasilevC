#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� ��������� PI:
	const double PI = 3.1415;

	// ���������� � ���� ��������� x:
	double x;

	cout << "Enter x = ";
	cin >> x;

	x = x * PI / 180;

	x = cos(x);

	// ����� ����������:
	cout << "cos(x) = " << x << endl;

	system("pause");
	return 0;
}