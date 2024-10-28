#include <iostream>
// завдання 1
int main()
{
	int arr1[10];
	for (int i = 0; i < 9; i++)
	{
		if (i % 2 == 0)
		{
			arr1[i] = 2.3 + i;
		}
		else {
			arr1[i] = 4.6 - i;
		}

	}
	int size = 9;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}
}
// завдання 2
int main()
{
	int arr1[10];
	int arr2[10];
	int arr3[10];

	for (int i = 0; i < 10; i++)
	{
		arr1[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = 100 - i * i;
	}
	int k = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr1[i] == arr2[j])
			{
				arr3[k] = arr1[i];
				k++;
				break;
			}
		}
	}
	int multipl = 1;
	for (int i = 0; i < k; i++)
	{
		multipl *= arr3[i];
	}
}
// завдання 3
int main()
{
	float arr[4][5]{
	{1.1, 2.5, 3.6, 4.2, 5.8},
		{2.2, 3.7, -7.4, 6.3, 9.9},
		{5.5, -3.3, 6.6, 8.8, 1.1},
		{-1.5, 6.9, -9.1, 8.0, 9.4}
	};
	int arr[5][4]{
		{1, 2, 3, 4,},
		{4, 3, 2, 1},
		{5, 6, 7, 8},
		{8, 7, 6, 5},
		{51, 22, 43, 98}

	};

	float arr1[4];
	for (int i = 0; i < 5; i++)
	{
		float mult = 1;
		for (int j = 0; j < 4; j++)
			mult = mult * arr[j][i];
	}

	int arr2[5];
	for (int j = 0; j < 4; ++j) {
		int sum = 0;  
		int count = 0;  

		for (int i = 0; i < 5; ++i) {
			if (arr2[i][j] < 0) {  
				sum += arr2[i][j];
				count++;
			}
		}

	return 0;
}

