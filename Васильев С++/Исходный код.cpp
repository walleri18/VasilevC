#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� ��������� ��������� ���������� �������:
	double g = 9.8;

	// ���������� ��������� PI:
	const double PI = 3.14;

	// ���������� � ���� ����� ����:
	double m;

	cout << "Enter m = ";
	cin >> m;

	// ���������� � ���� ������������ ������:
	double k;

	cout << "Enter k = ";
	cin >> k;

	// ���������� � ���� ���� ������� ���������:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	alpha = alpha * PI / 180;

	// ���������� � ������ ���� ������:
	double Ft;

	Ft = (k < 1) ? (k * m * g * cos(alpha)) : (m * g * sin(alpha));

	// ����� ����������:
	cout << "Ft = " << Ft << endl;

	system("pause");
	return 0;
}