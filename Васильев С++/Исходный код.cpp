#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	//  онстанта силы гравитации:
	const double g = 9.8;

	//  онстанта ѕ»:
	const double PI = 3.14;

	// ќбъ€вление и ввод высоты обрыва:
	double H;

	cout << "Enter H = ";
	cin >> H;

	// ќбъ€вление и ввод начальной скорости:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ќбъ€вление и ввод угла броска в градусах:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	// ѕеревод значени€ угла из градусов в радианы:
	alpha = alpha * PI / 180;

	// ќбъ€вление и расчЄт вемени полЄта камн€:
	double T;

	T = (V * sin(alpha) / g) * (1 * sqrt(1 + (2 * g * H) / (V * V * sin(alpha) * sin(alpha))));

	// ќбъ€вление и ввод времени дл€ определени€ положени€ камн€:
	double t;

	cout << "Enter t < " << T << " = ";
	cin >> t;

	// ќбъ€вление и вычисление координаты x:
	double x;
	
	x = (t > T) ? (V * T * cos(alpha)) : (V * t * cos(alpha));

	// ќбъ€вление и вычисление координаты y:
	double y;

	y = (t > T) ? (H + V * T * sin(alpha) - g * T * T / 2) : (H + V * t * sin(alpha) - g * t * t / 2);

	// ¬ывод результатов:
	cout << "X(t) = " << x << endl;
	cout << "Y(t) = " << y << endl;

	system("pause");
	return 0;
}