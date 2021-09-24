/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:19:33 by mtak              #+#    #+#             */
/*   Updated: 2021/09/23 16:19:36 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_C	
#define MUTANTSTACK_C	

#include "mutantstack.hpp"

template <typename T> 
MutantStack<T>::MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & obj) : std::stack<T>(obj)
{}

template <typename T>
MutantStack<T> MutantStack<T>::operator = (MutantStack<T> const & obj)
{
	std::stack<T>::operator = (obj);
}

template <typename T>
MutantStack<T>::~MutantStack()
{}


#endif
