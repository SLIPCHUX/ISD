#include <iostream>

namespace mySpace
{
	int odd(int num)
	{
		return (num % 2) ? num : 0;
	}

	typedef int(*F) (int);

	template <typename T>
	T SumOddNums(const T* arr, const size_t n, F f)
	{
		T sum = 0;

		for (size_t i = 0; i < n; i++)
			sum += f(arr[i]);

		return sum;
	}
}


int main()
{
	int arr[] = { 5, 78, 5, 34, 7, -4, -13 };
	const size_t n = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Sum of odd numbers: " << mySpace::SumOddNums(arr, n, mySpace::odd) << std::endl;

	system("Pause");
	return 0;
}
//DENYS SLIPCHUK
/*
Подсчитать количество нечетных чисел в заданном массиве целых чисел.
Пример:
Исходный массив: {1, 78, 5, 34, 7, -4, -13}
Ожидаемый результат: 4
*/