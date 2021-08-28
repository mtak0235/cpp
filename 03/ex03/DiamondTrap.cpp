/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 02:40:24 by mtak              #+#    #+#             */
/*   Updated: 2021/08/28 15:22:51 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"),
	FragTrap(name),
	ScavTrap(name),
	name(name)
{

	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;

	std::cout << "DiamondTrap string constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref) :
	ClapTrap(ref.name + "_clap_name"),
	FragTrap(ref.name),
	ScavTrap(ref.name)
{

	this->name = ref.name;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}


void		DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void			DiamondTrap::whoAmI(void)
{
	std::cout << "\033[35mMy name is [" << this->name \
			  << "] but my Claptrap name is [" << this->ClapTrap::name << "] \033[37m" << std::endl;
}
