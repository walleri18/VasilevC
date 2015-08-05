#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление посто€нной ѕланка:
	const double h = 6.626E-34;

	// ќбъ€вление константы массы электрона:
	const double me = 9.1E-31;

	// ќбъ€вление и ввод частоты:
	double v;

	cout << "Enter v = ";
	cin >> v;

	// ќбъ€вление и ввод скорости электрона:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ќбъ€вление и расчЄт работы выхода фотоэлектронов:
	double A;

	A = h * v - (me * V * V / 2);

	// ¬ывод результата:
	(h * v < (me * V * V / 2)) ? (cout << "¬ведЄнные данные некорректны!!!" << endl) : (cout << "A = " << A << endl);

	system("pause");
	return 0;
}