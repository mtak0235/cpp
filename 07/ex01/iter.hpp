/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:28:49 by mtak              #+#    #+#             */
/*   Updated: 2021/09/24 17:05:16 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void iter(T* const array, int const & size, void(function)(T const &))
{
	for (int i = 0; i < size; i++)
		function(array[i]);
}

template<typename T>
void print(T const &t)
{
	std::cout << "print:\t" << t << std::endl;
}
#endif
