#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление и ввод скорости лодки:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ќбъ€вление и ввод рассто€ни€ между пунктами:
	double S;

	cout << "Enter S = ";
	cin >> S;

	// ќбъ€вление и ввод скорости теченни€ речки:
	double U;

	cout << "Enter U = ";
	cin >> U;

	// ќбъ€вление и расчЄт времени движени€ лодки по движению речки:
	double t1;

	t1 = S / (V + U);

	// ќбъ€вление и расчЄт времени движени€ лодки против движени€ речки:
	double t2;

	t2 = S / (V - U);

	// ќбъ€вление и расчЄт общего времени движени€:
	double T;

	T = t1 + t2;

	// ¬ывод результата работы программы:
	cout << "T = " << T << endl;

	system("pause");
	return 0;
}