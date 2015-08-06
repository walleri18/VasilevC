#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int n, s = 0;

	cout << "Enter number n = ";
	cin >> n;

	for (int i = 1; i <= n; s += i++);

	cout << "Sum of natural numbers is: " << s << endl;

	system("pause");
	return 0;
}