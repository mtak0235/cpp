/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:28:22 by mtak              #+#    #+#             */
/*   Updated: 2021/08/18 20:48:07 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
	private:
		int fixedValue;
		static int const fractionalBits = 8; 

	public:
		Fixed();
		Fixed(const int initValue);
		Fixed(const float initValue);
		~Fixed();
		Fixed(const Fixed& fixed);
		Fixed &operator=(const Fixed & fixed);
		float toFloat() const;
		int toInt() const;
		int getRawBits() const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif
