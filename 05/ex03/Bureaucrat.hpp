/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:36:54 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 16:23:26 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &other);
	Bureaucrat(const Bureaucrat &other);
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	std::string const &getName() const;
	int getGrade() const;
	void increaseGrade();
	void decreaseGrade();
	void assignGrade(int grade);
	void signForm(Form &form) const;
	void executeForm(Form const &form);
};
	std::ostream& operator<<(std::ostream &out, const Bureaucrat &other);

#endif
