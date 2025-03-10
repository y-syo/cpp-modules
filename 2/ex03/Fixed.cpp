/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:40 by mmoussou          #+#    #+#             */
/*   Updated: 2024/12/04 14:15:41 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::frac_bits = 8;

Fixed::Fixed(): _value(0)
{
	//std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value)
{
	//std::cout << "int constructor called" << std::endl;
	_value = int_value << frac_bits;
}

Fixed::Fixed(const float float_value)
{
	//std::cout << "float constructor called" << std::endl;
	_value = roundf(float_value * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &other) : _value(other.getRawBits())
{
	//std::cout << "copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	//std::cout << "copy assignment operator called" << std::endl;

	if (this != &other)
		_value = other.getRawBits();
	return (*this);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed	Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++()
{
	this->setRawBits(this->_value + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	prev(*this);

	++(*this);
	return (prev);
}

Fixed	&Fixed::operator--()
{
	this->setRawBits(this->_value - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	prev(*this);

	--(*this);
	return (prev);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)((float)_value / (float)(1 << frac_bits)));
}

int	Fixed::toInt(void) const
{
	return (_value >> frac_bits);
}

Fixed		&Fixed::min(Fixed &v1, Fixed &v2)
{
	return (v1 < v2 ? v1 : v2);
}

const Fixed	&Fixed::min(const Fixed &v1, const Fixed &v2)
{
	return (v1 < v2 ? v1 : v2);
}

Fixed		&Fixed::max(Fixed &v1, Fixed &v2)
{
	return (v1 > v2 ? v1 : v2);
}

const Fixed	&Fixed::max(const Fixed &v1, const Fixed &v2)
{
	return (v1 > v2 ? v1 : v2);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}
