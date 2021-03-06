/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:50:54 by mtak              #+#    #+#             */
/*   Updated: 2021/09/23 16:22:48 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Value.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error arguments" << std::endl;
		return 1;
	}
	Value::convertAll(av[1]);
	return 0;
}
