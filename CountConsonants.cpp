#include <iostream>

int CountConsonants(const char* str, const size_t n)
{
	char consonants[] = { 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M',
						  'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z' };


	int count = 0;
	char tmp;

	for (size_t i = 0; i < n; i++)
	{
		for (int j = 0; j < (sizeof(consonants) / sizeof(consonants[0])); j++)
		{
			tmp = consonants[j] + 32;

			if (str[i] == consonants[j] || str[i] == tmp)
				count++;

		}
	}

	return count;
}

int main()
{
	char str[] = "How many consonant here?";
	const size_t n = sizeof(str) / sizeof(str[0]);

	std::cout << CountConsonants(str, n) << std::endl;

	system("Pause");
	return 0;
}
//DENYS SLIPCHUK
/*
Подсчитать количество согласных букв в заданной строке.
Пример:
Исходная строка: "How many consonant here?"
Ожидаемый результат: 12
*/