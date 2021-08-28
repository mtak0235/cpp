/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 23:26:09 by mtak              #+#    #+#             */
/*   Updated: 2021/08/28 02:13:57 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[ScavTrap Constructor] Mr." + name + "has entered" << std::endl;
	this->hitPoints = 100;//체력
	this->energyPoints = 50;//체력 회복 포션
	this->attackDamage = 20;//내가 가한 타격의 규모
	this->alive = true;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap Destructor] Mr." + this->name + "has left" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	this->attackDamage = 5;
	std::cout << "[ScavTrap Attack] Mr." + this->name + " attacks " + target + " causing " << this->attackDamage << " points of damages" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << " " << name << " has activated _GATE KEEPER_ mode!" << std::endl;
}
