/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:29:37 by mtak              #+#    #+#             */
/*   Updated: 2021/08/18 11:12:06 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int nbr, std::string name)
{
	Zombie *z = new Zombie[nbr];
	for (int i = 0; i < nbr; i++) {
		z[i].setZombie(name + std::to_string(i));
		z[i].announce();
	}
	return z;
}
