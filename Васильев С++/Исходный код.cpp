#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// Объявление и ввод числа ядер в начальный момент:
	double N;

	cout << "Enter N = ";
	cin >> N;

	// Объявление и вводпериода полураспада:
	double T;

	cout << "Enter T = ";
	cin >> T;

	// Объявление и ввод время распада:
	double t;

	cout << "Enter t = ";
	cin >> t;

	// Объявление и вычисление числа распавшийхся ядер:
	double dN;

	dN = N * (1 - exp(- t * log(2) / T));

	// Вывод результата:
	cout << "Число распавшихся ядер = " << dN << endl;

	cout << "Первоначальное число ядер = " << N << endl;

	cout << "Процент распавшихся ядер = " << (dN / N * 100) << " %" << endl;
	
	cout << "Процент нераспавшихся ядер = " << ((N - dN) / N * 100) << " %" << endl;

	system("pause");
	return 0;
}