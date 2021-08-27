/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 00:17:04 by mtak              #+#    #+#             */
/*   Updated: 2021/08/23 16:08:28 by mtak             ###   ########.fr       */
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

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->fixedValue = copy.fixedValue;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Assignation Operator called" << std::endl;
	this->fixedValue = copy.getRawBits();
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

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedValue = raw;
}

float Fixed::toFloat(void) const
{
	return (this->fixedValue / (float)(1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->fixedValue >> fractionalBits);
}

bool Fixed::operator==(const Fixed& src) const
{
	return (this->fixedValue == src.fixedValue);
}
bool Fixed::operator!=(const Fixed& src) const
{
	return (this->fixedValue != src.fixedValue);
}
bool Fixed::operator>(const Fixed& src) const
{
	return (this->fixedValue > src.fixedValue);
}
bool Fixed::operator>=(const Fixed& src) const
{
	return (this->fixedValue >= src.fixedValue);
}
bool Fixed::operator<=(const Fixed& src) const
{
	return (this->fixedValue <= src.fixedValue);
}
bool Fixed::operator<(const Fixed& src) const
{
	return (this->fixedValue < src.fixedValue);
}
Fixed Fixed::operator+(const Fixed& src) const
{
	Fixed res;

	res.setRawBits(this->fixedValue + src.fixedValue);
	return (res);
}
Fixed Fixed::operator-(const Fixed& src) const
{
	Fixed res;

	res.setRawBits(this->fixedValue + src.fixedValue);
	return (res);
}
Fixed Fixed::operator*(const Fixed& src) const
{
	Fixed res;

	res.setRawBits((this->fixedValue * src.fixedValue) / (1 << fractionalBits));
	return (res);
}
Fixed Fixed::operator/(const Fixed& src) const
{
	Fixed res;

	res.setRawBits((this->fixedValue / src.fixedValue) * (1 << fractionalBits));
	return (res);
}
Fixed& Fixed::operator++()
{
	this->fixedValue++;
	return (*this);
}
Fixed& Fixed::operator--()
{
	this->fixedValue--;
	return (*this);
}
Fixed Fixed::operator++(int dummy)
{
	Fixed	tmp(*this);
	++(*this);
	(void)dummy;
	return (tmp);
}

Fixed Fixed::operator--(int dummy)
{
	Fixed	tmp(*this);
	--(*this);
	(void)dummy;
	return (tmp);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	return (f1 > f2 ? f2 : f1);
}
Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	return (f1 < f2 ? f2 : f1);
}
const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	return (f1 > f2 ? f2 : f1);
}
const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	return (f1 < f2 ? f2 : f1);
}
