#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ��������� ���� ����������:
	const double g = 9.8;
	
	// ���������� � ���� ������ ����� �������:
	double H;

	cout << "Enter H = ";
	cin >> H;

	// ���������� � ���� �������� �������:
	double V;

	cout << "Enter V = ";
	cin >> V;
	
	// ���������� � ������ ������� ��������� ����������:
	double T;

	T = sqrt(2 * H / g);

	// ���������� � ������ ���������� ������ � ��������� �������:
	double S;

	S = V * T;

	// ����� �����������:
	cout << "T = " << T << endl; /* ����� ������ */
	cout << "S = " << S << endl; /* ���������� ������ */

	system("pause");
	return 0;
}