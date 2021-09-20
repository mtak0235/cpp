/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 01:33:04 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 13:11:38 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &other) :AMateria(other.type)
{
	*this = other;
}

AMateria *Ice::clone() const
{
	AMateria *a = new Ice;
	return a;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
