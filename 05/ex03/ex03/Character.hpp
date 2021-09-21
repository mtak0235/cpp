/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charcter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 02:28:36 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 02:37:35 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <string>
# include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
	private:
		std::string     name;
		AMateria*       materias[4];

	private:
		Character();
	public:
		virtual ~Character();
		Character(Character const &other);
		Character &operator=(Character const &other);
		Character(std::string const &name);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
