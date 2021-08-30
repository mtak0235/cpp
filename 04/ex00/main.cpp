/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 15:43:56 by mtak              #+#    #+#             */
/*   Updated: 2021/08/28 19:45:32 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(){ std::cout << "[Animal Constructor] " << std::endl; }
		virtual ~Animal(){ std::cout << "[Animal Destructor] " << std::endl; }
		std::string getType(){ return type; }
		virtual void makeSound() = 0;
};

class Dog: public Animal
{
	public:
		Dog() {
			std::cout << "[Dog Constructor] " << std::endl;
			this->Animal::type = "Dog";
		}
		~Dog(){std::cout << "[Dog Destructor]" << std::endl;}
		void makeSound(){std::cout << "[왕왕]" << std::endl;}
};

class Cat: public Animal
{
	Cat() {
		std::cout << "[Cat Constructor] " << std::endl;
		this->Animal::type = "Cat";
	}
	~Cat(){std::cout << "[Cat Destructor]" << std::endl;}
	void makeSound(){std::cout << "[미야옹]" << std::endl;}
};

class WrongAnimal
{
	
}
int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		const WrongAnimal* wrong = new WrongCat();

		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;

		cat->makeSound();
		dog->makeSound();
		meta->makeSound();
		wrong->makeSound();

		delete meta;
		delete cat;
		delete dog;
		delete wrong;
	}
	system("leaks animal");

	return 0;
}
