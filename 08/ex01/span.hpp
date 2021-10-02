/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:18:53 by mtak              #+#    #+#             */
/*   Updated: 2021/09/27 01:15:56 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <stdexcept>
#include <vector>
#include <climits>
#include <algorithm>
#include <ctime>
#include <cstdlib>

class Span
{
		std::vector<int> v;
		unsigned int const space;
	public:
		Span(unsigned int const n);
		~Span();

		void print();
		void randomFillN(unsigned int n);
		void addNumber(int const n);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
};

#endif
