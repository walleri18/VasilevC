#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int n;

	double x;

	cout << "Enter n = ";
	cin >> n;
	
	x = n > 0 ? 5.4 : 3.2;

	cout << "x = " << x << endl;

	system("pause");
	return 0;
}