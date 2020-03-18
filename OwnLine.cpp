#include <iostream>

void PrintOwnLine(const char* str, const size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		std::cout << str[i];

		if (str[i] == ' ')
			std::cout << std::endl;
	}
}

int main()
{
	char str[] = "Let's try to print each word in new line";
	size_t n = sizeof(str) / sizeof(str[0]);

	PrintOwnLine(str, n);

	system("Pause");
	return 0;
}
/*
DENYS SLIPCHUK
For a given string, display each word on a separete line.
Example:
Original line: "Let's try to print each word in new line"
Expected result:
"Let's"
try
to
print
each
word
in
new
line"
*/