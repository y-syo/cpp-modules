/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:12:54 by mmoussou          #+#    #+#             */
/*   Updated: 2024/11/22 09:46:58 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed();
	Fixed(const int int_value);
	Fixed(const float float_value);
	Fixed(const Fixed &other);
	~Fixed();
	Fixed	&operator=(const Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;

private:
	static const int	frac_bits;
	int					_value;

};

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed);
