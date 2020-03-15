#include <iostream>


namespace mySpace
{
	int isOdd(int a)
	{
		return a % 2 ? a : 0;
	}

	template <typename T>
	T FindFirstOdd(T* arr, size_t n)
	{
		int odd = 0;

		for (size_t i = 0; i < n; ++i)
		{
			if (isOdd(arr[i]))
			{
				odd = isOdd(arr[i]);
				return odd;
			}
		}

		return odd;
	}

	template <typename T>
	T FindMaxOdd(T* arr, size_t n)
	{
		T maxOdd = FindFirstOdd(arr, n);

		for (size_t i = 0; i < n; ++i)
		{
			if (isOdd(arr[i]) && maxOdd < arr[i])
				maxOdd = arr[i];
		}


		return maxOdd;
	}

	void sumValue(int value, int *result)
	{
		if (value == 0)
			return;

		*result += value % 10;

		sumValue(value / 10, result);
	}
}


int main()
{
	int arr[] = { 10, 9, 13, 43, -7, 4, 13 };
	size_t n = sizeof(arr) / sizeof(arr[0]);

	int result = 0;
	mySpace::sumValue(mySpace::FindMaxOdd(arr, n), &result);

	std::cout << result << std::endl;

	system("Pause");
	return 0;
}
//DENYS SLIPCHUK
/*
Для заданного массива целых чисел вывести на экран сумму цифр наибольшего нечетного числа
Пример:
Исходный массив: {10, 9, 13, 43, -7, 4, 13}
Ожидаемый результат: 7
*/