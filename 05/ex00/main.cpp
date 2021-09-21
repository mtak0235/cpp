/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 00:32:54 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 02:33:20 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\033[31m등급을 1~150 벗어나게 초기화하면 예외처리된다.\033[37m" << std::endl;
	Bureaucrat normal("Mr.normal", 50);
	Bureaucrat high("Mr.high", -1);
	Bureaucrat low("Mr.low", 200);
	
	std::cout << "\033[32m증감해서 1~150 범위 벗어나면 예외처리된다. \033[37m" << std::endl;
	Bureaucrat ciao("Mr.Ciao", 1);
	std::cout << ciao << std::endl;
	ciao.increaseGrade();
	Bureaucrat hiya("Mr.hiya", 150);
	std::cout << hiya << std::endl;
	hiya.decreaseGrade();
}
