/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:13:40 by mmoussou          #+#    #+#             */
/*   Updated: 2024/11/18 14:17:08 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const int	Fixed::frac_bits = 8;

Fixed::Fixed(): _value(0)
{
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _value(other.getRawBits())
{
	std::cout << "copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "copy assignment operator called" << std::endl;

	if (this != &other)
		_value = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
