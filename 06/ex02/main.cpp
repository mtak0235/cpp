/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:24:16 by mtak              #+#    #+#             */
/*   Updated: 2021/09/24 16:22:07 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "Class.hpp"

Base * createA()
{
	std::cout << "Create A obj" << std::endl;
	return new A();
}

Base * createB()
{
	std::cout << "Create B obj" << std::endl;
	return new B();
}

Base * createC()
{
	std::cout << "Create C obj" << std::endl;
	return new C();
}

Base * generate()
{
	Base *(*create[3])() = {&createA, &createB, &createC};
	
	return create[rand() % 3]();
}

void identify(Base* p)
{
	std::cout << "From ptr: obj is type ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base b;
	std::cout << "From ref: obj is type ";	
	try
	{
		b = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception & e)
	{}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{}
	try
	{
		b = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{}
}

int main()
{
	Base *p;
	for (int i = 0; i < 9 ; i++)
	{
		std::cout << "\033[36m";
		p = generate();
		std::cout << "\033[37m";
		identify(p);
		identify(*p);
		delete p;
	}
	return 0;
}
