#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление константы PI:
	const double PI = 3.14;

	// ќбъ€вление и ввод x:
	double x;

	cout << "Enter x = ";
	cin >> x;

	// ќбъ€вление и ввод y:
	double y;

	cout << "Enter y = ";
	cin >> y;

	// ќбъ€вление и вычисление модул€ Z:
	double mZ;

	mZ = sqrt(x * x + y * y);

	// ќбъ€вление и ввод аргумента phi:
	double phi;

	cout << "Enter phi = ";
	cin >> phi;

	// ќбъ€вление и ввод мнимой единицы:
	int i;

	cout << "Enter i = ";
	cin >> i;

	// ќбъ€вление и вычсиление z1:
	double z1;

	z1 = sqrt(mZ) * exp(i * phi / 2);

	// ќбъ€вление и вычисление z2:
	double z2;

	z2 = sqrt(mZ) * exp(i * phi / 2 + i * PI);

	// ¬ывод результата:
	cout << "Z1 = " << z1 << endl;

	cout << "Z2 = " << z2 << endl;

	system("pause");
	return 0;
}