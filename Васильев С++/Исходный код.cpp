#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// �����, ���������� ������� � ���������:
	int number, n, result;

	// ���� ������������� �����:
	cout << "Enter number = ";
	cin >> number;

	cout << "Enter n = ";
	cin >> n;

	// ��������� ���������: (� ������� �������� ������ �����)
	result = number << n;

	cout << "result = " << result << endl;

	system("pause");
	return 0;
}