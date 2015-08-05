#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление константы ускорени€ свободного падени€:
	double g = 9.8;

	// ќбъ€вление константы PI:
	const double PI = 3.14;

	// ќбъ€вление и ввод массы тела:
	double m;

	cout << "Enter m = ";
	cin >> m;

	// ќбъ€вление и ввод коэффициента трени€:
	double k;

	cout << "Enter k = ";
	cin >> k;

	// ќбъ€вление и ввод угла наклона плоскости:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	alpha = alpha * PI / 180;

	// ќбъ€вление и расчЄт силы нат€жени€ нити:
	double F;

	F = (tan(alpha) < k) ? (0) : (m * g * (sin(alpha) - k * cos(alpha)));

	// ¬ывод результата:
	cout << "F = " << F << endl;

	system("pause");
	return 0;
}