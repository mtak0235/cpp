/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 02:17:19 by mtak              #+#    #+#             */
/*   Updated: 2021/08/28 02:38:14 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[FlagTrap Constructor] Mr." + name + "has entered" << std::endl;
	this->hitPoints = 100;//체력
	this->energyPoints = 100;//체력 회복 포션
	this->attackDamage = 30;//내가 가한 타격의 규모
	this->alive = true;
}

FragTrap::~FragTrap()
{	
	std::cout << "[FlagTrap Destructor] Mr." + this->name + "has left" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "\033[33mGIVE ME HIGH FIVE GUYS!!\033[37m" << std::endl;
}
