/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:29:07 by mtak              #+#    #+#             */
/*   Updated: 2021/09/24 17:06:48 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#define SIZE_ARR 5

void print_c(char const &c)
{
	std::cout << "print char:\t" << c << std::endl;
}

int main(void)
{
	char *arr = new char[4];
	char startChar = 'a';
	for (int i = 0; i < 4; i++)
		arr[i] = startChar++;
	iter(arr, 4, print);
	iter(arr, 4, print_c);
	delete [] arr;
	return 0;
}
