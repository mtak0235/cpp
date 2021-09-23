/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:39:02 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 18:10:03 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}
Bureaucrat::Bureaucrat(const std::string name, int grade = 1) : name(name)
{
	assignGrade(grade);
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::assignGrade(int grade)
{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade = grade;
}

int Bureaucrat::getGrade() const {return grade;}

std::string const &Bureaucrat::getName() const {return name;}

void Bureaucrat::increaseGrade() { 
	try
	{
		std::cout << "Increased!" << std::endl;
		assignGrade(grade - 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::decreaseGrade() { 
	try
	{
		std::cout << "Decreased!" << std::endl;
		assignGrade(grade + 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		this->grade = other.grade;
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &other)
{
	out << "<" << other.getName() << ">, Bureaucrat grade <" << other.getGrade() << ">.";
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void Bureaucrat::signForm(Form &form) const
{
	if (this->grade <= form.getGrade())
		std::cout << "\033[35m" << *this << "signs" << form << "\033[37m" << std::endl;
	else
		std::cout << "\033[35m" << *this << "cannot sign" << form << "because " << "his Grade is too low to sign in"<<"\033[37m" << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
	if (form.execute(*this))
		std::cout << "<" << this->name << ">" << " executes " << "<" << form.getName() << ">" << std::endl;
	else
		std::cout << "<" << this->name << ">" << " failed to execute " << "<" << form.getName() << ">" << std::endl;
}
