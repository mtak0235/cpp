/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:55:51 by mtak              #+#    #+#             */
/*   Updated: 2021/09/27 00:00:38 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <vector>
#include <list>
#include <iostream>

template<typename T>
typename T::iterator easyfind(T &t, int i)
{
	typename T::iterator itr;
	for(itr = t.begin(); itr != t.end(); itr++)
		if (*itr == i)
			return itr;
	throw std::invalid_argument("NOT FOUND");
}

#endif
