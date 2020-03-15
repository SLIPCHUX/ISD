#include <iostream>

namespace mySpace
{
	template <typename T>
	T findMin(const T* arr, const size_t size)
	{
		T min = arr[0];

		for (int i = 0; i < size; ++i)
		{
			if (min > arr[i])
				min = arr[i];
		}

		return min;
	}

	template <typename T>
	T findResidue(T value)
	{
		if (value < 0) value *= -1;
		T intpart, fractpart = modf(value, &intpart);

		return fractpart;
	}
}

int main()
{
	double arr[] = { 1.67, 32.0, 3.0, 7.12, -4.1, -8.09 };
	size_t n = sizeof(arr) / sizeof(arr[0]);

	std::cout << mySpace::findResidue(mySpace::findMin(arr, n)) << std::endl;

	system("Pause");
	return 0;
}
//DENYS SLIPCHUK