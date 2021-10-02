/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:29:07 by mtak              #+#    #+#             */
/*   Updated: 2021/09/25 15:38:24 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#define SIZE_ARR 5

void print_c(char const &c)
{
	std::cout << "print char:\t" << c << std::endl;
}

// int main(void)
// {
// 	char *arr = new char[4];
// 	char startChar = 'a';
// 	for (int i = 0; i < 4; i++)
// 		arr[i] = startChar++;
// 	iter(arr, 4, print);
// 	iter(arr, 4, print_c);
// 	delete [] arr;
// 	return 0;
// }

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print );
iter( tab2, 5, print );
return 0;
}
