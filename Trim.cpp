#include <iostream>

namespace mySpace
{
	int StrLen(const char* str)
	{
		int length = 0;
		while (str[length++] != '\0');

		return length - 1;
	}

	const char* Trim(char* str, const size_t n)
	{
		int i = 0, j = 0;

		while (str[i] == ' ' || str[i] == '\t')
		{
			i++;
		}

		if (i > 0)
		{
			for (j = 0; j < StrLen(str); j++)
			{
				str[j] = str[j + i];
			}
			str[j] = '\0';
		}

		i = StrLen(str) - 1;
		while ((str[i] == ' ') || (str[i] == '\t'))
		{
			i--;
		}
		if (i < (StrLen(str) - 1))
		{
			str[i + 1] = '\0';
		}
		return str;
	}
}

int main()
{
	char str[] = "      There are too many spaces in this text!      ";
	const size_t n = sizeof(str) / sizeof(str[0]);

	std::cout << mySpace::Trim(str, n) << std::endl;

	system("Pause");
	return 0;
}
/*
DENYS SLIPCHUK
or a given line, display this line without spaces at the beginning and end of the line and replace all consecutive spaces with one space.
Example:
Original line: "  There are too many spaces in this text!  "
Expected Result: "There are too many spaces in this text!"
*/