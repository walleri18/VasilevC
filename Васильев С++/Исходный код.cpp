#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление √равитационной константы:
	const double G = 6.672E-11;

	// ќбъ€вление константы массы «емли:
	const double M = 5.96E24;

	// ќбъ€вление константы радиуса «емли:
	const double R = 6.37E6;

	// ќбъ€вление и запись высоты объекта над «емлЄй:
	double h;

	cout << "Enter h = ";
	cin >> h;

	// ќбъ€вление и вычисление ускорени€ свободного падени€:
	double g;

	g = (G * M) / ((R + h) * (R + h));

	// ¬ывод результата:
	cout << "g = " << g << endl;

	system("pause");
	return 0;
}