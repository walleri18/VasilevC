#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление и запись средней скорости мотоциклиста:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ќбъ€вление и запись рассто€ни€ между пунктами:
	double S;

	cout << "Enter S = ";
	cin >> S;

	// ќбъ€вление и запись времени движени€ из пункта ј в пункт Ѕ:
	double t;

	cout << "Enter t = ";
	cin >> t;

	// ќбъ€вление и вычисление первой средней скорости:
	double V1;

	V1 = S / t;

	// ќбъ€вление и вычисление второй средней скорости:
	double V2;

	V2 = S / (2 * S / V - t);

	// ¬ывод результатов:
	cout << "V1 = " << V1 << endl;
	cout << "V2 = " << V2 << endl;
	
	system("pause");
	return 0;
}