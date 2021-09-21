/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:40:13 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 01:10:13 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog() : brain(new Brain()) {
			std::cout << "\033[32m[Dog Constructor]\033[37m" << std::endl;
			this->type = "Dog";
		}
		~Dog(){
			std::cout << "\033[32m[Dog Destructor]\033[37m" << std::endl;
			delete brain;
		}
		void makeSound() const {std::cout << "\033[32m[왕왕]\033[37m" << std::endl;}
		Brain *getBrain(){return brain;};
		Dog(const Dog &other){type = other.getType();brain = new Brain;}
		Dog& operator=(Dog const &other){
			this->type = other.getType();
			delete brain;
			this->brain = new Brain();
			return *this;
		}
};

#endif
