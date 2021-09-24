/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:55:51 by mtak              #+#    #+#             */
/*   Updated: 2021/09/23 15:57:16 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <vector>
#include <list>
#include <iostream>

template<typename C>
typename C::iterator easyfind(C & t, int i)
{
	typename C::iterator it;
	for(it = t.begin(); it != t.end(); it++)
		if (*it == i)
			return it;
	throw std::invalid_argument("NOT FOUND");
}

#endif
