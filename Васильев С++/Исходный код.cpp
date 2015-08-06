#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	// ����� pi:
	const double pi = 3.1415;

	// ������� ���������� ���������:
	double R, H, V, V0, x, y, z;

	// ����� ����� N (�� ������ �� ���������)
	// � ����� ���������� ����� n:
	int N = 1500, n = 0;

	// ���� ���������� R � H:
	cout << "Enter R = ";
	cin >> R;

	cout << "Enter H = ";
	cin >> H;

	// ����� ���������������:
	V0 = 4 * R * R * (H + R);

	// ������� ���� �����:
	for (int i = 0; i <= N; i++)
	{
		x = 2 * i * R / N - R;
		for (int j = 0; j <= N; j++)
		{
			y = 2 * j * R / N - R;
			for (int k = 0; k <= N; k++)
			{
				z = k * (H + R) / N;

				// ������� ���������� �����:
				if (((sqrt(x * x + y * y) / R <= x / H) && (z <= H)) || ((x * x + y * y + (z - H) * (z - H) <= R * R) && (z > H))) n++;
			}
		}
	}

	// ����� ����:
	V = V0 * n / pow(N + 1,3);

	// ����� ������������ � ������� ��������:
	cout << "V = " << V << " : " << pi * R * R * H / 3 + 2 * pi * pow(R, 3) / 3 << endl;

	system("pause");
	return 0;
}