/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:14:26 by mtak              #+#    #+#             */
/*   Updated: 2021/08/23 17:14:28 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap mtak("mtak");
	ClapTrap zio("zio");
	ClapTrap *ptr;
	while (mtak.alive && zio.alive)
	{
		mtak.attack(zio.getName());
		zio.takeDamage(mtak.getAttackDamage());
		if (!zio.alive)
			break;
		zio.beRepaired(3);
		zio.attack(mtak.getName());
		mtak.takeDamage(zio.getAttackDamage());
		if (!mtak.alive)
			break;
		mtak.beRepaired(4);
	}
	ptr = (zio.alive) ? &zio : &mtak;
	std::cout << "\033[36m[" << ptr->getName() << "] WON! \033[37m" << std::endl;
}
