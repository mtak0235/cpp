/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 05:04:25 by mtak              #+#    #+#             */
/*   Updated: 2021/09/21 17:01:53 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyREQUESTFORM_HPP
#define RobotomyREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		virtual bool execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};

#endif
