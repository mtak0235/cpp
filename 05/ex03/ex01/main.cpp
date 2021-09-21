/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:16:19 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 13:34:59 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	srand(time(0));
	Animal* animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i >= 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 10; i++)
		delete animals[i];
	
	Cat cat;
    Cat cat2;
	
    std::cout << "\033[36mcat brain idea : " << cat.getBrain()->getIdea() << std::endl;
    std::cout << "cat2 brain idea : " << cat2.getBrain()->getIdea() << std::endl;
    std::cout << "cat brain idea address: " << &(cat.getBrain()->getIdea()) << std::endl;
    std::cout << "cat2 brain idea address: " << &(cat2.getBrain()->getIdea()) << std::endl;
    cat2 = cat;
    std::cout << "cat brain idea : " << cat.getBrain()->getIdea() << std::endl;
    std::cout << "cat2 brain idea : " << cat2.getBrain()->getIdea() << std::endl;
    std::cout << "cat brain idea address: " << &(cat.getBrain()->getIdea()) << std::endl;
    std::cout << "cat2 brain idea address: " << &(cat2.getBrain()->getIdea()) << "\033[37m" << std::endl;

    Dog dog;
    Dog dog2(dog);
    std::cout << "\033[35mdog brain idea : " << dog.getBrain()->getIdea() << std::endl;
    std::cout << "cat2 brain idea : " << dog2.getBrain()->getIdea() << std::endl;
    std::cout << "dog brain idea address: " << &(dog.getBrain()->getIdea()) << std::endl;
    std::cout << "dog2 brain idea address: " << &(dog2.getBrain()->getIdea()) << "\033[37m" << std::endl;
}

