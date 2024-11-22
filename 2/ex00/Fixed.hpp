/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:12:54 by mmoussou          #+#    #+#             */
/*   Updated: 2024/11/22 09:55:12 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {

public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();
	Fixed &operator=(const Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	static const int	frac_bits;
	int					_value;

};
