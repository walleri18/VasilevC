#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ���������� ��� ������ ����������
	// ���������� � ��������� �����:
	double x, s;

	// ���������� ��� ������ ������� ��������:
	char op;

	// ���� ������� �����:
	cout << ">> ";
	cin >> x;

	s = x;

	// �������� ����� ��� ���������� ����������:
	while (true)
	{
		// ���������� ������� ��������:
		cout << ">> ";
		cin >> op;

		// ������� ������ �� ��������� �����:
		if (op == '=') {
			cout << "---> " << s << endl;
			system("pause");
			exit(0);
		}

		// ���� �����:
		cout << ">> ";
		cin >> x;

		// ��������� ������� ��������:
		switch (op)
		{
		case '+':
			s += x;
			break;
		case '-':
			s -= x;
			break;
		case '*':
			s *= x;
			break;
		case '/':
			s /= x;
		}
	}

	system("pause");
	return 0;
}