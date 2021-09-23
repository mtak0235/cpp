/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 05:04:44 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 17:03:24 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :  Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if(this != &other)
		this->target = other.target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :  Form("RobotomyRequestForm", 72, 45), target(src.target)
{
	*this = src;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw Form::NotSignedException();
	if (this->getExec() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "[Drilling Noise]두두두두두(?)" << std::endl;
	if (rand() % 100 > 50)
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->target << " failed to be robotomized." << std::endl;
	return true;
}
