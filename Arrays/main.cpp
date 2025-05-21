#include <iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
int MinValueIn(char arr[], const int n);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
int MaxValueIn(char arr[], const int n);

void ShiftLeft(int arr[], const int n, int shift);
void ShiftLeft(double arr[], const int n, int shift);
void ShiftLeft(char arr[], const int n, int shift);

void ShiftRight(int arr[], const int n, int shift);
void ShiftRight(double arr[], const int n, int shift);
void ShiftRight(char arr[], const int n, int shift);

void PrintInfoArray(int arr[], const int n);
void PrintInfoArray(double arr[], const int n);
void PrintInfoArray(char arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int shift;
	int arr[n];
	double brr[n];
	char crr[n];
	PrintInfoArray(arr, n);
	PrintInfoArray(brr, n);
	PrintInfoArray(crr, n);

}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << (int)arr[i] << tab;
	}
	cout << endl << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		rez += arr[i];
	}
	return rez;
}
double Sum(double arr[], const int n)
{
	double rez = 0;
	for (int i = 0; i < n; i++)
	{
		rez += arr[i];
	}
	return double(rez / n);
}
int Sum(char arr[], const int n)
{
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		rez += arr[i];
	}
	return rez;
}
double Avg(int arr[], const int n)
{
	double rez = 0;
	for (int i = 0; i < n; i++)
	{
		rez += arr[i];
	}
	return rez / (double)n;
}
double Avg(double arr[], const int n)
{
	double rez = 0;
	for (int i = 0; i < n; i++)
	{
		rez = +arr[i];
	}
	return rez / (double)n;
}
double Avg(char arr[], const int n)
{
	double rez = 0;
	for (int i = 0; i < n; i++)
	{
		rez = +arr[i];
	}
	return rez / (double)n;
}
int MinValueIn(int arr[], const int n)
{
	int minElement = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minElement) minElement = arr[i];
	}
	return minElement;
}
double MinValueIn(double arr[], const int n)
{
	double minElement = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minElement) minElement = arr[i];
	}
	return minElement;
}
int MinValueIn(char arr[], const int n)
{
	char minElement = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minElement) minElement = arr[i];
	}
	return minElement;
}
int MaxValueIn(int arr[], const int n)
{
	int maxElement = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxElement) maxElement = arr[i];
	}
	return maxElement;
}
double MaxValueIn(double arr[], const int n)
{
	double maxElement = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxElement) maxElement = arr[i];
	}
	return maxElement;
}
int MaxValueIn(char arr[], const int n)
{
	char maxElement = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxElement) maxElement = arr[i];
	}
	return maxElement;
}
void ShiftLeft(int arr[], const int n, int shift)
{
	shift %= n;
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, int shift)
{
	shift %= n;
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(char arr[], const int n, int shift)
{
	shift %= n;
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(int arr[], const int n, int shift)
{
	shift %= n;
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(double arr[], const int n, int shift)
{
	shift %= n;
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(char arr[], const int n, int shift)
{
	shift %= n;
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void PrintInfoArray(int arr[], const int n)
{
	int shift;
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива = " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(arr, n) << endl;
	cout << "Минимальный элемент массива: " << MinValueIn(arr, n) << endl;
	cout << "Максимальный элемент массива: " << MaxValueIn(arr, n) << endl;
	cout << "Введите число, на которое нужно сделать сдвиг массива влево: "; cin >> shift;
	cout << "Сдвинутый массив влево: ";
	ShiftLeft(arr, n, shift);
	Print(arr, n);
	cout << "Введите число, на которое нужно сделать сдвиг массива вправо: "; cin >> shift;
	cout << "Сдвинутый массив вправо: ";
	ShiftRight(arr, n, shift);
	Print(arr, n);
}
void PrintInfoArray(double arr[], const int n)
{
	int shift;
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива = " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(arr, n) << endl;
	cout << "Минимальный элемент массива: " << MinValueIn(arr, n) << endl;
	cout << "Максимальный элемент массива: " << MaxValueIn(arr, n) << endl;
	cout << "Введите число, на которое нужно сделать сдвиг массива влево: "; cin >> shift;
	cout << "Сдвинутый массив влево: ";
	ShiftLeft(arr, n, shift);
	Print(arr, n);
	cout << "Введите число, на которое нужно сделать сдвиг массива вправо: "; cin >> shift;
	cout << "Сдвинутый массив вправо: ";
	ShiftRight(arr, n, shift);
	Print(arr, n);
}
void PrintInfoArray(char arr[], const int n)
{
	int shift;
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива = " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(arr, n) << endl;
	cout << "Минимальный элемент массива: " << MinValueIn(arr, n) << endl;
	cout << "Максимальный элемент массива: " << MaxValueIn(arr, n) << endl;
	cout << "Введите число, на которое нужно сделать сдвиг массива влево: "; cin >> shift;
	cout << "Сдвинутый массив влево: ";
	ShiftLeft(arr, n, shift);
	Print(arr, n);
	cout << "Введите число, на которое нужно сделать сдвиг массива вправо: "; cin >> shift;
	cout << "Сдвинутый массив вправо: ";
	ShiftRight(arr, n, shift);
	Print(arr, n);
}