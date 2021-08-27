/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 00:52:48 by mtak              #+#    #+#             */
/*   Updated: 2021/08/18 16:19:59 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int raw;
		static const int m = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed & fixed);
		Fixed & operator=(const Fixed &fixed);
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif
