#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// Скорость тела - объявление переменной
	double v;

	// Время полёта
	double t = 1.2;

	// Ускорение свободного падения
	double g = 9.8;

	// Скорость - инициализация переменной
	v = 12.3;

	// Высота - динамическая инициализация переменной
	double s = v * t - g * t * t / 2;

	cout << "Height level is " << s << endl;

	system("pause");
	return 0;
}