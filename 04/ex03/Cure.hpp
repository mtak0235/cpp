/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 01:34:47 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 13:09:37 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"
#include <iostream>

class ICharacter;

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const &other);
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif
