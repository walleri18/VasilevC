#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ��������� ���� ����������:
	const double g = 9.8;

	// ���������� � ������ ������������ ������ �������:
	double H;

	cout << "Enter H = ";
	cin >> H;

	// ���������� � ������ ��������� �����:
	double L;

	cout << "Enter L = ";
	cin >> L;

	// ���������� � ������ ����:
	double alpha;

	alpha = atan(4 * H / L);

	// ���������� � ������ ��������� ��������:
	double V;

	V = sqrt((g * L) / sin(2 * alpha));

	// ����� ���� � ��������� ��������:
	cout << "Alpha = " << alpha << endl;

	cout << "V = " << V << endl
		;

	system("pause");
	return 0;
}