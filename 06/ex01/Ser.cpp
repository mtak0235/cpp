/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ser.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:23:26 by mtak              #+#    #+#             */
/*   Updated: 2021/09/24 14:31:58 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ser.hpp"
#include <iostream>

int main()
{
	Data * data = new Data;
	
	data->pk = 192293;
	data->firstName = "민경";
	data->lastName = "탁";

	std::cout << std::endl << "PRINT STRUCT:";
	std::cout << "\t\t" << data->pk << std::endl;
	std::cout << "\t\t\t" << data->firstName << std::endl;
	std::cout << "\t\t\t" << data->lastName << std::endl;
	std::cout << std::endl;

	std::cout << "\033[35mORIGINAL PTR:\t\t" << data << "\033[37m" << std::endl;
	std::cout << std::endl;
	uintptr_t ser = serialize(data);
	Data * deser = deserialize(ser);
	std::cout << "SERIALIZE:\t\t" << ser << std::endl;
	std::cout << "\033[35mDESERIALIZE:\t\t" << deser << "\033[37m" << std::endl;
	
	std::cout << std::endl;
	std::cout << "PRINT STRUCT:";
	std::cout << "\t\t" << deser->pk << std::endl;
	std::cout << "\t\t\t" << deser->firstName << std::endl;
	std::cout << "\t\t\t" << deser->lastName << std::endl;
	
	delete data;
	return 0;
}

