/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:13:28 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/06 14:26:42 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	if (!name.empty())
		this->name = name;
	else
		this->name = "";

	std::cout << name << ": constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": destructor called" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
