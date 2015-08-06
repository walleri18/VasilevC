#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� ��������� PI:
	const double PI = 3.14;

	// ���������� � ���� x:
	double x;

	cout << "Enter x = ";
	cin >> x;

	// ���������� � ���� y:
	double y;

	cout << "Enter y = ";
	cin >> y;

	// ���������� � ���������� ������ Z:
	double mZ;

	mZ = sqrt(x * x + y * y);

	// ���������� � ���� ��������� phi:
	double phi;

	cout << "Enter phi = ";
	cin >> phi;

	// ���������� � ���� ������ �������:
	int i;

	cout << "Enter i = ";
	cin >> i;

	// ���������� � ���������� z1:
	double z1;

	z1 = sqrt(mZ) * exp(i * phi / 2);

	// ���������� � ���������� z2:
	double z2;

	z2 = sqrt(mZ) * exp(i * phi / 2 + i * PI);

	// ����� ����������:
	cout << "Z1 = " << z1 << endl;

	cout << "Z2 = " << z2 << endl;

	system("pause");
	return 0;
}