#include <iostream>


namespace mySpace
{
	int isOdd(int a)
	{
		return a % 2 ? a : 0;
	}

	template <typename T>
	int FindMaxOdd(const T* arr, const size_t n)
	{
		T res = 1;
		for (size_t i = 0; i < n; ++i)
		{
			if (res < arr[i] && isOdd(arr[i]))
				res = arr[i];
		}

		return res;
	}

}


int main()
{
	int arr[] = { 10, 9, 13, 43, -7, 4, 13 };
	const size_t n = sizeof(arr) / sizeof(arr[0]);

	std::cout << mySpace::FindMaxOdd(arr, n) << std::endl;

	system("Pause");
	return 0;
}