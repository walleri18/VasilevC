#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление константы PI:
	const double PI = 3.14;

	// ќбъ€вление константы ускорени€ свободного падени€:
	const double g = 9.8;

	// ќбъ€вление и ввод массы тела:
	double m;

	cout << "Enter m = ";
	cin >> m;

	// ќбъ€вление и ввод угла в градусах:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	alpha = alpha * PI / 180;

	// ќбъ€вление и ввод коэффициента трени€:
	double k;

	cout << "Enter k = ";
	cin >> k;

	// ќбъ€вление и ввод приложенной силы F0;
	double F0;

	cout << "Enter F0 = ";
	cin >> F0;

	// ќбъ€вление и расчЄт ускорени€ тела:
	double a;

	a = (F0 * cos(alpha) / m) - (k * m * g * sin(alpha));
	
	// ¬ывод результатов:
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}