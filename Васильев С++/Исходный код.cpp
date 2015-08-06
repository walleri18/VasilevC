#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int n, i = 1, s = 0;

	cout << "Enter number n = ";
	cin >> n;

	for (;;)
	{
		s += i;
		i++;
		if (i > n) break;
	}

	cout << "Sum of natural numbers is: " << s << endl;

	system("pause");
	return 0;
}