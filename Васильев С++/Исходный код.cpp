#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� � ������ ������� �������� �������:
	double t;

	cout << "Enter t = ";
	cin >> t;

	// ���������� � ������ �������� �������� ������:
	double V;

	cout << "Enter V = ";
	cin >> V;

	// ���������� � ���������� ��������� ��� ���������������� ��������:
	double a;

	a = V / t;

	// ���������� � ���������� ������� ���� ��������:
	double S1;

	S1 = V * t;

	// ���������� � ���������� ������� ���� ��������:
	double S2;

	S2 = a * t * t / 2;

	// ���������� � ���������� ������ ����, ����������� �������:
	double S;

	S = S1 + S2;

	// ���������� � ���������� ����������� ���������� ���� ������� �������� ������:
	double SP;

	SP = 3 * V * t / 2;

	// ��������� S & SP:
	string messageProverka = "";
	(S == SP) ? (messageProverka = "����������� �����!") : (messageProverka = "����������� �� �����!");
	
	// ����� �����������:
	cout << "S = " << S << endl;
	cout << "SP = " << SP << endl;
	cout << messageProverka << endl;

	system("pause");
	return 0;
}