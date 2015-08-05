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

	// ���������� � ���� ��������� ����:
	double a;

	cout << "Enter a = ";
	cin >> a;

	// ���������� � ���� ���� ������� ��������� � ��������:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	alpha = alpha * PI / 180;

	// ���������� � ������ ������������ ������:
	double k;

	k = (g * sin(alpha) - a) / cos(alpha);

	// ����� �����������:
	cout << "k = " << k << endl;

	system("pause");
	return 0;
}