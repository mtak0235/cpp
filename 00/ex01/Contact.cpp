/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 20:30:50 by mtak              #+#    #+#             */
/*   Updated: 2021/08/10 18:16:35 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
	idx = PhoneBook::contactCnt;
}
void Contact::showInfoHeader()
{
	std::cout << std::setw(10) << "Index" << "|";
	for (int i = FirstName; i <= Nickname; i++)
	{
		std::cout << std::setw(10) << infoName[i] << "|";
	}
	std::cout << std::endl;
}

void Contact::showLimitedInfo()
{
	std::cout << std::setw(10) << idx;
	for (int i = FirstName; i <= Nickname; i++)
	{
		if (info[i].length() >= 10)
			std::cout << std::setw(11) << info[i].substr(0, 9) + ".";
		else
			std::cout <<std::setw(11) << info[i];
	}
	std::cout << std::endl;
}

std::string Contact::infoName[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone",
	"Darkest Secret"
};

void Contact::showInfo()
{
	for (int i = FirstName; i < Secret; i++)
	{
		std::cout << infoName[i] + " : " + info[i] << std::endl;
	}
}

bool Contact::setInformation()
{
	PhoneBook::idxController++;
	if (PhoneBook::contactCnt < 8)
		idx = PhoneBook::contactCnt;
	else
		idx = PhoneBook::idxController - 9;
	if (PhoneBook::idxController == 17)
		PhoneBook::idxController = 0;
		for (int i = FirstName; i < Secret; i++)
		{
			std::cout << infoName[i] + " : ";
			std::getline(std::cin, info[i]);	
		}
		for (int i = FirstName, empty = 0; i < Secret; i++)
		{
			if (info[i] ==  "")
				empty++;
			if (empty == Secret)
			{
				std::cout << "아무것도 기입하지 않으셨습니다." << std::endl;
				return false;
			}
		}
	return true;
};
