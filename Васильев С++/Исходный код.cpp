#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// �������������� ����������:
	const double G = 6.672E-11;

	// ����� �����:
	const double M = 5.96E24;

	// ������ �����:
	const double R = 6.37E6;

	// ����� pi:
	const double pi = 3.1415;

	// ������ � ������ ������:
	double T, h;

	// ���� ������� (� �����):
	cout << "Enter T (hours) = ";
	cin >> T;

	// ������� ����� � �������:
	T *= 3600;

	// ����������� ������:
	h = pow(G * M * T * T / 4 / pi / pi, (double) 1 / 3) - R;

	// ������� � ���������:
	h /= 1000;

	cout << "Height h = " << h << " km" << endl;

	system("pause");
	return 0;
}