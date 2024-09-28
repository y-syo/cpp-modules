/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:04:20 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/27 15:16:26 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (!this->weapon)
	{
		std::cout << this->name << " attacks with nothing" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
