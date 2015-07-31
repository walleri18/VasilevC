#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	//  онстанта силы гравитации:
	const double g = 9.8;

	// ќбъ€вление и запись максимальной высоты подъЄма:
	double H;

	cout << "Enter H = ";
	cin >> H;

	// ќбъ€вление и запись дальности полЄта:
	double L;

	cout << "Enter L = ";
	cin >> L;

	// ќбъ€вление и расчЄт угла:
	double alpha;

	alpha = atan(4 * H / L);

	// ќбъ€вление и расчЄт начальной скорости:
	double V;

	V = sqrt((g * L) / sin(2 * alpha));

	// ¬ывод угла и начальной скорости:
	cout << "Alpha = " << alpha << endl;

	cout << "V = " << V << endl
		;

	system("pause");
	return 0;
}