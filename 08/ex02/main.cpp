/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:19:07 by mtak              #+#    #+#             */
/*   Updated: 2021/09/27 12:20:22 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>
#include <vector>
int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	// std::cout << mstack.top() << std::endl;
	// mstack.pop();
	// std::cout << mstack.size() << std::endl;
	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	// std::stack<int> s(mstack);

	////////////////
	std::cout << "==================" << std::endl;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::vector<int> mtak;
	mtak.push_back(5);
	mtak.push_back(17);

	std::vector<int>::iterator itr;

	for (itr=mtak.begin(); itr != mtak.end(); ++itr)
		std::cout << *itr << std::endl;
	return (0);
}
