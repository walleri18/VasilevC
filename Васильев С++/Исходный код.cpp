#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	for (char x = 'a'; x != 'z';)
	{
		cout << "Guess a symbol: ";
		cin >> x;
	}

	cout << "Correct!" << endl;

	system("pause");
	return 0;
}