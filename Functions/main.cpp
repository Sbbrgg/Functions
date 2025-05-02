#include <iostream>
using namespace std;
int Sum(int a, int b, int c = 0);		//Прототип функции (объявление функции – Dunction declaration)
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << "Hello Functions" << endl;

	int a, b;
	cout << "Введите два числа: "; cin >> a; cin >> b;
	int c = Sum(a, b, 5);		//Использование функции (Вызов функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
	cout << Sum(15, 16) << endl;
}
int Sum(int a, int b, int c)		//Реализация функции (Определение функции - Function definition)
{
	int d = a + b + c;
	return d;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(int a, int b)
{
	return (double)a / b;
}