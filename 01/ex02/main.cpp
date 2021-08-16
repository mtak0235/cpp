/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:41:16 by mtak              #+#    #+#             */
/*   Updated: 2021/08/12 19:52:36 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR(&str);
	std::string &stringREF(str);

	std::cout	<< "Adresse via string:\t" << &str << std::endl
				<< "Adresse via stringPTR:\t" << stringPTR << std::endl
				<< "Adresse via stringREF:\t" << &stringREF << std::endl;

	std::cout	<< "POINTER of stringPTR:\t" << *stringPTR << std::endl
				<< "REFERENCE of stringREF:\t" << stringREF << std::endl;
}