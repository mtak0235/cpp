/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 02:40:27 by mtak              #+#    #+#             */
/*   Updated: 2021/08/28 15:07:18 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &ref);
		virtual ~DiamondTrap(void);
		void				attack(std::string const & target);
		void				whoAmI(void);

	private:
		std::string			name;

};

#endif
