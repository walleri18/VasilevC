#include <iostream>
#include <cmath>


using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ������ ���������:
	double x;

	// ���������� �������� � ��������� ����������:
	int n = 100, i;

	// ���������� ����� x = 2:
	x = 0;

	for (i = 1; i <= n; i++)
		x = (x * x + 6) / 5;

	cout << "x = " << x << endl;

	// ���������� ����� x = 3:
	x = 5;

	for (i = 1; i <= n; i++)
		x = sqrt(5 * x - 6);
	
	cout << "x = " << x << endl;

	system("pause");
	return 0;
}