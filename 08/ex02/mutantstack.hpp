/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:19:43 by mtak              #+#    #+#             */
/*   Updated: 2021/09/27 05:50:19 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack();
		MutantStack(MutantStack<T> const &target);
		MutantStack<T> operator=(MutantStack<T> const &target);
		iterator end();
		iterator begin();
		virtual ~MutantStack();
};

template <typename T> 
MutantStack<T>::MutantStack()
{}

template <typename T> 
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & target)
{
	*this = target;
}

template <typename T>
MutantStack<T> MutantStack<T>::operator=(MutantStack<T> const & target)
{
	if (this != &target)
		*this = target;
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{ return (this->c.begin()); }

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{ return (this->c.end()); }

#endif
