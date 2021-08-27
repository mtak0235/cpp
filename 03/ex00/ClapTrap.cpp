/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:20:28 by mtak              #+#    #+#             */
/*   Updated: 2021/08/23 17:20:29 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "Mr." + name + "has entered" << std::endl;
	this->hitPoints = 10;//체력
	this->energyPoints = 10;//체력 회복 포션
	this->attackDamage = 0;//내가 가한 타격의 규모
	this->alive = true;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Mr." + this->name + "has left" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	this->attackDamage = 5;
	std::cout << "Mr." + this->name + " attacks " + target + " causing " << this->attackDamage << " points of damages" << std::endl;
}

void ClapTrap::takeDamage(unsigned int damage)
{
	this->hitPoints -= damage;
	if (this->hitPoints <= 0)
	{
		std::cout << "\033[31m[" << this->name << "] DIED!\033[0;37m" << std::endl;
		this->alive = false;
		return ;
	}
	std::cout << "Mr." + this->name + "has been attacked." << energyPoints << " left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int hill)
{
	if (energyPoints >= (int)hill)
		this->energyPoints -= hill;
	else
	{
		hill -= this->energyPoints;
		this->energyPoints = 0;
	}
	this->hitPoints += hill;
	std::cout << "Mr." + this->name + " got repaired. " << energyPoints << " left." << std::endl;
}

std::string ClapTrap::getName() const
{
	return this->name;
}

int ClapTrap::getAttackDamage() const
{
	return this->attackDamage;
}