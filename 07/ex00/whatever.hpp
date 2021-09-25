/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:30:38 by mtak              #+#    #+#             */
/*   Updated: 2021/09/25 14:30:41 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template< class T >
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template< typename T >
T max(T &a, T &b)
{
	if (a >= b)
		return a;
	return b;
}

template< typename T >
T min(T &a, T &b)
{
	if (a <= b)
		return a;
	return b;
}

#endif
