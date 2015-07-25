#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	int age;

	cout << "How old are You?" << endl;
	cin >> age;
	cout << endl << "You are " << age << " years old" << endl;

	system("pause");
	return 0;
}