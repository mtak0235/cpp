/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 00:32:54 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 05:13:39 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "\033[31m보안 등급 낮으면 보안 등급이 높은 보고서에 접근할 수 없다.\033[37m" << std::endl;
	Form topSecret("사장을 바꾸고 싶어요", 30, 30);
	Bureaucrat newbie("Mr.신입", 150);
	topSecret.beSigned(newbie);
	newbie.signForm(topSecret);

	std::cout << "\033[32m보안 등급이 높으면 보다 보안 등급이 낮은 보고서에 접근할 수 있다.\033[37m" << std::endl;
	Form commonSecret("사장님이 너무해", 140, 140);
	Bureaucrat director("Mr.본부장", 30);
	commonSecret.beSigned(director);
	director.signForm(commonSecret);
}
