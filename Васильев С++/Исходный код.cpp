#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� ���������� ������:
	const double h = 6.626E-34;

	// ���������� ��������� ����� ���������:
	const double me = 9.1E-31;

	// ���������� � ���� �������:
	double v;

	cout << "Enter v = ";
	cin >> v;

	// ���������� � ���� �������� ���������:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ���������� � ������ ������ ������ ��������������:
	double A;

	A = h * v - (me * V * V / 2);

	// ����� ����������:
	(h * v < (me * V * V / 2)) ? (cout << "�������� ������ �����������!!!" << endl) : (cout << "A = " << A << endl);

	system("pause");
	return 0;
}