#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� � ���� ����� ���� � ��������� ������:
	double N;

	cout << "Enter N = ";
	cin >> N;

	// ���������� � ����������� �����������:
	double T;

	cout << "Enter T = ";
	cin >> T;

	// ���������� � ���� ����� �������:
	double t;

	cout << "Enter t = ";
	cin >> t;

	// ���������� � ���������� ����� ������������ ����:
	double dN;

	dN = N * (1 - exp(- t * log(2) / T));

	// ����� ����������:
	cout << "����� ����������� ���� = " << dN << endl;

	cout << "�������������� ����� ���� = " << N << endl;

	cout << "������� ����������� ���� = " << (dN / N * 100) << " %" << endl;
	
	cout << "������� ������������� ���� = " << ((N - dN) / N * 100) << " %" << endl;

	system("pause");
	return 0;
}