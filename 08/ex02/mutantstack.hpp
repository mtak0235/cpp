/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:19:43 by mtak              #+#    #+#             */
/*   Updated: 2021/09/23 16:19:56 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:
		MutantStack<T>(); //== MutantStack();
		MutantStack<T>(MutantStack const &);
		~MutantStack<T>();
		MutantStack operator = (MutantStack const &);
};

#include "mutantstack.cpp"	//WHY?
							//https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
							//https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl
#endif
