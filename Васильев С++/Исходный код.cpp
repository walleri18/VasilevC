#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int i, j;

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 5; j++) cout << 3 * (j - 1) + i << " ";
		
		cout << endl;
	}

	system("pause");
	return 0;
}