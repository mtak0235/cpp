/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 02:37:09 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 18:26:08 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const name;
	const int grade;
	const int exec;
	bool sign;
public:
	Form();
	Form(std::string name, int grade, int exec);
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			const char *what() const throw();
	};
	std::string const getName() const {return name;};
	int getGrade() const {return grade;};
	bool getSign() const {return sign;};
	int getExec() const {return exec;};
	void beSigned(Bureaucrat &target);
	
};
	std::ostream &operator<<(std::ostream &out, Form &target);

#endif
