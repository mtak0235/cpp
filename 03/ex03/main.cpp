/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doolee <doolee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 23:26:02 by doolee              #+#    #+#             */
/*   Updated: 2021/08/28 01:07:45 by doolee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
	DiamondTrap doolee("doolee");
	DiamondTrap doune("doune");

	DiamondTrap *ptr;
	while (doolee.alive && doune.alive)
	{
		doolee.attack(doune.getName());
		doune.takeDamage(doolee.getAttackDamage());
		if (!doune.alive)
			break;
		doune.beRepaired(3);
		doune.ClapTrap::attack(doolee.getName());
		doolee.takeDamage(doune.getAttackDamage());
		if (!doolee.alive)
			break;
		doolee.beRepaired(4);
	}
	ptr = (doune.alive) ? &doune : &doolee;
	std::cout << "\033[36m[" << ptr->getName() << "] WON! \033[37m" << std::endl;
	ptr->whoAmI();
}
