#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ��������� ���� ����������:
	const double g = 9.8;

	// ���������� � ������ �������� ��������� ��������:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ���������� � ������ �������� ���� ������:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	// ���������� � ������ ��������� ����� ����:
	double L;

	L = (V * V * sin(2 * alpha)) / g;

	// ����� �������� ��������� �����:
	cout << "L = " << L << endl;

	system("pause");
	return 0;
}