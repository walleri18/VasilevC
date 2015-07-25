#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int n, m, i = 3, j = 3;

	cout << "At the beginning:" << endl;
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;
	cout << "After command n = i++ :" << endl;
	
	n = i++; // n = 3, i = 4

	cout << "n = " << n << endl;
	cout << "i = " << i << endl;
	cout << " After command m = ++j :" << endl;

	m = ++j; // m = 4, n = 4

	cout << "m = " << m << endl;
	cout << "j = " << j << endl;
	cout << " After command n = (--i) * (i--) :" << endl;

	n = (--i) * (i--);// n = 9, i = 2

	cout << "n = " << n << endl;
	cout << "i = " << i << endl;
	cout << " After command m = (--j) * (--j) :" << endl;

	m = (--j) * (--j);// m = 4, j = 2

	cout << "m = " << m << endl;
	cout << "j = " << j << endl;
	cout << " After command n = (--i) * (i++) :" << endl;

	n = (--i) * (i++);// n = 1, i = 2

	cout << "n = " << n << endl;
	cout << "i = " << i << endl;
	cout << " After command m = (j--) * (++j) :" << endl;

	m = (j--) * (++j);// m = 9, j = 2

	cout << "m = " << m << endl;
	cout << "j = " << j << endl;
	cout << " After command n = (--i) * (++i) :" << endl;

	n = (--i) * (++i);// n = 4, i = 2

	cout << "n = " << n << endl;
	cout << "i = " << i << endl;

	system("pause");
	return 0;
}