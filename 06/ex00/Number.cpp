/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:55:00 by mtak              #+#    #+#             */
/*   Updated: 2021/09/22 18:19:58 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

void Number::convertAll(char *av)
{
	Number::toChar(av);
	Number::toInt(av);
	Number::toFloat(av);
	Number::toDouble(av);
}

void Number:: toInt(char *av)
{
	try
	{
		std::cout << "int:\t";
		long int l;
		l = strtol(av, 0, 10);
		if (l > INT_MAX || l < INT_MIN)
			throw "impossible";
		if (!l && strcmp(av, "0"))
		{
			if (strlen(av) == 1 && isprint(*av))
				std::cout << static_cast<const int>(*av) << std::endl;
			else
				throw "\033[35mimpossible\033[37m";
		}
		else
			std::cout << static_cast<const int>(l) << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << std::endl;
	}
}
void Number:: toChar(char *av)
{
	try
	{
		std::cout << "char:\t";
		if (strlen(av) == 1 && !isdigit(*av))
		{
			std::cout << "'" << static_cast<const char>(*av) << "'" << std::endl;
			return;
		}
		int i;
		i = atoi(av);
		if ((!i && strcmp(av, "0"))||i < 0 || i > CHAR_MAX)
			throw "impossible";
		char c = static_cast<char>(i);
		if (isprint(c))
		{
			std::cout << "\033[33m'" << c << "'\033[37m"  << std::endl;
			return;
		}
		throw "Non displayable";
	}
	catch(const char * e)
	{
		std::cerr << e << std::endl;
	}	
}

void Number:: toFloat(char *av)
{
	try
	{
		std::cout << "float:\t";
		float f;
		f = atof(av);
		if (!f && strcmp(av,"0"))
		{
			if (strlen(av) == 1 && isprint(*av))
				std::cout << static_cast<const float>(*av);
			else
				throw "impossible";
		}
		else
			std::cout << f;
		if (f - floor(f) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << std::endl;
	}
}

void Number:: toDouble(char *av)
{
	try
	{
		std::cout << "double:\t";
		double d;
		d = strtod(av, 0);
		if (!d && strcmp(av,"0"))
		{
			if (strlen(av) == 1 && isprint(*av))
				std::cout << static_cast<const double>(*av);
			else
				throw "impossible";
		}
		else
			std::cout << d;
		if (d - floor(d) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << std::endl;
	}
}
