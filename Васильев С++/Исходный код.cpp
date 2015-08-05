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

	// ���������� � ������ ���� ��������� ����:
	double F;

	F = (tan(alpha) < k) ? (0) : (m * g * (sin(alpha) - k * cos(alpha)));

	// ����� ����������:
	cout << "F = " << F << endl;

	system("pause");
	return 0;
}