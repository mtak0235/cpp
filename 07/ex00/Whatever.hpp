/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:28:38 by mtak              #+#    #+#             */
/*   Updated: 2021/09/23 15:28:41 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template< typename T >
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template< typename T >
T const max(T const &a, T const &b)
{
	if (a >= b)
		return a;
	return b;
}

template< typename T >
T const min(T const &a, T const &b)
{
	if (a <= b)
		return a;
	return b;
}

#endif