/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:57:04 by mtak              #+#    #+#             */
/*   Updated: 2021/08/18 11:23:36 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << this->name << " attacks with his" << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon):name(name), weapon(weapon)
{
	std::cout << "Constructor" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor" << std::endl;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}
