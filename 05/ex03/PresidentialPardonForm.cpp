/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 05:05:29 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 16:05:13 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 25, 5), target(src.target)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	if(this != &other)
		this->target = other.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw Form::NotSignedException();
	if (this->getExec() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return true;
}
