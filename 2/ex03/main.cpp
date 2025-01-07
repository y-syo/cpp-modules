/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:23:22 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/07 16:34:01 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point	a(0.0f, 2.0f);
	Point	b(2.0f, 8.0f);
	Point	c(14.0f, 1.0f);
	Point	p(5.0f, 6.0f);

	std::cout << (bsp(a, b, c, p) ? "in triangle" : "not in triangle") << std::endl;

	return 0;
}
