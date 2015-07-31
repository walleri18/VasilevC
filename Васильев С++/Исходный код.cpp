#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ��������� ���� ����������:
	const double g = 9.8;

	// ���������� � ������ �������� ��������:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ���������� � ������ ������� �����:
	double T;

	cout << "Enter T = ";
	cin >> T;

	// ���������� � ������ ���� ��� ������� ������� ����:
	double alpha;

	alpha = asin((g * T) / (2 * V));

	cout << "Alpha = " << alpha << endl;

	system("pause");
	return 0;
}