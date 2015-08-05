#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� ��������� PI:
	const double PI = 3.14;

	// ���������� ��������� ��������� ���������� �������:
	const double g = 9.8;

	// ���������� � ���� ����� ����:
	double m;

	cout << "Enter m = ";
	cin >> m;

	// ���������� � ���� ���� � ��������:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	alpha = alpha * PI / 180;

	// ���������� � ���� ������������ ������:
	double k;

	cout << "Enter k = ";
	cin >> k;

	// ���������� � ���� ����������� ���� F0;
	double F0;

	cout << "Enter F0 = ";
	cin >> F0;

	// ���������� � ������ ��������� ����:
	double a;

	a = (F0 * cos(alpha) / m) - (k * m * g * sin(alpha));
	
	// ����� �����������:
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}