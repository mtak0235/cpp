/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 02:43:35 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 12:47:51 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria*   materias[4];
public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(MateriaSource const &other);
    MateriaSource &operator=(MateriaSource const &other);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif
