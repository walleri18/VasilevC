#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int n, i = 1, s = 0;

	cout << "Enter number n = ";
	cin >> n;

	// Используется метка
mylabel:

	s += i;
	i++;

	//Команда с инструкцией безусловного перехода
	if (i <= n) goto mylabel;

	cout << "Sum of natural numbers if: " << s << endl;

	system("pause");
	return 0;
}