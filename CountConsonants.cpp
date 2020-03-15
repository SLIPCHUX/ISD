#include <iostream>

int CountConsonants(const char* str, const int length)
{
	char consonants[] = { 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 
						  'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};

	
	
	int count = 0;
	char tmp;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < (sizeof(consonants) / sizeof(consonants[0])); j++)
		{
			tmp = consonants[j] + 32;
			if (str[i] == consonants[j] || str[i] == tmp)
			{
				count++;
			}

		}
	}

	return count;
}

int main()
{
	char str[] = "How many consonant here?";

	std::cout << CountConsonants(str, (sizeof(str) / sizeof(str[0]))) << std::endl;

	system("Pause");
	return 0;
}
//DENYS SLIPCHUK