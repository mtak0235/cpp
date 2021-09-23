/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 00:32:54 by mtak              #+#    #+#             */
/*   Updated: 2021/09/22 11:16:47 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Form *tmpForm;
		Intern formMachine;
		tmpForm = formMachine.makeForm("presidential pardon request", "사과문");
		std::cout << *tmpForm << std::endl;
		Intern formMachine2(formMachine);
		tmpForm = formMachine2.makeForm("shrubbery request", "자라나라 나무나무");
		std::cout << *tmpForm << std::endl;
		tmpForm = formMachine2.makeForm("사장님이 급조한 보고서", "캠핑지 조사해와");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
