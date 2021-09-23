/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:33:36 by mtak              #+#    #+#             */
/*   Updated: 2021/09/22 11:16:43 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *makeRobotomyForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form *makePresidentialForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form *makeShrubberyForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::Intern()
{
	forms[0].name = "robotomy request";
	forms[0].func = makeRobotomyForm;
	forms[1].name = "presidential pardon request";
	forms[1].func = makePresidentialForm;
	forms[2].name = "shrubbery request";
	forms[2].func = makeShrubberyForm;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern &Intern::operator=(Intern const &other)
{
	forms[0].name = "robotomy request";
	forms[0].func = makeRobotomyForm;
	forms[1].name = "presidential pardon request";
	forms[1].func = makePresidentialForm;
	forms[2].name = "shrubbery request";
	forms[2].func = makeShrubberyForm;
	(void)other;
	return *this;
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if(name == this->forms[i].name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->forms[i].func(target));
		}
	}
	std::cout << "Intern doesn't know the form " << name << std::endl;
	return (NULL);
}
