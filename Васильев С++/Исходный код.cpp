#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// Константа силы гравитации:
	const double g = 9.8;
	
	// Объявление и ввод высоты полёта самолёта:
	double H;

	cout << "Enter H = ";
	cin >> H;

	// Объявление и ввод скорости самолёта:
	double V;

	cout << "Enter V = ";
	cin >> V;
	
	// Объявление и расчёт времени подлётного расстояния:
	double T;

	T = sqrt(2 * H / g);

	// Объявление и расчёт расстояния подлёта к наземному объекту:
	double S;

	S = V * T;

	// Вывод результатов:
	cout << "T = " << T << endl; /* Время подлёта */
	cout << "S = " << S << endl; /* Расстояние подлёта */

	system("pause");
	return 0;
}