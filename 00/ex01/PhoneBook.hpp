/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 20:30:25 by mtak              #+#    #+#             */
/*   Updated: 2021/08/12 17:56:32 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <stdexcept>
#include <limits>

class PhoneBook
{
	private:
	Contact contact[8];

	public:
	static int contactCnt;
	static int idxController;
	void addContact();
	void searchContact();
};

#endif