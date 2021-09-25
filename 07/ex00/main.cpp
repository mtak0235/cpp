/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:28:09 by mtak              #+#    #+#             */
/*   Updated: 2021/09/24 16:54:40 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "whatever.hpp"

int main(void) 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "\033[32ma = " << a << ", b = " << b << "\033[37m" << std::endl;
	std::cout << "min( a, b ) = " << ::min<int>( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "generate";
	std::string d = "degenerate";
	::swap(c, d);
	std::cout << "\033[32mc = " << c << ", d = " << d << "\033[37m" << std::endl;
	std::cout << "min( c, d ) = " << ::min<std::string>( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
