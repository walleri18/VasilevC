#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� � ���� �������� �����:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ���������� � ���� ���������� ����� ��������:
	double S;

	cout << "Enter S = ";
	cin >> S;

	// ���������� � ���� �������� �������� �����:
	double U;

	cout << "Enter U = ";
	cin >> U;

	// ���������� � ������ ������� �������� ����� �� �������� �����:
	double t1;

	t1 = S / (V + U);

	// ���������� � ������ ������� �������� ����� ������ �������� �����:
	double t2;

	t2 = S / (V - U);

	// ���������� � ������ ������ ������� ��������:
	double T;

	T = t1 + t2;

	// ����� ���������� ������ ���������:
	cout << "T = " << T << endl;

	system("pause");
	return 0;
}