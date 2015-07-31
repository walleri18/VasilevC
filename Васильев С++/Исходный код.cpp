#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// Параметры уравнения:
	double a, b;

	// Логическая переменная для записи проверяемых условий:
	bool state;

	// Ввод параметров уравнения:
	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "x is: ";

	// Проверка услвий и поиск решения:
	state = (a != 0);

	state ? (cout << b / a << endl, exit(0)) : state = (a == 0) && (b == 0);

	cout << (state ? "any number!" : "no result!") << endl;

	system("pause");
	return 0;
}