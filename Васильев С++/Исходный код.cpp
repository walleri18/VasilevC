#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int i, j;

	for (i = 10, j = 90; i < j; i += 5, j -= 10)
		cout << i << " " << j << endl;

	system("pause");
	return 0;
}