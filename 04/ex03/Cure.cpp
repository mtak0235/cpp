/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 01:34:32 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 13:13:37 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &other) :AMateria(other.type)
{
	*this = other;
}

AMateria *Cure::clone() const
{
	AMateria *a = new Cure;
	return a;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}