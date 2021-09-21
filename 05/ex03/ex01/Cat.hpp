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
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat() : brain(new Brain()){
			std::cout << "\033[33m[Cat Constructor]\033[37m" << std::endl;
			this->type = "Cat";
		}
		~Cat(){
			std::cout << "\033[33m[Cat Destructor]\033[37m" << std::endl;
			delete brain;
		}
		void makeSound() const {std::cout << "\033[33m[야옹]\033[37m" << std::endl;}
		Brain *getBrain(){return brain;};
		Cat(const Cat &other){type = other.getType(); brain = new Brain;};
		Cat& operator=(Cat const &other){this->type = other.getType();delete brain;this->brain = new Brain();return *this;}
};
#endif
