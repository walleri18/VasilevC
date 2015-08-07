#include <iostream>
#include <cmath>

using namespace std;

const int N = 100;

int main(void)
{
	setlocale(LC_ALL, "rus");
	// Объявление и ввод аргумента x:
	int x;

	while (true)
	{
		cout << "Enter x = ";
		cin >> x;

		if ((x > -1) && (x < 1)) break;
	}

	// Объявление переменные суммы:
	double summa = 0;

	// Вычисление ряда:
	for (int n = 1; n <= N; n++)
	{
		summa += (pow(-1, n) * (n + 1) * pow(x, n));
	}

	// Вывод результата:
	cout << "Результат ряда: " << summa << endl;

	system("pause");
	return 0;
}