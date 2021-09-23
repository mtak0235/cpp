/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 05:03:18 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 17:04:58 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <string>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
		virtual bool execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};

#endif
