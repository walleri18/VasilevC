#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ��������� ������:
	double S1, S2, t1, t2, V;

	// ���� ����������:
	cout << "Enter S1 = ";
	cin >> S1;

	cout << "Enter S2 = ";
	cin >> S2;

	cout << "Enter t1 = ";
	cin >> t1;

	cout << "Enter t2 = ";
	cin >> t2;
	
	V = (S1 + S2) / (t1 + t2);

	cout << "Speed V = " << V << endl;

	system("pause");
	return 0;
}