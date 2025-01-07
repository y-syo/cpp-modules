/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:04:20 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/07 15:53:10 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
	std::cout << name << ": HumanB created" << std::endl;
}

HumanB::HumanB(std::string name, Weapon &weapon): name(name), weapon(&weapon)
{
	std::cout << name << ": HumanB created" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << name << ": HumanB destroyed" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	std::cout << name << ": HumanB changed weapon (" << this->weapon->getType() << ")" << std::endl;
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
