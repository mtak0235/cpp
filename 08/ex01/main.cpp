/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:56:00 by mtak              #+#    #+#             */
/*   Updated: 2021/09/27 02:11:52 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#define SIZE1 10000
#define SIZE2 100000
#define SIZE3 1000000

void test(unsigned int n)
{
	try
	{
		Span sp = Span(n);
		sp.randomFillN(n);
		std::cout << "shortestSpan:\t" << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan:\t" << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	std::cout << "\033[32m--문제지--\033[37m" << std::endl;
	
	Span sp = Span(5);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\033[34m--에러문이 잘 나오는지 테스트--\033[37m" << std::endl;

	try
	{
		sp.addNumber(42);					
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Span sp1 = Span(5);
		sp1.addNumber(42);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		unsigned int n = 5;
		Span sp = Span(n);
		sp.randomFillN(n - 1);
		sp.addNumber(5);
		sp.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\033[35m--문제에서 요구한 최소 10000이상의 수를 커버할 수 있는가--\033[37m" << std::endl;
	test(10000);
	test(100000);
	test(1000000);
}
