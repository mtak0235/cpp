/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:39:13 by mtak              #+#    #+#             */
/*   Updated: 2021/09/19 18:46:09 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(){ std::cout << "\033[31m[Animal Constructor]\033[37m" << std::endl; }
		virtual ~Animal(){ std::cout << "\033[31m[Animal Destructor]\033[37m" << std::endl; }
		std::string getType() const { return type; }
		virtual void makeSound() const { std::cout << "\033[31m[동물소리]\033[37m" << std::endl;};
};

#endif
