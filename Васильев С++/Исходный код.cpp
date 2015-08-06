#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int n, m;
	
	n = rand() % 100 + 1;

	cout << "Enter number m = ";
	cin >> m;

	cout << "n = " << n << ": ";
	
	if (m > n) cout << "your number is greater!" << endl;
	else if (n > m) cout << "your number is less!" << endl;
	else cout << "you have guessed right!" << endl;

	system("pause");
	return 0;
}