#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int n, i, s = 0;

	cout << "Enter number n = ";
	cin >> n;

	for (i = 0; i <= n; i++)
	{
		s += i;
	}

	cout << "Sum of natural numbers is: " << s << endl;

	system("pause");
	return 0;
}