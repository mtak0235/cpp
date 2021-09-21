/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 02:29:01 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 12:42:27 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i) {
        delete materias[i];
    }
}

Character::Character(Character const &other)
{
    for (int i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
    *this = other;
}

Character::Character(std::string const &name)
{
    for (int i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
    this->name = name;
}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
        name = other.getName();
        for (int i = 0; i < 4; ++i) {
            delete materias[i];
            materias[i] = other.materias[i]->clone();
        }
    }
    return *this;
}

std::string const & Character::getName() const { return name; }

void                Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; ++i) {
        if (materias[i] == NULL) {
            materias[i] = m;
            return ;
        }
    }
    std::cout << "full materias" << std::endl;
}

void                Character::unequip(int idx)
{
    if (0 <= idx && idx <= 3) {
        materias[idx] = NULL;
    }
}

void                Character::use(int idx, ICharacter& target)
{
    if (0 <= idx && idx <= 3) {
        materias[idx]->use(target);
    }
}
