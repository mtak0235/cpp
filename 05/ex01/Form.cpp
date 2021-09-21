/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 02:58:26 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 18:23:05 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException(){}
Form::GradeTooLowException::GradeTooLowException(){}
Form::Form() : name(""), grade(1), exec(1), sign(false){}

Form::Form(std::string name, int grade, int exec) : name(name), grade(grade), exec(exec), sign(false){
		if (grade < 1)
			throw Form::GradeTooHighException();
		if (grade > 150)
			throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void Form::beSigned(Bureaucrat &target)
{
	try
	{
		if (this->getGrade() < target.getGrade())
			throw Form::GradeTooLowException();
		this->sign = true;
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cout << e.what() << '\n';
	}
}

std::ostream &operator<<(std::ostream &out, Form &target)
{
	std::string sign;
	target.getSign() == true ? sign = "approved " : "rejected ";
	out << "\033[36m NAME :" << target.getName() << " GRADE :" << target.getGrade() << " SIGN :" << sign << "\033[37m" ;
	return out;
}
