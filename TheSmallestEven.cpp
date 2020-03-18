#include <iostream>

namespace mySpace
{
	template <typename T>
	T isEven(const T num)
	{
		return !(num % 2) ? num : 0;
	}

	template <typename T>
	T FindMinEven(const T* arr, const size_t n)
	{
		T result = 0;
		for (size_t i = 0; i < n; ++i)
		{
			if (isEven(arr[i]) && result < arr[i])
			{
				result = arr[i];
			}
		}
		return result;
	}
}


int main()
{
	int arr[] = { 10, 9, 13, 43, -7, 4, 13 };
	const size_t n = sizeof(arr) / sizeof(arr[0]);

	std::cout << mySpace::FindMinEven(arr, n);

	return 0;
}
/*
DENYS SLIPCHUK
Для заданного массива целых чисел вывести на экран индекс наименьшего четного числа
Пример:
Исходный массив: {10, 9, 13, 43, -7, 4, 13}
Ожидаемый результат: 5

*/