#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление константы PI:
	const double PI = 3.1415;

	// ќбъ€вление и ввод аргумента x:
	double x;

	cout << "Enter x = ";
	cin >> x;

	x = x * PI / 180;

	x = cos(x);

	// ¬ывод результата:
	cout << "cos(x) = " << x << endl;

	system("pause");
	return 0;
}