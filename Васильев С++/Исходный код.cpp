#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ќбъ€вление посто€нной ѕланка:
	const double h = 6.626E-34;

	// ќбъ€вление константы массы электрона:
	const double me = 9.1E-31;

	// ќбъ€вление константы скорости света:
	const double c = 2.998E8;

	// ќбъ€вление и ввод скорости электрона:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ќбъ€вление и расчЄт кинетической энергии рел€тивисткого электрона:
	double Ek;

	Ek = (me * c * c) / sqrt(1 - (V / c) * (V / c)) - me * c * c;

	// ќбъ€вление и расчЄт энергии нерел€тивитской природы:
	double E;

	E = me * V * V / 2;

	// ¬ывод результата:
	cout << "Ek = " << Ek << endl;
	cout << "E = " << E << endl;
	(Ek == E) ? (cout << "Ёнергии равны!!!" << endl) : (cout << "Ёнергии не равны!!!" << endl);

	system("pause");
	return 0;
}