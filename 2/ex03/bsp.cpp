/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:52:12 by mmoussou          #+#    #+#             */
/*   Updated: 2024/12/04 15:24:55 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	check_square(Point const a, Point const b, Point const other, Point const point)
{
	if (point.getX() < (a.getX() < b.getX() ? a.getX() : b.getX())
	&& point.getX() > (a.getX() > b.getX() ? a.getX() : b.getX()))
		return (2);
	
	Fixed side = (other.getX() - a.getX()) * (b.getY() - a.getY()) - (other.getY() - a.getY()) * (b.getX() - a.getX());
	Fixed orientation = (point.getX() - a.getX()) * (b.getY() - a.getY()) - (point.getY() - a.getY()) * (b.getX() - a.getX());

	if (side.toFloat() > 0 && orientation.toFloat() > 0)
		return (0);
	else if (side.toFloat() < 0 && orientation.toFloat() < 0)
		return (0);
	else
		return (1);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	int status1 = check_square(a, b, c, point);
	int status2 = check_square(a, c, b, point);
	int status3 = check_square(c, b, a, point);

	if (status1 == 2 && status2 == 2 && status3 == 2)
		return (false);
	return (status1 != 1 && status2 != 1 && status3 != 1);
}
