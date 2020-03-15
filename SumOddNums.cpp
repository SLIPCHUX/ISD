#include <iostream>

int isOdd(int num)
{
	return (num % 2) ? num : 0;
}

int SumOddNums(const int* arr, const size_t n)
{
	int sum = 0;

	for (size_t i = 0; i < n; i++)
		sum += isOdd(arr[i]);

	return sum;
}

int main()
{
	int arr[] = { 5, 78, 5, 34, 7, -4, -13 };
	const size_t n = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Sum of odd numbers: " << SumOddNums(arr, n) << std::endl;

	system("Pause");
	return 0;
}
//DENYS SLIPCHUK