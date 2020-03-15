#include <iostream>

int FindMaxOdd(const int* arr, const int length)
{
	int res = 1;
	for (int i = 0; i < length; i++)
	{
		if (res < arr[i] && (arr[i] % 2 != 0))
		{
			res = arr[i];
		}
	}

	return res;
}

int main()
{
	int arr[] = { 10, 9, 13, 43, -7, 4, 13 };
	
	std::cout << FindMaxOdd(arr, (sizeof(arr) / sizeof(arr[0]))) << std::endl;

	system("Pause");
	return 0;
}