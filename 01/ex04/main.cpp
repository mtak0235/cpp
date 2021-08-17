/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:46:19 by mtak              #+#    #+#             */
/*   Updated: 2021/08/16 14:55:31 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string str_to_upper(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}

std::string replace(std::string str, std::string from , std::string to)
{
	size_t line = str.find(from);
	while (line != std::string::npos)
	{
		str.erase(line, from.length());
		str.insert(line, to);
		line = str.find(from);
	}
	return str;
}

int main(int ag, char **av)
{
	if (ag != 4)
	{
		std::cout << "Wrong Args" << std::endl;
		return (0);
	}
	std::ifstream fin(av[1]);
	if (!fin.is_open())
	{
		std::cout << av[1] << "does not exist" << std::endl;
		return (0);
	}
	std::string result;
	std::string str(av[1]);
	std::ofstream fout(str_to_upper(str) + ".replace");
	while (std::getline(fin, result))
	{
		result = replace(result, av[2], av[3]);
		fout << result << std::endl;
	}
	fin.close();
	fout.close();
	return (0);
}

