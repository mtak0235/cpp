/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 02:43:39 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 13:02:53 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i) {
        delete materias[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i) {
            delete materias[i];
            if (other.materias[i])
                materias[i] = other.materias[i]->clone();
            else
                materias[i] = NULL;
        }
    }
    return *this;
}

void            MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; ++i) {
        if (materias[i] == NULL) {
            materias[i] = m;
            return ;
        }
    }
    std::cout << "learned materias" << std::endl;
}


AMateria*       MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i) {
        if (materias[i] && materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    return NULL;
}

