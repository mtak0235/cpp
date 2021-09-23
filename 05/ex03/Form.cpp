/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 02:58:26 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 18:06:05 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException(){}
Form::GradeTooLowException::GradeTooLowException(){}
Form::NotSignedException::NotSignedException(){}
Form::Form() : name(""), grade(1), exec(1), sign(false){}

Form::Form(const Form &other) : name(other.getName()), grade(other.getGrade()), exec(other.getExec()), sign(false){}
Form::Form(std::string name, int grade, int exec) : name(name), grade(grade), exec(exec), sign(false){
	try
	{
		if (grade < 1)
			throw Form::GradeTooHighException();
		if (grade > 150)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form &Form::operator=(Form const &rhs)
{
	std::cout << "Form Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		if (rhs.grade < 1 || rhs.exec < 1)
			throw Form::GradeTooHighException();
		if (rhs.grade > 150 || rhs.exec > 150)
			throw Form::GradeTooLowException();
		this->sign = rhs.sign;
	}
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

const char *Form::NotSignedException::what() const throw()
{
	return "Go back and take sign";
}
void Form::beSigned(Bureaucrat &target)
{
		if (this->getGrade() < target.getGrade())
			throw Form::GradeTooLowException();
		this->sign = true;
}

std::ostream &operator<<(std::ostream &out, Form &target)
{
	std::string sign;
	sign = target.getSign() == true ? "approved " : "rejected ";
	out << "\033[36m NAME :" << target.getName() << " GRADE :" << target.getGrade() << " EXEC : " << target.getExec() << " SIGN :" << sign << "\033[37m" ;
	return out;
}
