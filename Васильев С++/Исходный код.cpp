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

	// ќбъ€вление и ввод ускорени€ тела:
	double a;

	cout << "Enter a = ";
	cin >> a;

	// ќбъ€вление и ввод угла наклона плоскости в градусах:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	alpha = alpha * PI / 180;

	// ќбъ€вление и расчЄт коэффициента трени€:
	double k;

	k = (g * sin(alpha) - a) / cos(alpha);

	// ¬ывод результатов:
	cout << "k = " << k << endl;

	system("pause");
	return 0;
}