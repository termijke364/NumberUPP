#include <iostream>

using namespace std;

double Recurs(int i, double x)
{
	if (i == 1)
		return x;

	else if (i > 0)
		return x * Recurs(--i, x);

	else if (i < 0)
		return 1 / Recurs(-i, x);
}

int main()
{
	setlocale(0, "");

	double number;
	int up;

	cout << "Вычисление a^x" << endl;

	cout << "Введите число а:" << endl;
	cin >> number;

	cout << "Введите степень числа а" << endl;
	cin >> up;

	cout << "a ^ x = " << Recurs(up, number) << endl;

	return 0;
}