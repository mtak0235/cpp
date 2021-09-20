/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 01:33:43 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 13:09:48 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include <string>

class ICharacter;
class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(Ice const &other);

		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif
