/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:44:29 by mtak              #+#    #+#             */
/*   Updated: 2021/09/20 00:50:48 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <cstdlib>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(){ideas[0] = (rand() % 26) + 97;};
		std::string const &getIdea(){return ideas[0];};
};

#endif
