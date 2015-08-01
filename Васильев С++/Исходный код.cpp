#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ��������� ���� ����������:
	const double g = 9.8;

	// ��������� ��:
	const double PI = 3.14;

	// ���������� � ���� ������ ������:
	double H;

	cout << "Enter H = ";
	cin >> H;

	// ���������� � ���� ��������� ��������:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ���������� � ���� ���� ������ � ��������:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	// ������� �������� ���� �� �������� � �������:
	alpha = alpha * PI / 180;

	// ���������� � ������ ������ ����� �����:
	double T;

	T = (V * sin(alpha) / g) * (1 * sqrt(1 + (2 * g * H) / (V * V * sin(alpha) * sin(alpha))));

	// ���������� � ���� ������� ��� ����������� ��������� �����:
	double t;

	cout << "Enter t < " << T << " = ";
	cin >> t;

	// ���������� � ���������� ���������� x:
	double x;
	
	x = (t > T) ? (V * T * cos(alpha)) : (V * t * cos(alpha));

	// ���������� � ���������� ���������� y:
	double y;

	y = (t > T) ? (H + V * T * sin(alpha) - g * T * T / 2) : (H + V * t * sin(alpha) - g * t * t / 2);

	// ����� �����������:
	cout << "X(t) = " << x << endl;
	cout << "Y(t) = " << y << endl;

	system("pause");
	return 0;
}