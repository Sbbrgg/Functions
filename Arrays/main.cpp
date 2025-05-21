#include <iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int MinValueIn(int arr[], const int n);
int MaxValueIn(int arr[], const int n);
void ShiftLeft(int arr[], const int n, int shift);
void ShiftRight(int arr[], const int n, int shift);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n], shift;
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� ������� = " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� ������� = " << Avg(arr, n) << endl;
	cout << "����������� ������� �������: " << MinValueIn(arr, n) << endl;
	cout << "������������ ������� �������: " << MaxValueIn(arr, n) << endl;
	cout << "������� �����, �� ������� ����� ������� ����� ������� �����: "; cin >> shift;
	cout << "��������� ������ �����: ";
	ShiftLeft(arr, n, shift);
	Print(arr, n);
	cout << "������� �����, �� ������� ����� ������� ����� ������� ������: "; cin >> shift;
	cout << "��������� ������ ������: ";
	ShiftRight(arr, n, shift);
	Print(arr, n);

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
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
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

int Sum(int arr[], const int n)
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
		rez = rez + arr[i];
	}
	return double(rez / n);
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
int MaxValueIn(int arr[], const int n)
{
	int maxElement = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxElement) maxElement = arr[i];
	}
	return maxElement;
}
void ShiftLeft(int arr[], const int n, int shift)
{
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
void ShiftRight(int arr[], const int n, int shift)
{
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