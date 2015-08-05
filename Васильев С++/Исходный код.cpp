#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� ���������� ������:
	const double h = 6.626E-34;

	// ���������� ��������� ����� ���������:
	const double me = 9.1E-31;

	// ���������� ��������� �������� �����:
	const double c = 2.998E8;

	// ���������� � ���� �������� ���������:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ���������� � ������ ������������ ������� �������������� ���������:
	double Ek;

	Ek = (me * c * c) / sqrt(1 - (V / c) * (V / c)) - me * c * c;

	// ���������� � ������ ������� ��������������� �������:
	double E;

	E = me * V * V / 2;

	// ����� ����������:
	cout << "Ek = " << Ek << endl;
	cout << "E = " << E << endl;
	(Ek == E) ? (cout << "������� �����!!!" << endl) : (cout << "������� �� �����!!!" << endl);

	system("pause");
	return 0;
}