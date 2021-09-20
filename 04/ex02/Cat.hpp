/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:40:05 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 01:10:05 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat (){
			std::cout << "\033[33m[Cat Constructor]\033[37m" << std::endl;
			this->type = "Cat";
		}
		~Cat(){
			std::cout << "\033[33m[Cat Destructor]\033[37m" << std::endl;
		}
		void makeSound() const {std::cout << "\033[33m[야옹]\033[37m" << std::endl;}
		Cat(const Cat &other){type = other.getType();}
		Cat& operator=(Cat const &other){this->type = other.getType();return *this;}
};
#endif
