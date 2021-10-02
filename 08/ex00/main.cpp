/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:55:55 by mtak              #+#    #+#             */
/*   Updated: 2021/09/27 11:55:12 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
#include <exception>

template<typename T>
void print(T & t)
{
	typename T::iterator itr;

	std::cout << "print: " << std::endl;
	for(itr = t.begin(); itr != t.end(); itr++)
		std::cout << *itr << std::endl;
}

int main()
{
	std::list<int>		lst;
	std::vector<int>	v;

	for (int i = 200; i < 210; i++)
		lst.push_back(i);
	
	for (int i = 400; i < 410; i++)
		v.push_back(i);
	
	std::cout << "List ";
	print(lst);
	std::cout << "Vector ";
	print(v);

	std::cout << "----" << std::endl;

	try
	{
		std::cout << *easyfind(v, 405) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << *easyfind(v, 305) << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << *easyfind(lst, 201) << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << *easyfind(lst, 10) << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	return 0;
}
