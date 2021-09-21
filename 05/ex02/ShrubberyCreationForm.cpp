/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 05:03:56 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 17:53:10 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", 145, 137), target(src.target)
{
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if(this != &other)
		this->target = other.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string asciiTree = 
	"                                   .         ;\n"
	"      .              .              ;%     ;;\n"
	"        ,           ,                :;%  %;\n"
	"         :         ;                   :;%;'     .,\n"
	",.        %;     %;            ;        %;'    ,;\n"
	"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
	"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
	"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
	"     `%;.     ;%;     %;'         `;%%;.%;'\n"
	"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
	"         `:%;.  :;bd%;          %;@%;'\n"
	"           `@%:.  :;%.         ;@@%;'\n"
	"             `@%.  `;@%.      ;@@%;\n"
	"               `@%%. `@%%    ;@@%;\n"
	"                 ;@%. :@%%  %@@%;\n"
	"                   %@bd%%%bd%%:;\n"
	"                     #@%%%%%:;;\n"
	"                     %@@%%%::;\n"
	"                     %@@@%(o);  . '\n"
	"                     %@@@o%;:(.,'\n"
	"                 `.. %@@@o%::;\n"
	"                    `)@@@o%::;\n"
	"                     %@@(o)::;\n"
	"                    .%@@@@%::;\n"
	"                    ;%@@@@%::;.\n"
	"                   ;%@@@@%%:;;;.\n"
	"               ...;%@@@@@%%:;;;;,..\n";
	if (!this->getSign())
		throw Form::NotSignedException();
	if (this->getGrade() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::string fileName = (this->target + "_shrubbery");
	std::ofstream file;
	file.open(fileName.c_str());
	file << asciiTree;
	file.close();
	return true;
}
