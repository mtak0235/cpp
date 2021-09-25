/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:29:41 by mtak              #+#    #+#             */
/*   Updated: 2021/09/25 14:22:30 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>

int main()
{
    Array<int> empt;
    Array<int> numbers(10);

    srand(time(NULL));
    for (int i  = 0; i < 10; i++)
    {numbers[i] = rand() % 10;}
    std::cout << "\033[35m numbers : ";
    for (int i  = 0; i < 10; i++)
    {
        std::cout << " " << numbers[i] << " ";
    }
    std::cout << "[" << numbers.address() << "]" << std::endl;
    std::cout << "\033[37m";

    Array<int> numbers1(numbers);
    std::cout << "\033[34m numbers : ";
    for (int i  = 0; i < 10; i++)
    {
        std::cout << " " << numbers1[i] << " ";
    }
    std::cout << "[" << numbers1.address() << "]" << std::endl;
    std::cout << "\033[37m";

    Array<int> numbers2;
    numbers2 = numbers;
    std::cout << "\033[33m numbers : ";
    for (int i  = 0; i < 10; i++)
    {
        std::cout << " " << numbers2[i] << " ";
    }
    std::cout << "[" << numbers2.address() << "]" << std::endl;
    std::cout << "\033[37m";
    
    try
    {
        std::cout << "numbers[-2]" << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "numbers[numbers.size() + 1]" << std::endl;
        numbers[numbers.size() + 1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "empt[1]" << std::endl;
        empt[1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
