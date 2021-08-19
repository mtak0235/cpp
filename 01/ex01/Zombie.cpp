/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:52:02 by mtak              #+#    #+#             */
/*   Updated: 2021/08/18 11:11:35 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "<" + this->name + ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" + this->name + ">" << "RIP..." << std::endl;

}

Zombie::Zombie()
{
	std::cout << "Revived!!!" << std::endl;
}

void Zombie::setZombie(std::string name)
{
	this->name = name;
}
