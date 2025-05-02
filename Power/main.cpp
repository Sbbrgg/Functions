#include <iostream>
using namespace std;

double Power(double a, int n);

void main()
{
	setlocale(LC_ALL, "Russian");

	int a, N;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> N;
	cout << endl << "Число " << a << " в степени " << N << " = " << Power(a, N);
}
double Power(double a, int n)
{
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= a;
	}

	return result;
}