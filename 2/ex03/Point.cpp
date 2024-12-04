/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:52:48 by mmoussou          #+#    #+#             */
/*   Updated: 2024/12/04 14:15:50 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
	//std::cout << "default constructor called" << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	//std::cout << "float constructor called" << std::endl;
}

Point::Point(const Point &other): _x(other.getX()), _y(other.getY())
{
	//std::cout << "copy constructor called" << std::endl;
}

Point::~Point()
{
	//std::cout << "destructor called" << std::endl;
}

Point	&Point::operator=(const Point &other)
{
	//std::cout << "copy assignment operator called" << std::endl;
	this->_x = other._x;
	this->_y = other._y;
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (Fixed(this->_x));
}

Fixed	Point::getY(void) const
{
	return (Fixed(this->_y));
}
