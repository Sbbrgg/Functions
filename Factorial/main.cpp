#include <iostream>
using namespace std;

int Factorial(int n = 0);

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите число, факториал которого нужно вывести: "; cin >> n;
	cout << "‘акториал числа: " << n << " = " << Factorial(n);
}
int Factorial(int n)
{
	int result = 1;
	if (n == 0) return result;
	else
	{
		for (int i = 1; i <= n; i++)
		{
			result *= i;
		}
	}
	return result;
}