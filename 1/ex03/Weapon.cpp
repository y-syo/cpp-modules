/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:35:08 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/28 17:17:07 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "new Weapon created (no type)" << std::endl;
}

Weapon::Weapon(std::string type): type(type)
{
	std::cout << "new Weapon created (" << this->type << ")" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destroyed (" << this->type << ")" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->type = type;

	std::cout << "Weapon changed type (" << this->type << ")" << std::endl;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}
