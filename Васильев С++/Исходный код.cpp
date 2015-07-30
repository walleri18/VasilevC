#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// Число, показатель степени и результат:
	int number, n, result;

	// Ввод пользователем числа:
	cout << "Enter number = ";
	cin >> number;

	cout << "Enter n = ";
	cin >> n;

	// Результат умножения: (с помощью побитого сдвига влево)
	result = number << n;

	cout << "result = " << result << endl;

	system("pause");
	return 0;
}