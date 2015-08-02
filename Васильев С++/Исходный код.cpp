#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление константы PI:
	const double PI = 3.14;

	// ќбъ€вление и запись частоты колебани€ ма€тника:
	double omega;

	cout << "Enter omega = ";
	cin >> omega;

	// ќбъ€вление и запись некого k:
	double k;

	cout << "Enter k = ";
	cin >> k;

	// ќбъ€вление и вычисление нулевой частоты колебани€ ма€тника:
	double phi0;

	phi0 = asin(1 / k);

	// ќбъ€вление и вычисление момента отклонени€ ма€тника на максимальное рассто€ние:
	double T;

	T = (PI / 2 - phi0) / omega;

	// ¬ывод результата:
	cout << "T = " << T << endl;

	system("pause");
	return 0;
}