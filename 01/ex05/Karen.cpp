/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:59:54 by mtak              #+#    #+#             */
/*   Updated: 2021/08/17 22:04:51 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout	<< "I love to get extra bacon for my " 
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< "I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout	<< "I cannot believe adding extra bacon cost more money. "
				<< "You don’t put enough!"
				<< " If you did I would not have to askfor it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout	<< "I think I deserve to have some extra bacon for free."
				<< " I’ve been coming here for years and you just started"
				<< " working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout	<< "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void errHandler( void )
{
	std::cout << "Invalid level" << std::endl;
}

void Karen::complain(std::string level)
{
	std::string list[] = {"debug", "info", "warning", "error"};
	void (Karen::*funcArr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int i;
	for (i = 0; i < 4 && list[i] != level; i++);
	switch (i)
	{
		case 4:
			errHandler();
			break;
		default:
			(this->*funcArr[i])();
	}
}
