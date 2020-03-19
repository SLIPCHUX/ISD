#include <iostream>
const int lower = 32;

const char* ToUpperCase(char str[], size_t n)
{
	char* res = str;

	for (size_t i = 0; i < n; i++)
	{
		if ('A' <= res[i] && res[i] <= 'z')
		{
			if (res[i] > 'Z')
			{
				res[i] -= lower;
			}

		}
	}
	return res;
}

int main()
{
	char str[] = "This is C++";
	const size_t n = sizeof(str) / sizeof(str[0]);

	std::cout << ToUpperCase(str, n);

	system("Pause");
	return 0;
}
/*
DENYS SLIPCHUK
For a given string, display the same string in upper case.
Example:
Original string: "This is C++"
Expected Result: "THIS IS C ++"
*/