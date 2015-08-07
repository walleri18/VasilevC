#include <iostream>
#include <cmath>

using namespace std;

const int N = 100;

int main(void)
{
	setlocale(LC_ALL, "rus");
	// ���������� � ���� ��������� x:
	int x;

	while (true)
	{
		cout << "Enter x = ";
		cin >> x;

		if ((x > -1) && (x < 1)) break;
	}

	// ���������� ���������� �����:
	double summa = 0;

	// ���������� ����:
	for (int n = 1; n <= N; n++)
	{
		summa += (pow(-1, n) * (n + 1) * pow(x, n));
	}

	// ����� ����������:
	cout << "��������� ����: " << summa << endl;

	system("pause");
	return 0;
}