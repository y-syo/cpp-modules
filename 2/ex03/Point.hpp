/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:36:47 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/07 16:45:07 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &other);
	~Point();
	Point	&operator=(const Point &other);

	Fixed	getX(void) const;
	Fixed	getY(void) const;

private:
	Fixed	_x;
	Fixed	_y;

};
