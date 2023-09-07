#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>

int main(int argc, char *argv[])
{
	(void)argc;
	if (argv)
		for (size_t i = 0; i < strlen(argv[1]); i ++)
			putchar(toupper(argv[1][i]));
	std::cout << '\n';
	return 0;
}


