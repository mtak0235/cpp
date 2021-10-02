/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:18:41 by mtak              #+#    #+#             */
/*   Updated: 2021/09/27 02:04:38 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int const n) : space(n)
{}

Span::~Span()
{
	this->v.clear();
}

void Span::print()
{
	std::cout << "Print: " << std::endl;
	std::vector<int>::iterator itr;
	for (itr = this->v.begin(); itr != this->v.end(); ++itr)
		std::cout << *itr << std::endl;
}

void Span::addNumber(int const n)
{
	try
	{
		if (this->v.size() == this->space)
			throw std::out_of_range("준비된 자리가 소진되었습니다~");
		this->v.push_back(n);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

unsigned int Span::longestSpan()
{
	if (this->v.size() <= 1)
		throw std::invalid_argument("애미야~~ 비교할 원소가 없다~~");
	long min = static_cast<long>(*(std::min_element(this->v.begin(), this->v.end())));
	long max = static_cast<long>(*(std::max_element(this->v.begin(), this->v.end())));
	long maxSpan = max - min;
	return static_cast<unsigned int>(maxSpan);
}

unsigned int Span::shortestSpan()
{
	if (this->v.size() <= 1)
		throw std::invalid_argument("애미야~~ 비교할 원소가 없다~~");
	long minSpan = UINT_MAX;
	std::vector<int> tmp;
	tmp = this->v;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::reverse_iterator ritr;
	for (ritr = tmp.rbegin(); ritr != tmp.rend() - 1; ritr++)
	{
		long span = static_cast<long>(*ritr) - static_cast<long>(*(ritr + 1));
		if ( span < minSpan )
			minSpan = span;
	}
	return static_cast<unsigned int>(minSpan);
}

unsigned int randomNum()
{
	return (std::rand() % 1000000);
}

void Span::randomFillN(unsigned int n)
{
	if (this->space < n)
		throw std::invalid_argument("랜덤으로 채워 넣기에는 이미 할당된 자리가 좁구나~");
	this->v.resize(n);
	srand(time(NULL));
	std::generate_n(this->v.begin(), n, randomNum);
}
