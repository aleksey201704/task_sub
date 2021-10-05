#include <iostream>
#include <windows.h>

using  namespace std;
// ЗАполняет случайными числами

void FillRand(int arr[], const unsigned int n);
void Print(int arr[], const unsigned int n);
void ReversPrint(int arr[], const unsigned int n);
void Sum(int arr[], const unsigned int n, int s);



void main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int n = 5;
	int arr[n];
	int s = 0;
	FillRand(arr, n);
	Print(arr, n);
	ReversPrint(arr, n);
	Sum(arr, n, s);

}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void ReversPrint(int arr[], const unsigned int n)
{
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

void Sum(int arr[], const unsigned int n, int s)
{

	for (int i = 0; i < n; i++)
	{
		s = s + arr[i];

	}
	cout << endl << " Summa = " << s;
}
