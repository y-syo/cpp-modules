/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:13:28 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/06 14:30:06 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
	std::cout << name << ": unamed constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;

	std::cout << name << ": named constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": destructor called" << std::endl;
}

void	Zombie::SetName(std::string name)
{
	this->name = name;
	std::cout << name << ": name set" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
