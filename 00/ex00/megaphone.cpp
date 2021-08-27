#include <iostream>

int main (int ag, char **av)
{
    if (ag == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ag; i++)
            for (int j = 0; av[i][j]; j++)
            std::cout << (char)toupper((int)av[i][j]);
        std::cout << std::endl;
    }
}