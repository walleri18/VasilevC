#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// Действительная и мнимая часть:
	double x, y, X, Y;

	// Модуль и аргумент:
	double r, phi, R, Phi;

	// Показатель степени:
	int n;

	// Ввод параметров:
	cout << "Real part x = ";
	cin >> x;

	cout << "Imaginary part y = ";
	cin >> y;

	cout << "Power n = ";
	cin >> n;

	// Вычисление результата:
	phi = atan2(y, x);

	r = sqrt(x * x + y * y);

	R = pow(r, n);

	Phi = n * phi;

	X = R * cos(Phi);

	Y = R * sin(Phi);

	cout << "The result is:" << endl;

	cout << "Re - part " << X << endl;

	cout << "Im - part " << Y << endl;

	system("pause");
	return 0;
}