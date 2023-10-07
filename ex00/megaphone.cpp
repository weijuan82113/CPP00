#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	(void)argc;
	std::string str(argv[1]);
	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
	std::cout << str << std::endl;
	return(0);
}