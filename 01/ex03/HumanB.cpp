/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:01:25 by mtak              #+#    #+#             */
/*   Updated: 2021/08/19 13:05:39 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << this->name << " attacks with his" << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name): name(name)
{
	std::cout << "Constructor" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
