#include <limits.h>
#include <iostream>
#include <string>
#include <stdlib.h>

int main(int ag, char **av)
{
	int i = atoi(av[1]);
	std::cout << atoi("0") << std::endl;
	std::cout << strcmp(av[1], "0") << std::endl;
}