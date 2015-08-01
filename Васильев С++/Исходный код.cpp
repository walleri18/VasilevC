#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление и запись времени движени€ проезда:
	double t;

	cout << "Enter t = ";
	cin >> t;

	// ќбъ€вление и запись скорости движени€ поезда:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ќбъ€вление и вычисление ускорение при равнозамедленном движении:
	double a;

	a = V / t;

	// ќбъ€вление и вычисление первого пути движени€:
	double S1;

	S1 = V * t;

	// ќбъ€вление и вычисление второго пути движени€:
	double S2;

	S2 = a * t * t / 2;

	// ќбъ€вление и вычисление общего пути, пройденного поездом:
	double S;

	S = S1 + S2;

	// ќбъ€вление и вычисление проверочной переменной пути полного движени€ поезда:
	double SP;

	SP = 3 * V * t / 2;

	// —равнение S & SP:
	string messageProverka = "";
	(S == SP) ? (messageProverka = "—оотношени€ равны!") : (messageProverka = "—оотношени€ не равны!");
	
	// ¬ывод результатов:
	cout << "S = " << S << endl;
	cout << "SP = " << SP << endl;
	cout << messageProverka << endl;

	system("pause");
	return 0;
}