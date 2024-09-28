/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:35:08 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/27 15:10:01 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "new Weapon created (no type)";
}

Weapon::Weapon(std::string type)
{
	this->type = type;

	std::cout << "new Weapon created (" << this->type << ")";
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destroyed (" << this->type << ")";
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}
