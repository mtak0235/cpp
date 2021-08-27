/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:52:10 by mtak              #+#    #+#             */
/*   Updated: 2021/08/18 11:11:30 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	int nbr;

	std::cout << "How many Zombies do u want? ";
	std::cin >> nbr;
	z = zombieHorde(nbr, "Zombie");
	delete[] z;
}
