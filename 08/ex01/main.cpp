/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:56:00 by mtak              #+#    #+#             */
/*   Updated: 2021/09/23 16:18:29 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#define SIZE1 10000
#define SIZE2 100000
#define SIZE3 1000000

void testBigVector(unsigned int n)
{
	try
	{
		Span sp = Span(n);
		sp.randomFill(n);
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
	std::cout << "-ORIGINAL------" << std::endl;
	
	Span sp = Span(5);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	
	
	std::cout << "-ERRORS--------" << std::endl;

	try									//NO MORE SPACE
	{
		sp.addNumber(11);					
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try									//TOO FEW ELEMENTS TO MATCH
	{
		Span sp1 = Span(5);
		sp1.addNumber(5);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try									//NO MORE SPACE
	{
		unsigned int n = 100;
		Span sp = Span(n);
		sp.randomFill(n - 1);
		sp.addNumber(5);
		sp.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	std::cout << "-LIMITS-----" << std::endl;
	{
		unsigned int n = 100;
		Span sp = Span(n);
		sp.randomFill(n - 2);
		sp.addNumber(INT_MAX);
		sp.addNumber(INT_MIN);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}



	std::cout << "-MORE NUMBERS--" << std::endl;
	testBigVector(SIZE1);
	testBigVector(SIZE2);
	testBigVector(SIZE3);
}
