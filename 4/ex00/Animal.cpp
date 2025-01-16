/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:15:25 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/16 15:39:48 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void);
{
	this->type = "Animal";
}

Animal::~Animal(void);
{
}

void	Animal::getType(void) const
{
	return (this->type);
}
