/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:55:55 by mtak              #+#    #+#             */
/*   Updated: 2021/09/23 15:57:27 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
#include <exception>

// https://stackoverflow.com/questions/16596422/template-class-with-template-container
// https://stackoverflow.com/questions/46485084/declare-template-function-to-accept-any-container-but-only-one-contained-type
// https://devblogs.microsoft.com/oldnewthing/20190619-00/?p=102599

template<typename C>
void print(C & t)	//https://stackoverflow.com/questions/46485084/declare-template-function-to-accept-any-container-but-only-one-contained-type
{
	std::cout << "print: " << std::endl;
	typename C::iterator it;
	for(it = t.begin(); it != t.end(); it++)
		std::cout << *it << std::endl;
}

int main()
{
	std::list<int>		lst1(1,101);
	std::list<int>		lst2;
	std::vector<int>	v1(1, 301);
	std::vector<int>	v2;
	
	lst1.push_front(100);
	lst1.push_back(102);

	for (int i = 200; i < 210; i++)
		lst2.push_back(i);
	
	v1.push_back(302);
	v1.push_back(303);

	for (int i = 400; i < 410; i++)
		v2.push_back(i);
	
	std::cout << "List1 ";
	print(lst1);
	std::cout << "List2 ";
	print(lst2);
	std::cout << "Vector1 ";
	print(v1);
	std::cout << "Vector2 ";
	print(v2);

	std::cout << "----" << std::endl;

	try
	{
		std::cout << *easyfind(v1, 302) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << *easyfind(v1, 305) << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << *easyfind(lst1, 101) << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << *easyfind(lst1, 103) << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	return 0;
}
