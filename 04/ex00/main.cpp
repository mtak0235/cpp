/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 15:43:56 by mtak              #+#    #+#             */
/*   Updated: 2021/09/19 18:14:08 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

class Dog: public Animal
{
	public:
		Dog() {
			std::cout << "\033[32m[Dog Constructor]\033[37m" << std::endl;
			this->type = "Dog";
		}
		~Dog(){std::cout << "\033[32m[Dog Destructor]\033[37m" << std::endl;}
		void makeSound() const {std::cout << "\033[32m[왕왕]\033[37m" << std::endl;}
};

class Cat: public Animal
{
	public:
		Cat() {
			std::cout << "\033[33m[Cat Constructor]\033[37m" << std::endl;
			this->type = "Cat";
		}
		~Cat(){std::cout << "\033[33m[Cat Destructor]\033[37m" << std::endl;}
		void makeSound() const {std::cout << "\033[33m[야옹]\033[37m" << std::endl;}
};

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(){ std::cout << "\033[35m[WrongAnimal Constructor]\033[37m" << std::endl; }
		virtual ~WrongAnimal(){ std::cout << "\033[35m[WrongAnimal Destructor]\033[37m" << std::endl; }
		std::string getType() const { return type; }
		void makeSound() const { std::cout << "\033[35m[동물소리]\033[37m" << std::endl;};
};

class WrongCat : public WrongAnimal
{
	public:
		void makeSound() const {std::cout << "\033[36m[wrong 야옹]\033[37m" << std::endl;}
};

int main()
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
	return 0;
}
