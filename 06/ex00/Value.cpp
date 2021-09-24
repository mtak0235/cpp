/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Value.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:55:00 by mtak              #+#    #+#             */
/*   Updated: 2021/09/22 18:19:58 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Value.hpp"
#include <string>
void Value::convertAll(char *av)
{
	Value::toChar(av);
	Value::toInt(av);
	Value::toFloat(av);
	Value::toDouble(av);
}

void Value:: toInt(char *av)
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
				throw "impossible";
		}
		else
			std::cout << static_cast<const int>(l) << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << std::endl;
	}
}
void Value:: toChar(char *av)
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
		if ((!i && strcmp(av, "0"))||i < CHAR_MIN || i > CHAR_MAX)
			throw "impossible";
		char c = static_cast<char>(i);
		if (isprint(c))
		{
			if (i == 32)
				std::cout << "'" << c << "'" << std::endl;
			else
				std::cout << c << std::endl;
			return;
		}
		throw "Non displayable";
	}
	catch(const char * e)
	{
		std::cerr << e << std::endl;
	}	
}

void Value:: toFloat(char *av)
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

void Value:: toDouble(char *av)
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
