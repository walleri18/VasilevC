#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� � ���� V1:
	double V1;

	cout << "Enter V1 = ";
	cin >> V1;

	// ���������� � ���� V2:
	double V2;

	cout << "Enter V2 = ";
	cin >> V2;

	// ���������� � ���� P1:
	double P1;

	cout << "Enter P1 = ";
	cin >> P1;

	// ���������� � ���� P2:
	double P2;

	cout << "Enter P2 = ";
	cin >> P2;

	// ���������� � ������ V:
	double V;

	V = (P1 * V1 - P2 * V2) / (P1 - P2);

	(V < 0) ? (cout << "������������ ��������!!!" << endl) : (cout << "V = " << V << endl);

	system("pause");
	return 0;
}