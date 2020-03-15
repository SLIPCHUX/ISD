int SumOdds(const int* arr, const int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] % 2)
			sum += arr[i];
	}

	return sum;
}

int main()
{
	int arr[] = { 5, 78, 5, 34, 7, -4, -13};

	std::cout << SumOdds(arr, (sizeof(arr) / sizeof(arr[0]))) << std::endl;

	system("Pause");
	return 0;
}
//DENYS SLIPCHUK