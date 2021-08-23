/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:12:51 by mtak              #+#    #+#             */
/*   Updated: 2021/08/23 14:09:45 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	fixedValue = 0;
}

Fixed::Fixed(const int initValue)
{
	std::cout << "Int Constructor called" << std::endl;
	this->fixedValue = initValue << fractionalBits;
}

Fixed::Fixed(const float initValue)
{
	std::cout << "Float Constructor called" << std::endl;
	this->fixedValue = (int)roundf(initValue * (1 << fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->fixedValue = fixed.fixedValue;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation Operator called" << std::endl;
	this->fixedValue = fixed.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream & out, const Fixed& value)
{
	out << value.toFloat();
	return out;
}

int Fixed::getRawBits() const
{
	return fixedValue;
}

float Fixed::toFloat(void) const
{
	return (this->fixedValue / (float)(1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->fixedValue >> fractionalBits);
}
