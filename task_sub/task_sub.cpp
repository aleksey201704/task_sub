#include <iostream>

using  namespace std;

void FillRand(int arr[],const unsigned int n);
void Print(int arr[], const unsigned int n);
void ReversPrint(int arr[], const unsigned int n);
int Sum(int arr[], const unsigned int n);
void Avg(int arr[], const unsigned int n);
void minValueIn(int arr[], const unsigned int n);
void maxValueIn(int arr[], const unsigned int n);
void Sort (int arr[], const unsigned int n);
void shiftLeft (int arr[], const unsigned int n, int Quantity);
void shiftRight (int arr[], const unsigned int n, int Quantity);




int  main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int n = 5;
	int arr[n];
	int Quantity=0;
	
	FillRand(arr, n);
	Print(arr, n);
	ReversPrint(arr, n);
	cout << endl << " Сумма = " << Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	Sort(arr, n);
	shiftLeft(arr, n, Quantity);
	shiftRight(arr, n, Quantity);
	return 0;
	

}

void shiftRight(int arr[], const unsigned int n, int Quantity)
{
	cout << endl;
	cout << "Введите на колчество сдвига Вправо = "; cin >> Quantity;
	
	for (int i = n-Quantity ; i < n; i++)
	{
		cout << arr[i]  << "\t" ;
	}
	
	for (int i = 0; i < n-Quantity; i++)
	{
		cout << arr[i] << "\t";
	}
	
	
}

void shiftLeft(int arr[], const unsigned int n, int Quantity)
{
	cout << endl;
	cout << "Введите на колчество сдвига влево = "; cin >> Quantity;
	
	int arrLSHift[5];
	
	for (int i = 0; i < Quantity; i++)
	{
		arrLSHift[i] = arr[i];
	}
	
	for (int i = Quantity; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	for (int i = 0; i < Quantity; i++)
	{
		cout << arrLSHift[i] << "\t";
		
	}
}


void Sort(int arr[], const unsigned int n)
{
	int t=0;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void maxValueIn(int arr[], const unsigned int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << endl << "Максимальное значение = " << max;
}

void minValueIn(int arr[], const unsigned int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	cout << endl << "Минимальное значение = " << min;
}

void FillRand(int arr[], const unsigned int n) 
{
	srand(static_cast <unsigned int> (time(0))); // Запустил генератор случайный чисел повремени
	
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
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

int Sum(int arr[], const unsigned int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	return s;
}

void Avg(int arr[], const unsigned int n)
{
	cout << endl << "Среднне число = " << (double) Sum (arr,n) / n;
}

