/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:05:29 by mtak              #+#    #+#             */
/*   Updated: 2021/08/09 16:40:16 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phonebook;
	std::string cmd;

	std::cout << "Put EXIT | SEARCH | ADD" << std::endl;
	while (true)
	{
		std::cout << ">";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || cmd == "EXIT")
			return (1);
		else if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		//std::cin.clear();
		// std::cin.ignore(5, '\n');
	}
	return (0);
}