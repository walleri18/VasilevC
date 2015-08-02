#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� ��������� PI:
	const double PI = 3.14;

	// ���������� � ������ ������� ��������� ��������:
	double omega;

	cout << "Enter omega = ";
	cin >> omega;

	// ���������� � ������ ������ k:
	double k;

	cout << "Enter k = ";
	cin >> k;

	// ���������� � ���������� ������� ������� ��������� ��������:
	double phi0;

	phi0 = asin(1 / k);

	// ���������� � ���������� ������� ���������� �������� �� ������������ ����������:
	double T;

	T = (PI / 2 - phi0) / omega;

	// ����� ����������:
	cout << "T = " << T << endl;

	system("pause");
	return 0;
}