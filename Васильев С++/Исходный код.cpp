#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	//  онстанта силы гравитации:
	const double g = 9.8;

	// ќбъ€вление и запись значени€ скорости:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ќбъ€вление и запись времени полЄта:
	double T;

	cout << "Enter T = ";
	cin >> T;

	// ќбъ€вление и расчЄт угла под которым брошено тело:
	double alpha;

	alpha = asin((g * T) / (2 * V));

	cout << "Alpha = " << alpha << endl;

	system("pause");
	return 0;
}