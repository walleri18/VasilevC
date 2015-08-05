#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление и ввод количества подводных лодок:
	double n;

	cout << "Enter n = ";
	cin >> n;

	// ќбъ€вление и ввод веро€тности попадани€ торпеды в авианосиц:
	double p;

	cout << "Enter p = ";
	cin >> p;

	// ќбъ€вление и ввод веро€тности затоплени€ демаскированной подводной лодки коробл€ми охранени€:
	double p1;

	cout << "Enter p1 = ";
	cin >> p1;

	// ќбъ€вление и расчЄт q:
	double q;

	q = (1 - p) * (1 - p1);

	// ќбъ€вление и расчЄт вычислени€ веро€тности:
	double P;

	P = p * (1 - p1) * ((1 - exp(n * log(q))) / (1 - q));

	// ¬ывод результата:
	cout << "P = " << P << endl;

	system("pause");
	return 0;
}