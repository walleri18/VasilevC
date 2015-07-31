#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// Константа силы гравитации:
	const double g = 9.8;

	// Объявление и запись значения начальной скорости:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// Объявление и запись значения угла броска:
	double alpha;

	cout << "Enter alpha = ";
	cin >> alpha;

	// Объявление и расчёт дальности полёта тела:
	double L;

	L = (V * V * sin(2 * alpha)) / g;

	// Вывод значения дальности полёта:
	cout << "L = " << L << endl;

	system("pause");
	return 0;
}