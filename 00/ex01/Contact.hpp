/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 20:31:19 by mtak              #+#    #+#             */
/*   Updated: 2021/08/10 17:31:40 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	private:
	static std::string infoName[5];
	std::string info[5];
	
	enum Field {
		FirstName = 0,
		LastName,
		Nickname,
		Phone,
		Secret
	};

	public:
	int idx;
	bool setInformation();
	void showInfo();
	static void showInfoHeader();
	void showLimitedInfo();
	Contact();
};

#endif