#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� �������������� ���������:
	const double G = 6.672E-11;

	// ���������� ��������� ����� �����:
	const double M = 5.96E24;

	// ���������� ��������� ������� �����:
	const double R = 6.37E6;

	// ���������� � ������ ������ ������� ��� �����:
	double h;

	cout << "Enter h = ";
	cin >> h;

	// ���������� � ���������� ��������� ���������� �������:
	double g;

	g = (G * M) / ((R + h) * (R + h));

	// ����� ����������:
	cout << "g = " << g << endl;

	system("pause");
	return 0;
}