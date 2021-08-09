/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 20:30:39 by mtak              #+#    #+#             */
/*   Updated: 2021/08/09 16:53:41 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int PhoneBook::contactCnt = 0;

int PhoneBook::idxController = 0;

void PhoneBook::addContact()
{
	Contact contact;
	contact.setInformation();
	this->contact[contact.idx] = contact;
	if (contactCnt < 8)
		contactCnt++;
}

void PhoneBook::searchContact()
{
	Contact::showInfoHeader();
	if (contactCnt == 0) return;
	for (int i = 0; i < contactCnt; i++)
	{
		contact[i].showLimitedInfo();
	}
	int idx;
	std::cout << "What index are you looking for ? ";
	std::cin >> idx;
	if (!(0 <= idx && idx < 8))
	{
		std::cout << "Wrong Idx" << std::endl;
		return;
	}
	if (idx < contactCnt)
		contact[idx].showInfo();
	else
	{
		std::cout << "Not Found" << std::endl;
		std::cin.clear();
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
