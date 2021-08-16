/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:46:19 by mtak              #+#    #+#             */
/*   Updated: 2021/08/15 21:52:56 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>

std::string str_to_upper(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}

std::string replace(std::string );

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
	fout << result;
	fin.close();
	fout.close();
}

