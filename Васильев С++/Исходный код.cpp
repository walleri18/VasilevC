#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� � ������ ������� �������� ������������:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ���������� � ������ ���������� ����� ��������:
	double S;

	cout << "Enter S = ";
	cin >> S;

	// ���������� � ������ ������� �������� �� ������ � � ����� �:
	double t;

	cout << "Enter t = ";
	cin >> t;

	// ���������� � ���������� ������ ������� ��������:
	double V1;

	V1 = S / t;

	// ���������� � ���������� ������ ������� ��������:
	double V2;

	V2 = S / (2 * S / V - t);

	// ����� �����������:
	cout << "V1 = " << V1 << endl;
	cout << "V2 = " << V2 << endl;
	
	system("pause");
	return 0;
}