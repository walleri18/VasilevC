#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// �������� ���� - ���������� ����������
	double v;

	// ����� �����
	double t = 1.2;

	// ��������� ���������� �������
	double g = 9.8;

	// �������� - ������������� ����������
	v = 12.3;

	// ������ - ������������ ������������� ����������
	double s = v * t - g * t * t / 2;

	cout << "Height level is " << s << endl;

	system("pause");
	return 0;
}