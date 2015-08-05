#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� � ���� ���������� ��������� �����:
	double n;

	cout << "Enter n = ";
	cin >> n;

	// ���������� � ���� ����������� ��������� ������� � ���������:
	double p;

	cout << "Enter p = ";
	cin >> p;

	// ���������� � ���� ����������� ���������� ��������������� ��������� ����� ��������� ���������:
	double p1;

	cout << "Enter p1 = ";
	cin >> p1;

	// ���������� � ������ q:
	double q;

	q = (1 - p) * (1 - p1);

	// ���������� � ������ ���������� �����������:
	double P;

	P = p * (1 - p1) * ((1 - exp(n * log(q))) / (1 - q));

	// ����� ����������:
	cout << "P = " << P << endl;

	system("pause");
	return 0;
}