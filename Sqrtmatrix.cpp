#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(0, "");
	int n;
	cout << "введите размер матрицы" << endl;
	cin >> n;
	int** array_matrix = new int* [n];
	cout << "Введите элементы матрицы" << endl;
	for (int i = 0; i < n; i++)
	{
		array_matrix[i] = new int[n];
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			array_matrix[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(4) << array_matrix[i][j];
		}
		cout << endl;
	}
	int min_element = array_matrix[0][0];
	int max_element = array_matrix[0][0];
	int maxIndex1 = 0;
	int maxIndex2 = 0;
	int minIndex3 = 0;
	int minIndex4 = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (array_matrix[i][j] > max_element)
			{
				max_element = array_matrix[i][j];
				maxIndex1 = i;
				maxIndex2 = j;
			}
			if (array_matrix[i][j] < min_element)
			{
				min_element = array_matrix[i][j];
				minIndex3 = i;
				minIndex4 = j;
			}
		}
	
	}
	cout << "Индекс максимального элемента " << " " << maxIndex1 << maxIndex2 << endl;
	cout << "Индекс минимального элемента" << " " << minIndex3 << minIndex4 << endl;
	return 0;
}