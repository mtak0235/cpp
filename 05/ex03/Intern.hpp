/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:34:20 by mtak              #+#    #+#             */
/*   Updated: 2021/09/22 10:39:23 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &other);
		Form *makeForm(std::string formName, std::string target);
	private:
		typedef struct	s_form
		{
			std::string name;
			Form		*(*func)(std::string const &target);
		}				t_form;
		t_form forms[3];
};

#endif
